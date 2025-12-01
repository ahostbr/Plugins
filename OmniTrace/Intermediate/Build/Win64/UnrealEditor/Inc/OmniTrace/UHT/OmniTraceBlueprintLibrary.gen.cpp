// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OmniTraceBlueprintLibrary.h"
#include "Engine/LatentActionManager.h"
#include "OmniTraceTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeOmniTraceBlueprintLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
OMNITRACE_API UClass* Z_Construct_UClass_UOmniTraceBlueprintLibrary();
OMNITRACE_API UClass* Z_Construct_UClass_UOmniTraceBlueprintLibrary_NoRegister();
OMNITRACE_API UClass* Z_Construct_UClass_UOmniTracePatternLibrary_NoRegister();
OMNITRACE_API UClass* Z_Construct_UClass_UOmniTracePatternPreset_NoRegister();
OMNITRACE_API UScriptStruct* Z_Construct_UScriptStruct_FOmniTraceBuiltinPresetKey();
OMNITRACE_API UScriptStruct* Z_Construct_UScriptStruct_FOmniTracePatternConfig();
OMNITRACE_API UScriptStruct* Z_Construct_UScriptStruct_FOmniTracePatternResult();
OMNITRACE_API UScriptStruct* Z_Construct_UScriptStruct_FOmniTracePresetInfo();
OMNITRACE_API UScriptStruct* Z_Construct_UScriptStruct_FOmniTraceRequest();
UPackage* Z_Construct_UPackage__Script_OmniTrace();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOmniTraceBlueprintLibrary Function OmniTrace_BuildPathFromPatternConfig *
struct Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_BuildPathFromPatternConfig_Statics
{
	struct OmniTraceBlueprintLibrary_eventOmniTrace_BuildPathFromPatternConfig_Parms
	{
		FTransform Origin;
		FOmniTracePatternConfig Config;
		int32 NumPoints;
		float Scale;
		TArray<FVector> OutPoints;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OmniTrace|Patterns" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Generate an array of local pattern points from a high-level pattern config.\n     *  Origin defines the local frame (location + rotation). Points are returned in world space.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generate an array of local pattern points from a high-level pattern config.\nOrigin defines the local frame (location + rotation). Points are returned in world space." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OmniTrace_BuildPathFromPatternConfig constinit property declarations **
	static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumPoints;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OmniTrace_BuildPathFromPatternConfig constinit property declarations ****
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OmniTrace_BuildPathFromPatternConfig Property Definitions *************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_BuildPathFromPatternConfig_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_BuildPathFromPatternConfig_Parms, Origin), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Origin_MetaData), NewProp_Origin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_BuildPathFromPatternConfig_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_BuildPathFromPatternConfig_Parms, Config), Z_Construct_UScriptStruct_FOmniTracePatternConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 3842959987
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_BuildPathFromPatternConfig_Statics::NewProp_NumPoints = { "NumPoints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_BuildPathFromPatternConfig_Parms, NumPoints), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_BuildPathFromPatternConfig_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_BuildPathFromPatternConfig_Parms, Scale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_BuildPathFromPatternConfig_Statics::NewProp_OutPoints_Inner = { "OutPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_BuildPathFromPatternConfig_Statics::NewProp_OutPoints = { "OutPoints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_BuildPathFromPatternConfig_Parms, OutPoints), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_BuildPathFromPatternConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_BuildPathFromPatternConfig_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_BuildPathFromPatternConfig_Statics::NewProp_Config,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_BuildPathFromPatternConfig_Statics::NewProp_NumPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_BuildPathFromPatternConfig_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_BuildPathFromPatternConfig_Statics::NewProp_OutPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_BuildPathFromPatternConfig_Statics::NewProp_OutPoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_BuildPathFromPatternConfig_Statics::PropPointers) < 2048);
// ********** End Function OmniTrace_BuildPathFromPatternConfig Property Definitions ***************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_BuildPathFromPatternConfig_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOmniTraceBlueprintLibrary, nullptr, "OmniTrace_BuildPathFromPatternConfig", 	Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_BuildPathFromPatternConfig_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_BuildPathFromPatternConfig_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_BuildPathFromPatternConfig_Statics::OmniTraceBlueprintLibrary_eventOmniTrace_BuildPathFromPatternConfig_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_BuildPathFromPatternConfig_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_BuildPathFromPatternConfig_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_BuildPathFromPatternConfig_Statics::OmniTraceBlueprintLibrary_eventOmniTrace_BuildPathFromPatternConfig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_BuildPathFromPatternConfig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_BuildPathFromPatternConfig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOmniTraceBlueprintLibrary::execOmniTrace_BuildPathFromPatternConfig)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_Origin);
	P_GET_STRUCT_REF(FOmniTracePatternConfig,Z_Param_Out_Config);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumPoints);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
	P_GET_TARRAY_REF(FVector,Z_Param_Out_OutPoints);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOmniTraceBlueprintLibrary::OmniTrace_BuildPathFromPatternConfig(Z_Param_Out_Origin,Z_Param_Out_Config,Z_Param_NumPoints,Z_Param_Scale,Z_Param_Out_OutPoints);
	P_NATIVE_END;
}
// ********** End Class UOmniTraceBlueprintLibrary Function OmniTrace_BuildPathFromPatternConfig ***

