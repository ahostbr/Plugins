#include "SOTS_MissionEventTagRegistry.h"
#include "SOTS_MissionDirectorModule.h"

const FSOTS_MissionEventTagDefinition* USOTS_MissionEventTagRegistry::FindDefinition(const FGameplayTag& EventTag) const
{
    if (!EventTag.IsValid())
    {
        return nullptr;
    }

    for (const FSOTS_MissionEventTagDefinition& Entry : Entries)
    {
        if (Entry.EventTag.IsValid() && EventTag.MatchesTag(Entry.EventTag))
        {
            return &Entry;
        }
    }

    return nullptr;
}

bool USOTS_MissionEventTagRegistry::ContainsTag(const FGameplayTag& EventTag) const
{
    return FindDefinition(EventTag) != nullptr;
}

namespace
{
    const FSoftObjectPath& GetStaticRegistryPath()
    {
        static const FSoftObjectPath Path(TEXT("/Game/DevTools/DA_MissionEventTagRegistry.DA_MissionEventTagRegistry"));
        return Path;
    }
}

const FSoftObjectPath& SOTSMissionEventTagRegistryHelpers::GetDefaultRegistryPath()
{
    return GetStaticRegistryPath();
}

USOTS_MissionEventTagRegistry* SOTSMissionEventTagRegistryHelpers::LoadMissionEventTagRegistry()
{
    static TWeakObjectPtr<USOTS_MissionEventTagRegistry> CachedRegistry;

    if (CachedRegistry.IsValid())
    {
        return CachedRegistry.Get();
    }

    if (UObject* Loaded = GetDefaultRegistryPath().TryLoad())
    {
        if (USOTS_MissionEventTagRegistry* Registry = Cast<USOTS_MissionEventTagRegistry>(Loaded))
        {
            CachedRegistry = Registry;
            return Registry;
        }
    }

    UE_LOG(LogSOTSMissionDirector, Warning, TEXT("Mission event tag registry asset not available at %s"), *GetDefaultRegistryPath().ToString());
    return nullptr;
}
