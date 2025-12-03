#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"

namespace SOTS_TagConstants
{
inline const FGameplayTag& MissionStateStarted()
{
    static const FGameplayTag Tag = FGameplayTag::RequestGameplayTag(TEXT("Mission.State.Started"), false);
    return Tag;
}

inline const FGameplayTag& MissionStateCompleted()
{
    static const FGameplayTag Tag = FGameplayTag::RequestGameplayTag(TEXT("Mission.State.Completed"), false);
    return Tag;
}

inline const FGameplayTag& MissionStateFailed()
{
    static const FGameplayTag Tag = FGameplayTag::RequestGameplayTag(TEXT("Mission.State.Failed"), false);
    return Tag;
}

inline const FGameplayTag& MissionEventStarted()
{
    static const FGameplayTag Tag = FGameplayTag::RequestGameplayTag(TEXT("Mission.Event.Mission.Started"), false);
    return Tag;
}

inline const FGameplayTag& MissionEventCompleted()
{
    static const FGameplayTag Tag = FGameplayTag::RequestGameplayTag(TEXT("Mission.Event.Mission.Completed"), false);
    return Tag;
}

inline const FGameplayTag& MissionEventFailed()
{
    static const FGameplayTag Tag = FGameplayTag::RequestGameplayTag(TEXT("Mission.Event.Mission.Failed"), false);
    return Tag;
}

inline const FGameplayTag& MissionEventPrimaryObjective()
{
    static const FGameplayTag Tag = FGameplayTag::RequestGameplayTag(TEXT("Mission.Event.Objective.PrimaryCompleted"), false);
    return Tag;
}

inline const FGameplayTag& MissionEventOptionalObjective()
{
    static const FGameplayTag Tag = FGameplayTag::RequestGameplayTag(TEXT("Mission.Event.Objective.OptionalCompleted"), false);
    return Tag;
}

inline const FGameplayTag& MissionEventRewardsGranted()
{
    static const FGameplayTag Tag = FGameplayTag::RequestGameplayTag(TEXT("Mission.Event.Rewards.Granted"), false);
    return Tag;
}

inline const FGameplayTag& MissionEventAlertsTriggered()
{
    static const FGameplayTag Tag = FGameplayTag::RequestGameplayTag(TEXT("Mission.Event.Alerts.Triggered"), false);
    return Tag;
}

inline const FGameplayTag& NoiseDetectionAlerted()
{
    static const FGameplayTag Tag = FGameplayTag::RequestGameplayTag(TEXT("SOTS.Noise.Detection.Alerted"), false);
    return Tag;
}

inline const FGameplayTag& NoiseDetectionDetected()
{
    static const FGameplayTag Tag = FGameplayTag::RequestGameplayTag(TEXT("SOTS.Noise.Detection.Detected"), false);
    return Tag;
}

inline const FGameplayTag& NoiseTransitionAlert()
{
    static const FGameplayTag Tag = FGameplayTag::RequestGameplayTag(TEXT("SOTS.Noise.Transition.Alert"), false);
    return Tag;
}

inline const FGameplayTag& NoiseTransitionDetection()
{
    static const FGameplayTag Tag = FGameplayTag::RequestGameplayTag(TEXT("SOTS.Noise.Transition.Detection"), false);
    return Tag;
}

inline const FGameplayTag& NoiseLevelLow()
{
    static const FGameplayTag Tag = FGameplayTag::RequestGameplayTag(TEXT("SOTS.Noise.Level.Low"), false);
    return Tag;
}

inline const FGameplayTag& NoiseLevelMedium()
{
    static const FGameplayTag Tag = FGameplayTag::RequestGameplayTag(TEXT("SOTS.Noise.Level.Medium"), false);
    return Tag;
}

inline const FGameplayTag& NoiseLevelHigh()
{
    static const FGameplayTag Tag = FGameplayTag::RequestGameplayTag(TEXT("SOTS.Noise.Level.High"), false);
    return Tag;
}

inline const FGameplayTag& NoiseSourceFootstep()
{
    static const FGameplayTag Tag = FGameplayTag::RequestGameplayTag(TEXT("SOTS.Noise.Source.Footstep"), false);
    return Tag;
}

inline const FGameplayTag& NoiseSourceImpact()
{
    static const FGameplayTag Tag = FGameplayTag::RequestGameplayTag(TEXT("SOTS.Noise.Source.Impact"), false);
    return Tag;
}

inline const FGameplayTag& NoiseSourceEnvironment()
{
    static const FGameplayTag Tag = FGameplayTag::RequestGameplayTag(TEXT("SOTS.Noise.Source.Environment"), false);
    return Tag;
}

inline const FGameplayTag& MissionNoKills()
{
    static const FGameplayTag Tag = FGameplayTag::RequestGameplayTag(TEXT("SAS.Mission.NoKills"), false);
    return Tag;
}

inline const FGameplayTag& MissionNoAlerts()
{
    static const FGameplayTag Tag = FGameplayTag::RequestGameplayTag(TEXT("SAS.Mission.NoAlerts"), false);
    return Tag;
}

inline const FGameplayTag& MissionPerfectStealth()
{
    static const FGameplayTag Tag = FGameplayTag::RequestGameplayTag(TEXT("SAS.Mission.PerfectStealth"), false);
    return Tag;
}
}