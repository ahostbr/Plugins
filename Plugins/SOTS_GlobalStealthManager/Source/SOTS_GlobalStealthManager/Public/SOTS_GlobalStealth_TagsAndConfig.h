#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Engine/World.h"
#include "SOTS_GlobalStealth_TagsAndConfig.generated.h"

USTRUCT(BlueprintType)
struct FSOTS_StealthModifierDescriptor
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="SOTS|Stealth")
    FName ModifierId;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="SOTS|Stealth")
    FGameplayTag ModifierTag;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="SOTS|Stealth")
    float Weight = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="SOTS|Stealth", meta=(MultiLine="true"))
    FString Description;
};

UCLASS()
class SOTS_GLOBALSTEALTHMANAGER_API USOTS_GlobalStealthTagLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="SOTS|Stealth|Tags")
    static FGameplayTag GetStealthTierTag(const UObject* WorldContextObject, ESOTSStealthLevel Tier);

    UFUNCTION(BlueprintPure, Category="SOTS|Stealth|Tags")
    static FGameplayTag GetStealthDetectionTag(const UObject* WorldContextObject);

    UFUNCTION(BlueprintPure, Category="SOTS|Stealth|Tags")
    static FGameplayTag GetStealthSearchingTag(const UObject* WorldContextObject);

    UFUNCTION(BlueprintPure, Category="SOTS|Stealth|Tags")
    static void PopulateStealthTierTags(const UObject* WorldContextObject, TArray<FGameplayTag>& OutTags);
};

namespace SOTS_GlobalStealthTagLibraryImpl
{
    inline USOTS_GameplayTagManagerSubsystem* GetTagManager(const UObject* WorldContextObject)
    {
        if (WorldContextObject == nullptr)
        {
            return nullptr;
        }
        if (UWorld* World = WorldContextObject->GetWorld())
        {
            if (UGameInstance* GameInstance = World->GetGameInstance())
            {
                return GameInstance->GetSubsystem<USOTS_GameplayTagManagerSubsystem>();
            }
        }
        return nullptr;
    }

    inline FGameplayTag ResolveTag(const UObject* WorldContextObject, FName TagName)
    {
        if (USOTS_GameplayTagManagerSubsystem* TagManager = GetTagManager(WorldContextObject))
        {
            return TagManager->GetTagChecked(TagName);
        }
        return FGameplayTag();
    }
}

inline FGameplayTag USOTS_GlobalStealthTagLibrary::GetStealthTierTag(const UObject* WorldContextObject, ESOTSStealthLevel Tier)
{
    static const TMap<ESOTSStealthLevel, FName> TierMap = {
        { ESOTSStealthLevel::Hidden, FName("SAS.Stealth.Tier.Hidden") },
        { ESOTSStealthLevel::Cautious, FName("SAS.Stealth.Tier.Cautious") },
        { ESOTSStealthLevel::Alert, FName("SAS.Stealth.Tier.Alert") },
        { ESOTSStealthLevel::Compromised, FName("SAS.Stealth.Tier.Compromised") },
        { ESOTSStealthLevel::Detected, FName("SAS.Stealth.Tier.Detected") }
    };

    if (const FName* Name = TierMap.Find(Tier))
    {
        return SOTS_GlobalStealthTagLibraryImpl::ResolveTag(WorldContextObject, *Name);
    }
    return FGameplayTag();
}

inline FGameplayTag USOTS_GlobalStealthTagLibrary::GetStealthDetectionTag(const UObject* WorldContextObject)
{
    return SOTS_GlobalStealthTagLibraryImpl::ResolveTag(WorldContextObject, FName("SAS.Stealth.Status.Detected"));
}

inline FGameplayTag USOTS_GlobalStealthTagLibrary::GetStealthSearchingTag(const UObject* WorldContextObject)
{
    return SOTS_GlobalStealthTagLibraryImpl::ResolveTag(WorldContextObject, FName("SAS.Stealth.Status.Searching"));
}

inline void USOTS_GlobalStealthTagLibrary::PopulateStealthTierTags(const UObject* WorldContextObject, TArray<FGameplayTag>& OutTags)
{
    OutTags.Reset();
    for (ESOTSStealthLevel Tier : TEnumRange<ESOTSStealthLevel>())
    {
        if (FGameplayTag Tag = GetStealthTierTag(WorldContextObject, Tier))
        {
            OutTags.Add(Tag);
        }
    }
}
