// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystems/SOTS_GAS_StealthBridgeSubsystem.h"

#ifdef SOTS_GAS_PLUGIN_SOTS_GAS_StealthBridgeSubsystem_generated_h
#error "SOTS_GAS_StealthBridgeSubsystem.generated.h already included, missing '#pragma once' in SOTS_GAS_StealthBridgeSubsystem.h"
#endif
#define SOTS_GAS_PLUGIN_SOTS_GAS_StealthBridgeSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESOTSStealthLevel : uint8;
struct FSOTS_StealthScoreBreakdown;

// ********** Begin Class USOTS_GAS_StealthBridgeSubsystem *****************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Subsystems_SOTS_GAS_StealthBridgeSubsystem_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCurrentStealthModifierMultiplier); \
	DECLARE_FUNCTION(execIsStealthTierAtLeast); \
	DECLARE_FUNCTION(execGetCurrentStealthBreakdown); \
	DECLARE_FUNCTION(execHandleStealthLevelChanged); \
	DECLARE_FUNCTION(execGetCurrentStealthTier); \
	DECLARE_FUNCTION(execGetCurrentStealthScore);


struct Z_Construct_UClass_USOTS_GAS_StealthBridgeSubsystem_Statics;
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_USOTS_GAS_StealthBridgeSubsystem_NoRegister();

#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Subsystems_SOTS_GAS_StealthBridgeSubsystem_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSOTS_GAS_StealthBridgeSubsystem(); \
	friend struct ::Z_Construct_UClass_USOTS_GAS_StealthBridgeSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOTS_GAS_PLUGIN_API UClass* ::Z_Construct_UClass_USOTS_GAS_StealthBridgeSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(USOTS_GAS_StealthBridgeSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SOTS_GAS_Plugin"), Z_Construct_UClass_USOTS_GAS_StealthBridgeSubsystem_NoRegister) \
	DECLARE_SERIALIZER(USOTS_GAS_StealthBridgeSubsystem)


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Subsystems_SOTS_GAS_StealthBridgeSubsystem_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USOTS_GAS_StealthBridgeSubsystem(USOTS_GAS_StealthBridgeSubsystem&&) = delete; \
	USOTS_GAS_StealthBridgeSubsystem(const USOTS_GAS_StealthBridgeSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USOTS_GAS_StealthBridgeSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USOTS_GAS_StealthBridgeSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USOTS_GAS_StealthBridgeSubsystem) \
	NO_API virtual ~USOTS_GAS_StealthBridgeSubsystem();


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Subsystems_SOTS_GAS_StealthBridgeSubsystem_h_16_PROLOG
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Subsystems_SOTS_GAS_StealthBridgeSubsystem_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Subsystems_SOTS_GAS_StealthBridgeSubsystem_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Subsystems_SOTS_GAS_StealthBridgeSubsystem_h_19_INCLASS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Subsystems_SOTS_GAS_StealthBridgeSubsystem_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USOTS_GAS_StealthBridgeSubsystem;

// ********** End Class USOTS_GAS_StealthBridgeSubsystem *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Subsystems_SOTS_GAS_StealthBridgeSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
