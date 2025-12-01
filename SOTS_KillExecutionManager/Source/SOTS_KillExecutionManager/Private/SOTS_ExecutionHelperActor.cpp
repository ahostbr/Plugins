#include "SOTS_ExecutionHelperActor.h"

#include "Components/SkeletalMeshComponent.h"
#include "Animation/AnimInstance.h"
#include "Engine/World.h"
#include "Engine/GameInstance.h"
#include "SOTS_KEM_ManagerSubsystem.h"
#include "MotionWarpingComponent.h"

ASOTS_ExecutionHelperActor::ASOTS_ExecutionHelperActor()
{
    PrimaryActorTick.bCanEverTick = false;
}

void ASOTS_ExecutionHelperActor::Initialize(const FSOTS_ExecutionContext& InContext,
                                            const USOTS_SpawnExecutionData* InData,
                                            const FTransform& InSpawnTransform,
                                            const USOTS_KEM_ExecutionDefinition* InExecutionDefinition,
                                            const FSOTS_KEM_OmniTraceWarpResult& InWarpResult)
{
    Context = InContext;
    SpawnData = InData;
    SpawnTransform = InSpawnTransform;
    ExecutionDefinition = InExecutionDefinition;
    WarpResult = InWarpResult;

    UE_LOG(LogSOTS_KEM, Log,
        TEXT("[KEM][Helper] Initialize: Helper=%s Instigator=%s Target=%s bHasHelperSpawn=%s NumWarpTargets=%d SpawnLoc=%s"),
        *GetName(),
        *GetNameSafe(Context.Instigator.Get()),
        *GetNameSafe(Context.Target.Get()),
        WarpResult.bHasHelperSpawn ? TEXT("true") : TEXT("false"),
        WarpResult.WarpTargets.Num(),
        *SpawnTransform.GetLocation().ToString());

    // We deliberately do NOT call SetActorTransform here; the deferred spawn
    // already uses SpawnTransform. Any additional movement should happen via
    // MoveComponentTo / motion warping driven by the stored WarpResult.
}

void ASOTS_ExecutionHelperActor::PrePlaySpawnMontages_Implementation()
{
    if (!ExecutionDefinition || !SpawnData)
    {
        return;
    }

    UWorld* World = GetWorld();
    if (!World)
    {
        return;
    }

    if (WarpResult.bHasHelperSpawn)
    {
        SetActorTransform(WarpResult.HelperSpawnTransform);
        SpawnTransform = WarpResult.HelperSpawnTransform;
    }

    bool bAppliedWarpResult = false;
    if (WarpResult.WarpTargets.Num() > 0 && Context.Instigator.IsValid())
    {
        if (UMotionWarpingComponent* MotionWarp = Context.Instigator->FindComponentByClass<UMotionWarpingComponent>())
        {
            for (const FSOTS_KEM_WarpRuntimeTarget& RuntimeTarget : WarpResult.WarpTargets)
            {
                MotionWarp->AddOrUpdateWarpTargetFromTransform(RuntimeTarget.TargetName, RuntimeTarget.TargetTransform);
                bAppliedWarpResult = true;
            }
        }
    }

    if (bAppliedWarpResult)
    {
        return;
    }

    UGameInstance* GameInstance = World->GetGameInstance();
    if (!GameInstance)
    {
        return;
    }

    if (USOTS_KEMManagerSubsystem* Subsystem = GameInstance->GetSubsystem<USOTS_KEMManagerSubsystem>())
    {
        const auto TryApplyWarpPoints = [&](const TArray<FName>& Candidates, TWeakObjectPtr<AActor> ActorPtr)
        {
            AActor* Actor = ActorPtr.Get();
            if (!Actor)
            {
                return false;
            }

            if (UMotionWarpingComponent* MotionWarp = Actor->FindComponentByClass<UMotionWarpingComponent>())
            {
                for (const FName& CandidateName : Candidates)
                {
                    if (CandidateName.IsNone())
                    {
                        continue;
                    }

                    FTransform WarpTransform;
                    if (!Subsystem->ResolveWarpPointByName(ExecutionDefinition, CandidateName, Context, WarpTransform))
                    {
                        continue;
                    }

                    MotionWarp->AddOrUpdateWarpTargetFromTransform(CandidateName, WarpTransform);
                    return true;
                }
            }

            return false;
        };

        if (TryApplyWarpPoints(SpawnData->InstigatorWarpPointNames, Context.Instigator))
        {
            return;
        }

        TryApplyWarpPoints(SpawnData->TargetWarpPointNames, Context.Target);
    }
}

void ASOTS_ExecutionHelperActor::BeginPlay()
{
    Super::BeginPlay();

    // Give Blueprint a chance to do any spatial / warp work before we fire the montages.
    PrePlaySpawnMontages();

    PlayMontages();
}

void ASOTS_ExecutionHelperActor::NotifyExecutionEnded(bool bWasSuccessful)
{
    if (!ExecutionDefinition)
    {
        return;
    }

    UWorld* World = GetWorld();
    if (!World)
    {
        return;
    }

    UGameInstance* GameInstance = World->GetGameInstance();
    if (!GameInstance)
    {
        return;
    }

    if (USOTS_KEMManagerSubsystem* Subsystem = GameInstance->GetSubsystem<USOTS_KEMManagerSubsystem>())
    {
        Subsystem->NotifyExecutionEnded(Context, ExecutionDefinition, bWasSuccessful);
    }
}

void ASOTS_ExecutionHelperActor::PlayMontages()
{
    if (!SpawnData)
    {
        // Nothing to play; treat as a failed execution and notify KEM.
        NotifyExecutionEnded(false);

        Destroy();
        return;
    }

    auto PlayOn = [](TWeakObjectPtr<AActor> ActorPtr, UAnimMontage* Montage)
    {
        if (!ActorPtr.IsValid() || !Montage)
        {
            return;
        }

        if (USkeletalMeshComponent* Mesh = ActorPtr->FindComponentByClass<USkeletalMeshComponent>())
        {
            if (UAnimInstance* Anim = Mesh->GetAnimInstance())
            {
                Anim->Montage_Play(Montage);
            }
        }
    };

    PlayOn(Context.Instigator, SpawnData->InstigatorMontage);
    PlayOn(Context.Target,     SpawnData->TargetMontage);

    const float InstLen = SpawnData->InstigatorMontage ? SpawnData->InstigatorMontage->GetPlayLength() : 0.f;
    const float TgtLen  = SpawnData->TargetMontage     ? SpawnData->TargetMontage->GetPlayLength()     : 0.f;

    const float MaxLen = FMath::Max(InstLen, TgtLen);
    if (MaxLen <= 0.f)
    {
        NotifyExecutionEnded(false);
        Destroy();
    }
    else
    {
        // Helper will auto-destroy shortly after the longest montage finishes.
        const float LifeSpan = MaxLen + 0.25f;
        SetLifeSpan(LifeSpan);
    }
}
