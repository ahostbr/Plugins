#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "SOTS_ParkourTypes.h"
#include "SOTS_ParkourBridgeLibrary.generated.h"

class USOTS_ParkourComponent;

/**
 * Lightweight bridge helpers so the rest of SOTS (TagManager, GSM, Stats, MissionDirector)
 * can query parkour state/action in a stable, label-based way without depending on internal
 * implementation details of USOTS_ParkourComponent.
 *
 * Intentionally very thin:
 *   - Turns ESOTS_ParkourState into an FName label.
 *   - Turns ESOTS_ParkourAction (from LastResult) into an FName label.
 *   - Exposes a simple "has valid result" helper for mission/telemetry checks.
 *
 * Other systems are free to translate those labels into gameplay tags, telemetry keys, etc.
 */
UCLASS()
class SOTS_PARKOUR_API USOTS_ParkourBridgeLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	/** Returns a simple FName label for the current high-level parkour state. */
	UFUNCTION(BlueprintPure, Category = "SOTS|Parkour|Bridge")
	static FName GetParkourStateLabel(const USOTS_ParkourComponent* ParkourComponent);

	/** Returns a simple FName label for the last classified parkour action, if any. */
	UFUNCTION(BlueprintPure, Category = "SOTS|Parkour|Bridge")
	static FName GetParkourActionLabel(const USOTS_ParkourComponent* ParkourComponent);

	/** True if the component currently has a valid classified parkour result. */
	UFUNCTION(BlueprintPure, Category = "SOTS|Parkour|Bridge")
	static bool HasValidParkourResult(const USOTS_ParkourComponent* ParkourComponent);
};
