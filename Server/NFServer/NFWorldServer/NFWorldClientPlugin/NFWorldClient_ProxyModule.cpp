// -------------------------------------------------------------------------
//    @FileName         :    NFCWorldClient_ProxyModule.cpp
//    @Author           :    GaoYi
//    @Date             :    2018/10/11
//    @Email			:    445267987@qq.com
//    @Module           :    NFGameClientPlugin
//
// -------------------------------------------------------------------------

#include "NFWorldClient_ProxyModule.h"
#include "NFComm/NFPluginModule/NFIPluginManager.h"
#include <NFComm/NFPluginModule/NFConfigMgr.h>
#include <NFComm/NFPluginModule/NFEventMgr.h>
#include <NFComm/NFPluginModule/NFEventDefine.h>
#include "NFServer/NFServerCommon/NFServerCommon.h"

NFCWorldClient_ProxyModule::NFCWorldClient_ProxyModule(NFIPluginManager* p)
{
	pPluginManager = p;
	m_pNetClientModule = nullptr;
}

NFCWorldClient_ProxyModule::~NFCWorldClient_ProxyModule()
{
}

bool NFCWorldClient_ProxyModule::Init()
{
	m_pServerNetEventModule = pPluginManager->FindModule<NFIServerNetEventModule>();
	m_pNetClientModule = pPluginManager->FindModule<NFINetClientModule>();
	return true;
}

bool NFCWorldClient_ProxyModule::AfterInit()
{
	m_pNetClientModule->AddEventCallBack(NF_ST_PROXY, this, &NFCWorldClient_ProxyModule::OnProxySocketEvent);
	m_pNetClientModule->AddReceiveCallBack(NF_ST_PROXY, this, &NFCWorldClient_ProxyModule::OnHandleOtherMessage);

	return true;
}

bool NFCWorldClient_ProxyModule::Execute()
{
	return true;
}

bool NFCWorldClient_ProxyModule::BeforeShut()
{
	return true;
}

bool NFCWorldClient_ProxyModule::Shut()
{
	mUnlinkProxyMap.ClearAll();
	mProxyMap.ClearAll();
	return true;
}

void NFCWorldClient_ProxyModule::OnProxySocketEvent(const eMsgType nEvent, const uint32_t unLinkId)
{
	if (GetServerByUnlinkId(unLinkId) == nullptr) return;

	if (nEvent == eMsgType_CONNECTED)
	{
		NFLogDebug("World Server Connect Proxy Server Success!");

		RegisterServer(unLinkId);
	}
	else if (nEvent == eMsgType_DISCONNECTED)
	{
		NFLogDebug("World Server DisConnect Proxy Server!");

		OnClientDisconnect(unLinkId);
	}
}

void NFCWorldClient_ProxyModule::OnClientDisconnect(uint32_t unLinkId)
{
	NF_SHARE_PTR<NFServerData> pServerData = mUnlinkProxyMap.GetElement(unLinkId);
	if (pServerData)
	{
		//world server 与 proxy server 一旦断开，不需要主动重新连接, 清理后将关闭这个unLinkId
		pServerData->mUnlinkId = 0;
		pServerData->mServerInfo.set_server_state(NFMsg::EST_CRASH);

		NFLogError("the proxy server disconnect, serverName:{}, serverId:{}, serverIp:{}, serverPort:{}"
			, pServerData->mServerInfo.server_name(), pServerData->mServerInfo.server_id(), pServerData->mServerInfo.server_ip(), pServerData->mServerInfo.server_port());

		pServerData->SetSendString([this, pServerData](const std::string& msg) {
			NFLogError("proxy disconnect, can't send msg:{}", msg);
		});
		m_pServerNetEventModule->OnServerNetEvent(eMsgType_DISCONNECTED, NF_ST_WORLD, NF_ST_PROXY, unLinkId, pServerData);

		mUnlinkProxyMap.RemoveElement(unLinkId);

		m_pNetClientModule->CloseServer(unLinkId);
	}
}


void NFCWorldClient_ProxyModule::OnHandleOtherMessage(const uint32_t unLinkId, const uint64_t playerId, const uint32_t nMsgId, const char* msg, const uint32_t nLen)
{
	if (GetServerByUnlinkId(unLinkId) == nullptr) return;

	NFLogWarning("msg:{} not handled!", nMsgId);
}

void NFCWorldClient_ProxyModule::OnHandleProxyReport(const NFMsg::ServerInfoReport& xData)
{
	if (xData.server_type() != NF_ST_PROXY) return;

	NF_SHARE_PTR<NFServerData> pServerData = GetServerByServerId(xData.server_id());
	if (pServerData == nullptr)
	{
		pServerData = NF_SHARE_PTR<NFServerData>(NF_NEW NFServerData());
		mProxyMap.AddElement(xData.server_id(), pServerData);

		pServerData->mUnlinkId = m_pNetClientModule->AddServer(NF_ST_PROXY, xData.server_ip(), xData.server_inner_port());
		mUnlinkProxyMap.AddElement(pServerData->mUnlinkId, pServerData);
	}

	if (pServerData->mUnlinkId <= 0)
	{
		pServerData->mUnlinkId = m_pNetClientModule->AddServer(NF_ST_PROXY, xData.server_ip(), xData.server_inner_port());
		mUnlinkProxyMap.AddElement(pServerData->mUnlinkId, pServerData);
	}

	pServerData->mServerInfo = xData;
}

void NFCWorldClient_ProxyModule::RegisterServer(uint32_t unlinkId)
{
	NFServerConfig* pConfig = NFServerCommon::GetAppConfig(pPluginManager, NF_ST_WORLD);
	if (pConfig)
	{
		NFMsg::ServerInfoReportList xMsg;
		NFMsg::ServerInfoReport* pData = xMsg.add_server_list();
		pData->set_server_id(pConfig->mServerId);
		pData->set_server_name(pConfig->mServerName);
		pData->set_server_ip(pConfig->mServerIp);
		pData->set_server_port(pConfig->mServerPort);
		pData->set_server_type(pConfig->mServerType);
		pData->set_server_max_online(pConfig->mMaxConnectNum);
		pData->set_server_state(NFMsg::EST_NARMAL);
		pData->set_game_id(pConfig->mGameId);
		pData->set_game_name(pConfig->mGameName);

		m_pNetClientModule->SendToServerByPB(unlinkId, EGMI_NET_WORLD_TO_PROXY_REGISTER, xMsg, 0);
	}

	NF_SHARE_PTR<NFServerData> pServerData = mUnlinkProxyMap.GetElement(unlinkId);
	if (pServerData)
	{
		pServerData->SetSendString([this, pServerData](const std::string& msg) {
			m_pNetClientModule->SendByServerID(pServerData->mUnlinkId, 0, msg, 0);
		});
		m_pServerNetEventModule->OnServerNetEvent(eMsgType_CONNECTED, NF_ST_WORLD, NF_ST_PROXY, unlinkId, pServerData);
	}
}