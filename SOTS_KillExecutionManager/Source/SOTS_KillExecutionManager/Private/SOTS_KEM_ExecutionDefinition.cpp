#include "ContextualAnimSceneAsset.h"
#include "SOTS_KEM_ExecutionDefinition.h"

FSOTS_KEMValidationResult USOTS_KEM_ExecutionDefinition::ValidateDefinition() const
{
    FSOTS_KEMValidationResult Result;

    // DevTools: Python coverage tools can call ValidateDefinition() indirectly
    // via logs or debug commands, so keep messages deterministic and short.

    if (!ExecutionTag.IsValid())
    {
        Result.AddWarning(TEXT("ExecutionTag is not set."));
    }

    if (RequiredContextTags.IsEmpty() && BlockedContextTags.IsEmpty())
    {
        Result.AddWarning(TEXT("No context tags configured."));
    }

    switch (BackendType)
    {
    case ESOTS_KEM_BackendType::SpawnActor:
        if (!SpawnActorConfig.ExecutionData.IsValid() &&
            !SpawnActorConfig.ExecutionData.ToSoftObjectPath().IsValid())
        {
            Result.AddError(TEXT("SpawnActor backend requires ExecutionData."));
        }

        if (!SpawnActorConfig.HelperClass)
        {
            Result.AddWarning(TEXT("SpawnActor backend has no HelperClass."));
        }

        if (SpawnActorConfig.ExecutionData.IsValid())
        {
            if (const USOTS_SpawnExecutionData* SpawnData = SpawnActorConfig.ExecutionData.Get())
            {
                if (SpawnData->InstigatorWarpPointNames.Num() == 0)
                {
                    Result.AddWarning(TEXT("SpawnExecutionData lacks instigator warp points."));
                }
            }
        }
        break;

    case ESOTS_KEM_BackendType::CAS:
        if (CASConfig.MinDistance > CASConfig.MaxDistance)
        {
            Result.AddError(TEXT("CAS MinDistance > MaxDistance."));
        }

        if (!CASConfig.Scene.IsValid() && !CASConfig.Scene.ToSoftObjectPath().IsValid())
        {
            Result.AddWarning(TEXT("CAS Scene asset is not configured."));
        }
        break;

    case ESOTS_KEM_BackendType::LevelSequence:
        if (!LevelSequenceConfig.SequenceAsset.IsValid() &&
            !LevelSequenceConfig.SequenceAsset.ToSoftObjectPath().IsValid())
        {
            Result.AddWarning(TEXT("LevelSequence backend has no SequenceAsset."));
        }
        break;

    case ESOTS_KEM_BackendType::AIS:
        if (!AISConfig.BehaviorTag.IsValid())
        {
            Result.AddWarning(TEXT("AIS backend has no BehaviorTag."));
        }
        break;

    default:
        break;
    }

    return Result;
}