// ********** Begin Class UOmniTraceBlueprintLibrary Function OmniTrace_GetBuiltinPresetInfos ******
struct Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_GetBuiltinPresetInfos_Statics
{
	struct OmniTraceBlueprintLibrary_eventOmniTrace_GetBuiltinPresetInfos_Parms
	{
		TArray<FOmniTracePresetInfo> OutInfos;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OmniTrace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get infos for all builtin presets. */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get infos for all builtin presets." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function OmniTrace_GetBuiltinPresetInfos constinit property declarations *******
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutInfos_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutInfos;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OmniTrace_GetBuiltinPresetInfos constinit property declarations *********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OmniTrace_GetBuiltinPresetInfos Property Definitions ******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_GetBuiltinPresetInfos_Statics::NewProp_OutInfos_Inner = { "OutInfos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOmniTracePresetInfo, METADATA_PARAMS(0, nullptr) }; // 3233791113
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_GetBuiltinPresetInfos_Statics::NewProp_OutInfos = { "OutInfos", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_GetBuiltinPresetInfos_Parms, OutInfos), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3233791113
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_GetBuiltinPresetInfos_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_GetBuiltinPresetInfos_Statics::NewProp_OutInfos_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_GetBuiltinPresetInfos_Statics::NewProp_OutInfos,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_GetBuiltinPresetInfos_Statics::PropPointers) < 2048);
// ********** End Function OmniTrace_GetBuiltinPresetInfos Property Definitions ********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_GetBuiltinPresetInfos_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOmniTraceBlueprintLibrary, nullptr, "OmniTrace_GetBuiltinPresetInfos", 	Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_GetBuiltinPresetInfos_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_GetBuiltinPresetInfos_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_GetBuiltinPresetInfos_Statics::OmniTraceBlueprintLibrary_eventOmniTrace_GetBuiltinPresetInfos_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_GetBuiltinPresetInfos_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_GetBuiltinPresetInfos_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_GetBuiltinPresetInfos_Statics::OmniTraceBlueprintLibrary_eventOmniTrace_GetBuiltinPresetInfos_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_GetBuiltinPresetInfos()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_GetBuiltinPresetInfos_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOmniTraceBlueprintLibrary::execOmniTrace_GetBuiltinPresetInfos)
{
	P_GET_TARRAY_REF(FOmniTracePresetInfo,Z_Param_Out_OutInfos);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOmniTraceBlueprintLibrary::OmniTrace_GetBuiltinPresetInfos(Z_Param_Out_OutInfos);
	P_NATIVE_END;
}
// ********** End Class UOmniTraceBlueprintLibrary Function OmniTrace_GetBuiltinPresetInfos ********

// ********** Begin Class UOmniTraceBlueprintLibrary Function OmniTrace_GetLibraryPresetInfos ******
struct Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_GetLibraryPresetInfos_Statics
{
	struct OmniTraceBlueprintLibrary_eventOmniTrace_GetLibraryPresetInfos_Parms
	{
		UOmniTracePatternLibrary* Library;
		TArray<FOmniTracePresetInfo> OutInfos;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OmniTrace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get lightweight preset infos from a pattern library. */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get lightweight preset infos from a pattern library." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function OmniTrace_GetLibraryPresetInfos constinit property declarations *******
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Library;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutInfos_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutInfos;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OmniTrace_GetLibraryPresetInfos constinit property declarations *********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OmniTrace_GetLibraryPresetInfos Property Definitions ******************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_GetLibraryPresetInfos_Statics::NewProp_Library = { "Library", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_GetLibraryPresetInfos_Parms, Library), Z_Construct_UClass_UOmniTracePatternLibrary_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_GetLibraryPresetInfos_Statics::NewProp_OutInfos_Inner = { "OutInfos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOmniTracePresetInfo, METADATA_PARAMS(0, nullptr) }; // 3233791113
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_GetLibraryPresetInfos_Statics::NewProp_OutInfos = { "OutInfos", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_GetLibraryPresetInfos_Parms, OutInfos), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3233791113
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_GetLibraryPresetInfos_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_GetLibraryPresetInfos_Statics::NewProp_Library,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_GetLibraryPresetInfos_Statics::NewProp_OutInfos_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_GetLibraryPresetInfos_Statics::NewProp_OutInfos,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_GetLibraryPresetInfos_Statics::PropPointers) < 2048);
// ********** End Function OmniTrace_GetLibraryPresetInfos Property Definitions ********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_GetLibraryPresetInfos_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOmniTraceBlueprintLibrary, nullptr, "OmniTrace_GetLibraryPresetInfos", 	Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_GetLibraryPresetInfos_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_GetLibraryPresetInfos_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_GetLibraryPresetInfos_Statics::OmniTraceBlueprintLibrary_eventOmniTrace_GetLibraryPresetInfos_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_GetLibraryPresetInfos_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_GetLibraryPresetInfos_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_GetLibraryPresetInfos_Statics::OmniTraceBlueprintLibrary_eventOmniTrace_GetLibraryPresetInfos_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_GetLibraryPresetInfos()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_GetLibraryPresetInfos_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOmniTraceBlueprintLibrary::execOmniTrace_GetLibraryPresetInfos)
{
	P_GET_OBJECT(UOmniTracePatternLibrary,Z_Param_Library);
	P_GET_TARRAY_REF(FOmniTracePresetInfo,Z_Param_Out_OutInfos);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOmniTraceBlueprintLibrary::OmniTrace_GetLibraryPresetInfos(Z_Param_Library,Z_Param_Out_OutInfos);
	P_NATIVE_END;
}
// ********** End Class UOmniTraceBlueprintLibrary Function OmniTrace_GetLibraryPresetInfos ********

// ********** Begin Class UOmniTraceBlueprintLibrary Function OmniTrace_MakeBuiltinPresetId ********
struct Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_MakeBuiltinPresetId_Statics
{
	struct OmniTraceBlueprintLibrary_eventOmniTrace_MakeBuiltinPresetId_Parms
	{
		FOmniTraceBuiltinPresetKey Key;
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OmniTrace|Presets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Build a builtin preset id from a structured key. */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Build a builtin preset id from a structured key." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OmniTrace_MakeBuiltinPresetId constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OmniTrace_MakeBuiltinPresetId constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OmniTrace_MakeBuiltinPresetId Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_MakeBuiltinPresetId_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_MakeBuiltinPresetId_Parms, Key), Z_Construct_UScriptStruct_FOmniTraceBuiltinPresetKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 3018221562
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_MakeBuiltinPresetId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_MakeBuiltinPresetId_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_MakeBuiltinPresetId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_MakeBuiltinPresetId_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_MakeBuiltinPresetId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_MakeBuiltinPresetId_Statics::PropPointers) < 2048);
// ********** End Function OmniTrace_MakeBuiltinPresetId Property Definitions **********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_MakeBuiltinPresetId_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOmniTraceBlueprintLibrary, nullptr, "OmniTrace_MakeBuiltinPresetId", 	Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_MakeBuiltinPresetId_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_MakeBuiltinPresetId_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_MakeBuiltinPresetId_Statics::OmniTraceBlueprintLibrary_eventOmniTrace_MakeBuiltinPresetId_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_MakeBuiltinPresetId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_MakeBuiltinPresetId_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_MakeBuiltinPresetId_Statics::OmniTraceBlueprintLibrary_eventOmniTrace_MakeBuiltinPresetId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_MakeBuiltinPresetId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_MakeBuiltinPresetId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOmniTraceBlueprintLibrary::execOmniTrace_MakeBuiltinPresetId)
{
	P_GET_STRUCT_REF(FOmniTraceBuiltinPresetKey,Z_Param_Out_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=UOmniTraceBlueprintLibrary::OmniTrace_MakeBuiltinPresetId(Z_Param_Out_Key);
	P_NATIVE_END;
}
// ********** End Class UOmniTraceBlueprintLibrary Function OmniTrace_MakeBuiltinPresetId **********

// ********** Begin Class UOmniTraceBlueprintLibrary Function OmniTrace_Pattern ********************
struct Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_Pattern_Statics
{
	struct OmniTraceBlueprintLibrary_eventOmniTrace_Pattern_Parms
	{
		UObject* WorldContextObject;
		FOmniTraceRequest Request;
		FOmniTracePatternResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OmniTrace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Core pattern function \xe2\x80\x93 fires traces according to the request. */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Core pattern function \xe2\x80\x93 fires traces according to the request." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OmniTrace_Pattern constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OmniTrace_Pattern constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OmniTrace_Pattern Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_Pattern_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_Pattern_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_Pattern_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_Pattern_Parms, Request), Z_Construct_UScriptStruct_FOmniTraceRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 979700793
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_Pattern_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_Pattern_Parms, ReturnValue), Z_Construct_UScriptStruct_FOmniTracePatternResult, METADATA_PARAMS(0, nullptr) }; // 1001062659
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_Pattern_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_Pattern_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_Pattern_Statics::NewProp_Request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_Pattern_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_Pattern_Statics::PropPointers) < 2048);
// ********** End Function OmniTrace_Pattern Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_Pattern_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOmniTraceBlueprintLibrary, nullptr, "OmniTrace_Pattern", 	Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_Pattern_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_Pattern_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_Pattern_Statics::OmniTraceBlueprintLibrary_eventOmniTrace_Pattern_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_Pattern_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_Pattern_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_Pattern_Statics::OmniTraceBlueprintLibrary_eventOmniTrace_Pattern_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_Pattern()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_Pattern_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOmniTraceBlueprintLibrary::execOmniTrace_Pattern)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FOmniTraceRequest,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOmniTracePatternResult*)Z_Param__Result=UOmniTraceBlueprintLibrary::OmniTrace_Pattern(Z_Param_WorldContextObject,Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UOmniTraceBlueprintLibrary Function OmniTrace_Pattern **********************

// ********** Begin Class UOmniTraceBlueprintLibrary Function OmniTrace_Pattern_Async **************
struct Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_Pattern_Async_Statics
{
	struct OmniTraceBlueprintLibrary_eventOmniTrace_Pattern_Async_Parms
	{
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
		FOmniTracePatternResult OutResult;
		FOmniTraceRequest Request;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OmniTrace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Latent version of OmniTrace_Pattern. */" },
#endif
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/OmniTraceBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Latent version of OmniTrace_Pattern." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OmniTrace_Pattern_Async constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OmniTrace_Pattern_Async constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OmniTrace_Pattern_Async Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_Pattern_Async_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_Pattern_Async_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_Pattern_Async_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_Pattern_Async_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 2463020907
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_Pattern_Async_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_Pattern_Async_Parms, OutResult), Z_Construct_UScriptStruct_FOmniTracePatternResult, METADATA_PARAMS(0, nullptr) }; // 1001062659
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_Pattern_Async_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_Pattern_Async_Parms, Request), Z_Construct_UScriptStruct_FOmniTraceRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 979700793
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_Pattern_Async_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_Pattern_Async_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_Pattern_Async_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_Pattern_Async_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_Pattern_Async_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_Pattern_Async_Statics::PropPointers) < 2048);
// ********** End Function OmniTrace_Pattern_Async Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_Pattern_Async_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOmniTraceBlueprintLibrary, nullptr, "OmniTrace_Pattern_Async", 	Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_Pattern_Async_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_Pattern_Async_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_Pattern_Async_Statics::OmniTraceBlueprintLibrary_eventOmniTrace_Pattern_Async_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_Pattern_Async_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_Pattern_Async_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_Pattern_Async_Statics::OmniTraceBlueprintLibrary_eventOmniTrace_Pattern_Async_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_Pattern_Async()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_Pattern_Async_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOmniTraceBlueprintLibrary::execOmniTrace_Pattern_Async)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_STRUCT_REF(FOmniTracePatternResult,Z_Param_Out_OutResult);
	P_GET_STRUCT_REF(FOmniTraceRequest,Z_Param_Out_Request);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOmniTraceBlueprintLibrary::OmniTrace_Pattern_Async(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_OutResult,Z_Param_Out_Request);
	P_NATIVE_END;
}
// ********** End Class UOmniTraceBlueprintLibrary Function OmniTrace_Pattern_Async ****************

