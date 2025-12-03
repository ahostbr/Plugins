#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "SOTS_HUDConfigAsset.generated.h"

USTRUCT(BlueprintType)
struct FSOTS_HUDStateEntry
{
    GENERATED_BODY()

    /** Tag that drives this HUD state. */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "HUD", meta = (DisplayName = "State Tag"))
    FGameplayTag StateTag;

    /** Whether to override the HUD health percent when this state is active. */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "HUD|Overrides")
    bool bOverrideHealthPercent = false;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "HUD|Overrides", meta = (EditCondition = "bOverrideHealthPercent", ClampMin = "0", ClampMax = "1"))
    float HealthPercent = 1.f;

    /** Whether to override the HUD detection level when this state is active. */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "HUD|Overrides")
    bool bOverrideDetectionLevel = false;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "HUD|Overrides", meta = (EditCondition = "bOverrideDetectionLevel", ClampMin = "0", ClampMax = "1"))
    float DetectionLevel = 0.f;

    /** Whether to override the objective text. */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "HUD|Overrides")
    bool bOverrideObjectiveText = false;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "HUD|Overrides", meta = (EditCondition = "bOverrideObjectiveText"))
    FText ObjectiveText;

    /** Optional notification pushed when this state activates. */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "HUD|Notification")
    bool bTriggerNotification = false;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "HUD|Notification", meta = (EditCondition = "bTriggerNotification"))
    FText NotificationText;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "HUD|Notification", meta = (EditCondition = "bTriggerNotification", ClampMin = "0"))
    float NotificationDuration = 3.f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "HUD|Notification", meta = (EditCondition = "bTriggerNotification"))
    FGameplayTag NotificationCategory;
};

UCLASS(BlueprintType)
class SOTS_UI_API USOTS_HUDConfigDataAsset : public UDataAsset
{
    GENERATED_BODY()

public:
    /** Applies the HUD overrides and notification tied to the given gameplay tag. */
    UFUNCTION(BlueprintCallable, Category = "SOTS|HUD")
    void ApplyStateForTag(const UObject* WorldContextObject, FGameplayTag StateTag) const;

    /** Finds a matching HUD state entry for the provided tag. */
    UFUNCTION(BlueprintPure, Category = "SOTS|HUD")
    const FSOTS_HUDStateEntry* FindStateForTag(FGameplayTag StateTag) const;

protected:
    /** Mapping of gameplay tags to HUD/notification overrides. */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "HUD", meta = (TitleProperty = "StateTag"))
    TArray<FSOTS_HUDStateEntry> StateEntries;
};