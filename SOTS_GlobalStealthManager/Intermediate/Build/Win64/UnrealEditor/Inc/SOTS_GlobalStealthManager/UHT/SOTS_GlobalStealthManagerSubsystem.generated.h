// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SOTS_GlobalStealthManagerSubsystem.h"

#ifdef SOTS_GLOBALSTEALTHMANAGER_SOTS_GlobalStealthManagerSubsystem_generated_h
#error "SOTS_GlobalStealthManagerSubsystem.generated.h already included, missing '#pragma once' in SOTS_GlobalStealthManagerSubsystem.h"
#endif
#define SOTS_GLOBALSTEALTHMANAGER_SOTS_GlobalStealthManagerSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
class USOTS_GlobalStealthManagerSubsystem;
class USOTS_StealthConfigDataAsset;
enum class ESOTS_StealthTier : uint8;
enum class ESOTSStealthLevel : uint8;
struct FSOTS_PlayerStealthState;
struct FSOTS_StealthModifier;
struct FSOTS_StealthSample;
struct FSOTS_StealthScoreBreakdown;
struct FSOTS_StealthScoringConfig;

// ********** Begin Delegate FSOTS_StealthLevelChangedSignature ************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_GlobalStealthManagerSubsystem_h_12_DELEGATE \
SOTS_GLOBALSTEALTHMANAGER_API void FSOTS_StealthLevelChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& SOTS_StealthLevelChangedSignature, ESOTSStealthLevel OldLevel, ESOTSStealthLevel NewLevel, float NewScore);


// ********** End Delegate FSOTS_StealthLevelChangedSignature **************************************

// ********** Begin Delegate FSOTS_PlayerDetectionStateChangedSignature ****************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_GlobalStealthManagerSubsystem_h_13_DELEGATE \
SOTS_GLOBALSTEALTHMANAGER_API void FSOTS_PlayerDetectionStateChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& SOTS_PlayerDetectionStateChangedSignature, bool bDetected);


// ********** End Delegate FSOTS_PlayerDetectionStateChangedSignature ******************************

// ********** Begin Class USOTS_GlobalStealthManagerSubsystem **************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_GlobalStealthManagerSubsystem_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPopStealthConfig); \
	DECLARE_FUNCTION(execPushStealthConfig); \
	DECLARE_FUNCTION(execSetStealthConfigAsset); \
	DECLARE_FUNCTION(execSetStealthConfig); \
	DECLARE_FUNCTION(execRemoveStealthModifierBySource); \
	DECLARE_FUNCTION(execAddStealthModifier); \
	DECLARE_FUNCTION(execReportAISuspicion); \
	DECLARE_FUNCTION(execGetStealthScoreFor); \
	DECLARE_FUNCTION(execGetCurrentStealthBreakdown); \
	DECLARE_FUNCTION(execGetStealthTier); \
	DECLARE_FUNCTION(execGetStealthState); \
	DECLARE_FUNCTION(execIsPlayerDetected); \
	DECLARE_FUNCTION(execGetCurrentStealthLevel); \
	DECLARE_FUNCTION(execGetCurrentStealthScore); \
	DECLARE_FUNCTION(execReportEnemyDetectionEvent); \
	DECLARE_FUNCTION(execReportStealthSample); \
	DECLARE_FUNCTION(execGet);


struct Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_Statics;
SOTS_GLOBALSTEALTHMANAGER_API UClass* Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_NoRegister();

#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_GlobalStealthManagerSubsystem_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSOTS_GlobalStealthManagerSubsystem(); \
	friend struct ::Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOTS_GLOBALSTEALTHMANAGER_API UClass* ::Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(USOTS_GlobalStealthManagerSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SOTS_GlobalStealthManager"), Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_NoRegister) \
	DECLARE_SERIALIZER(USOTS_GlobalStealthManagerSubsystem)


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_GlobalStealthManagerSubsystem_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USOTS_GlobalStealthManagerSubsystem(USOTS_GlobalStealthManagerSubsystem&&) = delete; \
	USOTS_GlobalStealthManagerSubsystem(const USOTS_GlobalStealthManagerSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USOTS_GlobalStealthManagerSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USOTS_GlobalStealthManagerSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USOTS_GlobalStealthManagerSubsystem) \
	NO_API virtual ~USOTS_GlobalStealthManagerSubsystem();


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_GlobalStealthManagerSubsystem_h_23_PROLOG
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_GlobalStealthManagerSubsystem_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_GlobalStealthManagerSubsystem_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_GlobalStealthManagerSubsystem_h_26_INCLASS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_GlobalStealthManagerSubsystem_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USOTS_GlobalStealthManagerSubsystem;

// ********** End Class USOTS_GlobalStealthManagerSubsystem ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_GlobalStealthManagerSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