// ********** Begin Class UOmniTraceBlueprintLibrary Function OmniTrace_PatternFromBuiltinPreset ***
struct Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPreset_Statics
{
	struct OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromBuiltinPreset_Parms
	{
		UObject* WorldContextObject;
		FName PresetId;
		AActor* OriginActorOverride;
		USceneComponent* OriginComponentOverride;
		AActor* TargetActorOverride;
		FOmniTracePatternResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OmniTrace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Run a pattern from a builtin preset id. */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Run a pattern from a builtin preset id." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginComponentOverride_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function OmniTrace_PatternFromBuiltinPreset constinit property declarations ****
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PresetId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OriginActorOverride;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OriginComponentOverride;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActorOverride;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OmniTrace_PatternFromBuiltinPreset constinit property declarations ******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OmniTrace_PatternFromBuiltinPreset Property Definitions ***************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPreset_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromBuiltinPreset_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPreset_Statics::NewProp_PresetId = { "PresetId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromBuiltinPreset_Parms, PresetId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPreset_Statics::NewProp_OriginActorOverride = { "OriginActorOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromBuiltinPreset_Parms, OriginActorOverride), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPreset_Statics::NewProp_OriginComponentOverride = { "OriginComponentOverride", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromBuiltinPreset_Parms, OriginComponentOverride), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginComponentOverride_MetaData), NewProp_OriginComponentOverride_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPreset_Statics::NewProp_TargetActorOverride = { "TargetActorOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromBuiltinPreset_Parms, TargetActorOverride), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPreset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromBuiltinPreset_Parms, ReturnValue), Z_Construct_UScriptStruct_FOmniTracePatternResult, METADATA_PARAMS(0, nullptr) }; // 1001062659
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPreset_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPreset_Statics::NewProp_PresetId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPreset_Statics::NewProp_OriginActorOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPreset_Statics::NewProp_OriginComponentOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPreset_Statics::NewProp_TargetActorOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPreset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPreset_Statics::PropPointers) < 2048);
// ********** End Function OmniTrace_PatternFromBuiltinPreset Property Definitions *****************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPreset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOmniTraceBlueprintLibrary, nullptr, "OmniTrace_PatternFromBuiltinPreset", 	Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPreset_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPreset_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPreset_Statics::OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromBuiltinPreset_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPreset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPreset_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPreset_Statics::OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromBuiltinPreset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPreset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPreset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOmniTraceBlueprintLibrary::execOmniTrace_PatternFromBuiltinPreset)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_PresetId);
	P_GET_OBJECT(AActor,Z_Param_OriginActorOverride);
	P_GET_OBJECT(USceneComponent,Z_Param_OriginComponentOverride);
	P_GET_OBJECT(AActor,Z_Param_TargetActorOverride);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOmniTracePatternResult*)Z_Param__Result=UOmniTraceBlueprintLibrary::OmniTrace_PatternFromBuiltinPreset(Z_Param_WorldContextObject,Z_Param_PresetId,Z_Param_OriginActorOverride,Z_Param_OriginComponentOverride,Z_Param_TargetActorOverride);
	P_NATIVE_END;
}
// ********** End Class UOmniTraceBlueprintLibrary Function OmniTrace_PatternFromBuiltinPreset *****

