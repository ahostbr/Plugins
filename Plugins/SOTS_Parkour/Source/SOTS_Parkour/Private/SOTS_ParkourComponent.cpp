// SOTS_ParkourComponent.cpp
// SPINE 6: Minimal implementation with high-level entry/exit flow,
// owner caching, a simple local-only detection pass that fills
// LastResult, and a basic execution step that warps the character
// for Mantle/Drop. This pass adds a config validation helper used
// in BeginPlay when debug is enabled, so obviously bad config data
// becomes visible early without changing gameplay behavior.

#include "SOTS_ParkourComponent.h"

#include "SOTS_ParkourConfig.h"
#include "DrawDebugHelpers.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/CapsuleComponent.h"

USOTS_ParkourComponent::USOTS_ParkourComponent()
{
    PrimaryComponentTick.bCanEverTick = false; // No tick needed in the skeleton passes

    // Initial state is idle; other fields already have default initializers.
    ParkourState      = ESOTS_ParkourState::Idle;
    CurrentClimbStyle = ESOTS_ClimbStyle::None;
    CurrentAction     = ESOTS_ParkourAction::None;
    LastResult.Reset();
}

void USOTS_ParkourComponent::BeginPlay()
{
    Super::BeginPlay();

    AActor* Owner = GetOwner();
    if (Owner)
    {
        if (ACharacter* AsCharacter = Cast<ACharacter>(Owner))
        {
            CachedCharacter = AsCharacter;
            CachedMovementComponent = AsCharacter->GetCharacterMovement();
        }
    }

#if !(UE_BUILD_SHIPPING || UE_BUILD_TEST)
    if (bEnableDebugLogging)
    {
        if (AActor* OwnerActor = GetOwner())
        {
            if (ParkourConfig)
            {
                UE_LOG(LogTemp, Log,
                    TEXT("[SOTS_Parkour] %s using ParkourConfig: %s"),
                    *OwnerActor->GetName(),
                    *ParkourConfig->GetPathName());
            }
            else
            {
                UE_LOG(LogTemp, Log,
                    TEXT("[SOTS_Parkour] %s has no ParkourConfig assigned; using internal defaults."),
                    *OwnerActor->GetName());
            }

            FString ValidationError;
            const bool bConfigOk = ValidateCurrentConfig(ValidationError);
            if (!bConfigOk)
            {
                UE_LOG(LogTemp, Warning,
                    TEXT("[SOTS_Parkour] %s ParkourConfig validation FAILED: %s"),
                    *OwnerActor->GetName(),
                    *ValidationError);
            }
            else if (!ValidationError.IsEmpty())
            {
                UE_LOG(LogTemp, Log,
                    TEXT("[SOTS_Parkour] %s ParkourConfig validation OK: %s"),
                    *OwnerActor->GetName(),
                    *ValidationError);
            }
        }
    }
#endif

    // Movement mode hooks / input integration remain for later passes.
}

bool USOTS_ParkourComponent::CanAttemptParkourInternal() const
{
    // Owner must be a valid character.
    if (!CachedCharacter.IsValid())
    {
        return false;
    }

    // In SPINE 6 we only allow attempts from Idle state. Later passes will
    // mirror CGF’s richer gating (movement mode, velocity, etc.).
    if (ParkourState != ESOTS_ParkourState::Idle)
    {
        return false;
    }

    return true;
}

