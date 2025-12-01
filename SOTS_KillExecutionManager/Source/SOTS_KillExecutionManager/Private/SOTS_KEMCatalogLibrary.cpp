#include "SOTS_KEMCatalogLibrary.h"

#include "Engine/GameInstance.h"
#include "SOTS_KEM_ManagerSubsystem.h"
#include "UObject/SoftObjectPath.h"

USOTS_KEM_ExecutionRegistryConfig* USOTS_KEMCatalogLibrary::GetExecutionCatalog(const UObject* WorldContextObject)
{
    if (!WorldContextObject)
    {
        return nullptr;
    }

    UWorld* World = WorldContextObject->GetWorld();
    if (!World)
    {
        return nullptr;
    }

    UGameInstance* GameInstance = World->GetGameInstance();
    if (!GameInstance)
    {
        return nullptr;
    }

    USOTS_KEMManagerSubsystem* Manager = GameInstance->GetSubsystem<USOTS_KEMManagerSubsystem>();
    if (!Manager)
    {
        return nullptr;
    }

    if (Manager->DefaultRegistryConfig.IsValid())
    {
        return Manager->DefaultRegistryConfig.Get();
    }

    if (Manager->DefaultRegistryConfig.ToSoftObjectPath().IsValid())
    {
        return Manager->DefaultRegistryConfig.LoadSynchronous();
    }

    return nullptr;
}
