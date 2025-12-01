// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprint/SOTS_AbilityBlueprintLibrary.h"

#ifdef SOTS_GAS_PLUGIN_SOTS_AbilityBlueprintLibrary_generated_h
#error "SOTS_AbilityBlueprintLibrary.generated.h already included, missing '#pragma once' in SOTS_AbilityBlueprintLibrary.h"
#endif
#define SOTS_GAS_PLUGIN_SOTS_AbilityBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAC_SOTS_Abilitys;
enum class E_SOTS_AbilityActivationResult : uint8;
struct F_SOTS_AbilityActivationContext;
struct F_SOTS_AbilityGrantOptions;
struct F_SOTS_AbilityHandle;
struct FGameplayTag;

// ********** Begin Class USOTS_AbilityBlueprintLibrary ********************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Blueprint_SOTS_AbilityBlueprintLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSOTS_CancelAllAbilities); \
	DECLARE_FUNCTION(execSOTS_TryActivateAbility); \
	DECLARE_FUNCTION(execSOTS_GrantAbility); \
	DECLARE_FUNCTION(execGetAbilityComponentFromActor);


struct Z_Construct_UClass_USOTS_AbilityBlueprintLibrary_Statics;
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_USOTS_AbilityBlueprintLibrary_NoRegister();

#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Blueprint_SOTS_AbilityBlueprintLibrary_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSOTS_AbilityBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_USOTS_AbilityBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOTS_GAS_PLUGIN_API UClass* ::Z_Construct_UClass_USOTS_AbilityBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(USOTS_AbilityBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SOTS_GAS_Plugin"), Z_Construct_UClass_USOTS_AbilityBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(USOTS_AbilityBlueprintLibrary)


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Blueprint_SOTS_AbilityBlueprintLibrary_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USOTS_AbilityBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USOTS_AbilityBlueprintLibrary(USOTS_AbilityBlueprintLibrary&&) = delete; \
	USOTS_AbilityBlueprintLibrary(const USOTS_AbilityBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USOTS_AbilityBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USOTS_AbilityBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USOTS_AbilityBlueprintLibrary) \
	NO_API virtual ~USOTS_AbilityBlueprintLibrary();


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Blueprint_SOTS_AbilityBlueprintLibrary_h_10_PROLOG
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Blueprint_SOTS_AbilityBlueprintLibrary_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Blueprint_SOTS_AbilityBlueprintLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Blueprint_SOTS_AbilityBlueprintLibrary_h_13_INCLASS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Blueprint_SOTS_AbilityBlueprintLibrary_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USOTS_AbilityBlueprintLibrary;

// ********** End Class USOTS_AbilityBlueprintLibrary **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Blueprint_SOTS_AbilityBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
