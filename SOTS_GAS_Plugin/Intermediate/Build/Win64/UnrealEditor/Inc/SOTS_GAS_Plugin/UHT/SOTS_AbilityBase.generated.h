// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/SOTS_AbilityBase.h"

#ifdef SOTS_GAS_PLUGIN_SOTS_AbilityBase_generated_h
#error "SOTS_AbilityBase.generated.h already included, missing '#pragma once' in SOTS_AbilityBase.h"
#endif
#define SOTS_GAS_PLUGIN_SOTS_AbilityBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAC_SOTS_Abilitys;
enum class ESOTS_StealthTier : uint8;
struct F_SOTS_AbilityActivationContext;
struct F_SOTS_AbilityDefinition;
struct F_SOTS_AbilityHandle;
struct FSOTS_StealthModifier;

// ********** Begin Class USOTS_AbilityBase ********************************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Abilities_SOTS_AbilityBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveStealthModifierFromWorld); \
	DECLARE_FUNCTION(execApplyStealthModifierToWorld); \
	DECLARE_FUNCTION(execGetOwnerStealthTier); \
	DECLARE_FUNCTION(execGetOwnerGlobalStealthScore01); \
	DECLARE_FUNCTION(execGetOwnerLightLevel01); \
	DECLARE_FUNCTION(execInitialize);


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Abilities_SOTS_AbilityBase_h_16_CALLBACK_WRAPPERS
struct Z_Construct_UClass_USOTS_AbilityBase_Statics;
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_USOTS_AbilityBase_NoRegister();

#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Abilities_SOTS_AbilityBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSOTS_AbilityBase(); \
	friend struct ::Z_Construct_UClass_USOTS_AbilityBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOTS_GAS_PLUGIN_API UClass* ::Z_Construct_UClass_USOTS_AbilityBase_NoRegister(); \
public: \
	DECLARE_CLASS2(USOTS_AbilityBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SOTS_GAS_Plugin"), Z_Construct_UClass_USOTS_AbilityBase_NoRegister) \
	DECLARE_SERIALIZER(USOTS_AbilityBase)


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Abilities_SOTS_AbilityBase_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USOTS_AbilityBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USOTS_AbilityBase(USOTS_AbilityBase&&) = delete; \
	USOTS_AbilityBase(const USOTS_AbilityBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USOTS_AbilityBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USOTS_AbilityBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USOTS_AbilityBase) \
	NO_API virtual ~USOTS_AbilityBase();


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Abilities_SOTS_AbilityBase_h_13_PROLOG
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Abilities_SOTS_AbilityBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Abilities_SOTS_AbilityBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Abilities_SOTS_AbilityBase_h_16_CALLBACK_WRAPPERS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Abilities_SOTS_AbilityBase_h_16_INCLASS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Abilities_SOTS_AbilityBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USOTS_AbilityBase;

// ********** End Class USOTS_AbilityBase **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Abilities_SOTS_AbilityBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
