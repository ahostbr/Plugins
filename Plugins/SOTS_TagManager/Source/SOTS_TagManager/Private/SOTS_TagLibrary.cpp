#include "SOTS_TagLibrary.h"
#include "SOTS_TagAccessHelpers.h"

#include "Engine/GameInstance.h"
#include "Engine/World.h"
#include "SOTS_TagConstants.h"
#include "SOTS_GameplayTagManagerSubsystem.h"
#include "GameFramework/Actor.h"

USOTS_GameplayTagManagerSubsystem* USOTS_TagLibrary::GetManager(const UObject* WorldContextObject)
{
    // Use the header-only helper that will perform the minimal safe lookups
    // into the World/GameInstance and obtain the subsystem instance.
    return SOTS_GetTagSubsystem(WorldContextObject);
}

FGameplayTag USOTS_TagLibrary::GetTagByName(const UObject* WorldContextObject, FName TagName)
{
    if (USOTS_GameplayTagManagerSubsystem* Manager = GetManager(WorldContextObject))
    {
        return Manager->GetTagByName(TagName);
    }

    return FGameplayTag();
}

void USOTS_TagLibrary::AddTagToActor(const UObject* WorldContextObject, AActor* Target, FGameplayTag Tag)
{
    if (!Target || !Tag.IsValid())
    {
        return;
    }

    if (USOTS_GameplayTagManagerSubsystem* Manager = GetManager(WorldContextObject))
    {
        Manager->AddTagToActor(Target, Tag);
    }
}

void USOTS_TagLibrary::RemoveTagFromActor(const UObject* WorldContextObject, AActor* Target, FGameplayTag Tag)
{
    if (!Target || !Tag.IsValid())
    {
        return;
    }

    if (USOTS_GameplayTagManagerSubsystem* Manager = GetManager(WorldContextObject))
    {
        Manager->RemoveTagFromActor(Target, Tag);
    }
}

// SOTS TAG SPINE (V2): Route global tag writes through the canonical Tag Manager subsystem.
// This avoids ad-hoc mutation of tag containers or actor-local globals elsewhere in the codebase.
void USOTS_TagLibrary::AddTagToActorByName(const UObject* WorldContextObject, AActor* Target, FName TagName)
{
    if (!Target || TagName.IsNone())
    {
        return;
    }

    if (USOTS_GameplayTagManagerSubsystem* Manager = GetManager(WorldContextObject))
    {
        Manager->AddTagToActorByName(Target, TagName);
    }
}

// SOTS TAG SPINE (V2): Route global tag writes through the canonical Tag Manager subsystem.
// This avoids ad-hoc mutation of tag containers or actor-local globals elsewhere in the codebase.
void USOTS_TagLibrary::RemoveTagFromActorByName(const UObject* WorldContextObject, AActor* Target, FName TagName)
{
    if (!Target || TagName.IsNone())
    {
        return;
    }

    if (USOTS_GameplayTagManagerSubsystem* Manager = GetManager(WorldContextObject))
    {
        Manager->RemoveTagFromActorByName(Target, TagName);
    }
}

// SOTS TAG SPINE (V2): Route global tag writes through the canonical Tag Manager subsystem.
// This avoids ad-hoc mutation of tag containers or actor-local globals elsewhere in the codebase.
void USOTS_TagLibrary::RemoveTagsFromActor(const UObject* WorldContextObject, AActor* Target, const TArray<FGameplayTag>& Tags)
{
    if (!Target || Tags.Num() == 0)
    {
        return;
    }

    if (USOTS_GameplayTagManagerSubsystem* Manager = GetManager(WorldContextObject))
    {
        Manager->RemoveTagsFromActor(Target, Tags);
    }
}

bool USOTS_TagLibrary::ActorHasTag(const UObject* WorldContextObject, const AActor* Target, FGameplayTag Tag)
{
    if (!Target || !Tag.IsValid())
    {
        return false;
    }

    if (USOTS_GameplayTagManagerSubsystem* Manager = GetManager(WorldContextObject))
    {
        return Manager->ActorHasTag(Target, Tag);
    }

    return false;
}

