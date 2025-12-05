// SOTS_ParkourTypes.h
// Core enums and result struct for SOTS parkour (SPINE 1 baseline).

#pragma once

#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "SOTS_ParkourTypes.generated.h"

/** High-level state of the parkour component. */
UENUM(BlueprintType)
enum class ESOTS_ParkourState : uint8
{
    Idle        UMETA(DisplayName = "Idle"),
    Entering    UMETA(DisplayName = "Entering"),
    Active      UMETA(DisplayName = "Active"),
    Exiting     UMETA(DisplayName = "Exiting")
};

/** Style of climbing the player is currently using. */
UENUM(BlueprintType)
enum class ESOTS_ClimbStyle : uint8
{
    None        UMETA(DisplayName = "None"),
    FreeHang    UMETA(DisplayName = "Free Hang"),
    Braced      UMETA(DisplayName = "Braced")
};

/** The type of parkour action selected from the detection/classification step. */
UENUM(BlueprintType)
enum class ESOTS_ParkourAction : uint8
{
    None            UMETA(DisplayName = "None"),
    Mantle          UMETA(DisplayName = "Mantle"),
    Vault           UMETA(DisplayName = "Vault"),
    LedgeMove       UMETA(DisplayName = "Ledge Move"),
    Drop            UMETA(DisplayName = "Drop"),
    TicTac          UMETA(DisplayName = "Tic Tac"),
    BackHop         UMETA(DisplayName = "Back Hop"),
    PredictJump     UMETA(DisplayName = "Predictive Jump"),
    AirHang         UMETA(DisplayName = "Air Hang")
};

/**
 * Unified result container for a single parkour opportunity evaluation.
 * Later passes will mirror the full CGF result family inside this struct.
 */
USTRUCT(BlueprintType)
struct SOTS_PARKOUR_API FSOTS_ParkourResult
{
    GENERATED_BODY()

public:
    /** Whether this result contains a valid parkour opportunity. */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "SOTS|Parkour")
    bool bHasResult = false;

    /** The chosen parkour action (mantle, vault, tic-tac, etc). */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "SOTS|Parkour")
    ESOTS_ParkourAction Action = ESOTS_ParkourAction::None;

    /** The climbing style (e.g. free hang vs braced). */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "SOTS|Parkour")
    ESOTS_ClimbStyle ClimbStyle = ESOTS_ClimbStyle::None;

    /** Representative world-space location for this result (e.g. ledge point). */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "SOTS|Parkour")
    FVector WorldLocation = FVector::ZeroVector;

    /** Representative world-space normal (e.g. wall or ledge normal). */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "SOTS|Parkour")
    FVector WorldNormal = FVector::UpVector;

    /** Raw hit information used to derive this result (first/primary hit). */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "SOTS|Parkour")
    FHitResult Hit;

    FSOTS_ParkourResult() = default;

    /** Reset all fields to a clean, invalid state. */
    void Reset()
    {
        bHasResult   = false;
        Action       = ESOTS_ParkourAction::None;
        ClimbStyle   = ESOTS_ClimbStyle::None;
        WorldLocation = FVector::ZeroVector;
        WorldNormal   = FVector::UpVector;
        Hit           = FHitResult();
    }
};
