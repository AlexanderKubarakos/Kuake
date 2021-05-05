#include "KuakeCore.h"
#include "Modules/ModuleManager.h"

#include "Log.h"

void FKuakeCore::StartupModule()
{
	UE_LOG(LogKuakeCore, Log, TEXT("KuakeCore module starting up"));
}

void FKuakeCore::ShutdownModule()
{
	UE_LOG(LogKuakeCore, Log, TEXT("KuakeCore module shutting down"));
}

IMPLEMENT_PRIMARY_GAME_MODULE(FKuakeCore, KuakeCore, "KuakeCore");
