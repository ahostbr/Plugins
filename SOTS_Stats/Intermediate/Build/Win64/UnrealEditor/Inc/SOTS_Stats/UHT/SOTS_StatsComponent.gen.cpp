// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SOTS_StatsComponent.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_StatsComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
SOTS_STATS_API UClass* Z_Construct_UClass_USOTS_StatsComponent();
SOTS_STATS_API UClass* Z_Construct_UClass_USOTS_StatsComponent_NoRegister();
SOTS_STATS_API UFunction* Z_Construct_UDelegateFunction_SOTS_Stats_SOTS_OnStatChangedSignature__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SOTS_Stats();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FSOTS_OnStatChangedSignature ******************************************
struct Z_Construct_UDelegateFunction_SOTS_Stats_SOTS_OnStatChangedSignature__DelegateSignature_Statics
{
	struct _Script_SOTS_Stats_eventSOTS_OnStatChangedSignature_Parms
	{
		FGameplayTag StatTag;
		float OldValue;
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SOTS_StatsComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FSOTS_OnStatChangedSignature constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_StatTag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FSOTS_OnStatChangedSignature constinit property declarations ************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FSOTS_OnStatChangedSignature Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SOTS_Stats_SOTS_OnStatChangedSignature__DelegateSignature_Statics::NewProp_StatTag = { "StatTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SOTS_Stats_eventSOTS_OnStatChangedSignature_Parms, StatTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_SOTS_Stats_SOTS_OnStatChangedSignature__DelegateSignature_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SOTS_Stats_eventSOTS_OnStatChangedSignature_Parms, OldValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_SOTS_Stats_SOTS_OnStatChangedSignature__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SOTS_Stats_eventSOTS_OnStatChangedSignature_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SOTS_Stats_SOTS_OnStatChangedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SOTS_Stats_SOTS_OnStatChangedSignature__DelegateSignature_Statics::NewProp_StatTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SOTS_Stats_SOTS_OnStatChangedSignature__DelegateSignature_Statics::NewProp_OldValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SOTS_Stats_SOTS_OnStatChangedSignature__DelegateSignature_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_Stats_SOTS_OnStatChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FSOTS_OnStatChangedSignature Property Definitions ***********************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SOTS_Stats_SOTS_OnStatChangedSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SOTS_Stats, nullptr, "SOTS_OnStatChangedSignature__DelegateSignature", 	Z_Construct_UDelegateFunction_SOTS_Stats_SOTS_OnStatChangedSignature__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_Stats_SOTS_OnStatChangedSignature__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SOTS_Stats_SOTS_OnStatChangedSignature__DelegateSignature_Statics::_Script_SOTS_Stats_eventSOTS_OnStatChangedSignature_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_Stats_SOTS_OnStatChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SOTS_Stats_SOTS_OnStatChangedSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SOTS_Stats_SOTS_OnStatChangedSignature__DelegateSignature_Statics::_Script_SOTS_Stats_eventSOTS_OnStatChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SOTS_Stats_SOTS_OnStatChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SOTS_Stats_SOTS_OnStatChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSOTS_OnStatChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& SOTS_OnStatChangedSignature, FGameplayTag StatTag, float OldValue, float NewValue)
{
	struct _Script_SOTS_Stats_eventSOTS_OnStatChangedSignature_Parms
	{
		FGameplayTag StatTag;
		float OldValue;
		float NewValue;
	};
	_Script_SOTS_Stats_eventSOTS_OnStatChangedSignature_Parms Parms;
	Parms.StatTag=StatTag;
	Parms.OldValue=OldValue;
	Parms.NewValue=NewValue;
	SOTS_OnStatChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FSOTS_OnStatChangedSignature ********************************************

// ********** Begin Class USOTS_StatsComponent Function AddToStat **********************************
struct Z_Construct_UFunction_USOTS_StatsComponent_AddToStat_Statics
{
	struct SOTS_StatsComponent_eventAddToStat_Parms
	{
		FGameplayTag StatTag;
		float Delta;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Stats" },
		{ "ModuleRelativePath", "Public/SOTS_StatsComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddToStat constinit property declarations *****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_StatTag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Delta;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddToStat constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddToStat Property Definitions ****************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_StatsComponent_AddToStat_Statics::NewProp_StatTag = { "StatTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_StatsComponent_eventAddToStat_Parms, StatTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USOTS_StatsComponent_AddToStat_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_StatsComponent_eventAddToStat_Parms, Delta), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_StatsComponent_AddToStat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_StatsComponent_AddToStat_Statics::NewProp_StatTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_StatsComponent_AddToStat_Statics::NewProp_Delta,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_StatsComponent_AddToStat_Statics::PropPointers) < 2048);
// ********** End Function AddToStat Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_StatsComponent_AddToStat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_StatsComponent, nullptr, "AddToStat", 	Z_Construct_UFunction_USOTS_StatsComponent_AddToStat_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_StatsComponent_AddToStat_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_StatsComponent_AddToStat_Statics::SOTS_StatsComponent_eventAddToStat_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_StatsComponent_AddToStat_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_StatsComponent_AddToStat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_StatsComponent_AddToStat_Statics::SOTS_StatsComponent_eventAddToStat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_StatsComponent_AddToStat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_StatsComponent_AddToStat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_StatsComponent::execAddToStat)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_StatTag);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Delta);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddToStat(Z_Param_StatTag,Z_Param_Delta);
	P_NATIVE_END;
}
// ********** End Class USOTS_StatsComponent Function AddToStat ************************************

// ********** Begin Class USOTS_StatsComponent Function GetAllStats ********************************
struct Z_Construct_UFunction_USOTS_StatsComponent_GetAllStats_Statics
{
	struct SOTS_StatsComponent_eventGetAllStats_Parms
	{
		TMap<FGameplayTag,float> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Stats" },
		{ "ModuleRelativePath", "Public/SOTS_StatsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAllStats constinit property declarations ***************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAllStats constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAllStats Property Definitions **************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USOTS_StatsComponent_GetAllStats_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_StatsComponent_GetAllStats_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USOTS_StatsComponent_GetAllStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_StatsComponent_eventGetAllStats_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_StatsComponent_GetAllStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_StatsComponent_GetAllStats_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_StatsComponent_GetAllStats_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_StatsComponent_GetAllStats_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_StatsComponent_GetAllStats_Statics::PropPointers) < 2048);
// ********** End Function GetAllStats Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_StatsComponent_GetAllStats_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_StatsComponent, nullptr, "GetAllStats", 	Z_Construct_UFunction_USOTS_StatsComponent_GetAllStats_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_StatsComponent_GetAllStats_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_StatsComponent_GetAllStats_Statics::SOTS_StatsComponent_eventGetAllStats_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_StatsComponent_GetAllStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_StatsComponent_GetAllStats_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_StatsComponent_GetAllStats_Statics::SOTS_StatsComponent_eventGetAllStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_StatsComponent_GetAllStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_StatsComponent_GetAllStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_StatsComponent::execGetAllStats)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<FGameplayTag,float>*)Z_Param__Result=P_THIS->GetAllStats();
	P_NATIVE_END;
}
// ********** End Class USOTS_StatsComponent Function GetAllStats **********************************

// ********** Begin Class USOTS_StatsComponent Function GetStatValue *******************************
struct Z_Construct_UFunction_USOTS_StatsComponent_GetStatValue_Statics
{
	struct SOTS_StatsComponent_eventGetStatValue_Parms
	{
		FGameplayTag StatTag;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Stats" },
		{ "ModuleRelativePath", "Public/SOTS_StatsComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetStatValue constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_StatTag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetStatValue constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetStatValue Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_StatsComponent_GetStatValue_Statics::NewProp_StatTag = { "StatTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_StatsComponent_eventGetStatValue_Parms, StatTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USOTS_StatsComponent_GetStatValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_StatsComponent_eventGetStatValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_StatsComponent_GetStatValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_StatsComponent_GetStatValue_Statics::NewProp_StatTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_StatsComponent_GetStatValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_StatsComponent_GetStatValue_Statics::PropPointers) < 2048);
// ********** End Function GetStatValue Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_StatsComponent_GetStatValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_StatsComponent, nullptr, "GetStatValue", 	Z_Construct_UFunction_USOTS_StatsComponent_GetStatValue_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_StatsComponent_GetStatValue_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_StatsComponent_GetStatValue_Statics::SOTS_StatsComponent_eventGetStatValue_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_StatsComponent_GetStatValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_StatsComponent_GetStatValue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_StatsComponent_GetStatValue_Statics::SOTS_StatsComponent_eventGetStatValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_StatsComponent_GetStatValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_StatsComponent_GetStatValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_StatsComponent::execGetStatValue)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_StatTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetStatValue(Z_Param_StatTag);
	P_NATIVE_END;
}
// ********** End Class USOTS_StatsComponent Function GetStatValue *********************************

// ********** Begin Class USOTS_StatsComponent Function HasStat ************************************
struct Z_Construct_UFunction_USOTS_StatsComponent_HasStat_Statics
{
	struct SOTS_StatsComponent_eventHasStat_Parms
	{
		FGameplayTag StatTag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Stats" },
		{ "ModuleRelativePath", "Public/SOTS_StatsComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HasStat constinit property declarations *******************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_StatTag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasStat constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasStat Property Definitions ******************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_StatsComponent_HasStat_Statics::NewProp_StatTag = { "StatTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_StatsComponent_eventHasStat_Parms, StatTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
void Z_Construct_UFunction_USOTS_StatsComponent_HasStat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SOTS_StatsComponent_eventHasStat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_StatsComponent_HasStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_StatsComponent_eventHasStat_Parms), &Z_Construct_UFunction_USOTS_StatsComponent_HasStat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_StatsComponent_HasStat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_StatsComponent_HasStat_Statics::NewProp_StatTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_StatsComponent_HasStat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_StatsComponent_HasStat_Statics::PropPointers) < 2048);
// ********** End Function HasStat Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_StatsComponent_HasStat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_StatsComponent, nullptr, "HasStat", 	Z_Construct_UFunction_USOTS_StatsComponent_HasStat_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_StatsComponent_HasStat_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_StatsComponent_HasStat_Statics::SOTS_StatsComponent_eventHasStat_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_StatsComponent_HasStat_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_StatsComponent_HasStat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_StatsComponent_HasStat_Statics::SOTS_StatsComponent_eventHasStat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_StatsComponent_HasStat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_StatsComponent_HasStat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_StatsComponent::execHasStat)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_StatTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasStat(Z_Param_StatTag);
	P_NATIVE_END;
}
// ********** End Class USOTS_StatsComponent Function HasStat **************************************

// ********** Begin Class USOTS_StatsComponent Function SetAllStats ********************************
struct Z_Construct_UFunction_USOTS_StatsComponent_SetAllStats_Statics
{
	struct SOTS_StatsComponent_eventSetAllStats_Parms
	{
		TMap<FGameplayTag,float> NewStats;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Stats" },
		{ "ModuleRelativePath", "Public/SOTS_StatsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewStats_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetAllStats constinit property declarations ***************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewStats_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewStats_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_NewStats;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetAllStats constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetAllStats Property Definitions **************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USOTS_StatsComponent_SetAllStats_Statics::NewProp_NewStats_ValueProp = { "NewStats", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_StatsComponent_SetAllStats_Statics::NewProp_NewStats_Key_KeyProp = { "NewStats_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USOTS_StatsComponent_SetAllStats_Statics::NewProp_NewStats = { "NewStats", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_StatsComponent_eventSetAllStats_Parms, NewStats), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewStats_MetaData), NewProp_NewStats_MetaData) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_StatsComponent_SetAllStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_StatsComponent_SetAllStats_Statics::NewProp_NewStats_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_StatsComponent_SetAllStats_Statics::NewProp_NewStats_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_StatsComponent_SetAllStats_Statics::NewProp_NewStats,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_StatsComponent_SetAllStats_Statics::PropPointers) < 2048);
// ********** End Function SetAllStats Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_StatsComponent_SetAllStats_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_StatsComponent, nullptr, "SetAllStats", 	Z_Construct_UFunction_USOTS_StatsComponent_SetAllStats_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_StatsComponent_SetAllStats_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_StatsComponent_SetAllStats_Statics::SOTS_StatsComponent_eventSetAllStats_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_StatsComponent_SetAllStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_StatsComponent_SetAllStats_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_StatsComponent_SetAllStats_Statics::SOTS_StatsComponent_eventSetAllStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_StatsComponent_SetAllStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_StatsComponent_SetAllStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_StatsComponent::execSetAllStats)
{
	P_GET_TMAP_REF(FGameplayTag,float,Z_Param_Out_NewStats);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAllStats(Z_Param_Out_NewStats);
	P_NATIVE_END;
}
// ********** End Class USOTS_StatsComponent Function SetAllStats **********************************

// ********** Begin Class USOTS_StatsComponent Function SetStatBounds ******************************
struct Z_Construct_UFunction_USOTS_StatsComponent_SetStatBounds_Statics
{
	struct SOTS_StatsComponent_eventSetStatBounds_Parms
	{
		FGameplayTag StatTag;
		float MinValue;
		float MaxValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Stats" },
		{ "ModuleRelativePath", "Public/SOTS_StatsComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetStatBounds constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_StatTag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetStatBounds constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetStatBounds Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_StatsComponent_SetStatBounds_Statics::NewProp_StatTag = { "StatTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_StatsComponent_eventSetStatBounds_Parms, StatTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USOTS_StatsComponent_SetStatBounds_Statics::NewProp_MinValue = { "MinValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_StatsComponent_eventSetStatBounds_Parms, MinValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USOTS_StatsComponent_SetStatBounds_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_StatsComponent_eventSetStatBounds_Parms, MaxValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_StatsComponent_SetStatBounds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_StatsComponent_SetStatBounds_Statics::NewProp_StatTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_StatsComponent_SetStatBounds_Statics::NewProp_MinValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_StatsComponent_SetStatBounds_Statics::NewProp_MaxValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_StatsComponent_SetStatBounds_Statics::PropPointers) < 2048);
// ********** End Function SetStatBounds Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_StatsComponent_SetStatBounds_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_StatsComponent, nullptr, "SetStatBounds", 	Z_Construct_UFunction_USOTS_StatsComponent_SetStatBounds_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_StatsComponent_SetStatBounds_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_StatsComponent_SetStatBounds_Statics::SOTS_StatsComponent_eventSetStatBounds_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_StatsComponent_SetStatBounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_StatsComponent_SetStatBounds_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_StatsComponent_SetStatBounds_Statics::SOTS_StatsComponent_eventSetStatBounds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_StatsComponent_SetStatBounds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_StatsComponent_SetStatBounds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_StatsComponent::execSetStatBounds)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_StatTag);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MinValue);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStatBounds(Z_Param_StatTag,Z_Param_MinValue,Z_Param_MaxValue);
	P_NATIVE_END;
}
// ********** End Class USOTS_StatsComponent Function SetStatBounds ********************************

// ********** Begin Class USOTS_StatsComponent Function SetStatValue *******************************
struct Z_Construct_UFunction_USOTS_StatsComponent_SetStatValue_Statics
{
	struct SOTS_StatsComponent_eventSetStatValue_Parms
	{
		FGameplayTag StatTag;
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Stats" },
		{ "ModuleRelativePath", "Public/SOTS_StatsComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetStatValue constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_StatTag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetStatValue constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetStatValue Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_StatsComponent_SetStatValue_Statics::NewProp_StatTag = { "StatTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_StatsComponent_eventSetStatValue_Parms, StatTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USOTS_StatsComponent_SetStatValue_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_StatsComponent_eventSetStatValue_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_StatsComponent_SetStatValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_StatsComponent_SetStatValue_Statics::NewProp_StatTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_StatsComponent_SetStatValue_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_StatsComponent_SetStatValue_Statics::PropPointers) < 2048);
// ********** End Function SetStatValue Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_StatsComponent_SetStatValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_StatsComponent, nullptr, "SetStatValue", 	Z_Construct_UFunction_USOTS_StatsComponent_SetStatValue_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_StatsComponent_SetStatValue_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_StatsComponent_SetStatValue_Statics::SOTS_StatsComponent_eventSetStatValue_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_StatsComponent_SetStatValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_StatsComponent_SetStatValue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_StatsComponent_SetStatValue_Statics::SOTS_StatsComponent_eventSetStatValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_StatsComponent_SetStatValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_StatsComponent_SetStatValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_StatsComponent::execSetStatValue)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_StatTag);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStatValue(Z_Param_StatTag,Z_Param_NewValue);
	P_NATIVE_END;
}
// ********** End Class USOTS_StatsComponent Function SetStatValue *********************************

// ********** Begin Class USOTS_StatsComponent *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_StatsComponent;
UClass* USOTS_StatsComponent::GetPrivateStaticClass()
{
	using TClass = USOTS_StatsComponent;
	if (!Z_Registration_Info_UClass_USOTS_StatsComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_StatsComponent"),
			Z_Registration_Info_UClass_USOTS_StatsComponent.InnerSingleton,
			StaticRegisterNativesUSOTS_StatsComponent,
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
	return Z_Registration_Info_UClass_USOTS_StatsComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_StatsComponent_NoRegister()
{
	return USOTS_StatsComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_StatsComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "SOTS" },
		{ "IncludePath", "SOTS_StatsComponent.h" },
		{ "ModuleRelativePath", "Public/SOTS_StatsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStatChanged_MetaData[] = {
		{ "Category", "SOTS|Stats" },
		{ "ModuleRelativePath", "Public/SOTS_StatsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatValues_MetaData[] = {
		{ "Category", "SOTS|Stats" },
		{ "ModuleRelativePath", "Public/SOTS_StatsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatMinValues_MetaData[] = {
		{ "Category", "SOTS|Stats" },
		{ "ModuleRelativePath", "Public/SOTS_StatsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatMaxValues_MetaData[] = {
		{ "Category", "SOTS|Stats" },
		{ "ModuleRelativePath", "Public/SOTS_StatsComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_StatsComponent constinit property declarations *********************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStatChanged;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StatValues_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StatValues_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_StatValues;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StatMinValues_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StatMinValues_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_StatMinValues;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StatMaxValues_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StatMaxValues_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_StatMaxValues;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USOTS_StatsComponent constinit property declarations ***********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddToStat"), .Pointer = &USOTS_StatsComponent::execAddToStat },
		{ .NameUTF8 = UTF8TEXT("GetAllStats"), .Pointer = &USOTS_StatsComponent::execGetAllStats },
		{ .NameUTF8 = UTF8TEXT("GetStatValue"), .Pointer = &USOTS_StatsComponent::execGetStatValue },
		{ .NameUTF8 = UTF8TEXT("HasStat"), .Pointer = &USOTS_StatsComponent::execHasStat },
		{ .NameUTF8 = UTF8TEXT("SetAllStats"), .Pointer = &USOTS_StatsComponent::execSetAllStats },
		{ .NameUTF8 = UTF8TEXT("SetStatBounds"), .Pointer = &USOTS_StatsComponent::execSetStatBounds },
		{ .NameUTF8 = UTF8TEXT("SetStatValue"), .Pointer = &USOTS_StatsComponent::execSetStatValue },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USOTS_StatsComponent_AddToStat, "AddToStat" }, // 4252554931
		{ &Z_Construct_UFunction_USOTS_StatsComponent_GetAllStats, "GetAllStats" }, // 1111389958
		{ &Z_Construct_UFunction_USOTS_StatsComponent_GetStatValue, "GetStatValue" }, // 1382847500
		{ &Z_Construct_UFunction_USOTS_StatsComponent_HasStat, "HasStat" }, // 1812058552
		{ &Z_Construct_UFunction_USOTS_StatsComponent_SetAllStats, "SetAllStats" }, // 2549182605
		{ &Z_Construct_UFunction_USOTS_StatsComponent_SetStatBounds, "SetStatBounds" }, // 2589264156
		{ &Z_Construct_UFunction_USOTS_StatsComponent_SetStatValue, "SetStatValue" }, // 3400035337
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_StatsComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_StatsComponent_Statics

// ********** Begin Class USOTS_StatsComponent Property Definitions ********************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USOTS_StatsComponent_Statics::NewProp_OnStatChanged = { "OnStatChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_StatsComponent, OnStatChanged), Z_Construct_UDelegateFunction_SOTS_Stats_SOTS_OnStatChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStatChanged_MetaData), NewProp_OnStatChanged_MetaData) }; // 2233594887
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USOTS_StatsComponent_Statics::NewProp_StatValues_ValueProp = { "StatValues", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_StatsComponent_Statics::NewProp_StatValues_Key_KeyProp = { "StatValues_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USOTS_StatsComponent_Statics::NewProp_StatValues = { "StatValues", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_StatsComponent, StatValues), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatValues_MetaData), NewProp_StatValues_MetaData) }; // 517357616
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USOTS_StatsComponent_Statics::NewProp_StatMinValues_ValueProp = { "StatMinValues", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_StatsComponent_Statics::NewProp_StatMinValues_Key_KeyProp = { "StatMinValues_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USOTS_StatsComponent_Statics::NewProp_StatMinValues = { "StatMinValues", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_StatsComponent, StatMinValues), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatMinValues_MetaData), NewProp_StatMinValues_MetaData) }; // 517357616
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USOTS_StatsComponent_Statics::NewProp_StatMaxValues_ValueProp = { "StatMaxValues", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_StatsComponent_Statics::NewProp_StatMaxValues_Key_KeyProp = { "StatMaxValues_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USOTS_StatsComponent_Statics::NewProp_StatMaxValues = { "StatMaxValues", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_StatsComponent, StatMaxValues), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatMaxValues_MetaData), NewProp_StatMaxValues_MetaData) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USOTS_StatsComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_StatsComponent_Statics::NewProp_OnStatChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_StatsComponent_Statics::NewProp_StatValues_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_StatsComponent_Statics::NewProp_StatValues_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_StatsComponent_Statics::NewProp_StatValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_StatsComponent_Statics::NewProp_StatMinValues_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_StatsComponent_Statics::NewProp_StatMinValues_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_StatsComponent_Statics::NewProp_StatMinValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_StatsComponent_Statics::NewProp_StatMaxValues_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_StatsComponent_Statics::NewProp_StatMaxValues_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_StatsComponent_Statics::NewProp_StatMaxValues,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_StatsComponent_Statics::PropPointers) < 2048);
// ********** End Class USOTS_StatsComponent Property Definitions **********************************
UObject* (*const Z_Construct_UClass_USOTS_StatsComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_Stats,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_StatsComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_StatsComponent_Statics::ClassParams = {
	&USOTS_StatsComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USOTS_StatsComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_StatsComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_StatsComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_StatsComponent_Statics::Class_MetaDataParams)
};
void USOTS_StatsComponent::StaticRegisterNativesUSOTS_StatsComponent()
{
	UClass* Class = USOTS_StatsComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USOTS_StatsComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_USOTS_StatsComponent()
{
	if (!Z_Registration_Info_UClass_USOTS_StatsComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_StatsComponent.OuterSingleton, Z_Construct_UClass_USOTS_StatsComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_StatsComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_StatsComponent);
USOTS_StatsComponent::~USOTS_StatsComponent() {}
// ********** End Class USOTS_StatsComponent *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_Stats_Source_SOTS_Stats_Public_SOTS_StatsComponent_h__Script_SOTS_Stats_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_StatsComponent, USOTS_StatsComponent::StaticClass, TEXT("USOTS_StatsComponent"), &Z_Registration_Info_UClass_USOTS_StatsComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_StatsComponent), 3544547024U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_Stats_Source_SOTS_Stats_Public_SOTS_StatsComponent_h__Script_SOTS_Stats_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_Stats_Source_SOTS_Stats_Public_SOTS_StatsComponent_h__Script_SOTS_Stats_3572573530{
	TEXT("/Script/SOTS_Stats"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_Stats_Source_SOTS_Stats_Public_SOTS_StatsComponent_h__Script_SOTS_Stats_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_Stats_Source_SOTS_Stats_Public_SOTS_StatsComponent_h__Script_SOTS_Stats_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