bool USOTS_TagLibrary::ActorHasAnyTag(const UObject* WorldContextObject, const AActor* Target, const FGameplayTagContainer& Tags)
{
    if (!Target)
    {
        return false;
    }

    if (USOTS_GameplayTagManagerSubsystem* Manager = GetManager(WorldContextObject))
    {

FGameplayTag USOTS_TagLibrary::GetMissionStateStartedTag()
{
    return SOTS_TagConstants::MissionStateStarted();
}

FGameplayTag USOTS_TagLibrary::GetMissionStateCompletedTag()
{
    return SOTS_TagConstants::MissionStateCompleted();
}

FGameplayTag USOTS_TagLibrary::GetMissionStateFailedTag()
{
    return SOTS_TagConstants::MissionStateFailed();
}

FGameplayTag USOTS_TagLibrary::GetMissionEventStartedTag()
{
    return SOTS_TagConstants::MissionEventStarted();
}

FGameplayTag USOTS_TagLibrary::GetMissionEventCompletedTag()
{
    return SOTS_TagConstants::MissionEventCompleted();
}

FGameplayTag USOTS_TagLibrary::GetMissionEventFailedTag()
{
    return SOTS_TagConstants::MissionEventFailed();
}

FGameplayTag USOTS_TagLibrary::GetMissionEventPrimaryObjectiveTag()
{
    return SOTS_TagConstants::MissionEventPrimaryObjective();
}

FGameplayTag USOTS_TagLibrary::GetMissionEventOptionalObjectiveTag()
{
    return SOTS_TagConstants::MissionEventOptionalObjective();
}

FGameplayTag USOTS_TagLibrary::GetMissionEventRewardsGrantedTag()
{
    return SOTS_TagConstants::MissionEventRewardsGranted();
}

FGameplayTag USOTS_TagLibrary::GetMissionEventAlertsTriggeredTag()
{
    return SOTS_TagConstants::MissionEventAlertsTriggered();
}

FGameplayTag USOTS_TagLibrary::GetNoiseTransitionAlertTag()
{
    return SOTS_TagConstants::NoiseTransitionAlert();
}

FGameplayTag USOTS_TagLibrary::GetNoiseTransitionDetectionTag()
{
    return SOTS_TagConstants::NoiseTransitionDetection();
}

FGameplayTag USOTS_TagLibrary::GetNoiseLevelLowTag()
{
    return SOTS_TagConstants::NoiseLevelLow();
}

FGameplayTag USOTS_TagLibrary::GetNoiseLevelMediumTag()
{
    return SOTS_TagConstants::NoiseLevelMedium();
}

FGameplayTag USOTS_TagLibrary::GetNoiseLevelHighTag()
{
    return SOTS_TagConstants::NoiseLevelHigh();
}

FGameplayTag USOTS_TagLibrary::GetNoiseSourceFootstepTag()
{
    return SOTS_TagConstants::NoiseSourceFootstep();
}

FGameplayTag USOTS_TagLibrary::GetNoiseSourceImpactTag()
{
    return SOTS_TagConstants::NoiseSourceImpact();
}

FGameplayTag USOTS_TagLibrary::GetNoiseSourceEnvironmentTag()
{
    return SOTS_TagConstants::NoiseSourceEnvironment();
}

FGameplayTag USOTS_TagLibrary::GetMissionNoKillsTag()
{
    return SOTS_TagConstants::MissionNoKills();
}

FGameplayTag USOTS_TagLibrary::GetMissionNoAlertsTag()
{
    return SOTS_TagConstants::MissionNoAlerts();
}

FGameplayTag USOTS_TagLibrary::GetMissionPerfectStealthTag()
{
    return SOTS_TagConstants::MissionPerfectStealth();
}
        return Manager->ActorHasAnyTags(Target, Tags);
    }

    return false;
}

bool USOTS_TagLibrary::ActorHasAllTags(const UObject* WorldContextObject, const AActor* Target, const FGameplayTagContainer& Tags)
{
    if (!Target)
    {
        return false;
    }

    if (USOTS_GameplayTagManagerSubsystem* Manager = GetManager(WorldContextObject))
    {
        return Manager->ActorHasAllTags(Target, Tags);
    }

    return false;
}

bool USOTS_TagLibrary::ActorHasTagByName(const UObject* WorldContextObject, const AActor* Actor, FName TagName)
{
    if (!Actor)
    {
        return false;
    }

    if (USOTS_GameplayTagManagerSubsystem* Manager = GetManager(WorldContextObject))
    {
        return Manager->ActorHasTagByName(Actor, TagName);
    }

    return false;
}
