// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SOTS_GlobalStealthTypes.h"

#ifdef SOTS_GLOBALSTEALTHMANAGER_SOTS_GlobalStealthTypes_generated_h
#error "SOTS_GlobalStealthTypes.generated.h already included, missing '#pragma once' in SOTS_GlobalStealthTypes.h"
#endif
#define SOTS_GLOBALSTEALTHMANAGER_SOTS_GlobalStealthTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSOTS_PlayerStealthState ******************************************
struct Z_Construct_UScriptStruct_FSOTS_PlayerStealthState_Statics;
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_GlobalStealthTypes_h_30_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSOTS_PlayerStealthState_Statics; \
	SOTS_GLOBALSTEALTHMANAGER_API static class UScriptStruct* StaticStruct();


struct FSOTS_PlayerStealthState;
// ********** End ScriptStruct FSOTS_PlayerStealthState ********************************************

// ********** Begin ScriptStruct FSOTS_StealthScoringConfig ****************************************
struct Z_Construct_UScriptStruct_FSOTS_StealthScoringConfig_Statics;
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_GlobalStealthTypes_h_68_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSOTS_StealthScoringConfig_Statics; \
	SOTS_GLOBALSTEALTHMANAGER_API static class UScriptStruct* StaticStruct();


struct FSOTS_StealthScoringConfig;
// ********** End ScriptStruct FSOTS_StealthScoringConfig ******************************************

// ********** Begin ScriptStruct FSOTS_StealthModifier *********************************************
struct Z_Construct_UScriptStruct_FSOTS_StealthModifier_Statics;
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_GlobalStealthTypes_h_125_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSOTS_StealthModifier_Statics; \
	SOTS_GLOBALSTEALTHMANAGER_API static class UScriptStruct* StaticStruct();


struct FSOTS_StealthModifier;
// ********** End ScriptStruct FSOTS_StealthModifier ***********************************************

// ********** Begin ScriptStruct FSOTS_StealthScoreBreakdown ***************************************
struct Z_Construct_UScriptStruct_FSOTS_StealthScoreBreakdown_Statics;
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_GlobalStealthTypes_h_150_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSOTS_StealthScoreBreakdown_Statics; \
	SOTS_GLOBALSTEALTHMANAGER_API static class UScriptStruct* StaticStruct();


struct FSOTS_StealthScoreBreakdown;
// ********** End ScriptStruct FSOTS_StealthScoreBreakdown *****************************************

// ********** Begin ScriptStruct FSOTS_StealthSample ***********************************************
struct Z_Construct_UScriptStruct_FSOTS_StealthSample_Statics;
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_GlobalStealthTypes_h_188_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSOTS_StealthSample_Statics; \
	SOTS_GLOBALSTEALTHMANAGER_API static class UScriptStruct* StaticStruct();


struct FSOTS_StealthSample;
// ********** End ScriptStruct FSOTS_StealthSample *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_GlobalStealthTypes_h

// ********** Begin Enum ESOTSStealthLevel *********************************************************
#define FOREACH_ENUM_ESOTSSTEALTHLEVEL(op) \
	op(ESOTSStealthLevel::Undetected) \
	op(ESOTSStealthLevel::LowRisk) \
	op(ESOTSStealthLevel::MediumRisk) \
	op(ESOTSStealthLevel::HighRisk) \
	op(ESOTSStealthLevel::FullyDetected) 

enum class ESOTSStealthLevel : uint8;
template<> struct TIsUEnumClass<ESOTSStealthLevel> { enum { Value = true }; };
template<> SOTS_GLOBALSTEALTHMANAGER_NON_ATTRIBUTED_API UEnum* StaticEnum<ESOTSStealthLevel>();
// ********** End Enum ESOTSStealthLevel ***********************************************************

// ********** Begin Enum ESOTS_StealthTier *********************************************************
#define FOREACH_ENUM_ESOTS_STEALTHTIER(op) \
	op(ESOTS_StealthTier::Hidden) \
	op(ESOTS_StealthTier::Cautious) \
	op(ESOTS_StealthTier::Danger) \
	op(ESOTS_StealthTier::Compromised) 

enum class ESOTS_StealthTier : uint8;
template<> struct TIsUEnumClass<ESOTS_StealthTier> { enum { Value = true }; };
template<> SOTS_GLOBALSTEALTHMANAGER_NON_ATTRIBUTED_API UEnum* StaticEnum<ESOTS_StealthTier>();
// ********** End Enum ESOTS_StealthTier ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
