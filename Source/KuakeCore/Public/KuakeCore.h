#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleInterface.h"

class FKuakeCore : public IModuleInterface
{
public:
	static inline FKuakeCore& Get()
	{
		return FModuleManager::LoadModuleChecked<FKuakeCore>("KuakeCore");
	}

	static inline bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded("KuakeCore");
	}

	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
