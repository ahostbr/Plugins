// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SOTS_StatsLibrary.h"
#include "GameplayTagContainer.h"
#include "SOTS_ProfileTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_StatsLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
SOTS_PROFILESHARED_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_CharacterStateData();
SOTS_STATS_API UClass* Z_Construct_UClass_USOTS_StatsLibrary();
SOTS_STATS_API UClass* Z_Construct_UClass_USOTS_StatsLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_SOTS_Stats();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USOTS_StatsLibrary Function AddToActorStat *******************************
struct Z_Construct_UFunction_USOTS_StatsLibrary_AddToActorStat_Statics
{
	struct SOTS_StatsLibrary_eventAddToActorStat_Parms
	{
		const UObject* WorldContextObject;
		AActor* Target;
		FGameplayTag StatTag;
		float Delta;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Stats" },
		{ "ModuleRelativePath", "Public/SOTS_StatsLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddToActorStat constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StatTag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Delta;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddToActorStat constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddToActorStat Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_StatsLibrary_AddToActorStat_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_StatsLibrary_eventAddToActorStat_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_StatsLibrary_AddToActorStat_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_StatsLibrary_eventAddToActorStat_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_StatsLibrary_AddToActorStat_Statics::NewProp_StatTag = { "StatTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_StatsLibrary_eventAddToActorStat_Parms, StatTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USOTS_StatsLibrary_AddToActorStat_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_StatsLibrary_eventAddToActorStat_Parms, Delta), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_StatsLibrary_AddToActorStat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_StatsLibrary_AddToActorStat_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_StatsLibrary_AddToActorStat_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_StatsLibrary_AddToActorStat_Statics::NewProp_StatTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_StatsLibrary_AddToActorStat_Statics::NewProp_Delta,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_StatsLibrary_AddToActorStat_Statics::PropPointers) < 2048);
// ********** End Function AddToActorStat Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_StatsLibrary_AddToActorStat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_StatsLibrary, nullptr, "AddToActorStat", 	Z_Construct_UFunction_USOTS_StatsLibrary_AddToActorStat_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_StatsLibrary_AddToActorStat_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_StatsLibrary_AddToActorStat_Statics::SOTS_StatsLibrary_eventAddToActorStat_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_StatsLibrary_AddToActorStat_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_StatsLibrary_AddToActorStat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_StatsLibrary_AddToActorStat_Statics::SOTS_StatsLibrary_eventAddToActorStat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_StatsLibrary_AddToActorStat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_StatsLibrary_AddToActorStat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_StatsLibrary::execAddToActorStat)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_STRUCT(FGameplayTag,Z_Param_StatTag);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Delta);
	P_FINISH;
	P_NATIVE_BEGIN;
	USOTS_StatsLibrary::AddToActorStat(Z_Param_WorldContextObject,Z_Param_Target,Z_Param_StatTag,Z_Param_Delta);
	P_NATIVE_END;
}
// ********** End Class USOTS_StatsLibrary Function AddToActorStat *********************************

