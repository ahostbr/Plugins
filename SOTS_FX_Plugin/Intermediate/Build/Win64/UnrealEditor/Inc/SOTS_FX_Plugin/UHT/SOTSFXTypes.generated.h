// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SOTSFXTypes.h"

#ifdef SOTS_FX_PLUGIN_SOTSFXTypes_generated_h
#error "SOTSFXTypes.generated.h already included, missing '#pragma once' in SOTSFXTypes.h"
#endif
#define SOTS_FX_PLUGIN_SOTSFXTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSOTS_FXResolvedRequest;

// ********** Begin ScriptStruct FSOTS_FXDefinition ************************************************
struct Z_Construct_UScriptStruct_FSOTS_FXDefinition_Statics;
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTSFXTypes_h_30_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSOTS_FXDefinition_Statics; \
	SOTS_FX_PLUGIN_API static class UScriptStruct* StaticStruct();


struct FSOTS_FXDefinition;
// ********** End ScriptStruct FSOTS_FXDefinition **************************************************

// ********** Begin ScriptStruct FSOTS_FXContext ***************************************************
struct Z_Construct_UScriptStruct_FSOTS_FXContext_Statics;
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTSFXTypes_h_58_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSOTS_FXContext_Statics; \
	SOTS_FX_PLUGIN_API static class UScriptStruct* StaticStruct();


struct FSOTS_FXContext;
// ********** End ScriptStruct FSOTS_FXContext *****************************************************

// ********** Begin ScriptStruct FSOTS_FXHandle ****************************************************
struct Z_Construct_UScriptStruct_FSOTS_FXHandle_Statics;
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTSFXTypes_h_114_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSOTS_FXHandle_Statics; \
	SOTS_FX_PLUGIN_API static class UScriptStruct* StaticStruct();


struct FSOTS_FXHandle;
// ********** End ScriptStruct FSOTS_FXHandle ******************************************************

// ********** Begin ScriptStruct FSOTS_FXActiveCounts **********************************************
struct Z_Construct_UScriptStruct_FSOTS_FXActiveCounts_Statics;
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTSFXTypes_h_132_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSOTS_FXActiveCounts_Statics; \
	SOTS_FX_PLUGIN_API static class UScriptStruct* StaticStruct();


struct FSOTS_FXActiveCounts;
// ********** End ScriptStruct FSOTS_FXActiveCounts ************************************************

// ********** Begin ScriptStruct FSOTS_FXResolvedRequest *******************************************
struct Z_Construct_UScriptStruct_FSOTS_FXResolvedRequest_Statics;
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTSFXTypes_h_150_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSOTS_FXResolvedRequest_Statics; \
	SOTS_FX_PLUGIN_API static class UScriptStruct* StaticStruct();


struct FSOTS_FXResolvedRequest;
// ********** End ScriptStruct FSOTS_FXResolvedRequest *********************************************

// ********** Begin Delegate FSOTS_OnFXTriggered ***************************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTSFXTypes_h_189_DELEGATE \
SOTS_FX_PLUGIN_API void FSOTS_OnFXTriggered_DelegateWrapper(const FMulticastScriptDelegate& SOTS_OnFXTriggered, FSOTS_FXResolvedRequest const& FXRequest);


// ********** End Delegate FSOTS_OnFXTriggered *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTSFXTypes_h

// ********** Begin Enum ESOTS_FXSpawnSpace ********************************************************
#define FOREACH_ENUM_ESOTS_FXSPAWNSPACE(op) \
	op(ESOTS_FXSpawnSpace::World) \
	op(ESOTS_FXSpawnSpace::AttachToActor) \
	op(ESOTS_FXSpawnSpace::AttachToComponent) 

enum class ESOTS_FXSpawnSpace : uint8;
template<> struct TIsUEnumClass<ESOTS_FXSpawnSpace> { enum { Value = true }; };
template<> SOTS_FX_PLUGIN_NON_ATTRIBUTED_API UEnum* StaticEnum<ESOTS_FXSpawnSpace>();
// ********** End Enum ESOTS_FXSpawnSpace **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
