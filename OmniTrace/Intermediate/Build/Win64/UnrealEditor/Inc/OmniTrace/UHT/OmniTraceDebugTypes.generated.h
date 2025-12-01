// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OmniTraceDebugTypes.h"

#ifdef OMNITRACE_OmniTraceDebugTypes_generated_h
#error "OmniTraceDebugTypes.generated.h already included, missing '#pragma once' in OmniTraceDebugTypes.h"
#endif
#define OMNITRACE_OmniTraceDebugTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSOTS_OmniTraceKEMDebugRecord *************************************
struct Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMDebugRecord_Statics;
#define FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceDebugTypes_h_29_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMDebugRecord_Statics; \
	static class UScriptStruct* StaticStruct();


struct FSOTS_OmniTraceKEMDebugRecord;
// ********** End ScriptStruct FSOTS_OmniTraceKEMDebugRecord ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceDebugTypes_h

// ********** Begin Enum EOmniTraceKEMExecutionFamily **********************************************
#define FOREACH_ENUM_EOMNITRACEKEMEXECUTIONFAMILY(op) \
	op(EOmniTraceKEMExecutionFamily::Unknown) \
	op(EOmniTraceKEMExecutionFamily::GroundRear) \
	op(EOmniTraceKEMExecutionFamily::GroundFront) \
	op(EOmniTraceKEMExecutionFamily::GroundLeft) \
	op(EOmniTraceKEMExecutionFamily::GroundRight) \
	op(EOmniTraceKEMExecutionFamily::CornerLeft) \
	op(EOmniTraceKEMExecutionFamily::CornerRight) \
	op(EOmniTraceKEMExecutionFamily::VerticalAbove) \
	op(EOmniTraceKEMExecutionFamily::VerticalBelow) \
	op(EOmniTraceKEMExecutionFamily::DropPoint) \
	op(EOmniTraceKEMExecutionFamily::PullDown) \
	op(EOmniTraceKEMExecutionFamily::Cinematic) 

enum class EOmniTraceKEMExecutionFamily : uint8;
template<> struct TIsUEnumClass<EOmniTraceKEMExecutionFamily> { enum { Value = true }; };
template<> OMNITRACE_NON_ATTRIBUTED_API UEnum* StaticEnum<EOmniTraceKEMExecutionFamily>();
// ********** End Enum EOmniTraceKEMExecutionFamily ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
