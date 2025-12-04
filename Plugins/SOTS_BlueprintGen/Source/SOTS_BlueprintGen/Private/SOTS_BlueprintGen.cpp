#include "SOTS_BlueprintGen.h"
#include "SOTS_BPGenTypes.h"

DEFINE_LOG_CATEGORY(LogSOTS_BlueprintGen);

#define LOCTEXT_NAMESPACE "FSOTS_BlueprintGenModule"

void FSOTS_BlueprintGenModule::StartupModule()
{
	UE_LOG(LogSOTS_BlueprintGen, Log, TEXT("SOTS_BlueprintGen module has started (SPINE 1)."));
}

void FSOTS_BlueprintGenModule::ShutdownModule()
{
	UE_LOG(LogSOTS_BlueprintGen, Log, TEXT("SOTS_BlueprintGen module is shutting down."));
}

#undef LOCTEXT_NAMESPACE
IMPLEMENT_MODULE(FSOTS_BlueprintGenModule, SOTS_BlueprintGen)