// ********** Begin Class UOmniTraceBlueprintLibrary Function OmniTrace_PatternFromBuiltinPreset_Async 
struct Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPreset_Async_Statics
{
	struct OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromBuiltinPreset_Async_Parms
	{
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
		FOmniTracePatternResult OutResult;
		FName PresetId;
		AActor* OriginActorOverride;
		USceneComponent* OriginComponentOverride;
		AActor* TargetActorOverride;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OmniTrace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Latent version of OmniTrace_PatternFromBuiltinPreset. */" },
#endif
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/OmniTraceBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Latent version of OmniTrace_PatternFromBuiltinPreset." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginComponentOverride_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function OmniTrace_PatternFromBuiltinPreset_Async constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PresetId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OriginActorOverride;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OriginComponentOverride;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActorOverride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OmniTrace_PatternFromBuiltinPreset_Async constinit property declarations 
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OmniTrace_PatternFromBuiltinPreset_Async Property Definitions *********
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPreset_Async_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromBuiltinPreset_Async_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPreset_Async_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromBuiltinPreset_Async_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 2463020907
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPreset_Async_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromBuiltinPreset_Async_Parms, OutResult), Z_Construct_UScriptStruct_FOmniTracePatternResult, METADATA_PARAMS(0, nullptr) }; // 1001062659
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPreset_Async_Statics::NewProp_PresetId = { "PresetId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromBuiltinPreset_Async_Parms, PresetId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPreset_Async_Statics::NewProp_OriginActorOverride = { "OriginActorOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromBuiltinPreset_Async_Parms, OriginActorOverride), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPreset_Async_Statics::NewProp_OriginComponentOverride = { "OriginComponentOverride", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromBuiltinPreset_Async_Parms, OriginComponentOverride), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginComponentOverride_MetaData), NewProp_OriginComponentOverride_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPreset_Async_Statics::NewProp_TargetActorOverride = { "TargetActorOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromBuiltinPreset_Async_Parms, TargetActorOverride), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPreset_Async_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPreset_Async_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPreset_Async_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPreset_Async_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPreset_Async_Statics::NewProp_PresetId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPreset_Async_Statics::NewProp_OriginActorOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPreset_Async_Statics::NewProp_OriginComponentOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPreset_Async_Statics::NewProp_TargetActorOverride,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPreset_Async_Statics::PropPointers) < 2048);
// ********** End Function OmniTrace_PatternFromBuiltinPreset_Async Property Definitions ***********
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPreset_Async_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOmniTraceBlueprintLibrary, nullptr, "OmniTrace_PatternFromBuiltinPreset_Async", 	Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPreset_Async_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPreset_Async_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPreset_Async_Statics::OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromBuiltinPreset_Async_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPreset_Async_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPreset_Async_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPreset_Async_Statics::OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromBuiltinPreset_Async_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPreset_Async()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPreset_Async_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOmniTraceBlueprintLibrary::execOmniTrace_PatternFromBuiltinPreset_Async)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_STRUCT_REF(FOmniTracePatternResult,Z_Param_Out_OutResult);
	P_GET_PROPERTY(FNameProperty,Z_Param_PresetId);
	P_GET_OBJECT(AActor,Z_Param_OriginActorOverride);
	P_GET_OBJECT(USceneComponent,Z_Param_OriginComponentOverride);
	P_GET_OBJECT(AActor,Z_Param_TargetActorOverride);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOmniTraceBlueprintLibrary::OmniTrace_PatternFromBuiltinPreset_Async(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_OutResult,Z_Param_PresetId,Z_Param_OriginActorOverride,Z_Param_OriginComponentOverride,Z_Param_TargetActorOverride);
	P_NATIVE_END;
}
// ********** End Class UOmniTraceBlueprintLibrary Function OmniTrace_PatternFromBuiltinPreset_Async 

// ********** Begin Class UOmniTraceBlueprintLibrary Function OmniTrace_PatternFromBuiltinPresetKey 
struct Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPresetKey_Statics
{
	struct OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromBuiltinPresetKey_Parms
	{
		UObject* WorldContextObject;
		FOmniTraceBuiltinPresetKey Key;
		AActor* OriginActorOverride;
		USceneComponent* OriginComponentOverride;
		AActor* TargetActorOverride;
		FOmniTracePatternResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OmniTrace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Run a pattern using a structured builtin preset key. */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Run a pattern using a structured builtin preset key." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginComponentOverride_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function OmniTrace_PatternFromBuiltinPresetKey constinit property declarations *
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OriginActorOverride;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OriginComponentOverride;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActorOverride;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OmniTrace_PatternFromBuiltinPresetKey constinit property declarations ***
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OmniTrace_PatternFromBuiltinPresetKey Property Definitions ************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPresetKey_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromBuiltinPresetKey_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPresetKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromBuiltinPresetKey_Parms, Key), Z_Construct_UScriptStruct_FOmniTraceBuiltinPresetKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 3018221562
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPresetKey_Statics::NewProp_OriginActorOverride = { "OriginActorOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromBuiltinPresetKey_Parms, OriginActorOverride), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPresetKey_Statics::NewProp_OriginComponentOverride = { "OriginComponentOverride", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromBuiltinPresetKey_Parms, OriginComponentOverride), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginComponentOverride_MetaData), NewProp_OriginComponentOverride_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPresetKey_Statics::NewProp_TargetActorOverride = { "TargetActorOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromBuiltinPresetKey_Parms, TargetActorOverride), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPresetKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromBuiltinPresetKey_Parms, ReturnValue), Z_Construct_UScriptStruct_FOmniTracePatternResult, METADATA_PARAMS(0, nullptr) }; // 1001062659
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPresetKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPresetKey_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPresetKey_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPresetKey_Statics::NewProp_OriginActorOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPresetKey_Statics::NewProp_OriginComponentOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPresetKey_Statics::NewProp_TargetActorOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPresetKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPresetKey_Statics::PropPointers) < 2048);
// ********** End Function OmniTrace_PatternFromBuiltinPresetKey Property Definitions **************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPresetKey_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOmniTraceBlueprintLibrary, nullptr, "OmniTrace_PatternFromBuiltinPresetKey", 	Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPresetKey_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPresetKey_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPresetKey_Statics::OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromBuiltinPresetKey_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPresetKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPresetKey_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPresetKey_Statics::OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromBuiltinPresetKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPresetKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPresetKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOmniTraceBlueprintLibrary::execOmniTrace_PatternFromBuiltinPresetKey)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FOmniTraceBuiltinPresetKey,Z_Param_Out_Key);
	P_GET_OBJECT(AActor,Z_Param_OriginActorOverride);
	P_GET_OBJECT(USceneComponent,Z_Param_OriginComponentOverride);
	P_GET_OBJECT(AActor,Z_Param_TargetActorOverride);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOmniTracePatternResult*)Z_Param__Result=UOmniTraceBlueprintLibrary::OmniTrace_PatternFromBuiltinPresetKey(Z_Param_WorldContextObject,Z_Param_Out_Key,Z_Param_OriginActorOverride,Z_Param_OriginComponentOverride,Z_Param_TargetActorOverride);
	P_NATIVE_END;
}
// ********** End Class UOmniTraceBlueprintLibrary Function OmniTrace_PatternFromBuiltinPresetKey **

