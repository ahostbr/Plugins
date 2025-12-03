#include "SOTS_AIPerceptionLibrary.h"

#include "SOTS_AIPerceptionSubsystem.h"
#include "SOTS_NoiseTagRegistry.h"
#include "Engine/World.h"

void USOTS_AIPerceptionLibrary::SOTS_ReportNoise(
    UObject* WorldContextObject,
    AActor* Instigator,
    FVector Location,
    float Loudness,
    FGameplayTag NoiseTag)
{
    if (!WorldContextObject)
    {
        return;
    }

    UWorld* World = WorldContextObject->GetWorld();
    if (!World)
    {
        return;
    }

    const FGameplayTag SanitizedNoiseTag = SOTSNoiseTagRegistryHelpers::ResolveNoiseTag(World, NoiseTag);

    if (USOTS_AIPerceptionSubsystem* Subsys = World->GetSubsystem<USOTS_AIPerceptionSubsystem>())
    {
        Subsys->ReportNoise(Instigator, Location, Loudness, SanitizedNoiseTag);
    }
}

