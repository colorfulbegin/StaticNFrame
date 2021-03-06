// -------------------------------------------------------------------------
//    @FileName         :    NFCWorldServerModule.cpp
//    @Author           :    GaoYi
//    @Date             :    2018/10/11
//    @Email			:    445267987@qq.com
//    @Module           :    NFCWorldServerModule
//
// -------------------------------------------------------------------------

#include "NFWorldServerModule.h"

#include "NFComm/NFPluginModule/NFIPluginManager.h"
#include <NFComm/NFPluginModule/NFConfigMgr.h>
#include "NFComm/NFPluginModule/NFLogMgr.h"
#include "NFComm/NFPluginModule/NFIHttpClientModule.h"
#include "NFComm/NFPluginModule/NFIHttpServerModule.h"
#include "NFServer/NFServerCommon/NFServerCommon.h"
#include "NFMessageDefine/NFMsgDefine.h"
#include "NFComm/NFPluginModule/NFEventDefine.h"
#include <NFComm/NFPluginModule/NFILuaScriptModule.h>

NFCWorldServerModule::NFCWorldServerModule(NFIPluginManager* p)
{
	pPluginManager = p;
}

NFCWorldServerModule::~NFCWorldServerModule()
{
}

bool NFCWorldServerModule::Init()
{
	m_pMongoModule = pPluginManager->FindModule<NFIMongoModule>();
	m_pAsynMongoModule = pPluginManager->FindModule<NFIAsynMongoModule>();
	m_pServerNetEventModule = pPluginManager->FindModule<NFIServerNetEventModule>();
	m_pNetClientModule = pPluginManager->FindModule<NFINetClientModule>();
	m_pNetServerModule = pPluginManager->FindModule<NFINetServerModule>();
	m_pNetServerModule->AddEventCallBack(NF_ST_WORLD, this, &NFCWorldServerModule::OnProxySocketEvent);
	m_pNetServerModule->AddReceiveCallBack(NF_ST_WORLD, this, &NFCWorldServerModule::OnHandleOtherMessage);

	m_pNetServerModule->AddReceiveCallBack(NF_ST_WORLD, EGMI_NET_GAME_TO_WORLD_REGISTER, this, &NFCWorldServerModule::OnGameServerRegisterProcess);
	m_pNetServerModule->AddReceiveCallBack(NF_ST_WORLD, EGMI_NET_GAME_TO_WORLD_UNREGISTER, this, &NFCWorldServerModule::OnGameServerUnRegisterProcess);
	m_pNetServerModule->AddReceiveCallBack(NF_ST_WORLD, EGMI_NET_GAME_TO_WORLD_REFRESH, this, &NFCWorldServerModule::OnGameServerRefreshProcess);

	NFServerConfig* pConfig = NFServerCommon::GetAppConfig(pPluginManager, NF_ST_WORLD);
	if (pConfig)
	{
		mServerId = pConfig->mServerId;
		uint32_t unlinkId = m_pNetServerModule->AddServer(NF_ST_WORLD, pConfig->mServerId, pConfig->mMaxConnectNum, pConfig->mServerPort);
		if (unlinkId != 0)
		{
			NFLogInfo("world server listen success, serverId:{}, maxConnectNum:{}, port:{}", pConfig->mServerId, pConfig->mMaxConnectNum, pConfig->mServerPort);
		}
		else
		{
			NFLogInfo("world server listen failed!, serverId:{}, maxConnectNum:{}, port:{}", pConfig->mServerId, pConfig->mMaxConnectNum, pConfig->mServerPort);
		}

		if (!pConfig->mMongoIp.empty())
		{
			if (pConfig->mMongoPort > 0)
			{
				bool ret = m_pMongoModule->AddMongoServer(NF_ST_WORLD, pConfig->mMongoIp, pConfig->mMongoPort, pConfig->mMongoDbName);
				if (ret == false)
				{
					NFLogError("World Server Connected Mongo Failed, ip:{}, port:{}, dbname:{}", pConfig->mMongoIp, pConfig->mMongoPort, pConfig->mMongoDbName);
					return false;
				}

				//��LUA��
				ret = m_pMongoModule->AddMongoServer(0, pConfig->mMongoIp, pConfig->mMongoPort, pConfig->mMongoDbName);
				if (ret == false)
				{
					NFLogError("World Server Connected Mongo Failed, ip:{}, port:{}, dbname:{}", pConfig->mMongoIp, pConfig->mMongoPort, pConfig->mMongoDbName);
					return false;
				}

				ret = m_pAsynMongoModule->AddMongoServer(NF_ST_WORLD, pConfig->mMongoIp, pConfig->mMongoPort, pConfig->mMongoDbName);
				if (ret == false)
				{
					NFLogError("World Server Connected Mongo Failed, ip:{}, port:{}, dbname:{}", pConfig->mMongoIp, pConfig->mMongoPort, pConfig->mMongoDbName);
					return false;
				}

				//��LUA��
				ret = m_pAsynMongoModule->AddMongoServer(0, pConfig->mMongoIp, pConfig->mMongoPort, pConfig->mMongoDbName);
				if (ret == false)
				{
					NFLogError("World Server Connected Mongo Failed, ip:{}, port:{}, dbname:{}", pConfig->mMongoIp, pConfig->mMongoPort, pConfig->mMongoDbName);
					return false;
				}
				NFLogInfo("World Server Connected Mongo Success, ip:{}, port:{}, dbname:{}", pConfig->mMongoIp, pConfig->mMongoPort, pConfig->mMongoDbName);
			}
		}
	}
	else
	{
		NFLogError("I Can't get the World Server config!");
		return false;
	}

	return true;
}

