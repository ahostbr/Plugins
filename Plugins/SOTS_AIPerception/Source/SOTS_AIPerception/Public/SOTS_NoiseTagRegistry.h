#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "UObject/SoftObjectPath.h"
#include "SOTS_NoiseTagRegistry.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogSOTS_AIPerception, Log, All);

class UWorld;

USTRUCT(BlueprintType)
struct FSOTS_NoiseTagDefinition
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, Category="NoiseTag")
    FGameplayTag NoiseTag;

    UPROPERTY(EditAnywhere, Category="NoiseTag")
    FText Description;

    UPROPERTY(EditAnywhere, Category="NoiseTag")
    bool bIsDetectionTag = false;

    UPROPERTY(EditAnywhere, Category="NoiseTag")
    bool bIsAlertTransition = false;
};

UCLASS(BlueprintType)
class SOTS_AIPERCEPTION_API USOTS_NoiseTagRegistry : public UDataAsset
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, Category="NoiseTag")
    FGameplayTag DefaultDetectionNoiseTag;

    UPROPERTY(EditAnywhere, Category="NoiseTag")
    TArray<FSOTS_NoiseTagDefinition> NoiseTags;

    bool ContainsTag(const FGameplayTag& Tag) const;
    const FSOTS_NoiseTagDefinition* FindTagDefinition(const FGameplayTag& Tag) const;
    const FGameplayTag& GetDefaultDetectionTag() const { return DefaultDetectionNoiseTag; }
};

namespace SOTSNoiseTagRegistryHelpers
{
    SOTS_AIPERCEPTION_API const FSoftObjectPath& GetDefaultRegistryPath();
    SOTS_AIPERCEPTION_API USOTS_NoiseTagRegistry* LoadNoiseTagRegistry();
    SOTS_AIPERCEPTION_API FGameplayTag ResolveNoiseTag(const UWorld* World, const FGameplayTag& RequestedTag);
}
