#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "SOTS_FXCueDefinition.h"
#include "SOTS_FXTagCatalog.generated.h"

USTRUCT(BlueprintType)
struct SOTS_FX_PLUGIN_API FSOTS_FXTagCatalogEntry
{
    GENERATED_BODY()

    /** Gameplay tag that other subsystems request via TriggerFXByTag. */
    UPROPERTY(EditAnywhere, Category="FX")
    FGameplayTag FXTag;

    /** Cue definition that fulfills the requested tag. */
    UPROPERTY(EditAnywhere, Category="FX")
    TSoftObjectPtr<USOTS_FXCueDefinition> CueDefinition;

    /** Optional description to make the asset easier to edit from DevTools. */
    UPROPERTY(EditAnywhere, Category="FX")
    FText Description;
};

UCLASS(BlueprintType)
class SOTS_FX_PLUGIN_API USOTS_FXTagCatalog : public UDataAsset
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, Category="FX")
    TArray<FSOTS_FXTagCatalogEntry> Entries;

    const USOTS_FXCueDefinition* FindCueDefinition(FGameplayTag Tag) const;
    bool HasTag(FGameplayTag Tag) const;
};
