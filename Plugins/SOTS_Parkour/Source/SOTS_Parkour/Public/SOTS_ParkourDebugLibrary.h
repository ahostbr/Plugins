#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "SOTS_ParkourTypes.h"
#include "SOTS_ParkourDebugLibrary.generated.h"

class USOTS_ParkourComponent;

/**
 * Lightweight debug helpers for SOTS_Parkour.
 *
 * Intentionally small and runtime-safe:
 *   - DrawParkourResult: visualize an FSOTS_ParkourResult in the world.
 *   - DescribeParkourResult: build a compact text summary of LastResult.
 *   - LogParkourResultToScreen: print LastResult summary to screen (PIE).
 *   - LogParkourResultToLog: write LastResult summary to the output log.
 *
 * All heavy work is wrapped in non-shipping guards in the .cpp so these are
 * effectively free in Shipping/Test builds.
 */
UCLASS()
class SOTS_PARKOUR_API USOTS_ParkourDebugLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	/**
	 * Draws a simple visualization of a parkour result:
	 *   - A sphere at the result location.
	 *   - A line showing the surface normal.
	 *
	 * Does nothing if:
	 *   - WorldContextObject is invalid.
	 *   - Result.bHasResult is false.
	 *   - Called in Shipping/Test builds.
	 */
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", DevelopmentOnly), Category = "SOTS|Parkour|Debug")
	static void DrawParkourResult(const UObject* WorldContextObject, const FSOTS_ParkourResult& Result, float Duration = 2.0f, float Thickness = 1.5f);

	/**
	 * Returns a compact text description of the component's LastResult.
	 *
	 * Example output:
	 *   "HasResult=true; Action=Mantle; ClimbStyle=Braced; Loc=X=...,Y=...,Z=..."
	 *
	 * Returns an empty string if the component is invalid or has no result.
	 */
	UFUNCTION(BlueprintPure, Category = "SOTS|Parkour|Debug")
	static FString DescribeParkourResult(const USOTS_ParkourComponent* ParkourComponent);

	/**
	 * Logs the component's LastResult (via DescribeParkourResult) to the screen.
	 *
	 * - Does nothing if the component is invalid or has no result.
	 * - Wrapped in non-shipping guards; safe to call from gameplay code.
	 *
	 * @param ParkourComponent  Component to inspect.
	 * @param Duration          On-screen message lifetime (seconds).
	 * @param Key               Optional key for AddOnScreenDebugMessage (0 for auto).
	 */
	UFUNCTION(BlueprintCallable, meta = (DevelopmentOnly), Category = "SOTS|Parkour|Debug")
	static void LogParkourResultToScreen(const USOTS_ParkourComponent* ParkourComponent, float Duration = 2.0f, int32 Key = 0);

	/**
	 * Logs the component's LastResult (via DescribeParkourResult) to the output log.
	 *
	 * - Does nothing if the component is invalid or has no result.
	 * - Wrapped in non-shipping guards; safe to call from gameplay code.
	 */
	UFUNCTION(BlueprintCallable, meta = (DevelopmentOnly), Category = "SOTS|Parkour|Debug")
	static void LogParkourResultToLog(const USOTS_ParkourComponent* ParkourComponent);
};