// ********** Begin Class UOmniTraceBlueprintLibrary Function OmniTrace_PatternFromBuiltinPresetKey_Async 
struct Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPresetKey_Async_Statics
{
	struct OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromBuiltinPresetKey_Async_Parms
	{
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
		FOmniTracePatternResult OutResult;
		FOmniTraceBuiltinPresetKey Key;
		AActor* OriginActorOverride;
		USceneComponent* OriginComponentOverride;
		AActor* TargetActorOverride;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OmniTrace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Latent version of OmniTrace_PatternFromBuiltinPresetKey. */" },
#endif
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/OmniTraceBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Latent version of OmniTrace_PatternFromBuiltinPresetKey." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginComponentOverride_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function OmniTrace_PatternFromBuiltinPresetKey_Async constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OriginActorOverride;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OriginComponentOverride;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActorOverride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OmniTrace_PatternFromBuiltinPresetKey_Async constinit property declarations 
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OmniTrace_PatternFromBuiltinPresetKey_Async Property Definitions ******
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPresetKey_Async_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromBuiltinPresetKey_Async_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPresetKey_Async_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromBuiltinPresetKey_Async_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 2463020907
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPresetKey_Async_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromBuiltinPresetKey_Async_Parms, OutResult), Z_Construct_UScriptStruct_FOmniTracePatternResult, METADATA_PARAMS(0, nullptr) }; // 1001062659
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPresetKey_Async_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromBuiltinPresetKey_Async_Parms, Key), Z_Construct_UScriptStruct_FOmniTraceBuiltinPresetKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 3018221562
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPresetKey_Async_Statics::NewProp_OriginActorOverride = { "OriginActorOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromBuiltinPresetKey_Async_Parms, OriginActorOverride), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPresetKey_Async_Statics::NewProp_OriginComponentOverride = { "OriginComponentOverride", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromBuiltinPresetKey_Async_Parms, OriginComponentOverride), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginComponentOverride_MetaData), NewProp_OriginComponentOverride_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPresetKey_Async_Statics::NewProp_TargetActorOverride = { "TargetActorOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromBuiltinPresetKey_Async_Parms, TargetActorOverride), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPresetKey_Async_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPresetKey_Async_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPresetKey_Async_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPresetKey_Async_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPresetKey_Async_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPresetKey_Async_Statics::NewProp_OriginActorOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPresetKey_Async_Statics::NewProp_OriginComponentOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPresetKey_Async_Statics::NewProp_TargetActorOverride,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPresetKey_Async_Statics::PropPointers) < 2048);
// ********** End Function OmniTrace_PatternFromBuiltinPresetKey_Async Property Definitions ********
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPresetKey_Async_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOmniTraceBlueprintLibrary, nullptr, "OmniTrace_PatternFromBuiltinPresetKey_Async", 	Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPresetKey_Async_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPresetKey_Async_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPresetKey_Async_Statics::OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromBuiltinPresetKey_Async_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPresetKey_Async_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPresetKey_Async_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPresetKey_Async_Statics::OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromBuiltinPresetKey_Async_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPresetKey_Async()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPresetKey_Async_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOmniTraceBlueprintLibrary::execOmniTrace_PatternFromBuiltinPresetKey_Async)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_STRUCT_REF(FOmniTracePatternResult,Z_Param_Out_OutResult);
	P_GET_STRUCT_REF(FOmniTraceBuiltinPresetKey,Z_Param_Out_Key);
	P_GET_OBJECT(AActor,Z_Param_OriginActorOverride);
	P_GET_OBJECT(USceneComponent,Z_Param_OriginComponentOverride);
	P_GET_OBJECT(AActor,Z_Param_TargetActorOverride);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOmniTraceBlueprintLibrary::OmniTrace_PatternFromBuiltinPresetKey_Async(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_OutResult,Z_Param_Out_Key,Z_Param_OriginActorOverride,Z_Param_OriginComponentOverride,Z_Param_TargetActorOverride);
	P_NATIVE_END;
}
// ********** End Class UOmniTraceBlueprintLibrary Function OmniTrace_PatternFromBuiltinPresetKey_Async 

// ********** Begin Class UOmniTraceBlueprintLibrary Function OmniTrace_PatternFromLibrary *********
struct Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromLibrary_Statics
{
	struct OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromLibrary_Parms
	{
		UObject* WorldContextObject;
		UOmniTracePatternLibrary* Library;
		FName PresetId;
		AActor* OriginActorOverride;
		USceneComponent* OriginComponentOverride;
		AActor* TargetActorOverride;
		FOmniTracePatternResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OmniTrace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Run a pattern from a pattern library by preset id. */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Run a pattern from a pattern library by preset id." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginComponentOverride_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function OmniTrace_PatternFromLibrary constinit property declarations **********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Library;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PresetId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OriginActorOverride;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OriginComponentOverride;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActorOverride;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OmniTrace_PatternFromLibrary constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OmniTrace_PatternFromLibrary Property Definitions *********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromLibrary_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromLibrary_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromLibrary_Statics::NewProp_Library = { "Library", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromLibrary_Parms, Library), Z_Construct_UClass_UOmniTracePatternLibrary_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromLibrary_Statics::NewProp_PresetId = { "PresetId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromLibrary_Parms, PresetId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromLibrary_Statics::NewProp_OriginActorOverride = { "OriginActorOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromLibrary_Parms, OriginActorOverride), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromLibrary_Statics::NewProp_OriginComponentOverride = { "OriginComponentOverride", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromLibrary_Parms, OriginComponentOverride), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginComponentOverride_MetaData), NewProp_OriginComponentOverride_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromLibrary_Statics::NewProp_TargetActorOverride = { "TargetActorOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromLibrary_Parms, TargetActorOverride), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromLibrary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromLibrary_Parms, ReturnValue), Z_Construct_UScriptStruct_FOmniTracePatternResult, METADATA_PARAMS(0, nullptr) }; // 1001062659
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromLibrary_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromLibrary_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromLibrary_Statics::NewProp_Library,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromLibrary_Statics::NewProp_PresetId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromLibrary_Statics::NewProp_OriginActorOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromLibrary_Statics::NewProp_OriginComponentOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromLibrary_Statics::NewProp_TargetActorOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromLibrary_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromLibrary_Statics::PropPointers) < 2048);
// ********** End Function OmniTrace_PatternFromLibrary Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromLibrary_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOmniTraceBlueprintLibrary, nullptr, "OmniTrace_PatternFromLibrary", 	Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromLibrary_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromLibrary_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromLibrary_Statics::OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromLibrary_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromLibrary_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromLibrary_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromLibrary_Statics::OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromLibrary_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromLibrary()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromLibrary_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOmniTraceBlueprintLibrary::execOmniTrace_PatternFromLibrary)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UOmniTracePatternLibrary,Z_Param_Library);
	P_GET_PROPERTY(FNameProperty,Z_Param_PresetId);
	P_GET_OBJECT(AActor,Z_Param_OriginActorOverride);
	P_GET_OBJECT(USceneComponent,Z_Param_OriginComponentOverride);
	P_GET_OBJECT(AActor,Z_Param_TargetActorOverride);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOmniTracePatternResult*)Z_Param__Result=UOmniTraceBlueprintLibrary::OmniTrace_PatternFromLibrary(Z_Param_WorldContextObject,Z_Param_Library,Z_Param_PresetId,Z_Param_OriginActorOverride,Z_Param_OriginComponentOverride,Z_Param_TargetActorOverride);
	P_NATIVE_END;
}
// ********** End Class UOmniTraceBlueprintLibrary Function OmniTrace_PatternFromLibrary ***********

