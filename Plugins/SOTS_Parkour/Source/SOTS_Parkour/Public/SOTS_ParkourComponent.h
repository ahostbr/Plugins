// SOTS_ParkourComponent.h
// SPINE 6: ActorComponent for SOTS parkour with high-level
// entry/exit flow, owner caching, a minimal local-only detection
// path, and a simple execution step that warps the character for
// basic Mantle/Drop actions.
// This pass keeps USOTS_ParkourConfig wiring and debug gating
// from previous spines, and adds a small config validation helper
// used during BeginPlay when debug is enabled.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SOTS_ParkourTypes.h"
#include "SOTS_ParkourComponent.generated.h"

class ACharacter;
class UCharacterMovementComponent;
class USOTS_ParkourConfig;

UCLASS(ClassGroup = (SOTS), meta = (BlueprintSpawnableComponent))
class SOTS_PARKOUR_API USOTS_ParkourComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    USOTS_ParkourComponent();

protected:
    virtual void BeginPlay() override;

public:
    /** Returns true if the parkour system considers itself currently active. */
    UFUNCTION(BlueprintPure, Category = "SOTS|Parkour")
    bool IsParkourActive() const { return ParkourState == ESOTS_ParkourState::Active; }

    /** Current high-level parkour state (idle, entering, active, exiting). */
    UFUNCTION(BlueprintPure, Category = "SOTS|Parkour")
    ESOTS_ParkourState GetParkourState() const { return ParkourState; }

    /** Current climb style (free hang vs braced). */
    UFUNCTION(BlueprintPure, Category = "SOTS|Parkour")
    ESOTS_ClimbStyle GetCurrentClimbStyle() const { return CurrentClimbStyle; }

    /** Current parkour action (mantle, vault, drop, etc). */
    UFUNCTION(BlueprintPure, Category = "SOTS|Parkour")
    ESOTS_ParkourAction GetCurrentAction() const { return CurrentAction; }

    /** Last computed parkour result from a detection pass. */
    UFUNCTION(BlueprintPure, Category = "SOTS|Parkour")
    const FSOTS_ParkourResult& GetLastResult() const { return LastResult; }

    /** Current config asset (may be null; component will fall back to defaults). */
    UFUNCTION(BlueprintPure, Category = "SOTS|Parkour|Config")
    USOTS_ParkourConfig* GetParkourConfig() const { return ParkourConfig; }

    /** Assign a config at runtime if you want to swap tuning via Blueprint or code. */
    UFUNCTION(BlueprintCallable, Category = "SOTS|Parkour|Config")
    void SetParkourConfig(USOTS_ParkourConfig* InConfig) { ParkourConfig = InConfig; }

    /**
     * Request that parkour begin.
     *
     * SPINE 6 behavior:
     *   - Only allowed from Idle state.
     *   - Runs a minimal local-only detection pass (no OmniTrace yet), using
     *     ParkourConfig when assigned (or built-in defaults otherwise).
     *   - If a valid opportunity is found:
     *       * Fills LastResult.
     *       * Sets ParkourState to Active, then Exiting, then Idle again
     *         after executing a simple warp for basic actions.
     *   - If no valid opportunity is found:
     *       * Leaves LastResult reset.
     *       * ParkourState returns to Idle.
     */
    UFUNCTION(BlueprintCallable, Category = "SOTS|Parkour")
    void RequestParkour();

    /**
     * Cancel/stop parkour for the owning actor.
     *
     * In SPINE 6 this simply resets state and clears the last result. Later
     * passes will add proper transition handling (e.g., exit animations).
     */
    UFUNCTION(BlueprintCallable, Category = "SOTS|Parkour")
    void CancelParkour();

protected:
    // --------------------------------------------------------------------
    // Config & debug
    // --------------------------------------------------------------------

    /** Optional config asset; if null, the component uses internal defaults. */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "SOTS|Parkour|Config")
    USOTS_ParkourConfig* ParkourConfig = nullptr;

    /**
     * When true (and in non-shipping builds), the component will emit extra
     * debug lines, spheres, and log messages to help with tuning.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SOTS|Parkour|Debug")
    bool bEnableDebugLogging = false;

    // --------------------------------------------------------------------
    // Runtime state
    // --------------------------------------------------------------------

    /** High-level state of the parkour system for this actor. */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "SOTS|Parkour|State")
    ESOTS_ParkourState ParkourState = ESOTS_ParkourState::Idle;

    /** Climb style currently selected (mapped from CGF logic in later passes). */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "SOTS|Parkour|State")
    ESOTS_ClimbStyle CurrentClimbStyle = ESOTS_ClimbStyle::None;

    /** The parkour action chosen by the last successful classification. */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "SOTS|Parkour|State")
    ESOTS_ParkourAction CurrentAction = ESOTS_ParkourAction::None;

    /** Unified result container for the last parkour opportunity evaluation. */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "SOTS|Parkour|State")
    FSOTS_ParkourResult LastResult;

    /** Cached owning character (if the owner is a character). */
    UPROPERTY(Transient)
    TWeakObjectPtr<ACharacter> CachedCharacter;

    /** Cached movement component from the owning character (if available). */
    UPROPERTY(Transient)
    UCharacterMovementComponent* CachedMovementComponent = nullptr;

    /** Simple internal helper: can the owner currently attempt parkour at all? */
    bool CanAttemptParkourInternal() const;

    /**
     * SPINE 2/4/5/6: Minimal local-only detection pass that tries to find a simple
     * forward ledge/wall opportunity in front of the character and classify it
     * into a basic action (e.g., Mantle vs Drop), using config-driven tuning.
     *
     * Returns true and fills OutResult if a valid opportunity exists.
     */
    bool TryDetectSimpleParkourOpportunity(FSOTS_ParkourResult& OutResult) const;

    /**
     * SPINE 3/4/5/6: Very simple execution step for the current action.
     * - Mantle: warps the character to a point slightly above and beyond
     *   the hit location on top of the ledge (config-driven scales).
     * - Drop: warps the character downward by a fixed offset (config-driven).
     *
     * This is a placeholder for future timeline/root-motion behavior.
     */
    void ExecuteCurrentParkour();

    /**
     * SPINE 6: Debug-only validation helper for the current ParkourConfig.
     * - Returns true if the config looks sane (or if no config is assigned).
     * - Returns false and fills OutError with a summary if any obvious
     *   problems are detected (negative distances, max < min, etc.).
     *
     * This is only called from BeginPlay when bEnableDebugLogging is true.
     */
    bool ValidateCurrentConfig(FString& OutError) const;
};
