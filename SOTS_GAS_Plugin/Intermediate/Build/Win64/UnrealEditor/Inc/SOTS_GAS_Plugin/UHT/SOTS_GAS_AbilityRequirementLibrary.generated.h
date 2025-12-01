// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SOTS_GAS_AbilityRequirementLibrary.h"

#ifdef SOTS_GAS_PLUGIN_SOTS_GAS_AbilityRequirementLibrary_generated_h
#error "SOTS_GAS_AbilityRequirementLibrary.generated.h already included, missing '#pragma once' in SOTS_GAS_AbilityRequirementLibrary.h"
#endif
#define SOTS_GAS_PLUGIN_SOTS_GAS_AbilityRequirementLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USOTS_AbilityRequirementLibraryAsset;
struct FGameplayTag;
struct FSOTS_AbilityRequirementCheckResult;
struct FSOTS_AbilityRequirements;

// ********** Begin ScriptStruct FSOTS_AbilityRequirementCheckResult *******************************
struct Z_Construct_UScriptStruct_FSOTS_AbilityRequirementCheckResult_Statics;
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_SOTS_GAS_AbilityRequirementLibrary_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSOTS_AbilityRequirementCheckResult_Statics; \
	SOTS_GAS_PLUGIN_API static class UScriptStruct* StaticStruct();


struct FSOTS_AbilityRequirementCheckResult;
// ********** End ScriptStruct FSOTS_AbilityRequirementCheckResult *********************************

// ********** Begin Class USOTS_GAS_AbilityRequirementLibrary **************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_SOTS_GAS_AbilityRequirementLibrary_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDescribeAbilityRequirementCheckResult); \
	DECLARE_FUNCTION(execSOTS_CanActivateAbilityByTag); \
	DECLARE_FUNCTION(execCanActivateAbilityWithRequirements); \
	DECLARE_FUNCTION(execEvaluateAbilityRequirementsWithReason); \
	DECLARE_FUNCTION(execEvaluateAbilityRequirements); \
	DECLARE_FUNCTION(execEvaluateAbilityRequirementsFromLibrary); \
	DECLARE_FUNCTION(execEvaluateAbilityFromLibraryWithReason);


struct Z_Construct_UClass_USOTS_GAS_AbilityRequirementLibrary_Statics;
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_USOTS_GAS_AbilityRequirementLibrary_NoRegister();

#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_SOTS_GAS_AbilityRequirementLibrary_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSOTS_GAS_AbilityRequirementLibrary(); \
	friend struct ::Z_Construct_UClass_USOTS_GAS_AbilityRequirementLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOTS_GAS_PLUGIN_API UClass* ::Z_Construct_UClass_USOTS_GAS_AbilityRequirementLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(USOTS_GAS_AbilityRequirementLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SOTS_GAS_Plugin"), Z_Construct_UClass_USOTS_GAS_AbilityRequirementLibrary_NoRegister) \
	DECLARE_SERIALIZER(USOTS_GAS_AbilityRequirementLibrary)


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_SOTS_GAS_AbilityRequirementLibrary_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USOTS_GAS_AbilityRequirementLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USOTS_GAS_AbilityRequirementLibrary(USOTS_GAS_AbilityRequirementLibrary&&) = delete; \
	USOTS_GAS_AbilityRequirementLibrary(const USOTS_GAS_AbilityRequirementLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USOTS_GAS_AbilityRequirementLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USOTS_GAS_AbilityRequirementLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USOTS_GAS_AbilityRequirementLibrary) \
	NO_API virtual ~USOTS_GAS_AbilityRequirementLibrary();


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_SOTS_GAS_AbilityRequirementLibrary_h_35_PROLOG
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_SOTS_GAS_AbilityRequirementLibrary_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_SOTS_GAS_AbilityRequirementLibrary_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_SOTS_GAS_AbilityRequirementLibrary_h_38_INCLASS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_SOTS_GAS_AbilityRequirementLibrary_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USOTS_GAS_AbilityRequirementLibrary;

// ********** End Class USOTS_GAS_AbilityRequirementLibrary ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_SOTS_GAS_AbilityRequirementLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