// ********** Begin Class USOTS_StatsLibrary Function ApplySnapshotToActor *************************
struct Z_Construct_UFunction_USOTS_StatsLibrary_ApplySnapshotToActor_Statics
{
	struct SOTS_StatsLibrary_eventApplySnapshotToActor_Parms
	{
		AActor* Target;
		FSOTS_CharacterStateData Snapshot;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Stats" },
		{ "ModuleRelativePath", "Public/SOTS_StatsLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Snapshot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ApplySnapshotToActor constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Snapshot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ApplySnapshotToActor constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ApplySnapshotToActor Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_StatsLibrary_ApplySnapshotToActor_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_StatsLibrary_eventApplySnapshotToActor_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_StatsLibrary_ApplySnapshotToActor_Statics::NewProp_Snapshot = { "Snapshot", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_StatsLibrary_eventApplySnapshotToActor_Parms, Snapshot), Z_Construct_UScriptStruct_FSOTS_CharacterStateData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Snapshot_MetaData), NewProp_Snapshot_MetaData) }; // 165950162
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_StatsLibrary_ApplySnapshotToActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_StatsLibrary_ApplySnapshotToActor_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_StatsLibrary_ApplySnapshotToActor_Statics::NewProp_Snapshot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_StatsLibrary_ApplySnapshotToActor_Statics::PropPointers) < 2048);
// ********** End Function ApplySnapshotToActor Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_StatsLibrary_ApplySnapshotToActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_StatsLibrary, nullptr, "ApplySnapshotToActor", 	Z_Construct_UFunction_USOTS_StatsLibrary_ApplySnapshotToActor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_StatsLibrary_ApplySnapshotToActor_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_StatsLibrary_ApplySnapshotToActor_Statics::SOTS_StatsLibrary_eventApplySnapshotToActor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_StatsLibrary_ApplySnapshotToActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_StatsLibrary_ApplySnapshotToActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_StatsLibrary_ApplySnapshotToActor_Statics::SOTS_StatsLibrary_eventApplySnapshotToActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_StatsLibrary_ApplySnapshotToActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_StatsLibrary_ApplySnapshotToActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_StatsLibrary::execApplySnapshotToActor)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_STRUCT_REF(FSOTS_CharacterStateData,Z_Param_Out_Snapshot);
	P_FINISH;
	P_NATIVE_BEGIN;
	USOTS_StatsLibrary::ApplySnapshotToActor(Z_Param_Target,Z_Param_Out_Snapshot);
	P_NATIVE_END;
}
// ********** End Class USOTS_StatsLibrary Function ApplySnapshotToActor ***************************

// ********** Begin Class USOTS_StatsLibrary Function GetActorStatValue ****************************
struct Z_Construct_UFunction_USOTS_StatsLibrary_GetActorStatValue_Statics
{
	struct SOTS_StatsLibrary_eventGetActorStatValue_Parms
	{
		const UObject* WorldContextObject;
		AActor* Target;
		FGameplayTag StatTag;
		float DefaultValue;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Stats" },
		{ "CPP_Default_DefaultValue", "0.000000" },
		{ "ModuleRelativePath", "Public/SOTS_StatsLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetActorStatValue constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StatTag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetActorStatValue constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetActorStatValue Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_StatsLibrary_GetActorStatValue_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_StatsLibrary_eventGetActorStatValue_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_StatsLibrary_GetActorStatValue_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_StatsLibrary_eventGetActorStatValue_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_StatsLibrary_GetActorStatValue_Statics::NewProp_StatTag = { "StatTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_StatsLibrary_eventGetActorStatValue_Parms, StatTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USOTS_StatsLibrary_GetActorStatValue_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_StatsLibrary_eventGetActorStatValue_Parms, DefaultValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USOTS_StatsLibrary_GetActorStatValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_StatsLibrary_eventGetActorStatValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_StatsLibrary_GetActorStatValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_StatsLibrary_GetActorStatValue_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_StatsLibrary_GetActorStatValue_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_StatsLibrary_GetActorStatValue_Statics::NewProp_StatTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_StatsLibrary_GetActorStatValue_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_StatsLibrary_GetActorStatValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_StatsLibrary_GetActorStatValue_Statics::PropPointers) < 2048);
// ********** End Function GetActorStatValue Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_StatsLibrary_GetActorStatValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_StatsLibrary, nullptr, "GetActorStatValue", 	Z_Construct_UFunction_USOTS_StatsLibrary_GetActorStatValue_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_StatsLibrary_GetActorStatValue_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_StatsLibrary_GetActorStatValue_Statics::SOTS_StatsLibrary_eventGetActorStatValue_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_StatsLibrary_GetActorStatValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_StatsLibrary_GetActorStatValue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_StatsLibrary_GetActorStatValue_Statics::SOTS_StatsLibrary_eventGetActorStatValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_StatsLibrary_GetActorStatValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_StatsLibrary_GetActorStatValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_StatsLibrary::execGetActorStatValue)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_STRUCT(FGameplayTag,Z_Param_StatTag);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DefaultValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USOTS_StatsLibrary::GetActorStatValue(Z_Param_WorldContextObject,Z_Param_Target,Z_Param_StatTag,Z_Param_DefaultValue);
	P_NATIVE_END;
}
// ********** End Class USOTS_StatsLibrary Function GetActorStatValue ******************************

