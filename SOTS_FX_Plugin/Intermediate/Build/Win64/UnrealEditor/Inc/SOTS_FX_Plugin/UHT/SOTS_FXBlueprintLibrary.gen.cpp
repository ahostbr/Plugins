// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SOTS_FXBlueprintLibrary.h"
#include "GameplayTagContainer.h"
#include "SOTSFXTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_FXBlueprintLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
SOTS_FX_PLUGIN_API UClass* Z_Construct_UClass_USOTS_FXBlueprintLibrary();
SOTS_FX_PLUGIN_API UClass* Z_Construct_UClass_USOTS_FXBlueprintLibrary_NoRegister();
SOTS_FX_PLUGIN_API UClass* Z_Construct_UClass_USOTS_FXCueDefinition_NoRegister();
SOTS_FX_PLUGIN_API UClass* Z_Construct_UClass_USOTS_FXManagerSubsystem_NoRegister();
SOTS_FX_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_FXActiveCounts();
SOTS_FX_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_FXContext();
SOTS_FX_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_FXHandle();
UPackage* Z_Construct_UPackage__Script_SOTS_FX_Plugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USOTS_FXBlueprintLibrary Function GetFXActiveCounts **********************
struct Z_Construct_UFunction_USOTS_FXBlueprintLibrary_GetFXActiveCounts_Statics
{
	struct SOTS_FXBlueprintLibrary_eventGetFXActiveCounts_Parms
	{
		FSOTS_FXActiveCounts ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|FX|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Debug helper: get counts of currently active Niagara & Audio FX. */" },
#endif
		{ "DisplayName", "Get FX Active Counts" },
		{ "ModuleRelativePath", "Public/SOTS_FXBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Debug helper: get counts of currently active Niagara & Audio FX." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetFXActiveCounts constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFXActiveCounts constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFXActiveCounts Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_FXBlueprintLibrary_GetFXActiveCounts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_FXBlueprintLibrary_eventGetFXActiveCounts_Parms, ReturnValue), Z_Construct_UScriptStruct_FSOTS_FXActiveCounts, METADATA_PARAMS(0, nullptr) }; // 3336076587
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_FXBlueprintLibrary_GetFXActiveCounts_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_FXBlueprintLibrary_GetFXActiveCounts_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_FXBlueprintLibrary_GetFXActiveCounts_Statics::PropPointers) < 2048);
// ********** End Function GetFXActiveCounts Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_FXBlueprintLibrary_GetFXActiveCounts_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_FXBlueprintLibrary, nullptr, "GetFXActiveCounts", 	Z_Construct_UFunction_USOTS_FXBlueprintLibrary_GetFXActiveCounts_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_FXBlueprintLibrary_GetFXActiveCounts_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_FXBlueprintLibrary_GetFXActiveCounts_Statics::SOTS_FXBlueprintLibrary_eventGetFXActiveCounts_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_FXBlueprintLibrary_GetFXActiveCounts_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_FXBlueprintLibrary_GetFXActiveCounts_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_FXBlueprintLibrary_GetFXActiveCounts_Statics::SOTS_FXBlueprintLibrary_eventGetFXActiveCounts_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_FXBlueprintLibrary_GetFXActiveCounts()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_FXBlueprintLibrary_GetFXActiveCounts_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_FXBlueprintLibrary::execGetFXActiveCounts)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSOTS_FXActiveCounts*)Z_Param__Result=USOTS_FXBlueprintLibrary::GetFXActiveCounts();
	P_NATIVE_END;
}
// ********** End Class USOTS_FXBlueprintLibrary Function GetFXActiveCounts ************************

