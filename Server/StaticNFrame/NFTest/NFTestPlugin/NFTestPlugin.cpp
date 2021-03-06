// -------------------------------------------------------------------------
//    @FileName         :    NFTestPlugin.cpp
//    @Author           :    GaoYi
//    @Date             :    2018/05/25
//    @Email			:    445267987@qq.com
//    @Module           :    NFTestPlugin
//
// -------------------------------------------------------------------------

#include "NFTestPlugin.h"
#include "NFCTestActorModule.h"
//
//
#ifdef NF_DYNAMIC_PLUGIN

NF_EXPORT void DllStartPlugin(NFIPluginManager* pm)
{
	CREATE_PLUGIN(pm, NFTestPlugin)
};

NF_EXPORT void DllStopPlugin(NFIPluginManager* pm)
{
	DESTROY_PLUGIN(pm, NFTestPlugin)
};

#endif

//////////////////////////////////////////////////////////////////////////

int NFTestPlugin::GetPluginVersion()
{
	return 0;
}

std::string NFTestPlugin::GetPluginName()
{
	return GET_CLASS_NAME(NFTestPlugin);
}

void NFTestPlugin::Install()
{
	REGISTER_MODULE(pPluginManager, NFCTestActorModule, NFCTestActorModule);
}

void NFTestPlugin::Uninstall()
{
	UNREGISTER_MODULE(pPluginManager, NFCTestActorModule, NFCTestActorModule);
}