// ********** Begin Class UOmniTraceBlueprintLibrary Function OmniTrace_PatternFromLibrary_Async ***
struct Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromLibrary_Async_Statics
{
	struct OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromLibrary_Async_Parms
	{
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
		FOmniTracePatternResult OutResult;
		UOmniTracePatternLibrary* Library;
		FName PresetId;
		AActor* OriginActorOverride;
		USceneComponent* OriginComponentOverride;
		AActor* TargetActorOverride;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OmniTrace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Latent version of OmniTrace_PatternFromLibrary. */" },
#endif
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/OmniTraceBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Latent version of OmniTrace_PatternFromLibrary." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginComponentOverride_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function OmniTrace_PatternFromLibrary_Async constinit property declarations ****
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Library;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PresetId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OriginActorOverride;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OriginComponentOverride;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActorOverride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OmniTrace_PatternFromLibrary_Async constinit property declarations ******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OmniTrace_PatternFromLibrary_Async Property Definitions ***************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromLibrary_Async_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromLibrary_Async_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromLibrary_Async_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromLibrary_Async_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 2463020907
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromLibrary_Async_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromLibrary_Async_Parms, OutResult), Z_Construct_UScriptStruct_FOmniTracePatternResult, METADATA_PARAMS(0, nullptr) }; // 1001062659
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromLibrary_Async_Statics::NewProp_Library = { "Library", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromLibrary_Async_Parms, Library), Z_Construct_UClass_UOmniTracePatternLibrary_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromLibrary_Async_Statics::NewProp_PresetId = { "PresetId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromLibrary_Async_Parms, PresetId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromLibrary_Async_Statics::NewProp_OriginActorOverride = { "OriginActorOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromLibrary_Async_Parms, OriginActorOverride), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromLibrary_Async_Statics::NewProp_OriginComponentOverride = { "OriginComponentOverride", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromLibrary_Async_Parms, OriginComponentOverride), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginComponentOverride_MetaData), NewProp_OriginComponentOverride_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromLibrary_Async_Statics::NewProp_TargetActorOverride = { "TargetActorOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromLibrary_Async_Parms, TargetActorOverride), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromLibrary_Async_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromLibrary_Async_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromLibrary_Async_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromLibrary_Async_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromLibrary_Async_Statics::NewProp_Library,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromLibrary_Async_Statics::NewProp_PresetId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromLibrary_Async_Statics::NewProp_OriginActorOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromLibrary_Async_Statics::NewProp_OriginComponentOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromLibrary_Async_Statics::NewProp_TargetActorOverride,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromLibrary_Async_Statics::PropPointers) < 2048);
// ********** End Function OmniTrace_PatternFromLibrary_Async Property Definitions *****************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromLibrary_Async_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOmniTraceBlueprintLibrary, nullptr, "OmniTrace_PatternFromLibrary_Async", 	Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromLibrary_Async_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromLibrary_Async_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromLibrary_Async_Statics::OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromLibrary_Async_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromLibrary_Async_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromLibrary_Async_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromLibrary_Async_Statics::OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromLibrary_Async_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromLibrary_Async()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromLibrary_Async_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOmniTraceBlueprintLibrary::execOmniTrace_PatternFromLibrary_Async)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_STRUCT_REF(FOmniTracePatternResult,Z_Param_Out_OutResult);
	P_GET_OBJECT(UOmniTracePatternLibrary,Z_Param_Library);
	P_GET_PROPERTY(FNameProperty,Z_Param_PresetId);
	P_GET_OBJECT(AActor,Z_Param_OriginActorOverride);
	P_GET_OBJECT(USceneComponent,Z_Param_OriginComponentOverride);
	P_GET_OBJECT(AActor,Z_Param_TargetActorOverride);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOmniTraceBlueprintLibrary::OmniTrace_PatternFromLibrary_Async(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_OutResult,Z_Param_Library,Z_Param_PresetId,Z_Param_OriginActorOverride,Z_Param_OriginComponentOverride,Z_Param_TargetActorOverride);
	P_NATIVE_END;
}
// ********** End Class UOmniTraceBlueprintLibrary Function OmniTrace_PatternFromLibrary_Async *****

// ********** Begin Class UOmniTraceBlueprintLibrary Function OmniTrace_PatternFromPreset **********
struct Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromPreset_Statics
{
	struct OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromPreset_Parms
	{
		UObject* WorldContextObject;
		UOmniTracePatternPreset* Preset;
		AActor* OriginActorOverride;
		USceneComponent* OriginComponentOverride;
		AActor* TargetActorOverride;
		FOmniTracePatternResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OmniTrace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Run a pattern from a UOmniTracePatternPreset asset. */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Run a pattern from a UOmniTracePatternPreset asset." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginComponentOverride_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function OmniTrace_PatternFromPreset constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Preset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OriginActorOverride;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OriginComponentOverride;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActorOverride;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OmniTrace_PatternFromPreset constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OmniTrace_PatternFromPreset Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromPreset_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromPreset_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromPreset_Statics::NewProp_Preset = { "Preset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromPreset_Parms, Preset), Z_Construct_UClass_UOmniTracePatternPreset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromPreset_Statics::NewProp_OriginActorOverride = { "OriginActorOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromPreset_Parms, OriginActorOverride), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromPreset_Statics::NewProp_OriginComponentOverride = { "OriginComponentOverride", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromPreset_Parms, OriginComponentOverride), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginComponentOverride_MetaData), NewProp_OriginComponentOverride_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromPreset_Statics::NewProp_TargetActorOverride = { "TargetActorOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromPreset_Parms, TargetActorOverride), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromPreset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromPreset_Parms, ReturnValue), Z_Construct_UScriptStruct_FOmniTracePatternResult, METADATA_PARAMS(0, nullptr) }; // 1001062659
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromPreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromPreset_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromPreset_Statics::NewProp_Preset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromPreset_Statics::NewProp_OriginActorOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromPreset_Statics::NewProp_OriginComponentOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromPreset_Statics::NewProp_TargetActorOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromPreset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromPreset_Statics::PropPointers) < 2048);
// ********** End Function OmniTrace_PatternFromPreset Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromPreset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOmniTraceBlueprintLibrary, nullptr, "OmniTrace_PatternFromPreset", 	Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromPreset_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromPreset_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromPreset_Statics::OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromPreset_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromPreset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromPreset_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromPreset_Statics::OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromPreset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromPreset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromPreset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOmniTraceBlueprintLibrary::execOmniTrace_PatternFromPreset)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UOmniTracePatternPreset,Z_Param_Preset);
	P_GET_OBJECT(AActor,Z_Param_OriginActorOverride);
	P_GET_OBJECT(USceneComponent,Z_Param_OriginComponentOverride);
	P_GET_OBJECT(AActor,Z_Param_TargetActorOverride);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOmniTracePatternResult*)Z_Param__Result=UOmniTraceBlueprintLibrary::OmniTrace_PatternFromPreset(Z_Param_WorldContextObject,Z_Param_Preset,Z_Param_OriginActorOverride,Z_Param_OriginComponentOverride,Z_Param_TargetActorOverride);
	P_NATIVE_END;
}
// ********** End Class UOmniTraceBlueprintLibrary Function OmniTrace_PatternFromPreset ************