// ********** Begin Class USOTS_FXBlueprintLibrary Function GetFXManager ***************************
struct Z_Construct_UFunction_USOTS_FXBlueprintLibrary_GetFXManager_Statics
{
	struct SOTS_FXBlueprintLibrary_eventGetFXManager_Parms
	{
		USOTS_FXManagerSubsystem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|FX" },
		{ "DisplayName", "Get SOTS FXManager Subsystem" },
		{ "ModuleRelativePath", "Public/SOTS_FXBlueprintLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetFXManager constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFXManager constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFXManager Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_FXBlueprintLibrary_GetFXManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_FXBlueprintLibrary_eventGetFXManager_Parms, ReturnValue), Z_Construct_UClass_USOTS_FXManagerSubsystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_FXBlueprintLibrary_GetFXManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_FXBlueprintLibrary_GetFXManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_FXBlueprintLibrary_GetFXManager_Statics::PropPointers) < 2048);
// ********** End Function GetFXManager Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_FXBlueprintLibrary_GetFXManager_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_FXBlueprintLibrary, nullptr, "GetFXManager", 	Z_Construct_UFunction_USOTS_FXBlueprintLibrary_GetFXManager_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_FXBlueprintLibrary_GetFXManager_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_FXBlueprintLibrary_GetFXManager_Statics::SOTS_FXBlueprintLibrary_eventGetFXManager_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_FXBlueprintLibrary_GetFXManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_FXBlueprintLibrary_GetFXManager_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_FXBlueprintLibrary_GetFXManager_Statics::SOTS_FXBlueprintLibrary_eventGetFXManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_FXBlueprintLibrary_GetFXManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_FXBlueprintLibrary_GetFXManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_FXBlueprintLibrary::execGetFXManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USOTS_FXManagerSubsystem**)Z_Param__Result=USOTS_FXBlueprintLibrary::GetFXManager();
	P_NATIVE_END;
}
// ********** End Class USOTS_FXBlueprintLibrary Function GetFXManager *****************************

// ********** Begin Class USOTS_FXBlueprintLibrary Function GetRegisteredFXCues ********************
struct Z_Construct_UFunction_USOTS_FXBlueprintLibrary_GetRegisteredFXCues_Statics
{
	struct SOTS_FXBlueprintLibrary_eventGetRegisteredFXCues_Parms
	{
		TArray<FGameplayTag> OutCueTags;
		TArray<USOTS_FXCueDefinition*> OutCueDefinitions;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|FX|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Debug helper: list currently registered FX cues (tags + assets). */" },
#endif
		{ "DisplayName", "Get Registered FX Cues" },
		{ "ModuleRelativePath", "Public/SOTS_FXBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Debug helper: list currently registered FX cues (tags + assets)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetRegisteredFXCues constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutCueTags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutCueTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutCueDefinitions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutCueDefinitions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRegisteredFXCues constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRegisteredFXCues Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_FXBlueprintLibrary_GetRegisteredFXCues_Statics::NewProp_OutCueTags_Inner = { "OutCueTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USOTS_FXBlueprintLibrary_GetRegisteredFXCues_Statics::NewProp_OutCueTags = { "OutCueTags", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_FXBlueprintLibrary_eventGetRegisteredFXCues_Parms, OutCueTags), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_FXBlueprintLibrary_GetRegisteredFXCues_Statics::NewProp_OutCueDefinitions_Inner = { "OutCueDefinitions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USOTS_FXCueDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USOTS_FXBlueprintLibrary_GetRegisteredFXCues_Statics::NewProp_OutCueDefinitions = { "OutCueDefinitions", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_FXBlueprintLibrary_eventGetRegisteredFXCues_Parms, OutCueDefinitions), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_FXBlueprintLibrary_GetRegisteredFXCues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_FXBlueprintLibrary_GetRegisteredFXCues_Statics::NewProp_OutCueTags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_FXBlueprintLibrary_GetRegisteredFXCues_Statics::NewProp_OutCueTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_FXBlueprintLibrary_GetRegisteredFXCues_Statics::NewProp_OutCueDefinitions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_FXBlueprintLibrary_GetRegisteredFXCues_Statics::NewProp_OutCueDefinitions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_FXBlueprintLibrary_GetRegisteredFXCues_Statics::PropPointers) < 2048);
// ********** End Function GetRegisteredFXCues Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_FXBlueprintLibrary_GetRegisteredFXCues_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_FXBlueprintLibrary, nullptr, "GetRegisteredFXCues", 	Z_Construct_UFunction_USOTS_FXBlueprintLibrary_GetRegisteredFXCues_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_FXBlueprintLibrary_GetRegisteredFXCues_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_FXBlueprintLibrary_GetRegisteredFXCues_Statics::SOTS_FXBlueprintLibrary_eventGetRegisteredFXCues_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_FXBlueprintLibrary_GetRegisteredFXCues_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_FXBlueprintLibrary_GetRegisteredFXCues_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_FXBlueprintLibrary_GetRegisteredFXCues_Statics::SOTS_FXBlueprintLibrary_eventGetRegisteredFXCues_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_FXBlueprintLibrary_GetRegisteredFXCues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_FXBlueprintLibrary_GetRegisteredFXCues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_FXBlueprintLibrary::execGetRegisteredFXCues)
{
	P_GET_TARRAY_REF(FGameplayTag,Z_Param_Out_OutCueTags);
	P_GET_TARRAY_REF(USOTS_FXCueDefinition*,Z_Param_Out_OutCueDefinitions);
	P_FINISH;
	P_NATIVE_BEGIN;
	USOTS_FXBlueprintLibrary::GetRegisteredFXCues(Z_Param_Out_OutCueTags,Z_Param_Out_OutCueDefinitions);
	P_NATIVE_END;
}
// ********** End Class USOTS_FXBlueprintLibrary Function GetRegisteredFXCues **********************

// ********** Begin Class USOTS_FXBlueprintLibrary Function PlayFXCueByTag *************************
struct Z_Construct_UFunction_USOTS_FXBlueprintLibrary_PlayFXCueByTag_Statics
{
	struct SOTS_FXBlueprintLibrary_eventPlayFXCueByTag_Parms
	{
		FGameplayTag CueTag;
		FSOTS_FXContext Context;
		FSOTS_FXHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|FX" },
		{ "DisplayName", "Play FX Cue By Tag" },
		{ "ModuleRelativePath", "Public/SOTS_FXBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function PlayFXCueByTag constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_CueTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PlayFXCueByTag constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PlayFXCueByTag Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_FXBlueprintLibrary_PlayFXCueByTag_Statics::NewProp_CueTag = { "CueTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_FXBlueprintLibrary_eventPlayFXCueByTag_Parms, CueTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_FXBlueprintLibrary_PlayFXCueByTag_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_FXBlueprintLibrary_eventPlayFXCueByTag_Parms, Context), Z_Construct_UScriptStruct_FSOTS_FXContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) }; // 2146476462
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_FXBlueprintLibrary_PlayFXCueByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_FXBlueprintLibrary_eventPlayFXCueByTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FSOTS_FXHandle, METADATA_PARAMS(0, nullptr) }; // 890763606
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_FXBlueprintLibrary_PlayFXCueByTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_FXBlueprintLibrary_PlayFXCueByTag_Statics::NewProp_CueTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_FXBlueprintLibrary_PlayFXCueByTag_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_FXBlueprintLibrary_PlayFXCueByTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_FXBlueprintLibrary_PlayFXCueByTag_Statics::PropPointers) < 2048);
// ********** End Function PlayFXCueByTag Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_FXBlueprintLibrary_PlayFXCueByTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_FXBlueprintLibrary, nullptr, "PlayFXCueByTag", 	Z_Construct_UFunction_USOTS_FXBlueprintLibrary_PlayFXCueByTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_FXBlueprintLibrary_PlayFXCueByTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_FXBlueprintLibrary_PlayFXCueByTag_Statics::SOTS_FXBlueprintLibrary_eventPlayFXCueByTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_FXBlueprintLibrary_PlayFXCueByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_FXBlueprintLibrary_PlayFXCueByTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_FXBlueprintLibrary_PlayFXCueByTag_Statics::SOTS_FXBlueprintLibrary_eventPlayFXCueByTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_FXBlueprintLibrary_PlayFXCueByTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_FXBlueprintLibrary_PlayFXCueByTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_FXBlueprintLibrary::execPlayFXCueByTag)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_CueTag);
	P_GET_STRUCT_REF(FSOTS_FXContext,Z_Param_Out_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSOTS_FXHandle*)Z_Param__Result=USOTS_FXBlueprintLibrary::PlayFXCueByTag(Z_Param_CueTag,Z_Param_Out_Context);
	P_NATIVE_END;
}
// ********** End Class USOTS_FXBlueprintLibrary Function PlayFXCueByTag ***************************

// ********** Begin Class USOTS_FXBlueprintLibrary Function PlayFXCueDefinition ********************
struct Z_Construct_UFunction_USOTS_FXBlueprintLibrary_PlayFXCueDefinition_Statics
{
	struct SOTS_FXBlueprintLibrary_eventPlayFXCueDefinition_Parms
	{
		USOTS_FXCueDefinition* CueDefinition;
		FSOTS_FXContext Context;
		FSOTS_FXHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|FX" },
		{ "DisplayName", "Play FX Cue Definition" },
		{ "ModuleRelativePath", "Public/SOTS_FXBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function PlayFXCueDefinition constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CueDefinition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PlayFXCueDefinition constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PlayFXCueDefinition Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_FXBlueprintLibrary_PlayFXCueDefinition_Statics::NewProp_CueDefinition = { "CueDefinition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_FXBlueprintLibrary_eventPlayFXCueDefinition_Parms, CueDefinition), Z_Construct_UClass_USOTS_FXCueDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_FXBlueprintLibrary_PlayFXCueDefinition_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_FXBlueprintLibrary_eventPlayFXCueDefinition_Parms, Context), Z_Construct_UScriptStruct_FSOTS_FXContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) }; // 2146476462
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_FXBlueprintLibrary_PlayFXCueDefinition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_FXBlueprintLibrary_eventPlayFXCueDefinition_Parms, ReturnValue), Z_Construct_UScriptStruct_FSOTS_FXHandle, METADATA_PARAMS(0, nullptr) }; // 890763606
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_FXBlueprintLibrary_PlayFXCueDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_FXBlueprintLibrary_PlayFXCueDefinition_Statics::NewProp_CueDefinition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_FXBlueprintLibrary_PlayFXCueDefinition_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_FXBlueprintLibrary_PlayFXCueDefinition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_FXBlueprintLibrary_PlayFXCueDefinition_Statics::PropPointers) < 2048);
// ********** End Function PlayFXCueDefinition Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_FXBlueprintLibrary_PlayFXCueDefinition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_FXBlueprintLibrary, nullptr, "PlayFXCueDefinition", 	Z_Construct_UFunction_USOTS_FXBlueprintLibrary_PlayFXCueDefinition_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_FXBlueprintLibrary_PlayFXCueDefinition_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_FXBlueprintLibrary_PlayFXCueDefinition_Statics::SOTS_FXBlueprintLibrary_eventPlayFXCueDefinition_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_FXBlueprintLibrary_PlayFXCueDefinition_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_FXBlueprintLibrary_PlayFXCueDefinition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_FXBlueprintLibrary_PlayFXCueDefinition_Statics::SOTS_FXBlueprintLibrary_eventPlayFXCueDefinition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_FXBlueprintLibrary_PlayFXCueDefinition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_FXBlueprintLibrary_PlayFXCueDefinition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_FXBlueprintLibrary::execPlayFXCueDefinition)
{
	P_GET_OBJECT(USOTS_FXCueDefinition,Z_Param_CueDefinition);
	P_GET_STRUCT_REF(FSOTS_FXContext,Z_Param_Out_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSOTS_FXHandle*)Z_Param__Result=USOTS_FXBlueprintLibrary::PlayFXCueDefinition(Z_Param_CueDefinition,Z_Param_Out_Context);
	P_NATIVE_END;
}
// ********** End Class USOTS_FXBlueprintLibrary Function PlayFXCueDefinition **********************