// ********** Begin Class USOTS_StatsLibrary Function SetActorStatValue ****************************
struct Z_Construct_UFunction_USOTS_StatsLibrary_SetActorStatValue_Statics
{
	struct SOTS_StatsLibrary_eventSetActorStatValue_Parms
	{
		const UObject* WorldContextObject;
		AActor* Target;
		FGameplayTag StatTag;
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Stats" },
		{ "ModuleRelativePath", "Public/SOTS_StatsLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetActorStatValue constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StatTag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetActorStatValue constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetActorStatValue Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_StatsLibrary_SetActorStatValue_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_StatsLibrary_eventSetActorStatValue_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_StatsLibrary_SetActorStatValue_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_StatsLibrary_eventSetActorStatValue_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_StatsLibrary_SetActorStatValue_Statics::NewProp_StatTag = { "StatTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_StatsLibrary_eventSetActorStatValue_Parms, StatTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USOTS_StatsLibrary_SetActorStatValue_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_StatsLibrary_eventSetActorStatValue_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_StatsLibrary_SetActorStatValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_StatsLibrary_SetActorStatValue_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_StatsLibrary_SetActorStatValue_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_StatsLibrary_SetActorStatValue_Statics::NewProp_StatTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_StatsLibrary_SetActorStatValue_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_StatsLibrary_SetActorStatValue_Statics::PropPointers) < 2048);
// ********** End Function SetActorStatValue Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_StatsLibrary_SetActorStatValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_StatsLibrary, nullptr, "SetActorStatValue", 	Z_Construct_UFunction_USOTS_StatsLibrary_SetActorStatValue_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_StatsLibrary_SetActorStatValue_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_StatsLibrary_SetActorStatValue_Statics::SOTS_StatsLibrary_eventSetActorStatValue_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_StatsLibrary_SetActorStatValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_StatsLibrary_SetActorStatValue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_StatsLibrary_SetActorStatValue_Statics::SOTS_StatsLibrary_eventSetActorStatValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_StatsLibrary_SetActorStatValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_StatsLibrary_SetActorStatValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_StatsLibrary::execSetActorStatValue)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_STRUCT(FGameplayTag,Z_Param_StatTag);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	USOTS_StatsLibrary::SetActorStatValue(Z_Param_WorldContextObject,Z_Param_Target,Z_Param_StatTag,Z_Param_NewValue);
	P_NATIVE_END;
}
// ********** End Class USOTS_StatsLibrary Function SetActorStatValue ******************************