bool NFCWorldServerModule::AfterInit()
{
	return true;
}

bool NFCWorldServerModule::Execute()
{
	return true;
}

bool NFCWorldServerModule::BeforeShut()
{
	return true;
}

bool NFCWorldServerModule::Shut()
{
	return true;
}

void NFCWorldServerModule::OnProxySocketEvent(const eMsgType nEvent, const uint32_t unLinkId)
{
	if (nEvent == eMsgType_CONNECTED)
	{

	}
	else if (nEvent == eMsgType_DISCONNECTED)
	{
		OnClientDisconnect(unLinkId);
	}
}

void NFCWorldServerModule::OnClientDisconnect(uint32_t unLinkId)
{
	mLinkGamMap.RemoveElement(unLinkId);

	NF_SHARE_PTR<NFServerData> pServerData = mGameMap.First();
	while (pServerData)
	{
		if (unLinkId == pServerData->mUnlinkId)
		{
			pServerData->mServerInfo.set_server_state(NFMsg::EST_CRASH);
			pServerData->mUnlinkId = 0;

			NFLogError("the game server disconnect from world server, serverName:{}, serverId:{}, serverIp:{}, serverPort:{}"
				, pServerData->mServerInfo.server_name(), pServerData->mServerInfo.server_id(), pServerData->mServerInfo.server_ip(), pServerData->mServerInfo.server_port());

			pServerData->SetSendString([this, pServerData](const std::string& msg) {
				NFLogError("game disconnect, can't send msg:{}", msg);
			});
			m_pServerNetEventModule->OnServerNetEvent(eMsgType_DISCONNECTED, NF_ST_WORLD, NF_ST_GAME, unLinkId, pServerData);
			return;
		}

		pServerData = mGameMap.Next();
	}
}

void NFCWorldServerModule::OnHandleOtherMessage(const uint32_t unLinkId, const uint64_t playerId, const uint32_t nMsgId, const char* msg, const uint32_t nLen)
{
	NFLogWarning("msg:{} not handled!", nMsgId);
}