// ********** Begin Class USOTS_FXBlueprintLibrary Function StopFXHandle ***************************
struct Z_Construct_UFunction_USOTS_FXBlueprintLibrary_StopFXHandle_Statics
{
	struct SOTS_FXBlueprintLibrary_eventStopFXHandle_Parms
	{
		FSOTS_FXHandle Handle;
		bool bImmediate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|FX" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Stop (and optionally immediately kill) an FX handle. */" },
#endif
		{ "DisplayName", "Stop FX Handle" },
		{ "ModuleRelativePath", "Public/SOTS_FXBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stop (and optionally immediately kill) an FX handle." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function StopFXHandle constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static void NewProp_bImmediate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImmediate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StopFXHandle constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StopFXHandle Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_FXBlueprintLibrary_StopFXHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_FXBlueprintLibrary_eventStopFXHandle_Parms, Handle), Z_Construct_UScriptStruct_FSOTS_FXHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handle_MetaData), NewProp_Handle_MetaData) }; // 890763606
void Z_Construct_UFunction_USOTS_FXBlueprintLibrary_StopFXHandle_Statics::NewProp_bImmediate_SetBit(void* Obj)
{
	((SOTS_FXBlueprintLibrary_eventStopFXHandle_Parms*)Obj)->bImmediate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_FXBlueprintLibrary_StopFXHandle_Statics::NewProp_bImmediate = { "bImmediate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_FXBlueprintLibrary_eventStopFXHandle_Parms), &Z_Construct_UFunction_USOTS_FXBlueprintLibrary_StopFXHandle_Statics::NewProp_bImmediate_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_FXBlueprintLibrary_StopFXHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_FXBlueprintLibrary_StopFXHandle_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_FXBlueprintLibrary_StopFXHandle_Statics::NewProp_bImmediate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_FXBlueprintLibrary_StopFXHandle_Statics::PropPointers) < 2048);
// ********** End Function StopFXHandle Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_FXBlueprintLibrary_StopFXHandle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_FXBlueprintLibrary, nullptr, "StopFXHandle", 	Z_Construct_UFunction_USOTS_FXBlueprintLibrary_StopFXHandle_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_FXBlueprintLibrary_StopFXHandle_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_FXBlueprintLibrary_StopFXHandle_Statics::SOTS_FXBlueprintLibrary_eventStopFXHandle_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_FXBlueprintLibrary_StopFXHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_FXBlueprintLibrary_StopFXHandle_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_FXBlueprintLibrary_StopFXHandle_Statics::SOTS_FXBlueprintLibrary_eventStopFXHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_FXBlueprintLibrary_StopFXHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_FXBlueprintLibrary_StopFXHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_FXBlueprintLibrary::execStopFXHandle)
{
	P_GET_STRUCT_REF(FSOTS_FXHandle,Z_Param_Out_Handle);
	P_GET_UBOOL(Z_Param_bImmediate);
	P_FINISH;
	P_NATIVE_BEGIN;
	USOTS_FXBlueprintLibrary::StopFXHandle(Z_Param_Out_Handle,Z_Param_bImmediate);
	P_NATIVE_END;
}
// ********** End Class USOTS_FXBlueprintLibrary Function StopFXHandle *****************************

// ********** Begin Class USOTS_FXBlueprintLibrary *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_FXBlueprintLibrary;
UClass* USOTS_FXBlueprintLibrary::GetPrivateStaticClass()
{
	using TClass = USOTS_FXBlueprintLibrary;
	if (!Z_Registration_Info_UClass_USOTS_FXBlueprintLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_FXBlueprintLibrary"),
			Z_Registration_Info_UClass_USOTS_FXBlueprintLibrary.InnerSingleton,
			StaticRegisterNativesUSOTS_FXBlueprintLibrary,
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
	return Z_Registration_Info_UClass_USOTS_FXBlueprintLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_FXBlueprintLibrary_NoRegister()
{
	return USOTS_FXBlueprintLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_FXBlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SOTS_FXBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/SOTS_FXBlueprintLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_FXBlueprintLibrary constinit property declarations *****************
// ********** End Class USOTS_FXBlueprintLibrary constinit property declarations *******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetFXActiveCounts"), .Pointer = &USOTS_FXBlueprintLibrary::execGetFXActiveCounts },
		{ .NameUTF8 = UTF8TEXT("GetFXManager"), .Pointer = &USOTS_FXBlueprintLibrary::execGetFXManager },
		{ .NameUTF8 = UTF8TEXT("GetRegisteredFXCues"), .Pointer = &USOTS_FXBlueprintLibrary::execGetRegisteredFXCues },
		{ .NameUTF8 = UTF8TEXT("PlayFXCueByTag"), .Pointer = &USOTS_FXBlueprintLibrary::execPlayFXCueByTag },
		{ .NameUTF8 = UTF8TEXT("PlayFXCueDefinition"), .Pointer = &USOTS_FXBlueprintLibrary::execPlayFXCueDefinition },
		{ .NameUTF8 = UTF8TEXT("StopFXHandle"), .Pointer = &USOTS_FXBlueprintLibrary::execStopFXHandle },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USOTS_FXBlueprintLibrary_GetFXActiveCounts, "GetFXActiveCounts" }, // 3522180618
		{ &Z_Construct_UFunction_USOTS_FXBlueprintLibrary_GetFXManager, "GetFXManager" }, // 1553469980
		{ &Z_Construct_UFunction_USOTS_FXBlueprintLibrary_GetRegisteredFXCues, "GetRegisteredFXCues" }, // 964532064
		{ &Z_Construct_UFunction_USOTS_FXBlueprintLibrary_PlayFXCueByTag, "PlayFXCueByTag" }, // 2066042351
		{ &Z_Construct_UFunction_USOTS_FXBlueprintLibrary_PlayFXCueDefinition, "PlayFXCueDefinition" }, // 3500960861
		{ &Z_Construct_UFunction_USOTS_FXBlueprintLibrary_StopFXHandle, "StopFXHandle" }, // 3422192666
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_FXBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_FXBlueprintLibrary_Statics
UObject* (*const Z_Construct_UClass_USOTS_FXBlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_FX_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_FXBlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_FXBlueprintLibrary_Statics::ClassParams = {
	&USOTS_FXBlueprintLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_FXBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_FXBlueprintLibrary_Statics::Class_MetaDataParams)
};
void USOTS_FXBlueprintLibrary::StaticRegisterNativesUSOTS_FXBlueprintLibrary()
{
	UClass* Class = USOTS_FXBlueprintLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USOTS_FXBlueprintLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_USOTS_FXBlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_USOTS_FXBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_FXBlueprintLibrary.OuterSingleton, Z_Construct_UClass_USOTS_FXBlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_FXBlueprintLibrary.OuterSingleton;
}
USOTS_FXBlueprintLibrary::USOTS_FXBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_FXBlueprintLibrary);
USOTS_FXBlueprintLibrary::~USOTS_FXBlueprintLibrary() {}
// ********** End Class USOTS_FXBlueprintLibrary ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTS_FXBlueprintLibrary_h__Script_SOTS_FX_Plugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_FXBlueprintLibrary, USOTS_FXBlueprintLibrary::StaticClass, TEXT("USOTS_FXBlueprintLibrary"), &Z_Registration_Info_UClass_USOTS_FXBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_FXBlueprintLibrary), 2289527143U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTS_FXBlueprintLibrary_h__Script_SOTS_FX_Plugin_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTS_FXBlueprintLibrary_h__Script_SOTS_FX_Plugin_130703170{
	TEXT("/Script/SOTS_FX_Plugin"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTS_FXBlueprintLibrary_h__Script_SOTS_FX_Plugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTS_FXBlueprintLibrary_h__Script_SOTS_FX_Plugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
