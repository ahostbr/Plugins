// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SOTS_MissionDirectorDebugLibrary.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_MissionDirectorDebugLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
SOTS_MISSIONDIRECTOR_API UClass* Z_Construct_UClass_USOTS_MissionDirectorDebugLibrary();
SOTS_MISSIONDIRECTOR_API UClass* Z_Construct_UClass_USOTS_MissionDirectorDebugLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_SOTS_MissionDirector();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USOTS_MissionDirectorDebugLibrary Function RunSOTS_MissionDirector_DebugRun 
struct Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_RunSOTS_MissionDirector_DebugRun_Statics
{
	struct SOTS_MissionDirectorDebugLibrary_eventRunSOTS_MissionDirector_DebugRun_Parms
	{
		const UObject* WorldContextObject;
		float ExtraScoreDelta;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Mission|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Runs a minimal mission flow in one call:\n     * - Starts a debug mission if not already active.\n     * - Registers a primary objective completion worth +250 points.\n     * - Registers an extra generic score event (optional).\n     * - Ends the mission and prints the resulting score, rank and duration.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorDebugLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Runs a minimal mission flow in one call:\n- Starts a debug mission if not already active.\n- Registers a primary objective completion worth +250 points.\n- Registers an extra generic score event (optional).\n- Ends the mission and prints the resulting score, rank and duration." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RunSOTS_MissionDirector_DebugRun constinit property declarations ******
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExtraScoreDelta;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RunSOTS_MissionDirector_DebugRun constinit property declarations ********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RunSOTS_MissionDirector_DebugRun Property Definitions *****************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_RunSOTS_MissionDirector_DebugRun_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MissionDirectorDebugLibrary_eventRunSOTS_MissionDirector_DebugRun_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_RunSOTS_MissionDirector_DebugRun_Statics::NewProp_ExtraScoreDelta = { "ExtraScoreDelta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MissionDirectorDebugLibrary_eventRunSOTS_MissionDirector_DebugRun_Parms, ExtraScoreDelta), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_RunSOTS_MissionDirector_DebugRun_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_RunSOTS_MissionDirector_DebugRun_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_RunSOTS_MissionDirector_DebugRun_Statics::NewProp_ExtraScoreDelta,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_RunSOTS_MissionDirector_DebugRun_Statics::PropPointers) < 2048);
// ********** End Function RunSOTS_MissionDirector_DebugRun Property Definitions *******************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_RunSOTS_MissionDirector_DebugRun_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_MissionDirectorDebugLibrary, nullptr, "RunSOTS_MissionDirector_DebugRun", 	Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_RunSOTS_MissionDirector_DebugRun_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_RunSOTS_MissionDirector_DebugRun_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_RunSOTS_MissionDirector_DebugRun_Statics::SOTS_MissionDirectorDebugLibrary_eventRunSOTS_MissionDirector_DebugRun_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_RunSOTS_MissionDirector_DebugRun_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_RunSOTS_MissionDirector_DebugRun_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_RunSOTS_MissionDirector_DebugRun_Statics::SOTS_MissionDirectorDebugLibrary_eventRunSOTS_MissionDirector_DebugRun_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_RunSOTS_MissionDirector_DebugRun()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_RunSOTS_MissionDirector_DebugRun_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_MissionDirectorDebugLibrary::execRunSOTS_MissionDirector_DebugRun)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ExtraScoreDelta);
	P_FINISH;
	P_NATIVE_BEGIN;
	USOTS_MissionDirectorDebugLibrary::RunSOTS_MissionDirector_DebugRun(Z_Param_WorldContextObject,Z_Param_ExtraScoreDelta);
	P_NATIVE_END;
}
// ********** End Class USOTS_MissionDirectorDebugLibrary Function RunSOTS_MissionDirector_DebugRun 

// ********** Begin Class USOTS_MissionDirectorDebugLibrary Function SOTS_IsMissionCompleted *******
struct Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_SOTS_IsMissionCompleted_Statics
{
	struct SOTS_MissionDirectorDebugLibrary_eventSOTS_IsMissionCompleted_Parms
	{
		const UObject* WorldContextObject;
		FGameplayTag MissionCompleteTag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|MissionDirector" },
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorDebugLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SOTS_IsMissionCompleted constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MissionCompleteTag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SOTS_IsMissionCompleted constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SOTS_IsMissionCompleted Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_SOTS_IsMissionCompleted_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MissionDirectorDebugLibrary_eventSOTS_IsMissionCompleted_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_SOTS_IsMissionCompleted_Statics::NewProp_MissionCompleteTag = { "MissionCompleteTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MissionDirectorDebugLibrary_eventSOTS_IsMissionCompleted_Parms, MissionCompleteTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
void Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_SOTS_IsMissionCompleted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SOTS_MissionDirectorDebugLibrary_eventSOTS_IsMissionCompleted_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_SOTS_IsMissionCompleted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_MissionDirectorDebugLibrary_eventSOTS_IsMissionCompleted_Parms), &Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_SOTS_IsMissionCompleted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_SOTS_IsMissionCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_SOTS_IsMissionCompleted_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_SOTS_IsMissionCompleted_Statics::NewProp_MissionCompleteTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_SOTS_IsMissionCompleted_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_SOTS_IsMissionCompleted_Statics::PropPointers) < 2048);
// ********** End Function SOTS_IsMissionCompleted Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_SOTS_IsMissionCompleted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_MissionDirectorDebugLibrary, nullptr, "SOTS_IsMissionCompleted", 	Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_SOTS_IsMissionCompleted_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_SOTS_IsMissionCompleted_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_SOTS_IsMissionCompleted_Statics::SOTS_MissionDirectorDebugLibrary_eventSOTS_IsMissionCompleted_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_SOTS_IsMissionCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_SOTS_IsMissionCompleted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_SOTS_IsMissionCompleted_Statics::SOTS_MissionDirectorDebugLibrary_eventSOTS_IsMissionCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_SOTS_IsMissionCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_SOTS_IsMissionCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_MissionDirectorDebugLibrary::execSOTS_IsMissionCompleted)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FGameplayTag,Z_Param_MissionCompleteTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USOTS_MissionDirectorDebugLibrary::SOTS_IsMissionCompleted(Z_Param_WorldContextObject,Z_Param_MissionCompleteTag);
	P_NATIVE_END;
}
// ********** End Class USOTS_MissionDirectorDebugLibrary Function SOTS_IsMissionCompleted *********

// ********** Begin Class USOTS_MissionDirectorDebugLibrary Function SOTS_MarkMissionCompleted *****
struct Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_SOTS_MarkMissionCompleted_Statics
{
	struct SOTS_MissionDirectorDebugLibrary_eventSOTS_MarkMissionCompleted_Parms
	{
		const UObject* WorldContextObject;
		FGameplayTag MissionCompleteTag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|MissionDirector" },
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorDebugLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SOTS_MarkMissionCompleted constinit property declarations *************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MissionCompleteTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SOTS_MarkMissionCompleted constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SOTS_MarkMissionCompleted Property Definitions ************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_SOTS_MarkMissionCompleted_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MissionDirectorDebugLibrary_eventSOTS_MarkMissionCompleted_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_SOTS_MarkMissionCompleted_Statics::NewProp_MissionCompleteTag = { "MissionCompleteTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MissionDirectorDebugLibrary_eventSOTS_MarkMissionCompleted_Parms, MissionCompleteTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_SOTS_MarkMissionCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_SOTS_MarkMissionCompleted_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_SOTS_MarkMissionCompleted_Statics::NewProp_MissionCompleteTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_SOTS_MarkMissionCompleted_Statics::PropPointers) < 2048);
// ********** End Function SOTS_MarkMissionCompleted Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_SOTS_MarkMissionCompleted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_MissionDirectorDebugLibrary, nullptr, "SOTS_MarkMissionCompleted", 	Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_SOTS_MarkMissionCompleted_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_SOTS_MarkMissionCompleted_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_SOTS_MarkMissionCompleted_Statics::SOTS_MissionDirectorDebugLibrary_eventSOTS_MarkMissionCompleted_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_SOTS_MarkMissionCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_SOTS_MarkMissionCompleted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_SOTS_MarkMissionCompleted_Statics::SOTS_MissionDirectorDebugLibrary_eventSOTS_MarkMissionCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_SOTS_MarkMissionCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_SOTS_MarkMissionCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_MissionDirectorDebugLibrary::execSOTS_MarkMissionCompleted)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FGameplayTag,Z_Param_MissionCompleteTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	USOTS_MissionDirectorDebugLibrary::SOTS_MarkMissionCompleted(Z_Param_WorldContextObject,Z_Param_MissionCompleteTag);
	P_NATIVE_END;
}
// ********** End Class USOTS_MissionDirectorDebugLibrary Function SOTS_MarkMissionCompleted *******

// ********** Begin Class USOTS_MissionDirectorDebugLibrary Function SOTS_MarkMissionStarted *******
struct Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_SOTS_MarkMissionStarted_Statics
{
	struct SOTS_MissionDirectorDebugLibrary_eventSOTS_MarkMissionStarted_Parms
	{
		const UObject* WorldContextObject;
		FGameplayTag MissionStartTag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|MissionDirector" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tag-driven helpers for marking and querying mission state using the\n// global player tag container. These functions do not modify Mission\n// Director state directly; they simply manipulate tags.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorDebugLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tag-driven helpers for marking and querying mission state using the\nglobal player tag container. These functions do not modify Mission\nDirector state directly; they simply manipulate tags." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SOTS_MarkMissionStarted constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MissionStartTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SOTS_MarkMissionStarted constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SOTS_MarkMissionStarted Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_SOTS_MarkMissionStarted_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MissionDirectorDebugLibrary_eventSOTS_MarkMissionStarted_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_SOTS_MarkMissionStarted_Statics::NewProp_MissionStartTag = { "MissionStartTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MissionDirectorDebugLibrary_eventSOTS_MarkMissionStarted_Parms, MissionStartTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_SOTS_MarkMissionStarted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_SOTS_MarkMissionStarted_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_SOTS_MarkMissionStarted_Statics::NewProp_MissionStartTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_SOTS_MarkMissionStarted_Statics::PropPointers) < 2048);
// ********** End Function SOTS_MarkMissionStarted Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_SOTS_MarkMissionStarted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_MissionDirectorDebugLibrary, nullptr, "SOTS_MarkMissionStarted", 	Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_SOTS_MarkMissionStarted_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_SOTS_MarkMissionStarted_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_SOTS_MarkMissionStarted_Statics::SOTS_MissionDirectorDebugLibrary_eventSOTS_MarkMissionStarted_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_SOTS_MarkMissionStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_SOTS_MarkMissionStarted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_SOTS_MarkMissionStarted_Statics::SOTS_MissionDirectorDebugLibrary_eventSOTS_MarkMissionStarted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_SOTS_MarkMissionStarted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_SOTS_MarkMissionStarted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_MissionDirectorDebugLibrary::execSOTS_MarkMissionStarted)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FGameplayTag,Z_Param_MissionStartTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	USOTS_MissionDirectorDebugLibrary::SOTS_MarkMissionStarted(Z_Param_WorldContextObject,Z_Param_MissionStartTag);
	P_NATIVE_END;
}
// ********** End Class USOTS_MissionDirectorDebugLibrary Function SOTS_MarkMissionStarted *********

// ********** Begin Class USOTS_MissionDirectorDebugLibrary ****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_MissionDirectorDebugLibrary;
UClass* USOTS_MissionDirectorDebugLibrary::GetPrivateStaticClass()
{
	using TClass = USOTS_MissionDirectorDebugLibrary;
	if (!Z_Registration_Info_UClass_USOTS_MissionDirectorDebugLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_MissionDirectorDebugLibrary"),
			Z_Registration_Info_UClass_USOTS_MissionDirectorDebugLibrary.InnerSingleton,
			StaticRegisterNativesUSOTS_MissionDirectorDebugLibrary,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_USOTS_MissionDirectorDebugLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_MissionDirectorDebugLibrary_NoRegister()
{
	return USOTS_MissionDirectorDebugLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_MissionDirectorDebugLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Debug helpers for quickly verifying Mission Director behavior.\n */" },
#endif
		{ "IncludePath", "SOTS_MissionDirectorDebugLibrary.h" },
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorDebugLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Debug helpers for quickly verifying Mission Director behavior." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_MissionDirectorDebugLibrary constinit property declarations ********
// ********** End Class USOTS_MissionDirectorDebugLibrary constinit property declarations **********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("RunSOTS_MissionDirector_DebugRun"), .Pointer = &USOTS_MissionDirectorDebugLibrary::execRunSOTS_MissionDirector_DebugRun },
		{ .NameUTF8 = UTF8TEXT("SOTS_IsMissionCompleted"), .Pointer = &USOTS_MissionDirectorDebugLibrary::execSOTS_IsMissionCompleted },
		{ .NameUTF8 = UTF8TEXT("SOTS_MarkMissionCompleted"), .Pointer = &USOTS_MissionDirectorDebugLibrary::execSOTS_MarkMissionCompleted },
		{ .NameUTF8 = UTF8TEXT("SOTS_MarkMissionStarted"), .Pointer = &USOTS_MissionDirectorDebugLibrary::execSOTS_MarkMissionStarted },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_RunSOTS_MissionDirector_DebugRun, "RunSOTS_MissionDirector_DebugRun" }, // 636679890
		{ &Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_SOTS_IsMissionCompleted, "SOTS_IsMissionCompleted" }, // 2860937531
		{ &Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_SOTS_MarkMissionCompleted, "SOTS_MarkMissionCompleted" }, // 4034917211
		{ &Z_Construct_UFunction_USOTS_MissionDirectorDebugLibrary_SOTS_MarkMissionStarted, "SOTS_MarkMissionStarted" }, // 1017890876
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_MissionDirectorDebugLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_MissionDirectorDebugLibrary_Statics
UObject* (*const Z_Construct_UClass_USOTS_MissionDirectorDebugLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_MissionDirector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_MissionDirectorDebugLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_MissionDirectorDebugLibrary_Statics::ClassParams = {
	&USOTS_MissionDirectorDebugLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_MissionDirectorDebugLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_MissionDirectorDebugLibrary_Statics::Class_MetaDataParams)
};
void USOTS_MissionDirectorDebugLibrary::StaticRegisterNativesUSOTS_MissionDirectorDebugLibrary()
{
	UClass* Class = USOTS_MissionDirectorDebugLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USOTS_MissionDirectorDebugLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_USOTS_MissionDirectorDebugLibrary()
{
	if (!Z_Registration_Info_UClass_USOTS_MissionDirectorDebugLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_MissionDirectorDebugLibrary.OuterSingleton, Z_Construct_UClass_USOTS_MissionDirectorDebugLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_MissionDirectorDebugLibrary.OuterSingleton;
}
USOTS_MissionDirectorDebugLibrary::USOTS_MissionDirectorDebugLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_MissionDirectorDebugLibrary);
USOTS_MissionDirectorDebugLibrary::~USOTS_MissionDirectorDebugLibrary() {}
// ********** End Class USOTS_MissionDirectorDebugLibrary ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MissionDirector_Source_SOTS_MissionDirector_Public_SOTS_MissionDirectorDebugLibrary_h__Script_SOTS_MissionDirector_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_MissionDirectorDebugLibrary, USOTS_MissionDirectorDebugLibrary::StaticClass, TEXT("USOTS_MissionDirectorDebugLibrary"), &Z_Registration_Info_UClass_USOTS_MissionDirectorDebugLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_MissionDirectorDebugLibrary), 344465308U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MissionDirector_Source_SOTS_MissionDirector_Public_SOTS_MissionDirectorDebugLibrary_h__Script_SOTS_MissionDirector_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MissionDirector_Source_SOTS_MissionDirector_Public_SOTS_MissionDirectorDebugLibrary_h__Script_SOTS_MissionDirector_863868897{
	TEXT("/Script/SOTS_MissionDirector"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MissionDirector_Source_SOTS_MissionDirector_Public_SOTS_MissionDirectorDebugLibrary_h__Script_SOTS_MissionDirector_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MissionDirector_Source_SOTS_MissionDirector_Public_SOTS_MissionDirectorDebugLibrary_h__Script_SOTS_MissionDirector_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