// ********** Begin Class USOTS_StatsLibrary Function SnapshotActorStats ***************************
struct Z_Construct_UFunction_USOTS_StatsLibrary_SnapshotActorStats_Statics
{
	struct SOTS_StatsLibrary_eventSnapshotActorStats_Parms
	{
		AActor* Target;
		FSOTS_CharacterStateData OutState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Stats" },
		{ "ModuleRelativePath", "Public/SOTS_StatsLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function SnapshotActorStats constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SnapshotActorStats constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SnapshotActorStats Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_StatsLibrary_SnapshotActorStats_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_StatsLibrary_eventSnapshotActorStats_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_StatsLibrary_SnapshotActorStats_Statics::NewProp_OutState = { "OutState", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_StatsLibrary_eventSnapshotActorStats_Parms, OutState), Z_Construct_UScriptStruct_FSOTS_CharacterStateData, METADATA_PARAMS(0, nullptr) }; // 165950162
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_StatsLibrary_SnapshotActorStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_StatsLibrary_SnapshotActorStats_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_StatsLibrary_SnapshotActorStats_Statics::NewProp_OutState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_StatsLibrary_SnapshotActorStats_Statics::PropPointers) < 2048);
// ********** End Function SnapshotActorStats Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_StatsLibrary_SnapshotActorStats_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_StatsLibrary, nullptr, "SnapshotActorStats", 	Z_Construct_UFunction_USOTS_StatsLibrary_SnapshotActorStats_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_StatsLibrary_SnapshotActorStats_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_StatsLibrary_SnapshotActorStats_Statics::SOTS_StatsLibrary_eventSnapshotActorStats_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_StatsLibrary_SnapshotActorStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_StatsLibrary_SnapshotActorStats_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_StatsLibrary_SnapshotActorStats_Statics::SOTS_StatsLibrary_eventSnapshotActorStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_StatsLibrary_SnapshotActorStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_StatsLibrary_SnapshotActorStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_StatsLibrary::execSnapshotActorStats)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_STRUCT_REF(FSOTS_CharacterStateData,Z_Param_Out_OutState);
	P_FINISH;
	P_NATIVE_BEGIN;
	USOTS_StatsLibrary::SnapshotActorStats(Z_Param_Target,Z_Param_Out_OutState);
	P_NATIVE_END;
}
// ********** End Class USOTS_StatsLibrary Function SnapshotActorStats *****************************

