// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystems/SOTS_AbilitySubsystem.h"

#ifdef SOTS_GAS_PLUGIN_SOTS_AbilitySubsystem_generated_h
#error "SOTS_AbilitySubsystem.generated.h already included, missing '#pragma once' in SOTS_AbilitySubsystem.h"
#endif
#define SOTS_GAS_PLUGIN_SOTS_AbilitySubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USOTS_AbilitySubsystem;
struct FGameplayTag;

// ********** Begin Class USOTS_AbilitySubsystem ***************************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Subsystems_SOTS_AbilitySubsystem_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAbilityProfileSummary); \
	DECLARE_FUNCTION(execGetAbilityCooldownRemaining); \
	DECLARE_FUNCTION(execSetAbilityCooldownRemaining); \
	DECLARE_FUNCTION(execGetAbilityRank); \
	DECLARE_FUNCTION(execSetAbilityRank); \
	DECLARE_FUNCTION(execHasAbility); \
	DECLARE_FUNCTION(execRemoveAbility); \
	DECLARE_FUNCTION(execGrantAbility); \
	DECLARE_FUNCTION(execGet);


struct Z_Construct_UClass_USOTS_AbilitySubsystem_Statics;
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_USOTS_AbilitySubsystem_NoRegister();

#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Subsystems_SOTS_AbilitySubsystem_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSOTS_AbilitySubsystem(); \
	friend struct ::Z_Construct_UClass_USOTS_AbilitySubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOTS_GAS_PLUGIN_API UClass* ::Z_Construct_UClass_USOTS_AbilitySubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(USOTS_AbilitySubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SOTS_GAS_Plugin"), Z_Construct_UClass_USOTS_AbilitySubsystem_NoRegister) \
	DECLARE_SERIALIZER(USOTS_AbilitySubsystem)


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Subsystems_SOTS_AbilitySubsystem_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USOTS_AbilitySubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USOTS_AbilitySubsystem(USOTS_AbilitySubsystem&&) = delete; \
	USOTS_AbilitySubsystem(const USOTS_AbilitySubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USOTS_AbilitySubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USOTS_AbilitySubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USOTS_AbilitySubsystem) \
	NO_API virtual ~USOTS_AbilitySubsystem();


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Subsystems_SOTS_AbilitySubsystem_h_10_PROLOG
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Subsystems_SOTS_AbilitySubsystem_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Subsystems_SOTS_AbilitySubsystem_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Subsystems_SOTS_AbilitySubsystem_h_13_INCLASS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Subsystems_SOTS_AbilitySubsystem_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USOTS_AbilitySubsystem;

// ********** End Class USOTS_AbilitySubsystem *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Subsystems_SOTS_AbilitySubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
