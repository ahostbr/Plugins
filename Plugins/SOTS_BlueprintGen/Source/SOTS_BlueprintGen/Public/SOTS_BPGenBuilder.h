#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SOTS_BPGenTypes.h"
#include "SOTS_BPGenBuilder.generated.h"

/**
 * Central Blueprint generation builder API.
 *
 * SPINE 2 provides stub implementations that log their usage
 * but do not yet perform real asset or graph creation. Later
 * passes will replace the stubs with full logic.
 */
UCLASS()
class SOTS_BLUEPRINTGEN_API USOTS_BPGenBuilder : public UObject
{
	GENERATED_BODY()

public:
	/**
	 * Create or update a user-defined struct asset based on the
	 * provided definition.
	 */
	UFUNCTION(BlueprintCallable, Category = "SOTS|BPGen", meta = (WorldContext = "WorldContextObject"))
	static FSOTS_BPGenAssetResult CreateStructAssetFromDef(
		const UObject* WorldContextObject,
		const FSOTS_BPGenStructDef& StructDef);

	/**
	 * Create or update a user-defined enum asset based on the
	 * provided definition.
	 */
	UFUNCTION(BlueprintCallable, Category = "SOTS|BPGen", meta = (WorldContext = "WorldContextObject"))
	static FSOTS_BPGenAssetResult CreateEnumAssetFromDef(
		const UObject* WorldContextObject,
		const FSOTS_BPGenEnumDef& EnumDef);

	/**
	 * Ensure a function graph exists in the given Blueprint that
	 * matches the provided definition (name + IO pins).
	 *
	 * NOTE: SPINE 2 only stubs this; graph wiring will be implemented
	 * in a later pass.
	 */
	UFUNCTION(BlueprintCallable, Category = "SOTS|BPGen", meta = (WorldContext = "WorldContextObject"))
	static FSOTS_BPGenApplyResult ApplyFunctionSkeleton(
		const UObject* WorldContextObject,
		const FSOTS_BPGenFunctionDef& FunctionDef);

	/**
	 * Apply a graph specification (nodes + links) to an existing
	 * function graph. The function graph is expected to have been
	 * created by ApplyFunctionSkeleton.
	 *
	 * NOTE: SPINE 2 only stubs this; node spawning will be implemented
	 * in a later pass.
	 */
	UFUNCTION(BlueprintCallable, Category = "SOTS|BPGen", meta = (WorldContext = "WorldContextObject"))
	static FSOTS_BPGenApplyResult ApplyGraphSpecToFunction(
		const UObject* WorldContextObject,
		const FSOTS_BPGenFunctionDef& FunctionDef,
		const FSOTS_BPGenGraphSpec& GraphSpec);
};
