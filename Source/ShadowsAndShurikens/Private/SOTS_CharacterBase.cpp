#include "SOTS_CharacterBase.h"
// Ensure the module header is the very first include in this translation unit
#include "SOTS_CharacterBase.h"

#include "SOTS_ProfileTypes.h"
ASOTS_CharacterBase::ASOTS_CharacterBase(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
    StatsComponent = CreateDefaultSubobject<USOTS_StatsComponent>(TEXT("StatsComponent"));
}

void ASOTS_CharacterBase::BuildCharacterStateSnapshot(FSOTS_CharacterStateData& OutData) const
{
    OutData.Transform = GetActorTransform();

    if (StatsComponent)
    {
        OutData.StatValues = StatsComponent->GetAllStats();
    }
    else
    {
        OutData.StatValues.Reset();
    }

    OutData.MovementStateTags.Reset();
    OutData.EquippedAbilityTags.Reset();
}

void ASOTS_CharacterBase::ApplyCharacterStateSnapshot(const FSOTS_CharacterStateData& InData)
{
    SetActorTransform(InData.Transform);

    if (StatsComponent)
    {
        StatsComponent->SetAllStats(InData.StatValues);
    }
}

