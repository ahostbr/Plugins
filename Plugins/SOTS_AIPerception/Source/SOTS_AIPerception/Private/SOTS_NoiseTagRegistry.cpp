#include "SOTS_NoiseTagRegistry.h"

#include "UObject/SoftObjectPath.h"

DEFINE_LOG_CATEGORY(LogSOTS_AIPerception);

bool USOTS_NoiseTagRegistry::ContainsTag(const FGameplayTag& Tag) const
{
    return FindTagDefinition(Tag) != nullptr;
}

const FSOTS_NoiseTagDefinition* USOTS_NoiseTagRegistry::FindTagDefinition(const FGameplayTag& Tag) const
{
    for (const FSOTS_NoiseTagDefinition& Entry : NoiseTags)
    {
        if (Entry.NoiseTag == Tag)
        {
            return &Entry;
        }
    }

    return nullptr;
}

namespace
{
    const FSoftObjectPath& GetStaticRegistryPath()
    {
        static const FSoftObjectPath Path(TEXT("/Game/SOTS/Perception/DA_NoiseTagRegistry_Global.DA_NoiseTagRegistry_Global"));
        return Path;
    }
}

const FSoftObjectPath& SOTSNoiseTagRegistryHelpers::GetDefaultRegistryPath()
{
    return GetStaticRegistryPath();
}

USOTS_NoiseTagRegistry* SOTSNoiseTagRegistryHelpers::LoadNoiseTagRegistry()
{
    static TWeakObjectPtr<USOTS_NoiseTagRegistry> CachedRegistry;

    if (CachedRegistry.IsValid())
    {
        return CachedRegistry.Get();
    }

    if (UObject* Loaded = GetDefaultRegistryPath().TryLoad())
    {
        if (USOTS_NoiseTagRegistry* Registry = Cast<USOTS_NoiseTagRegistry>(Loaded))
        {
            CachedRegistry = Registry;
            return Registry;
        }
    }

    UE_LOG(LogSOTS_AIPerception, Warning, TEXT("Noise tag registry asset not available at %s"), *GetDefaultRegistryPath().ToString());
    return nullptr;
}

FGameplayTag SOTSNoiseTagRegistryHelpers::ResolveNoiseTag(const UWorld* World, const FGameplayTag& RequestedTag)
{
    if (USOTS_NoiseTagRegistry* Registry = LoadNoiseTagRegistry())
    {
        if (RequestedTag.IsValid() && Registry->ContainsTag(RequestedTag))
        {
            return RequestedTag;
        }

        const FGameplayTag& FallbackTag = Registry->GetDefaultDetectionTag();

        if (FallbackTag.IsValid())
        {
            FString TagName = RequestedTag.IsValid() ? RequestedTag.ToString() : TEXT("<Invalid>");
            UE_LOG(LogSOTS_AIPerception, Warning, TEXT("[%s] Noise tag %s is not registered, falling back to %s."),
                *GetNameSafe(World), *TagName, *FallbackTag.ToString());

            return FallbackTag;
        }
    }

    return RequestedTag;
}