// ********** Begin Class UOmniTraceBlueprintLibrary Function OmniTrace_PatternFromPreset_Async ****
struct Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromPreset_Async_Statics
{
	struct OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromPreset_Async_Parms
	{
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
		FOmniTracePatternResult OutResult;
		UOmniTracePatternPreset* Preset;
		AActor* OriginActorOverride;
		USceneComponent* OriginComponentOverride;
		AActor* TargetActorOverride;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OmniTrace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Latent version of OmniTrace_PatternFromPreset. */" },
#endif
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/OmniTraceBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Latent version of OmniTrace_PatternFromPreset." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginComponentOverride_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function OmniTrace_PatternFromPreset_Async constinit property declarations *****
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Preset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OriginActorOverride;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OriginComponentOverride;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActorOverride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OmniTrace_PatternFromPreset_Async constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OmniTrace_PatternFromPreset_Async Property Definitions ****************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromPreset_Async_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromPreset_Async_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromPreset_Async_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromPreset_Async_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 2463020907
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromPreset_Async_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromPreset_Async_Parms, OutResult), Z_Construct_UScriptStruct_FOmniTracePatternResult, METADATA_PARAMS(0, nullptr) }; // 1001062659
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromPreset_Async_Statics::NewProp_Preset = { "Preset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromPreset_Async_Parms, Preset), Z_Construct_UClass_UOmniTracePatternPreset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromPreset_Async_Statics::NewProp_OriginActorOverride = { "OriginActorOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromPreset_Async_Parms, OriginActorOverride), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromPreset_Async_Statics::NewProp_OriginComponentOverride = { "OriginComponentOverride", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromPreset_Async_Parms, OriginComponentOverride), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginComponentOverride_MetaData), NewProp_OriginComponentOverride_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromPreset_Async_Statics::NewProp_TargetActorOverride = { "TargetActorOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromPreset_Async_Parms, TargetActorOverride), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromPreset_Async_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromPreset_Async_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromPreset_Async_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromPreset_Async_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromPreset_Async_Statics::NewProp_Preset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromPreset_Async_Statics::NewProp_OriginActorOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromPreset_Async_Statics::NewProp_OriginComponentOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromPreset_Async_Statics::NewProp_TargetActorOverride,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromPreset_Async_Statics::PropPointers) < 2048);
// ********** End Function OmniTrace_PatternFromPreset_Async Property Definitions ******************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromPreset_Async_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOmniTraceBlueprintLibrary, nullptr, "OmniTrace_PatternFromPreset_Async", 	Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromPreset_Async_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromPreset_Async_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromPreset_Async_Statics::OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromPreset_Async_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromPreset_Async_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromPreset_Async_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromPreset_Async_Statics::OmniTraceBlueprintLibrary_eventOmniTrace_PatternFromPreset_Async_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromPreset_Async()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromPreset_Async_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOmniTraceBlueprintLibrary::execOmniTrace_PatternFromPreset_Async)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_STRUCT_REF(FOmniTracePatternResult,Z_Param_Out_OutResult);
	P_GET_OBJECT(UOmniTracePatternPreset,Z_Param_Preset);
	P_GET_OBJECT(AActor,Z_Param_OriginActorOverride);
	P_GET_OBJECT(USceneComponent,Z_Param_OriginComponentOverride);
	P_GET_OBJECT(AActor,Z_Param_TargetActorOverride);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOmniTraceBlueprintLibrary::OmniTrace_PatternFromPreset_Async(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_OutResult,Z_Param_Preset,Z_Param_OriginActorOverride,Z_Param_OriginComponentOverride,Z_Param_TargetActorOverride);
	P_NATIVE_END;
}
// ********** End Class UOmniTraceBlueprintLibrary Function OmniTrace_PatternFromPreset_Async ******

// ********** Begin Class UOmniTraceBlueprintLibrary Function OmniTrace_TraceAlongPatternConfig ****
struct Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_TraceAlongPatternConfig_Statics
{
	struct OmniTraceBlueprintLibrary_eventOmniTrace_TraceAlongPatternConfig_Parms
	{
		UObject* WorldContextObject;
		FTransform Origin;
		FOmniTracePatternConfig Config;
		int32 NumPoints;
		float Scale;
		FOmniTraceRequest TraceTemplate;
		FOmniTracePatternResult OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OmniTrace|Patterns" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Convenience helper: build points from a pattern config and trace along them using a\n     * standard OmniTrace request template.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convenience helper: build points from a pattern config and trace along them using a\nstandard OmniTrace request template." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceTemplate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OmniTrace_TraceAlongPatternConfig constinit property declarations *****
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumPoints;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceTemplate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OmniTrace_TraceAlongPatternConfig constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OmniTrace_TraceAlongPatternConfig Property Definitions ****************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_TraceAlongPatternConfig_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_TraceAlongPatternConfig_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_TraceAlongPatternConfig_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_TraceAlongPatternConfig_Parms, Origin), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Origin_MetaData), NewProp_Origin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_TraceAlongPatternConfig_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_TraceAlongPatternConfig_Parms, Config), Z_Construct_UScriptStruct_FOmniTracePatternConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 3842959987
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_TraceAlongPatternConfig_Statics::NewProp_NumPoints = { "NumPoints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_TraceAlongPatternConfig_Parms, NumPoints), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_TraceAlongPatternConfig_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_TraceAlongPatternConfig_Parms, Scale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_TraceAlongPatternConfig_Statics::NewProp_TraceTemplate = { "TraceTemplate", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_TraceAlongPatternConfig_Parms, TraceTemplate), Z_Construct_UScriptStruct_FOmniTraceRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceTemplate_MetaData), NewProp_TraceTemplate_MetaData) }; // 979700793
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_TraceAlongPatternConfig_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTraceBlueprintLibrary_eventOmniTrace_TraceAlongPatternConfig_Parms, OutResult), Z_Construct_UScriptStruct_FOmniTracePatternResult, METADATA_PARAMS(0, nullptr) }; // 1001062659
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_TraceAlongPatternConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_TraceAlongPatternConfig_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_TraceAlongPatternConfig_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_TraceAlongPatternConfig_Statics::NewProp_Config,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_TraceAlongPatternConfig_Statics::NewProp_NumPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_TraceAlongPatternConfig_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_TraceAlongPatternConfig_Statics::NewProp_TraceTemplate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_TraceAlongPatternConfig_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_TraceAlongPatternConfig_Statics::PropPointers) < 2048);
// ********** End Function OmniTrace_TraceAlongPatternConfig Property Definitions ******************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_TraceAlongPatternConfig_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOmniTraceBlueprintLibrary, nullptr, "OmniTrace_TraceAlongPatternConfig", 	Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_TraceAlongPatternConfig_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_TraceAlongPatternConfig_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_TraceAlongPatternConfig_Statics::OmniTraceBlueprintLibrary_eventOmniTrace_TraceAlongPatternConfig_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_TraceAlongPatternConfig_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_TraceAlongPatternConfig_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_TraceAlongPatternConfig_Statics::OmniTraceBlueprintLibrary_eventOmniTrace_TraceAlongPatternConfig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_TraceAlongPatternConfig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_TraceAlongPatternConfig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOmniTraceBlueprintLibrary::execOmniTrace_TraceAlongPatternConfig)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_Origin);
	P_GET_STRUCT_REF(FOmniTracePatternConfig,Z_Param_Out_Config);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumPoints);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
	P_GET_STRUCT_REF(FOmniTraceRequest,Z_Param_Out_TraceTemplate);
	P_GET_STRUCT_REF(FOmniTracePatternResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOmniTraceBlueprintLibrary::OmniTrace_TraceAlongPatternConfig(Z_Param_WorldContextObject,Z_Param_Out_Origin,Z_Param_Out_Config,Z_Param_NumPoints,Z_Param_Scale,Z_Param_Out_TraceTemplate,Z_Param_Out_OutResult);
	P_NATIVE_END;
}
// ********** End Class UOmniTraceBlueprintLibrary Function OmniTrace_TraceAlongPatternConfig ******