bool USOTS_ParkourComponent::TryDetectSimpleParkourOpportunity(FSOTS_ParkourResult& OutResult) const
{
    OutResult.Reset();

    ACharacter* Character = CachedCharacter.Get();
    if (!Character)
    {
        return false;
    }

    UWorld* World = GetWorld();
    if (!World)
    {
        return false;
    }

    const FVector ActorLocation = Character->GetActorLocation();
    const FVector Forward       = Character->GetActorForwardVector();

    // Pull tuning from config if available; otherwise fall back to the
    // SPINE 3 baked-in values so behavior is unchanged.
    const USOTS_ParkourConfig* Config = ParkourConfig;

    const float ForwardTraceDistance = Config
        ? Config->ForwardTraceDistance
        : 150.0f;

    const float VerticalOffset = Config
        ? Config->TraceVerticalOffset
        : 40.0f;

    const FVector TraceStart = ActorLocation + FVector(0.0f, 0.0f, VerticalOffset);
    const FVector TraceEnd   = TraceStart + Forward * ForwardTraceDistance;

    FHitResult Hit;
    FCollisionQueryParams Params(SCENE_QUERY_STAT(SOTS_Parkour_ForwardTrace), false, Character);
    const bool bHit = World->LineTraceSingleByChannel(Hit, TraceStart, TraceEnd, ECC_Visibility, Params);

#if !(UE_BUILD_SHIPPING || UE_BUILD_TEST)
    if (bEnableDebugLogging)
    {
        DrawDebugLine(World, TraceStart, TraceEnd, FColor::Yellow, false, 2.0f, 0, 1.0f);
        if (bHit && Hit.IsValidBlockingHit())
        {
            DrawDebugSphere(World, Hit.ImpactPoint, 8.0f, 8, FColor::Green, false, 2.0f);
        }
    }
#endif

    if (!bHit || !Hit.IsValidBlockingHit())
    {
        return false;
    }

    // Classification uses config-driven thresholds when available.
    const float CharacterHalfHeight = Character->GetSimpleCollisionHalfHeight();
    const FVector CharacterLocation = Character->GetActorLocation();
    const float CharacterFeetZ      = CharacterLocation.Z - CharacterHalfHeight;
    const float LedgeZ              = Hit.ImpactPoint.Z;
    const float HeightDelta         = LedgeZ - CharacterFeetZ;

    const float MantleMinHeight = Config
        ? Config->MantleMinHeight
        : 30.0f;

    const float MantleMaxHeight = Config
        ? Config->MantleMaxHeight
        : 120.0f;

    const float MaxSafeDrop = Config
        ? Config->MaxSafeDropHeight
        : 240.0f;

    OutResult.bHasResult    = true;
    OutResult.WorldLocation = Hit.ImpactPoint;
    OutResult.WorldNormal   = Hit.ImpactNormal;
    OutResult.Hit           = Hit;

    if (HeightDelta >= MantleMinHeight && HeightDelta <= MantleMaxHeight)
    {
        // Simple forward mantle.
        OutResult.Action     = ESOTS_ParkourAction::Mantle;
        OutResult.ClimbStyle = ESOTS_ClimbStyle::Braced;
    }
    else if (HeightDelta < 0.0f && FMath::Abs(HeightDelta) <= MaxSafeDrop)
    {
        // Slightly below feet: treat as a controlled drop/down case.
        OutResult.Action     = ESOTS_ParkourAction::Drop;
        OutResult.ClimbStyle = ESOTS_ClimbStyle::FreeHang;
    }
    else
    {
        // Out-of-range ledge height; treat as invalid for now.
        OutResult.Reset();
        return false;
    }

    return true;
}

void USOTS_ParkourComponent::ExecuteCurrentParkour()
{
    ACharacter* Character = CachedCharacter.Get();
    if (!Character || !LastResult.bHasResult)
    {
        return;
    }

    UWorld* World = GetWorld();
    if (!World)
    {
        return;
    }

    FVector TargetLocation = Character->GetActorLocation();

    // Use capsule info if available to keep the character reasonably placed.
    float CapsuleHalfHeight = 0.0f;
    float CapsuleRadius     = 0.0f;
    if (UCapsuleComponent* Capsule = Character->GetCapsuleComponent())
    {
        CapsuleHalfHeight = Capsule->GetScaledCapsuleHalfHeight();
        CapsuleRadius     = Capsule->GetScaledCapsuleRadius();
    }

    const USOTS_ParkourConfig* Config = ParkourConfig;

    // Fallbacks mirror SPINE 3 hard-coded values.
    const float MantleForwardScale = Config
        ? Config->MantleForwardOffsetScale
        : 0.8f;

    const float MantleUpScale = Config
        ? Config->MantleUpOffsetScale
        : 0.6f;

    const float DropStepDown = Config
        ? Config->DropStepDownDistance
        : 150.0f;

    switch (LastResult.Action)
    {
    case ESOTS_ParkourAction::Mantle:
    {
        FVector WallNormal = LastResult.WorldNormal.GetSafeNormal();
        if (WallNormal.IsNearlyZero())
        {
            WallNormal = -Character->GetActorForwardVector();
        }

        const float MantleForwardOffset = CapsuleRadius > 0.0f
            ? CapsuleRadius * MantleForwardScale
            : 30.0f;

        const float MantleUpOffset = CapsuleHalfHeight > 0.0f
            ? CapsuleHalfHeight * MantleUpScale
            : 40.0f;

        TargetLocation = LastResult.WorldLocation
            + WallNormal * MantleForwardOffset
            + FVector(0.0f, 0.0f, MantleUpOffset);
        break;
    }
    case ESOTS_ParkourAction::Drop:
    {
        TargetLocation = Character->GetActorLocation() - FVector(0.0f, 0.0f, DropStepDown);
        break;
    }
    default:
        // For other actions (vault, etc.), SPINE 6 does nothing yet.
        return;
    }

    FHitResult MoveHit;
    Character->SetActorLocation(TargetLocation, true, &MoveHit, ETeleportType::TeleportPhysics);

#if !(UE_BUILD_SHIPPING || UE_BUILD_TEST)
    if (bEnableDebugLogging)
    {
        DrawDebugSphere(World, TargetLocation, 12.0f, 12, FColor::Cyan, false, 2.0f);
    }
#endif

    // For SPINE 6, treat this as an instant action and immediately move to
    // Exiting -> Idle. We keep LastResult around for debug.
    ParkourState      = ESOTS_ParkourState::Exiting;
    CurrentAction     = ESOTS_ParkourAction::None;
    CurrentClimbStyle = ESOTS_ClimbStyle::None;
    ParkourState      = ESOTS_ParkourState::Idle;
}

