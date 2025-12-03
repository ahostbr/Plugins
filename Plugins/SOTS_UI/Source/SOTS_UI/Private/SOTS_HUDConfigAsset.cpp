#include "SOTS_HUDConfigAsset.h"
#include "SOTS_HUDSubsystem.h"
#include "SOTS_NotificationSubsystem.h"

namespace
{
const FSOTS_HUDStateEntry* FindEntryForTag(const TArray<FSOTS_HUDStateEntry>& Entries, FGameplayTag Tag)
{
    for (const FSOTS_HUDStateEntry& Entry : Entries)
    {
        if (Entry.StateTag == Tag)
        {
            return &Entry;
        }
    }

    return nullptr;
}
}

void USOTS_HUDConfigDataAsset::ApplyStateForTag(const UObject* WorldContextObject, FGameplayTag StateTag) const
{
    const FSOTS_HUDStateEntry* Entry = FindEntryForTag(StateEntries, StateTag);
    if (!Entry)
    {
        return;
    }

    USOTS_HUDSubsystem* HUD = nullptr;
    if (Entry->bOverrideHealthPercent || Entry->bOverrideDetectionLevel || Entry->bOverrideObjectiveText)
    {
        HUD = USOTS_HUDSubsystem::Get(WorldContextObject);
    }

    if (HUD)
    {
        if (Entry->bOverrideHealthPercent)
        {
            HUD->SetHealthPercent(Entry->HealthPercent);
        }

        if (Entry->bOverrideDetectionLevel)
        {
            HUD->SetDetectionLevel(Entry->DetectionLevel);
        }

        if (Entry->bOverrideObjectiveText)
        {
            HUD->SetObjectiveText(Entry->ObjectiveText.ToString());
        }
    }

    if (Entry->bTriggerNotification)
    {
        if (USOTS_NotificationSubsystem* Notifications = USOTS_NotificationSubsystem::Get(WorldContextObject))
        {
            Notifications->PushNotification(Entry->NotificationText.ToString(), Entry->NotificationDuration, Entry->NotificationCategory);
        }
    }
}

const FSOTS_HUDStateEntry* USOTS_HUDConfigDataAsset::FindStateForTag(FGameplayTag StateTag) const
{
    return FindEntryForTag(StateEntries, StateTag);
}