// ********** Begin Class USOTS_StatsLibrary Function SOTS_ApplyCharacterStateToStats **************
struct Z_Construct_UFunction_USOTS_StatsLibrary_SOTS_ApplyCharacterStateToStats_Statics
{
	struct SOTS_StatsLibrary_eventSOTS_ApplyCharacterStateToStats_Parms
	{
		const UObject* WorldContextObject;
		AActor* Target;
		FSOTS_CharacterStateData InState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Stats" },
		{ "ModuleRelativePath", "Public/SOTS_StatsLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SOTS_ApplyCharacterStateToStats constinit property declarations *******
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SOTS_ApplyCharacterStateToStats constinit property declarations *********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SOTS_ApplyCharacterStateToStats Property Definitions ******************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_StatsLibrary_SOTS_ApplyCharacterStateToStats_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_StatsLibrary_eventSOTS_ApplyCharacterStateToStats_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_StatsLibrary_SOTS_ApplyCharacterStateToStats_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_StatsLibrary_eventSOTS_ApplyCharacterStateToStats_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_StatsLibrary_SOTS_ApplyCharacterStateToStats_Statics::NewProp_InState = { "InState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_StatsLibrary_eventSOTS_ApplyCharacterStateToStats_Parms, InState), Z_Construct_UScriptStruct_FSOTS_CharacterStateData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InState_MetaData), NewProp_InState_MetaData) }; // 165950162
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_StatsLibrary_SOTS_ApplyCharacterStateToStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_StatsLibrary_SOTS_ApplyCharacterStateToStats_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_StatsLibrary_SOTS_ApplyCharacterStateToStats_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_StatsLibrary_SOTS_ApplyCharacterStateToStats_Statics::NewProp_InState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_StatsLibrary_SOTS_ApplyCharacterStateToStats_Statics::PropPointers) < 2048);
// ********** End Function SOTS_ApplyCharacterStateToStats Property Definitions ********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_StatsLibrary_SOTS_ApplyCharacterStateToStats_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_StatsLibrary, nullptr, "SOTS_ApplyCharacterStateToStats", 	Z_Construct_UFunction_USOTS_StatsLibrary_SOTS_ApplyCharacterStateToStats_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_StatsLibrary_SOTS_ApplyCharacterStateToStats_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_StatsLibrary_SOTS_ApplyCharacterStateToStats_Statics::SOTS_StatsLibrary_eventSOTS_ApplyCharacterStateToStats_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_StatsLibrary_SOTS_ApplyCharacterStateToStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_StatsLibrary_SOTS_ApplyCharacterStateToStats_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_StatsLibrary_SOTS_ApplyCharacterStateToStats_Statics::SOTS_StatsLibrary_eventSOTS_ApplyCharacterStateToStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_StatsLibrary_SOTS_ApplyCharacterStateToStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_StatsLibrary_SOTS_ApplyCharacterStateToStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_StatsLibrary::execSOTS_ApplyCharacterStateToStats)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_STRUCT_REF(FSOTS_CharacterStateData,Z_Param_Out_InState);
	P_FINISH;
	P_NATIVE_BEGIN;
	USOTS_StatsLibrary::SOTS_ApplyCharacterStateToStats(Z_Param_WorldContextObject,Z_Param_Target,Z_Param_Out_InState);
	P_NATIVE_END;
}
// ********** End Class USOTS_StatsLibrary Function SOTS_ApplyCharacterStateToStats ****************

// ********** Begin Class USOTS_StatsLibrary Function SOTS_BuildCharacterStateFromStats ************
struct Z_Construct_UFunction_USOTS_StatsLibrary_SOTS_BuildCharacterStateFromStats_Statics
{
	struct SOTS_StatsLibrary_eventSOTS_BuildCharacterStateFromStats_Parms
	{
		const UObject* WorldContextObject;
		AActor* Target;
		FSOTS_CharacterStateData OutState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Stats" },
		{ "ModuleRelativePath", "Public/SOTS_StatsLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SOTS_BuildCharacterStateFromStats constinit property declarations *****
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SOTS_BuildCharacterStateFromStats constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SOTS_BuildCharacterStateFromStats Property Definitions ****************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_StatsLibrary_SOTS_BuildCharacterStateFromStats_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_StatsLibrary_eventSOTS_BuildCharacterStateFromStats_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_StatsLibrary_SOTS_BuildCharacterStateFromStats_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_StatsLibrary_eventSOTS_BuildCharacterStateFromStats_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_StatsLibrary_SOTS_BuildCharacterStateFromStats_Statics::NewProp_OutState = { "OutState", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_StatsLibrary_eventSOTS_BuildCharacterStateFromStats_Parms, OutState), Z_Construct_UScriptStruct_FSOTS_CharacterStateData, METADATA_PARAMS(0, nullptr) }; // 165950162
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_StatsLibrary_SOTS_BuildCharacterStateFromStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_StatsLibrary_SOTS_BuildCharacterStateFromStats_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_StatsLibrary_SOTS_BuildCharacterStateFromStats_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_StatsLibrary_SOTS_BuildCharacterStateFromStats_Statics::NewProp_OutState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_StatsLibrary_SOTS_BuildCharacterStateFromStats_Statics::PropPointers) < 2048);
// ********** End Function SOTS_BuildCharacterStateFromStats Property Definitions ******************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_StatsLibrary_SOTS_BuildCharacterStateFromStats_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_StatsLibrary, nullptr, "SOTS_BuildCharacterStateFromStats", 	Z_Construct_UFunction_USOTS_StatsLibrary_SOTS_BuildCharacterStateFromStats_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_StatsLibrary_SOTS_BuildCharacterStateFromStats_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_StatsLibrary_SOTS_BuildCharacterStateFromStats_Statics::SOTS_StatsLibrary_eventSOTS_BuildCharacterStateFromStats_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_StatsLibrary_SOTS_BuildCharacterStateFromStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_StatsLibrary_SOTS_BuildCharacterStateFromStats_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_StatsLibrary_SOTS_BuildCharacterStateFromStats_Statics::SOTS_StatsLibrary_eventSOTS_BuildCharacterStateFromStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_StatsLibrary_SOTS_BuildCharacterStateFromStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_StatsLibrary_SOTS_BuildCharacterStateFromStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_StatsLibrary::execSOTS_BuildCharacterStateFromStats)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_STRUCT_REF(FSOTS_CharacterStateData,Z_Param_Out_OutState);
	P_FINISH;
	P_NATIVE_BEGIN;
	USOTS_StatsLibrary::SOTS_BuildCharacterStateFromStats(Z_Param_WorldContextObject,Z_Param_Target,Z_Param_Out_OutState);
	P_NATIVE_END;
}
// ********** End Class USOTS_StatsLibrary Function SOTS_BuildCharacterStateFromStats **************