// ********** Begin Class UOmniTraceBlueprintLibrary ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UOmniTraceBlueprintLibrary;
UClass* UOmniTraceBlueprintLibrary::GetPrivateStaticClass()
{
	using TClass = UOmniTraceBlueprintLibrary;
	if (!Z_Registration_Info_UClass_UOmniTraceBlueprintLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OmniTraceBlueprintLibrary"),
			Z_Registration_Info_UClass_UOmniTraceBlueprintLibrary.InnerSingleton,
			StaticRegisterNativesUOmniTraceBlueprintLibrary,
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
	return Z_Registration_Info_UClass_UOmniTraceBlueprintLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UOmniTraceBlueprintLibrary_NoRegister()
{
	return UOmniTraceBlueprintLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOmniTraceBlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Main Blueprint API surface for OmniTrace.\n *\n * This library operates on FOmniTraceRequest / FOmniTracePatternResult and\n * provides helpers to work with presets, libraries, and builtin presets.\n */" },
#endif
		{ "IncludePath", "OmniTraceBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/OmniTraceBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Main Blueprint API surface for OmniTrace.\n\nThis library operates on FOmniTraceRequest / FOmniTracePatternResult and\nprovides helpers to work with presets, libraries, and builtin presets." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UOmniTraceBlueprintLibrary constinit property declarations ***************
// ********** End Class UOmniTraceBlueprintLibrary constinit property declarations *****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("OmniTrace_BuildPathFromPatternConfig"), .Pointer = &UOmniTraceBlueprintLibrary::execOmniTrace_BuildPathFromPatternConfig },
		{ .NameUTF8 = UTF8TEXT("OmniTrace_GetBuiltinPresetInfos"), .Pointer = &UOmniTraceBlueprintLibrary::execOmniTrace_GetBuiltinPresetInfos },
		{ .NameUTF8 = UTF8TEXT("OmniTrace_GetLibraryPresetInfos"), .Pointer = &UOmniTraceBlueprintLibrary::execOmniTrace_GetLibraryPresetInfos },
		{ .NameUTF8 = UTF8TEXT("OmniTrace_MakeBuiltinPresetId"), .Pointer = &UOmniTraceBlueprintLibrary::execOmniTrace_MakeBuiltinPresetId },
		{ .NameUTF8 = UTF8TEXT("OmniTrace_Pattern"), .Pointer = &UOmniTraceBlueprintLibrary::execOmniTrace_Pattern },
		{ .NameUTF8 = UTF8TEXT("OmniTrace_Pattern_Async"), .Pointer = &UOmniTraceBlueprintLibrary::execOmniTrace_Pattern_Async },
		{ .NameUTF8 = UTF8TEXT("OmniTrace_PatternFromBuiltinPreset"), .Pointer = &UOmniTraceBlueprintLibrary::execOmniTrace_PatternFromBuiltinPreset },
		{ .NameUTF8 = UTF8TEXT("OmniTrace_PatternFromBuiltinPreset_Async"), .Pointer = &UOmniTraceBlueprintLibrary::execOmniTrace_PatternFromBuiltinPreset_Async },
		{ .NameUTF8 = UTF8TEXT("OmniTrace_PatternFromBuiltinPresetKey"), .Pointer = &UOmniTraceBlueprintLibrary::execOmniTrace_PatternFromBuiltinPresetKey },
		{ .NameUTF8 = UTF8TEXT("OmniTrace_PatternFromBuiltinPresetKey_Async"), .Pointer = &UOmniTraceBlueprintLibrary::execOmniTrace_PatternFromBuiltinPresetKey_Async },
		{ .NameUTF8 = UTF8TEXT("OmniTrace_PatternFromLibrary"), .Pointer = &UOmniTraceBlueprintLibrary::execOmniTrace_PatternFromLibrary },
		{ .NameUTF8 = UTF8TEXT("OmniTrace_PatternFromLibrary_Async"), .Pointer = &UOmniTraceBlueprintLibrary::execOmniTrace_PatternFromLibrary_Async },
		{ .NameUTF8 = UTF8TEXT("OmniTrace_PatternFromPreset"), .Pointer = &UOmniTraceBlueprintLibrary::execOmniTrace_PatternFromPreset },
		{ .NameUTF8 = UTF8TEXT("OmniTrace_PatternFromPreset_Async"), .Pointer = &UOmniTraceBlueprintLibrary::execOmniTrace_PatternFromPreset_Async },
		{ .NameUTF8 = UTF8TEXT("OmniTrace_TraceAlongPatternConfig"), .Pointer = &UOmniTraceBlueprintLibrary::execOmniTrace_TraceAlongPatternConfig },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_BuildPathFromPatternConfig, "OmniTrace_BuildPathFromPatternConfig" }, // 1045707150
		{ &Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_GetBuiltinPresetInfos, "OmniTrace_GetBuiltinPresetInfos" }, // 2453062703
		{ &Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_GetLibraryPresetInfos, "OmniTrace_GetLibraryPresetInfos" }, // 1821479807
		{ &Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_MakeBuiltinPresetId, "OmniTrace_MakeBuiltinPresetId" }, // 1448301953
		{ &Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_Pattern, "OmniTrace_Pattern" }, // 3559023920
		{ &Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_Pattern_Async, "OmniTrace_Pattern_Async" }, // 1737195318
		{ &Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPreset, "OmniTrace_PatternFromBuiltinPreset" }, // 3772261621
		{ &Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPreset_Async, "OmniTrace_PatternFromBuiltinPreset_Async" }, // 4197923641
		{ &Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPresetKey, "OmniTrace_PatternFromBuiltinPresetKey" }, // 2686069057
		{ &Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromBuiltinPresetKey_Async, "OmniTrace_PatternFromBuiltinPresetKey_Async" }, // 3784597127
		{ &Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromLibrary, "OmniTrace_PatternFromLibrary" }, // 3310693953
		{ &Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromLibrary_Async, "OmniTrace_PatternFromLibrary_Async" }, // 4075361107
		{ &Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromPreset, "OmniTrace_PatternFromPreset" }, // 398729450
		{ &Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_PatternFromPreset_Async, "OmniTrace_PatternFromPreset_Async" }, // 3573612561
		{ &Z_Construct_UFunction_UOmniTraceBlueprintLibrary_OmniTrace_TraceAlongPatternConfig, "OmniTrace_TraceAlongPatternConfig" }, // 1746742820
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOmniTraceBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UOmniTraceBlueprintLibrary_Statics
UObject* (*const Z_Construct_UClass_UOmniTraceBlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_OmniTrace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOmniTraceBlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOmniTraceBlueprintLibrary_Statics::ClassParams = {
	&UOmniTraceBlueprintLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOmniTraceBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UOmniTraceBlueprintLibrary_Statics::Class_MetaDataParams)
};
void UOmniTraceBlueprintLibrary::StaticRegisterNativesUOmniTraceBlueprintLibrary()
{
	UClass* Class = UOmniTraceBlueprintLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UOmniTraceBlueprintLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_UOmniTraceBlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_UOmniTraceBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOmniTraceBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UOmniTraceBlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOmniTraceBlueprintLibrary.OuterSingleton;
}
UOmniTraceBlueprintLibrary::UOmniTraceBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOmniTraceBlueprintLibrary);
UOmniTraceBlueprintLibrary::~UOmniTraceBlueprintLibrary() {}
// ********** End Class UOmniTraceBlueprintLibrary *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceBlueprintLibrary_h__Script_OmniTrace_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOmniTraceBlueprintLibrary, UOmniTraceBlueprintLibrary::StaticClass, TEXT("UOmniTraceBlueprintLibrary"), &Z_Registration_Info_UClass_UOmniTraceBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOmniTraceBlueprintLibrary), 2916406856U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceBlueprintLibrary_h__Script_OmniTrace_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceBlueprintLibrary_h__Script_OmniTrace_2824139191{
	TEXT("/Script/OmniTrace"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceBlueprintLibrary_h__Script_OmniTrace_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceBlueprintLibrary_h__Script_OmniTrace_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
