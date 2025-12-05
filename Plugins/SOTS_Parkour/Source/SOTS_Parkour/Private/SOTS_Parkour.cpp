#include "Modules/ModuleManager.h"

class FSOTS_ParkourModule : public IModuleInterface
{
public:
    virtual void StartupModule() override
    {
        UE_LOG(LogTemp, Log, TEXT("SOTS_Parkour module starting"));
    }

    virtual void ShutdownModule() override
    {
        UE_LOG(LogTemp, Log, TEXT("SOTS_Parkour module shutting down"));
    }
};

IMPLEMENT_MODULE(FSOTS_ParkourModule, SOTS_Parkour)