// ********** Begin Class USOTS_StatsLibrary Function SOTS_DumpStatsToString ***********************
struct Z_Construct_UFunction_USOTS_StatsLibrary_SOTS_DumpStatsToString_Statics
{
	struct SOTS_StatsLibrary_eventSOTS_DumpStatsToString_Parms
	{
		const UObject* WorldContextObject;
		AActor* Target;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Stats|DevTools" },
		{ "ModuleRelativePath", "Public/SOTS_StatsLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SOTS_DumpStatsToString constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SOTS_DumpStatsToString constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SOTS_DumpStatsToString Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_StatsLibrary_SOTS_DumpStatsToString_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_StatsLibrary_eventSOTS_DumpStatsToString_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_StatsLibrary_SOTS_DumpStatsToString_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_StatsLibrary_eventSOTS_DumpStatsToString_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USOTS_StatsLibrary_SOTS_DumpStatsToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_StatsLibrary_eventSOTS_DumpStatsToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_StatsLibrary_SOTS_DumpStatsToString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_StatsLibrary_SOTS_DumpStatsToString_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_StatsLibrary_SOTS_DumpStatsToString_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_StatsLibrary_SOTS_DumpStatsToString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_StatsLibrary_SOTS_DumpStatsToString_Statics::PropPointers) < 2048);
// ********** End Function SOTS_DumpStatsToString Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_StatsLibrary_SOTS_DumpStatsToString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_StatsLibrary, nullptr, "SOTS_DumpStatsToString", 	Z_Construct_UFunction_USOTS_StatsLibrary_SOTS_DumpStatsToString_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_StatsLibrary_SOTS_DumpStatsToString_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_StatsLibrary_SOTS_DumpStatsToString_Statics::SOTS_StatsLibrary_eventSOTS_DumpStatsToString_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_StatsLibrary_SOTS_DumpStatsToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_StatsLibrary_SOTS_DumpStatsToString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_StatsLibrary_SOTS_DumpStatsToString_Statics::SOTS_StatsLibrary_eventSOTS_DumpStatsToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_StatsLibrary_SOTS_DumpStatsToString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_StatsLibrary_SOTS_DumpStatsToString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_StatsLibrary::execSOTS_DumpStatsToString)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USOTS_StatsLibrary::SOTS_DumpStatsToString(Z_Param_WorldContextObject,Z_Param_Target);
	P_NATIVE_END;
}
// ********** End Class USOTS_StatsLibrary Function SOTS_DumpStatsToString *************************

// ********** Begin Class USOTS_StatsLibrary *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_StatsLibrary;
UClass* USOTS_StatsLibrary::GetPrivateStaticClass()
{
	using TClass = USOTS_StatsLibrary;
	if (!Z_Registration_Info_UClass_USOTS_StatsLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_StatsLibrary"),
			Z_Registration_Info_UClass_USOTS_StatsLibrary.InnerSingleton,
			StaticRegisterNativesUSOTS_StatsLibrary,
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
	return Z_Registration_Info_UClass_USOTS_StatsLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_StatsLibrary_NoRegister()
{
	return USOTS_StatsLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_StatsLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SOTS_StatsLibrary.h" },
		{ "ModuleRelativePath", "Public/SOTS_StatsLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_StatsLibrary constinit property declarations ***********************
// ********** End Class USOTS_StatsLibrary constinit property declarations *************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddToActorStat"), .Pointer = &USOTS_StatsLibrary::execAddToActorStat },
		{ .NameUTF8 = UTF8TEXT("ApplySnapshotToActor"), .Pointer = &USOTS_StatsLibrary::execApplySnapshotToActor },
		{ .NameUTF8 = UTF8TEXT("GetActorStatValue"), .Pointer = &USOTS_StatsLibrary::execGetActorStatValue },
		{ .NameUTF8 = UTF8TEXT("SetActorStatValue"), .Pointer = &USOTS_StatsLibrary::execSetActorStatValue },
		{ .NameUTF8 = UTF8TEXT("SnapshotActorStats"), .Pointer = &USOTS_StatsLibrary::execSnapshotActorStats },
		{ .NameUTF8 = UTF8TEXT("SOTS_ApplyCharacterStateToStats"), .Pointer = &USOTS_StatsLibrary::execSOTS_ApplyCharacterStateToStats },
		{ .NameUTF8 = UTF8TEXT("SOTS_BuildCharacterStateFromStats"), .Pointer = &USOTS_StatsLibrary::execSOTS_BuildCharacterStateFromStats },
		{ .NameUTF8 = UTF8TEXT("SOTS_DumpStatsToString"), .Pointer = &USOTS_StatsLibrary::execSOTS_DumpStatsToString },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USOTS_StatsLibrary_AddToActorStat, "AddToActorStat" }, // 2883591720
		{ &Z_Construct_UFunction_USOTS_StatsLibrary_ApplySnapshotToActor, "ApplySnapshotToActor" }, // 2937963686
		{ &Z_Construct_UFunction_USOTS_StatsLibrary_GetActorStatValue, "GetActorStatValue" }, // 3069117355
		{ &Z_Construct_UFunction_USOTS_StatsLibrary_SetActorStatValue, "SetActorStatValue" }, // 1908030687
		{ &Z_Construct_UFunction_USOTS_StatsLibrary_SnapshotActorStats, "SnapshotActorStats" }, // 3008997565
		{ &Z_Construct_UFunction_USOTS_StatsLibrary_SOTS_ApplyCharacterStateToStats, "SOTS_ApplyCharacterStateToStats" }, // 3589663181
		{ &Z_Construct_UFunction_USOTS_StatsLibrary_SOTS_BuildCharacterStateFromStats, "SOTS_BuildCharacterStateFromStats" }, // 4189680180
		{ &Z_Construct_UFunction_USOTS_StatsLibrary_SOTS_DumpStatsToString, "SOTS_DumpStatsToString" }, // 1738851273
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_StatsLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_StatsLibrary_Statics
UObject* (*const Z_Construct_UClass_USOTS_StatsLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_Stats,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_StatsLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_StatsLibrary_Statics::ClassParams = {
	&USOTS_StatsLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_StatsLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_StatsLibrary_Statics::Class_MetaDataParams)
};
void USOTS_StatsLibrary::StaticRegisterNativesUSOTS_StatsLibrary()
{
	UClass* Class = USOTS_StatsLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USOTS_StatsLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_USOTS_StatsLibrary()
{
	if (!Z_Registration_Info_UClass_USOTS_StatsLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_StatsLibrary.OuterSingleton, Z_Construct_UClass_USOTS_StatsLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_StatsLibrary.OuterSingleton;
}
USOTS_StatsLibrary::USOTS_StatsLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_StatsLibrary);
USOTS_StatsLibrary::~USOTS_StatsLibrary() {}
// ********** End Class USOTS_StatsLibrary *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_Stats_Source_SOTS_Stats_Public_SOTS_StatsLibrary_h__Script_SOTS_Stats_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_StatsLibrary, USOTS_StatsLibrary::StaticClass, TEXT("USOTS_StatsLibrary"), &Z_Registration_Info_UClass_USOTS_StatsLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_StatsLibrary), 581452111U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_Stats_Source_SOTS_Stats_Public_SOTS_StatsLibrary_h__Script_SOTS_Stats_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_Stats_Source_SOTS_Stats_Public_SOTS_StatsLibrary_h__Script_SOTS_Stats_2260242590{
	TEXT("/Script/SOTS_Stats"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_Stats_Source_SOTS_Stats_Public_SOTS_StatsLibrary_h__Script_SOTS_Stats_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_Stats_Source_SOTS_Stats_Public_SOTS_StatsLibrary_h__Script_SOTS_Stats_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
