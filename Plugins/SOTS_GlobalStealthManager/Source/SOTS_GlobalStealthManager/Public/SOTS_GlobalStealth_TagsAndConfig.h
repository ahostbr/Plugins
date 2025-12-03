#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Engine/World.h"
#include "SOTS_GlobalStealthTypes.h"
#include "SOTS_GameplayTagManagerSubsystem.h"
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
 class SOTS_GLOBALSTEALTHMANAGER_API USOTS_GlobalStealthConfigTagLibrary : public UBlueprintFunctionLibrary
 {
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="SOTS|Stealth|Tags")
    static FGameplayTag GetStealthTierTag(const UObject* WorldContextObject, ESOTS_StealthTier Tier);

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

 inline FGameplayTag USOTS_GlobalStealthConfigTagLibrary::GetStealthTierTag(const UObject* WorldContextObject, ESOTS_StealthTier Tier)
{
    static const TMap<ESOTS_StealthTier, FName> TierMap = {
        { ESOTS_StealthTier::Hidden, FName("SAS.Stealth.Tier.Hidden") },
        { ESOTS_StealthTier::Cautious, FName("SAS.Stealth.Tier.Cautious") },
        { ESOTS_StealthTier::Danger, FName("SAS.Stealth.Tier.Danger") },
        { ESOTS_StealthTier::Compromised, FName("SAS.Stealth.Tier.Compromised") }
    };

    if (const FName* Name = TierMap.Find(Tier))
    {
        return SOTS_GlobalStealthTagLibraryImpl::ResolveTag(WorldContextObject, *Name);
    }
    return FGameplayTag();
}

 inline FGameplayTag USOTS_GlobalStealthConfigTagLibrary::GetStealthDetectionTag(const UObject* WorldContextObject)
{
    return SOTS_GlobalStealthTagLibraryImpl::ResolveTag(WorldContextObject, FName("SAS.Stealth.Status.Detected"));
}

 inline FGameplayTag USOTS_GlobalStealthConfigTagLibrary::GetStealthSearchingTag(const UObject* WorldContextObject)
{
    return SOTS_GlobalStealthTagLibraryImpl::ResolveTag(WorldContextObject, FName("SAS.Stealth.Status.Searching"));
}

 inline void USOTS_GlobalStealthConfigTagLibrary::PopulateStealthTierTags(const UObject* WorldContextObject, TArray<FGameplayTag>& OutTags)
{
    OutTags.Reset();
    for (ESOTS_StealthTier Tier : TEnumRange<ESOTS_StealthTier>())
    {
        if (FGameplayTag Tag = GetStealthTierTag(WorldContextObject, Tier); Tag.IsValid())
        {
            OutTags.Add(Tag);
        }
    }
}
