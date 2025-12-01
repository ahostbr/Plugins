// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SOTS_AIPerceptionTypes.h"

#ifdef SOTS_AIPERCEPTION_SOTS_AIPerceptionTypes_generated_h
#error "SOTS_AIPerceptionTypes.generated.h already included, missing '#pragma once' in SOTS_AIPerceptionTypes.h"
#endif
#define SOTS_AIPERCEPTION_SOTS_AIPerceptionTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSOTS_PerceivedTargetState ****************************************
struct Z_Construct_UScriptStruct_FSOTS_PerceivedTargetState_Statics;
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_AIPerception_Source_SOTS_AIPerception_Public_SOTS_AIPerceptionTypes_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSOTS_PerceivedTargetState_Statics; \
	SOTS_AIPERCEPTION_API static class UScriptStruct* StaticStruct();


struct FSOTS_PerceivedTargetState;
// ********** End ScriptStruct FSOTS_PerceivedTargetState ******************************************

// ********** Begin ScriptStruct FSOTS_AIGuardPerceptionConfig *************************************
struct Z_Construct_UScriptStruct_FSOTS_AIGuardPerceptionConfig_Statics;
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_AIPerception_Source_SOTS_AIPerception_Public_SOTS_AIPerceptionTypes_h_52_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSOTS_AIGuardPerceptionConfig_Statics; \
	SOTS_AIPERCEPTION_API static class UScriptStruct* StaticStruct();


struct FSOTS_AIGuardPerceptionConfig;
// ********** End ScriptStruct FSOTS_AIGuardPerceptionConfig ***************************************

// ********** Begin ScriptStruct FSOTS_AIPerceptionBlackboardConfig ********************************
struct Z_Construct_UScriptStruct_FSOTS_AIPerceptionBlackboardConfig_Statics;
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_AIPerception_Source_SOTS_AIPerception_Public_SOTS_AIPerceptionTypes_h_94_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSOTS_AIPerceptionBlackboardConfig_Statics; \
	SOTS_AIPERCEPTION_API static class UScriptStruct* StaticStruct();


struct FSOTS_AIPerceptionBlackboardConfig;
// ********** End ScriptStruct FSOTS_AIPerceptionBlackboardConfig **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SAS_ShadowsAndShurikens_Plugins_SOTS_AIPerception_Source_SOTS_AIPerception_Public_SOTS_AIPerceptionTypes_h

// ********** Begin Enum ESOTS_PerceptionState *****************************************************
#define FOREACH_ENUM_ESOTS_PERCEPTIONSTATE(op) \
	op(ESOTS_PerceptionState::Unaware) \
	op(ESOTS_PerceptionState::SoftSuspicious) \
	op(ESOTS_PerceptionState::HardSuspicious) \
	op(ESOTS_PerceptionState::Alerted) 

enum class ESOTS_PerceptionState : uint8;
template<> struct TIsUEnumClass<ESOTS_PerceptionState> { enum { Value = true }; };
template<> SOTS_AIPERCEPTION_NON_ATTRIBUTED_API UEnum* StaticEnum<ESOTS_PerceptionState>();
// ********** End Enum ESOTS_PerceptionState *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
