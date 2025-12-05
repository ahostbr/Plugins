#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SOTS_ParkourConfig.generated.h"

/**
 * Data-driven tuning for the simple SOTS_Parkour detect/execute flow.
 *
 * SPINE 4 keeps this focused on the basics:
 *   - How far / high we probe for a ledge.
 *   - Mantle height thresholds.
 *   - Max safe drop height.
 *   - Warp offsets for mantle/drop execution.
 *
 * Later passes can extend this with OmniTrace, anchors, and full TNT parity.
 */
UCLASS(BlueprintType)
class SOTS_PARKOUR_API USOTS_ParkourConfig : public UDataAsset
{
    GENERATED_BODY()

public:
    USOTS_ParkourConfig();

    // --------------------------------------------------------------------
    // Detection / probe tuning
    // --------------------------------------------------------------------

    /** How far forward to trace when searching for a simple ledge/wall. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SOTS|Parkour|Detection")
    float ForwardTraceDistance;

    /** Vertical offset above character origin for the forward trace. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SOTS|Parkour|Detection")
    float TraceVerticalOffset;

    // --------------------------------------------------------------------
    // Classification thresholds
    // --------------------------------------------------------------------

    /** Minimum height above feet to consider something mantle-able. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SOTS|Parkour|Classification|Mantle")
    float MantleMinHeight;

    /** Maximum height above feet to consider something mantle-able. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SOTS|Parkour|Classification|Mantle")
    float MantleMaxHeight;

    /**
     * Maximum distance BELOW the character's feet we consider a "safe drop"
     * in the current simple flow.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SOTS|Parkour|Classification|Drop")
    float MaxSafeDropHeight;

    // --------------------------------------------------------------------
    // Execution offsets
    // --------------------------------------------------------------------

    /**
     * Mantle forward offset multiplier.
     *   Final forward offset ≈ CapsuleRadius * MantleForwardOffsetScale.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SOTS|Parkour|Execution|Mantle")
    float MantleForwardOffsetScale;

    /**
     * Mantle vertical offset multiplier.
     *   Final up offset ≈ CapsuleHalfHeight * MantleUpOffsetScale.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SOTS|Parkour|Execution|Mantle")
    float MantleUpOffsetScale;

    /**
     * Fixed distance to move the character downward for a simple drop.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SOTS|Parkour|Execution|Drop")
    float DropStepDownDistance;
};