void NFCWorldServerModule::OnGameServerUnRegisterProcess(const uint32_t unLinkId, const uint64_t playerId, const uint32_t nMsgId, const char* msg, const uint32_t nLen)
{
	NFMsg::ServerInfoReportList xMsg;
	CLIENT_MSG_PROCESS_NO_OBJECT(nMsgId, msg, nLen, xMsg);

	for (int i = 0; i < xMsg.server_list_size(); ++i)
	{
		const NFMsg::ServerInfoReport& xData = xMsg.server_list(i);

		mGameMap.RemoveElement(xData.server_id());

		NFLogInfo("Game Server UnRegister World Server Success, serverName:{}, serverId:{}, ip:{}, port:{}", xData.server_name(), xData.server_id(), xData.server_ip(), xData.server_port());
	}
}

void NFCWorldServerModule::OnGameServerRefreshProcess(const uint32_t unLinkId, const uint64_t playerId, const uint32_t nMsgId, const char* msg, const uint32_t nLen)
{
	NFMsg::ServerInfoReportList xMsg;
	CLIENT_MSG_PROCESS_NO_OBJECT(nMsgId, msg, nLen, xMsg);

	for (int i = 0; i < xMsg.server_list_size(); ++i)
	{
		const NFMsg::ServerInfoReport& xData = xMsg.server_list(i);
		NF_SHARE_PTR<NFServerData> pServerData = mGameMap.GetElement(xData.server_id());
		if (!pServerData)
		{
			pServerData = NF_SHARE_PTR<NFServerData>(NF_NEW NFServerData());
			mGameMap.AddElement(xData.server_id(), pServerData);
		}

		pServerData->mUnlinkId = unLinkId;
		pServerData->mServerInfo = xData;

		//NFLogInfo("Game Server Refresh World Server Success, serverName:{}, serverId:{}, ip:{}, port:{}", pServerData->mServerInfo.server_name(), pServerData->mServerInfo.server_id(), pServerData->mServerInfo.server_ip(), pServerData->mServerInfo.server_port());
	}
}

void NFCWorldServerModule::OnGameServerRegisterProcess(const uint32_t unLinkId, const uint64_t playerId, const uint32_t nMsgId, const char* msg, const uint32_t nLen)
{
	NFMsg::ServerInfoReportList xMsg;
	CLIENT_MSG_PROCESS_NO_OBJECT(nMsgId, msg, nLen, xMsg);

	for (int i = 0; i < xMsg.server_list_size(); ++i)
	{
		const NFMsg::ServerInfoReport& xData = xMsg.server_list(i);
		NF_SHARE_PTR<NFServerData> pServerData = mGameMap.GetElement(xData.server_id());
		if (!pServerData)
		{
			pServerData = NF_SHARE_PTR<NFServerData>(NF_NEW NFServerData());
			mGameMap.AddElement(xData.server_id(), pServerData);
		}

		if (mLinkGamMap.GetElement(unLinkId) == nullptr)
		{
			mLinkGamMap.AddElement(unLinkId, pServerData);
		}

		pServerData->mUnlinkId = unLinkId;
		pServerData->mServerInfo = xData;

		if (xData.server_ip().empty())
		{
			std::string ip = m_pNetServerModule->GetLinkIp(unLinkId);
			pServerData->mServerInfo.set_server_ip(ip);
		}

		NFLogInfo("Game Server Register World Server Success, serverName:{}, serverId:{}, ip:{}, port:{}", pServerData->mServerInfo.server_name(), pServerData->mServerInfo.server_id(), pServerData->mServerInfo.server_ip(), pServerData->mServerInfo.server_port());
	
		pServerData->SetSendString([this, pServerData](const std::string& msg) {
			m_pNetServerModule->SendByServerID(pServerData->mUnlinkId, 0, msg, 0);
		});
		m_pServerNetEventModule->OnServerNetEvent(eMsgType_CONNECTED, NF_ST_WORLD, NF_ST_GAME, unLinkId, pServerData);
	}
}
