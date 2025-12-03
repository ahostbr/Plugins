#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "SOTS_MissionDirectorTypes.h"
#include "UObject/SoftObjectPath.h"
#include "SOTS_MissionEventTagRegistry.generated.h"

USTRUCT(BlueprintType)
struct SOTS_MISSIONDIRECTOR_API FSOTS_MissionEventTagDefinition
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, Category="MissionEvent")
    FGameplayTag EventTag;

    UPROPERTY(EditAnywhere, Category="MissionEvent")
    ESOTSMissionEventCategory Category = ESOTSMissionEventCategory::Misc;

    UPROPERTY(EditAnywhere, Category="MissionEvent")
    FText Title;

    UPROPERTY(EditAnywhere, Category="MissionEvent")
    FText Description;

    UPROPERTY(EditAnywhere, Category="MissionEvent")
    float ScoreDelta = 0.0f;

    UPROPERTY(EditAnywhere, Category="MissionEvent")
    FGameplayTagContainer ContextTags;

    UPROPERTY(EditAnywhere, Category="MissionEvent")
    FGameplayTag FXTag;

    UPROPERTY(EditAnywhere, Category="MissionEvent")
    FGameplayTag MusicTag;

    UPROPERTY(EditAnywhere, Category="MissionEvent")
    bool bTriggersObjectiveCompletion = true;
};

UCLASS(BlueprintType)
class SOTS_MISSIONDIRECTOR_API USOTS_MissionEventTagRegistry : public UDataAsset
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, Category="MissionEvent")
    TArray<FSOTS_MissionEventTagDefinition> Entries;

    const FSOTS_MissionEventTagDefinition* FindDefinition(const FGameplayTag& EventTag) const;
    bool ContainsTag(const FGameplayTag& EventTag) const;
};

namespace SOTSMissionEventTagRegistryHelpers
{
    SOTS_MISSIONDIRECTOR_API const FSoftObjectPath& GetDefaultRegistryPath();
    SOTS_MISSIONDIRECTOR_API USOTS_MissionEventTagRegistry* LoadMissionEventTagRegistry();
}