void USOTS_ParkourComponent::RequestParkour()
{
    if (!CanAttemptParkourInternal())
    {
        return;
    }

    LastResult.Reset();
    ParkourState = ESOTS_ParkourState::Entering;

    FSOTS_ParkourResult Candidate;
    if (!TryDetectSimpleParkourOpportunity(Candidate))
    {
        // No valid opportunity found; return to Idle, keep LastResult reset.
        ParkourState = ESOTS_ParkourState::Idle;

#if !(UE_BUILD_SHIPPING || UE_BUILD_TEST)
        if (bEnableDebugLogging)
        {
            if (AActor* Owner = GetOwner())
            {
                UE_LOG(LogTemp, Verbose, TEXT("[SOTS_Parkour] No valid parkour opportunity for %s"), *Owner->GetName());
            }
        }
#endif

        return;
    }

    LastResult         = Candidate;
    CurrentAction      = LastResult.Action;
    CurrentClimbStyle  = LastResult.ClimbStyle;
    ParkourState       = ESOTS_ParkourState::Active;

#if !(UE_BUILD_SHIPPING || UE_BUILD_TEST)
    if (bEnableDebugLogging)
    {
        if (AActor* Owner = GetOwner())
        {
            UE_LOG(LogTemp, Verbose,
                TEXT("[SOTS_Parkour] Parkour result for %s: Action=%d, ClimbStyle=%d, Loc=%s"),
                *Owner->GetName(),
                static_cast<int32>(LastResult.Action),
                static_cast<int32>(LastResult.ClimbStyle),
                *LastResult.WorldLocation.ToString());
        }
    }
#endif

    // SPINE 6: Perform a very simple warp for basic actions, using config-driven
    // offsets when available. Later passes will replace this with proper
    // timelines, root motion, and integration with GASP / animation blueprints.
    ExecuteCurrentParkour();
}

void USOTS_ParkourComponent::CancelParkour()
{
    if (ParkourState == ESOTS_ParkourState::Idle)
    {
        // Nothing to cancel.
        return;
    }

    // Clear current action/context.
    CurrentAction     = ESOTS_ParkourAction::None;
    CurrentClimbStyle = ESOTS_ClimbStyle::None;
    LastResult.Reset();

    // Later we may want a proper Exiting state with animations. For now,
    // go straight back to Idle for safety and simplicity.
    ParkourState = ESOTS_ParkourState::Idle;
}

bool USOTS_ParkourComponent::ValidateCurrentConfig(FString& OutError) const
{
    OutError.Reset();

    // No config assigned is not an error; we just use internal defaults.
    if (!ParkourConfig)
    {
        OutError = TEXT("No ParkourConfig assigned; using internal defaults.");
        return true;
    }

    bool bOk = true;
    FString LocalError;

    auto AppendIssue = [&LocalError, &bOk](const FString& Issue)
    {
        bOk = false;
        if (!LocalError.IsEmpty())
        {
            LocalError += TEXT(" | ");
        }
        LocalError += Issue;
    };

    if (ParkourConfig->ForwardTraceDistance <= 0.0f)
    {
        AppendIssue(TEXT("ForwardTraceDistance must be > 0"));
    }

    if (ParkourConfig->TraceVerticalOffset < -5000.0f || ParkourConfig->TraceVerticalOffset > 5000.0f)
    {
        AppendIssue(TEXT("TraceVerticalOffset is extremely large (check units)"));
    }

    if (ParkourConfig->MantleMinHeight < 0.0f)
    {
        AppendIssue(TEXT("MantleMinHeight should not be negative"));
    }

    if (ParkourConfig->MantleMaxHeight < ParkourConfig->MantleMinHeight)
    {
        AppendIssue(TEXT("MantleMaxHeight < MantleMinHeight"));
    }

    if (ParkourConfig->MaxSafeDropHeight < 0.0f)
    {
        AppendIssue(TEXT("MaxSafeDropHeight should not be negative"));
    }

    if (ParkourConfig->MantleForwardOffsetScale <= 0.0f)
    {
        AppendIssue(TEXT("MantleForwardOffsetScale should be > 0"));
    }

    if (ParkourConfig->MantleUpOffsetScale <= 0.0f)
    {
        AppendIssue(TEXT("MantleUpOffsetScale should be > 0"));
    }

    if (ParkourConfig->DropStepDownDistance < 0.0f)
    {
        AppendIssue(TEXT("DropStepDownDistance should not be negative"));
    }

    if (!bOk)
    {
        OutError = LocalError;
        return false;
    }

    OutError = TEXT("Basic ParkourConfig sanity checks passed.");
    return true;
}
