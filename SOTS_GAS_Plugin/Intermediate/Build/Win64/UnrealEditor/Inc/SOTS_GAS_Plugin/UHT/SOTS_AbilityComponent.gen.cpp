// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/SOTS_AbilityComponent.h"
#include "Data/SOTS_AbilityTypes.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_AbilityComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_UAC_SOTS_Abilitys();
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_UAC_SOTS_Abilitys_NoRegister();
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_USOTS_AbilityBase_NoRegister();
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_USOTS_AbilitySubsystem_NoRegister();
SOTS_GAS_PLUGIN_API UEnum* Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilityActivationResult();
SOTS_GAS_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityActivatedWithContextSignature__DelegateSignature();
SOTS_GAS_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityFailedSignature__DelegateSignature();
SOTS_GAS_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityListChangedSignature__DelegateSignature();
SOTS_GAS_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilitySimpleSignature__DelegateSignature();
SOTS_GAS_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityStateChangedSignature__DelegateSignature();
SOTS_GAS_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_F_SOTS_AbilityActivationContext();
SOTS_GAS_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_F_SOTS_AbilityComponentSaveData();
SOTS_GAS_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_F_SOTS_AbilityGrantOptions();
SOTS_GAS_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_F_SOTS_AbilityHandle();
SOTS_GAS_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_F_SOTS_AbilityRuntimeState();
SOTS_GAS_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_F_SOTS_AbilityStateSnapshot();
UPackage* Z_Construct_UPackage__Script_SOTS_GAS_Plugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FSOTS_AbilitySimpleSignature ******************************************
struct Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilitySimpleSignature__DelegateSignature_Statics
{
	struct _Script_SOTS_GAS_Plugin_eventSOTS_AbilitySimpleSignature_Parms
	{
		FGameplayTag AbilityTag;
		F_SOTS_AbilityHandle Handle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SOTS_AbilityComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FSOTS_AbilitySimpleSignature constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FSOTS_AbilitySimpleSignature constinit property declarations ************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FSOTS_AbilitySimpleSignature Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilitySimpleSignature__DelegateSignature_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SOTS_GAS_Plugin_eventSOTS_AbilitySimpleSignature_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilitySimpleSignature__DelegateSignature_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SOTS_GAS_Plugin_eventSOTS_AbilitySimpleSignature_Parms, Handle), Z_Construct_UScriptStruct_F_SOTS_AbilityHandle, METADATA_PARAMS(0, nullptr) }; // 3514428892
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilitySimpleSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilitySimpleSignature__DelegateSignature_Statics::NewProp_AbilityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilitySimpleSignature__DelegateSignature_Statics::NewProp_Handle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilitySimpleSignature__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FSOTS_AbilitySimpleSignature Property Definitions ***********************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilitySimpleSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SOTS_GAS_Plugin, nullptr, "SOTS_AbilitySimpleSignature__DelegateSignature", 	Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilitySimpleSignature__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilitySimpleSignature__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilitySimpleSignature__DelegateSignature_Statics::_Script_SOTS_GAS_Plugin_eventSOTS_AbilitySimpleSignature_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilitySimpleSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilitySimpleSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilitySimpleSignature__DelegateSignature_Statics::_Script_SOTS_GAS_Plugin_eventSOTS_AbilitySimpleSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilitySimpleSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilitySimpleSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSOTS_AbilitySimpleSignature_DelegateWrapper(const FMulticastScriptDelegate& SOTS_AbilitySimpleSignature, FGameplayTag AbilityTag, F_SOTS_AbilityHandle Handle)
{
	struct _Script_SOTS_GAS_Plugin_eventSOTS_AbilitySimpleSignature_Parms
	{
		FGameplayTag AbilityTag;
		F_SOTS_AbilityHandle Handle;
	};
	_Script_SOTS_GAS_Plugin_eventSOTS_AbilitySimpleSignature_Parms Parms;
	Parms.AbilityTag=AbilityTag;
	Parms.Handle=Handle;
	SOTS_AbilitySimpleSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FSOTS_AbilitySimpleSignature ********************************************

// ********** Begin Delegate FSOTS_AbilityFailedSignature ******************************************
struct Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityFailedSignature__DelegateSignature_Statics
{
	struct _Script_SOTS_GAS_Plugin_eventSOTS_AbilityFailedSignature_Parms
	{
		FGameplayTag AbilityTag;
		E_SOTS_AbilityActivationResult Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SOTS_AbilityComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FSOTS_AbilityFailedSignature constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FSOTS_AbilityFailedSignature constinit property declarations ************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FSOTS_AbilityFailedSignature Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityFailedSignature__DelegateSignature_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SOTS_GAS_Plugin_eventSOTS_AbilityFailedSignature_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityFailedSignature__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityFailedSignature__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SOTS_GAS_Plugin_eventSOTS_AbilityFailedSignature_Parms, Result), Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilityActivationResult, METADATA_PARAMS(0, nullptr) }; // 527710619
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityFailedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityFailedSignature__DelegateSignature_Statics::NewProp_AbilityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityFailedSignature__DelegateSignature_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityFailedSignature__DelegateSignature_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityFailedSignature__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FSOTS_AbilityFailedSignature Property Definitions ***********************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityFailedSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SOTS_GAS_Plugin, nullptr, "SOTS_AbilityFailedSignature__DelegateSignature", 	Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityFailedSignature__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityFailedSignature__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityFailedSignature__DelegateSignature_Statics::_Script_SOTS_GAS_Plugin_eventSOTS_AbilityFailedSignature_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityFailedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityFailedSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityFailedSignature__DelegateSignature_Statics::_Script_SOTS_GAS_Plugin_eventSOTS_AbilityFailedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityFailedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityFailedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSOTS_AbilityFailedSignature_DelegateWrapper(const FMulticastScriptDelegate& SOTS_AbilityFailedSignature, FGameplayTag AbilityTag, E_SOTS_AbilityActivationResult Result)
{
	struct _Script_SOTS_GAS_Plugin_eventSOTS_AbilityFailedSignature_Parms
	{
		FGameplayTag AbilityTag;
		E_SOTS_AbilityActivationResult Result;
	};
	_Script_SOTS_GAS_Plugin_eventSOTS_AbilityFailedSignature_Parms Parms;
	Parms.AbilityTag=AbilityTag;
	Parms.Result=Result;
	SOTS_AbilityFailedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FSOTS_AbilityFailedSignature ********************************************

// ********** Begin Delegate FSOTS_AbilityActivatedWithContextSignature ****************************
struct Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityActivatedWithContextSignature__DelegateSignature_Statics
{
	struct _Script_SOTS_GAS_Plugin_eventSOTS_AbilityActivatedWithContextSignature_Parms
	{
		FGameplayTag AbilityTag;
		F_SOTS_AbilityHandle Handle;
		F_SOTS_AbilityActivationContext Context;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SOTS_AbilityComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FSOTS_AbilityActivatedWithContextSignature constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FSOTS_AbilityActivatedWithContextSignature constinit property declarations 
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FSOTS_AbilityActivatedWithContextSignature Property Definitions *******
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityActivatedWithContextSignature__DelegateSignature_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SOTS_GAS_Plugin_eventSOTS_AbilityActivatedWithContextSignature_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityActivatedWithContextSignature__DelegateSignature_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SOTS_GAS_Plugin_eventSOTS_AbilityActivatedWithContextSignature_Parms, Handle), Z_Construct_UScriptStruct_F_SOTS_AbilityHandle, METADATA_PARAMS(0, nullptr) }; // 3514428892
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityActivatedWithContextSignature__DelegateSignature_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SOTS_GAS_Plugin_eventSOTS_AbilityActivatedWithContextSignature_Parms, Context), Z_Construct_UScriptStruct_F_SOTS_AbilityActivationContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) }; // 2980214493
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityActivatedWithContextSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityActivatedWithContextSignature__DelegateSignature_Statics::NewProp_AbilityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityActivatedWithContextSignature__DelegateSignature_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityActivatedWithContextSignature__DelegateSignature_Statics::NewProp_Context,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityActivatedWithContextSignature__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FSOTS_AbilityActivatedWithContextSignature Property Definitions *********
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityActivatedWithContextSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SOTS_GAS_Plugin, nullptr, "SOTS_AbilityActivatedWithContextSignature__DelegateSignature", 	Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityActivatedWithContextSignature__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityActivatedWithContextSignature__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityActivatedWithContextSignature__DelegateSignature_Statics::_Script_SOTS_GAS_Plugin_eventSOTS_AbilityActivatedWithContextSignature_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityActivatedWithContextSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityActivatedWithContextSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityActivatedWithContextSignature__DelegateSignature_Statics::_Script_SOTS_GAS_Plugin_eventSOTS_AbilityActivatedWithContextSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityActivatedWithContextSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityActivatedWithContextSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSOTS_AbilityActivatedWithContextSignature_DelegateWrapper(const FMulticastScriptDelegate& SOTS_AbilityActivatedWithContextSignature, FGameplayTag AbilityTag, F_SOTS_AbilityHandle Handle, F_SOTS_AbilityActivationContext const& Context)
{
	struct _Script_SOTS_GAS_Plugin_eventSOTS_AbilityActivatedWithContextSignature_Parms
	{
		FGameplayTag AbilityTag;
		F_SOTS_AbilityHandle Handle;
		F_SOTS_AbilityActivationContext Context;
	};
	_Script_SOTS_GAS_Plugin_eventSOTS_AbilityActivatedWithContextSignature_Parms Parms;
	Parms.AbilityTag=AbilityTag;
	Parms.Handle=Handle;
	Parms.Context=Context;
	SOTS_AbilityActivatedWithContextSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FSOTS_AbilityActivatedWithContextSignature ******************************

// ********** Begin Delegate FSOTS_AbilityListChangedSignature *************************************
struct Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityListChangedSignature__DelegateSignature_Statics
{
	struct _Script_SOTS_GAS_Plugin_eventSOTS_AbilityListChangedSignature_Parms
	{
		UAC_SOTS_Abilitys* AbilityComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SOTS_AbilityComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FSOTS_AbilityListChangedSignature constinit property declarations *****
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilityComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FSOTS_AbilityListChangedSignature constinit property declarations *******
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FSOTS_AbilityListChangedSignature Property Definitions ****************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityListChangedSignature__DelegateSignature_Statics::NewProp_AbilityComponent = { "AbilityComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SOTS_GAS_Plugin_eventSOTS_AbilityListChangedSignature_Parms, AbilityComponent), Z_Construct_UClass_UAC_SOTS_Abilitys_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityComponent_MetaData), NewProp_AbilityComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityListChangedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityListChangedSignature__DelegateSignature_Statics::NewProp_AbilityComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityListChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FSOTS_AbilityListChangedSignature Property Definitions ******************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityListChangedSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SOTS_GAS_Plugin, nullptr, "SOTS_AbilityListChangedSignature__DelegateSignature", 	Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityListChangedSignature__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityListChangedSignature__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityListChangedSignature__DelegateSignature_Statics::_Script_SOTS_GAS_Plugin_eventSOTS_AbilityListChangedSignature_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityListChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityListChangedSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityListChangedSignature__DelegateSignature_Statics::_Script_SOTS_GAS_Plugin_eventSOTS_AbilityListChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityListChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityListChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSOTS_AbilityListChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& SOTS_AbilityListChangedSignature, UAC_SOTS_Abilitys* AbilityComponent)
{
	struct _Script_SOTS_GAS_Plugin_eventSOTS_AbilityListChangedSignature_Parms
	{
		UAC_SOTS_Abilitys* AbilityComponent;
	};
	_Script_SOTS_GAS_Plugin_eventSOTS_AbilityListChangedSignature_Parms Parms;
	Parms.AbilityComponent=AbilityComponent;
	SOTS_AbilityListChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FSOTS_AbilityListChangedSignature ***************************************

// ********** Begin Delegate FSOTS_AbilityStateChangedSignature ************************************
struct Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityStateChangedSignature__DelegateSignature_Statics
{
	struct _Script_SOTS_GAS_Plugin_eventSOTS_AbilityStateChangedSignature_Parms
	{
		FGameplayTag AbilityTag;
		F_SOTS_AbilityStateSnapshot NewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SOTS_AbilityComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FSOTS_AbilityStateChangedSignature constinit property declarations ****
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FSOTS_AbilityStateChangedSignature constinit property declarations ******
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FSOTS_AbilityStateChangedSignature Property Definitions ***************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityStateChangedSignature__DelegateSignature_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SOTS_GAS_Plugin_eventSOTS_AbilityStateChangedSignature_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityStateChangedSignature__DelegateSignature_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SOTS_GAS_Plugin_eventSOTS_AbilityStateChangedSignature_Parms, NewState), Z_Construct_UScriptStruct_F_SOTS_AbilityStateSnapshot, METADATA_PARAMS(0, nullptr) }; // 3662566169
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityStateChangedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityStateChangedSignature__DelegateSignature_Statics::NewProp_AbilityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityStateChangedSignature__DelegateSignature_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityStateChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FSOTS_AbilityStateChangedSignature Property Definitions *****************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityStateChangedSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SOTS_GAS_Plugin, nullptr, "SOTS_AbilityStateChangedSignature__DelegateSignature", 	Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityStateChangedSignature__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityStateChangedSignature__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityStateChangedSignature__DelegateSignature_Statics::_Script_SOTS_GAS_Plugin_eventSOTS_AbilityStateChangedSignature_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityStateChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityStateChangedSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityStateChangedSignature__DelegateSignature_Statics::_Script_SOTS_GAS_Plugin_eventSOTS_AbilityStateChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityStateChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityStateChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSOTS_AbilityStateChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& SOTS_AbilityStateChangedSignature, FGameplayTag AbilityTag, F_SOTS_AbilityStateSnapshot NewState)
{
	struct _Script_SOTS_GAS_Plugin_eventSOTS_AbilityStateChangedSignature_Parms
	{
		FGameplayTag AbilityTag;
		F_SOTS_AbilityStateSnapshot NewState;
	};
	_Script_SOTS_GAS_Plugin_eventSOTS_AbilityStateChangedSignature_Parms Parms;
	Parms.AbilityTag=AbilityTag;
	Parms.NewState=NewState;
	SOTS_AbilityStateChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FSOTS_AbilityStateChangedSignature **************************************

// ********** Begin Class UAC_SOTS_Abilitys Function ActivateAbility *******************************
struct Z_Construct_UFunction_UAC_SOTS_Abilitys_ActivateAbility_Statics
{
	struct AC_SOTS_Abilitys_eventActivateAbility_Parms
	{
		FGameplayTag AbilityTag;
		F_SOTS_AbilityActivationContext Context;
		FText OutFailureReason;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// High-level activation helper that combines CanActivateAbility + the\n// existing TryActivateAbilityByTag flow and returns a failure reason for UI.\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/SOTS_AbilityComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "High-level activation helper that combines CanActivateAbility + the\nexisting TryActivateAbilityByTag flow and returns a failure reason for UI." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ActivateAbility constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
	static const UECodeGen_Private::FTextPropertyParams NewProp_OutFailureReason;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ActivateAbility constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ActivateAbility Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAC_SOTS_Abilitys_ActivateAbility_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_SOTS_Abilitys_eventActivateAbility_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAC_SOTS_Abilitys_ActivateAbility_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_SOTS_Abilitys_eventActivateAbility_Parms, Context), Z_Construct_UScriptStruct_F_SOTS_AbilityActivationContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) }; // 2980214493
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAC_SOTS_Abilitys_ActivateAbility_Statics::NewProp_OutFailureReason = { "OutFailureReason", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_SOTS_Abilitys_eventActivateAbility_Parms, OutFailureReason), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAC_SOTS_Abilitys_ActivateAbility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AC_SOTS_Abilitys_eventActivateAbility_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAC_SOTS_Abilitys_ActivateAbility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AC_SOTS_Abilitys_eventActivateAbility_Parms), &Z_Construct_UFunction_UAC_SOTS_Abilitys_ActivateAbility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAC_SOTS_Abilitys_ActivateAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_SOTS_Abilitys_ActivateAbility_Statics::NewProp_AbilityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_SOTS_Abilitys_ActivateAbility_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_SOTS_Abilitys_ActivateAbility_Statics::NewProp_OutFailureReason,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_SOTS_Abilitys_ActivateAbility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_SOTS_Abilitys_ActivateAbility_Statics::PropPointers) < 2048);
// ********** End Function ActivateAbility Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_SOTS_Abilitys_ActivateAbility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAC_SOTS_Abilitys, nullptr, "ActivateAbility", 	Z_Construct_UFunction_UAC_SOTS_Abilitys_ActivateAbility_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_SOTS_Abilitys_ActivateAbility_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAC_SOTS_Abilitys_ActivateAbility_Statics::AC_SOTS_Abilitys_eventActivateAbility_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_SOTS_Abilitys_ActivateAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAC_SOTS_Abilitys_ActivateAbility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAC_SOTS_Abilitys_ActivateAbility_Statics::AC_SOTS_Abilitys_eventActivateAbility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAC_SOTS_Abilitys_ActivateAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_SOTS_Abilitys_ActivateAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAC_SOTS_Abilitys::execActivateAbility)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTag);
	P_GET_STRUCT_REF(F_SOTS_AbilityActivationContext,Z_Param_Out_Context);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutFailureReason);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ActivateAbility(Z_Param_AbilityTag,Z_Param_Out_Context,Z_Param_Out_OutFailureReason);
	P_NATIVE_END;
}
// ********** End Class UAC_SOTS_Abilitys Function ActivateAbility *********************************

// ********** Begin Class UAC_SOTS_Abilitys Function ApplySerializedState **************************
struct Z_Construct_UFunction_UAC_SOTS_Abilitys_ApplySerializedState_Statics
{
	struct AC_SOTS_Abilitys_eventApplySerializedState_Parms
	{
		F_SOTS_AbilityComponentSaveData InData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS Ability|Save" },
		{ "ModuleRelativePath", "Public/Components/SOTS_AbilityComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ApplySerializedState constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ApplySerializedState constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ApplySerializedState Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAC_SOTS_Abilitys_ApplySerializedState_Statics::NewProp_InData = { "InData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_SOTS_Abilitys_eventApplySerializedState_Parms, InData), Z_Construct_UScriptStruct_F_SOTS_AbilityComponentSaveData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InData_MetaData), NewProp_InData_MetaData) }; // 3719592203
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAC_SOTS_Abilitys_ApplySerializedState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_SOTS_Abilitys_ApplySerializedState_Statics::NewProp_InData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_SOTS_Abilitys_ApplySerializedState_Statics::PropPointers) < 2048);
// ********** End Function ApplySerializedState Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_SOTS_Abilitys_ApplySerializedState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAC_SOTS_Abilitys, nullptr, "ApplySerializedState", 	Z_Construct_UFunction_UAC_SOTS_Abilitys_ApplySerializedState_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_SOTS_Abilitys_ApplySerializedState_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAC_SOTS_Abilitys_ApplySerializedState_Statics::AC_SOTS_Abilitys_eventApplySerializedState_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_SOTS_Abilitys_ApplySerializedState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAC_SOTS_Abilitys_ApplySerializedState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAC_SOTS_Abilitys_ApplySerializedState_Statics::AC_SOTS_Abilitys_eventApplySerializedState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAC_SOTS_Abilitys_ApplySerializedState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_SOTS_Abilitys_ApplySerializedState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAC_SOTS_Abilitys::execApplySerializedState)
{
	P_GET_STRUCT_REF(F_SOTS_AbilityComponentSaveData,Z_Param_Out_InData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplySerializedState(Z_Param_Out_InData);
	P_NATIVE_END;
}
// ********** End Class UAC_SOTS_Abilitys Function ApplySerializedState ****************************

// ********** Begin Class UAC_SOTS_Abilitys Function CanActivateAbility ****************************
struct Z_Construct_UFunction_UAC_SOTS_Abilitys_CanActivateAbility_Statics
{
	struct AC_SOTS_Abilitys_eventCanActivateAbility_Parms
	{
		FGameplayTag AbilityTag;
		FText OutFailureReason;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS Ability|Query" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Pure requirement / state check without actually triggering activation.\n// Uses FSOTS_AbilityRequirements via the requirement library plus local\n// cooldown / charge / inventory gates.\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/SOTS_AbilityComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pure requirement / state check without actually triggering activation.\nUses FSOTS_AbilityRequirements via the requirement library plus local\ncooldown / charge / inventory gates." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function CanActivateAbility constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
	static const UECodeGen_Private::FTextPropertyParams NewProp_OutFailureReason;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CanActivateAbility constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CanActivateAbility Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAC_SOTS_Abilitys_CanActivateAbility_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_SOTS_Abilitys_eventCanActivateAbility_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAC_SOTS_Abilitys_CanActivateAbility_Statics::NewProp_OutFailureReason = { "OutFailureReason", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_SOTS_Abilitys_eventCanActivateAbility_Parms, OutFailureReason), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAC_SOTS_Abilitys_CanActivateAbility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AC_SOTS_Abilitys_eventCanActivateAbility_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAC_SOTS_Abilitys_CanActivateAbility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AC_SOTS_Abilitys_eventCanActivateAbility_Parms), &Z_Construct_UFunction_UAC_SOTS_Abilitys_CanActivateAbility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAC_SOTS_Abilitys_CanActivateAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_SOTS_Abilitys_CanActivateAbility_Statics::NewProp_AbilityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_SOTS_Abilitys_CanActivateAbility_Statics::NewProp_OutFailureReason,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_SOTS_Abilitys_CanActivateAbility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_SOTS_Abilitys_CanActivateAbility_Statics::PropPointers) < 2048);
// ********** End Function CanActivateAbility Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_SOTS_Abilitys_CanActivateAbility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAC_SOTS_Abilitys, nullptr, "CanActivateAbility", 	Z_Construct_UFunction_UAC_SOTS_Abilitys_CanActivateAbility_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_SOTS_Abilitys_CanActivateAbility_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAC_SOTS_Abilitys_CanActivateAbility_Statics::AC_SOTS_Abilitys_eventCanActivateAbility_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_SOTS_Abilitys_CanActivateAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAC_SOTS_Abilitys_CanActivateAbility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAC_SOTS_Abilitys_CanActivateAbility_Statics::AC_SOTS_Abilitys_eventCanActivateAbility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAC_SOTS_Abilitys_CanActivateAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_SOTS_Abilitys_CanActivateAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAC_SOTS_Abilitys::execCanActivateAbility)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTag);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutFailureReason);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanActivateAbility(Z_Param_AbilityTag,Z_Param_Out_OutFailureReason);
	P_NATIVE_END;
}
// ********** End Class UAC_SOTS_Abilitys Function CanActivateAbility ******************************

// ********** Begin Class UAC_SOTS_Abilitys Function CancelAllAbilities ****************************
struct Z_Construct_UFunction_UAC_SOTS_Abilitys_CancelAllAbilities_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS Ability" },
		{ "ModuleRelativePath", "Public/Components/SOTS_AbilityComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function CancelAllAbilities constinit property declarations ********************
// ********** End Function CancelAllAbilities constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_SOTS_Abilitys_CancelAllAbilities_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAC_SOTS_Abilitys, nullptr, "CancelAllAbilities", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_SOTS_Abilitys_CancelAllAbilities_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAC_SOTS_Abilitys_CancelAllAbilities_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAC_SOTS_Abilitys_CancelAllAbilities()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_SOTS_Abilitys_CancelAllAbilities_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAC_SOTS_Abilitys::execCancelAllAbilities)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CancelAllAbilities();
	P_NATIVE_END;
}
// ********** End Class UAC_SOTS_Abilitys Function CancelAllAbilities ******************************

// ********** Begin Class UAC_SOTS_Abilitys Function ForceGrantAbility *****************************
struct Z_Construct_UFunction_UAC_SOTS_Abilitys_ForceGrantAbility_Statics
{
	struct AC_SOTS_Abilitys_eventForceGrantAbility_Parms
	{
		FGameplayTag AbilityTag;
		F_SOTS_AbilityGrantOptions Options;
		F_SOTS_AbilityHandle OutHandle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Grant/remove without skill gating. Intended for systems such as SkillTree\n// or MissionDirector that need to override normal gating rules.\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/SOTS_AbilityComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Grant/remove without skill gating. Intended for systems such as SkillTree\nor MissionDirector that need to override normal gating rules." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ForceGrantAbility constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutHandle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ForceGrantAbility constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ForceGrantAbility Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAC_SOTS_Abilitys_ForceGrantAbility_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_SOTS_Abilitys_eventForceGrantAbility_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAC_SOTS_Abilitys_ForceGrantAbility_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_SOTS_Abilitys_eventForceGrantAbility_Parms, Options), Z_Construct_UScriptStruct_F_SOTS_AbilityGrantOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Options_MetaData), NewProp_Options_MetaData) }; // 1070780000
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAC_SOTS_Abilitys_ForceGrantAbility_Statics::NewProp_OutHandle = { "OutHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_SOTS_Abilitys_eventForceGrantAbility_Parms, OutHandle), Z_Construct_UScriptStruct_F_SOTS_AbilityHandle, METADATA_PARAMS(0, nullptr) }; // 3514428892
void Z_Construct_UFunction_UAC_SOTS_Abilitys_ForceGrantAbility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AC_SOTS_Abilitys_eventForceGrantAbility_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAC_SOTS_Abilitys_ForceGrantAbility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AC_SOTS_Abilitys_eventForceGrantAbility_Parms), &Z_Construct_UFunction_UAC_SOTS_Abilitys_ForceGrantAbility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAC_SOTS_Abilitys_ForceGrantAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_SOTS_Abilitys_ForceGrantAbility_Statics::NewProp_AbilityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_SOTS_Abilitys_ForceGrantAbility_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_SOTS_Abilitys_ForceGrantAbility_Statics::NewProp_OutHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_SOTS_Abilitys_ForceGrantAbility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_SOTS_Abilitys_ForceGrantAbility_Statics::PropPointers) < 2048);
// ********** End Function ForceGrantAbility Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_SOTS_Abilitys_ForceGrantAbility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAC_SOTS_Abilitys, nullptr, "ForceGrantAbility", 	Z_Construct_UFunction_UAC_SOTS_Abilitys_ForceGrantAbility_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_SOTS_Abilitys_ForceGrantAbility_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAC_SOTS_Abilitys_ForceGrantAbility_Statics::AC_SOTS_Abilitys_eventForceGrantAbility_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_SOTS_Abilitys_ForceGrantAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAC_SOTS_Abilitys_ForceGrantAbility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAC_SOTS_Abilitys_ForceGrantAbility_Statics::AC_SOTS_Abilitys_eventForceGrantAbility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAC_SOTS_Abilitys_ForceGrantAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_SOTS_Abilitys_ForceGrantAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAC_SOTS_Abilitys::execForceGrantAbility)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTag);
	P_GET_STRUCT_REF(F_SOTS_AbilityGrantOptions,Z_Param_Out_Options);
	P_GET_STRUCT_REF(F_SOTS_AbilityHandle,Z_Param_Out_OutHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ForceGrantAbility(Z_Param_AbilityTag,Z_Param_Out_Options,Z_Param_Out_OutHandle);
	P_NATIVE_END;
}
// ********** End Class UAC_SOTS_Abilitys Function ForceGrantAbility *******************************

// ********** Begin Class UAC_SOTS_Abilitys Function ForceRemoveAbility ****************************
struct Z_Construct_UFunction_UAC_SOTS_Abilitys_ForceRemoveAbility_Statics
{
	struct AC_SOTS_Abilitys_eventForceRemoveAbility_Parms
	{
		FGameplayTag AbilityTag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS Ability" },
		{ "ModuleRelativePath", "Public/Components/SOTS_AbilityComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ForceRemoveAbility constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ForceRemoveAbility constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ForceRemoveAbility Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAC_SOTS_Abilitys_ForceRemoveAbility_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_SOTS_Abilitys_eventForceRemoveAbility_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
void Z_Construct_UFunction_UAC_SOTS_Abilitys_ForceRemoveAbility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AC_SOTS_Abilitys_eventForceRemoveAbility_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAC_SOTS_Abilitys_ForceRemoveAbility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AC_SOTS_Abilitys_eventForceRemoveAbility_Parms), &Z_Construct_UFunction_UAC_SOTS_Abilitys_ForceRemoveAbility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAC_SOTS_Abilitys_ForceRemoveAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_SOTS_Abilitys_ForceRemoveAbility_Statics::NewProp_AbilityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_SOTS_Abilitys_ForceRemoveAbility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_SOTS_Abilitys_ForceRemoveAbility_Statics::PropPointers) < 2048);
// ********** End Function ForceRemoveAbility Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_SOTS_Abilitys_ForceRemoveAbility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAC_SOTS_Abilitys, nullptr, "ForceRemoveAbility", 	Z_Construct_UFunction_UAC_SOTS_Abilitys_ForceRemoveAbility_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_SOTS_Abilitys_ForceRemoveAbility_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAC_SOTS_Abilitys_ForceRemoveAbility_Statics::AC_SOTS_Abilitys_eventForceRemoveAbility_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_SOTS_Abilitys_ForceRemoveAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAC_SOTS_Abilitys_ForceRemoveAbility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAC_SOTS_Abilitys_ForceRemoveAbility_Statics::AC_SOTS_Abilitys_eventForceRemoveAbility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAC_SOTS_Abilitys_ForceRemoveAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_SOTS_Abilitys_ForceRemoveAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAC_SOTS_Abilitys::execForceRemoveAbility)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ForceRemoveAbility(Z_Param_AbilityTag);
	P_NATIVE_END;
}
// ********** End Class UAC_SOTS_Abilitys Function ForceRemoveAbility ******************************

// ********** Begin Class UAC_SOTS_Abilitys Function GetAbilityCharges *****************************
struct Z_Construct_UFunction_UAC_SOTS_Abilitys_GetAbilityCharges_Statics
{
	struct AC_SOTS_Abilitys_eventGetAbilityCharges_Parms
	{
		FGameplayTag AbilityTag;
		int32 OutCurrentCharges;
		int32 OutMaxCharges;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS Ability|Query" },
		{ "ModuleRelativePath", "Public/Components/SOTS_AbilityComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAbilityCharges constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutCurrentCharges;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutMaxCharges;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAbilityCharges constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAbilityCharges Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAC_SOTS_Abilitys_GetAbilityCharges_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_SOTS_Abilitys_eventGetAbilityCharges_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAC_SOTS_Abilitys_GetAbilityCharges_Statics::NewProp_OutCurrentCharges = { "OutCurrentCharges", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_SOTS_Abilitys_eventGetAbilityCharges_Parms, OutCurrentCharges), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAC_SOTS_Abilitys_GetAbilityCharges_Statics::NewProp_OutMaxCharges = { "OutMaxCharges", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_SOTS_Abilitys_eventGetAbilityCharges_Parms, OutMaxCharges), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAC_SOTS_Abilitys_GetAbilityCharges_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_SOTS_Abilitys_GetAbilityCharges_Statics::NewProp_AbilityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_SOTS_Abilitys_GetAbilityCharges_Statics::NewProp_OutCurrentCharges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_SOTS_Abilitys_GetAbilityCharges_Statics::NewProp_OutMaxCharges,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_SOTS_Abilitys_GetAbilityCharges_Statics::PropPointers) < 2048);
// ********** End Function GetAbilityCharges Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_SOTS_Abilitys_GetAbilityCharges_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAC_SOTS_Abilitys, nullptr, "GetAbilityCharges", 	Z_Construct_UFunction_UAC_SOTS_Abilitys_GetAbilityCharges_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_SOTS_Abilitys_GetAbilityCharges_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAC_SOTS_Abilitys_GetAbilityCharges_Statics::AC_SOTS_Abilitys_eventGetAbilityCharges_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_SOTS_Abilitys_GetAbilityCharges_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAC_SOTS_Abilitys_GetAbilityCharges_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAC_SOTS_Abilitys_GetAbilityCharges_Statics::AC_SOTS_Abilitys_eventGetAbilityCharges_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAC_SOTS_Abilitys_GetAbilityCharges()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_SOTS_Abilitys_GetAbilityCharges_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAC_SOTS_Abilitys::execGetAbilityCharges)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTag);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutCurrentCharges);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutMaxCharges);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAbilityCharges(Z_Param_AbilityTag,Z_Param_Out_OutCurrentCharges,Z_Param_Out_OutMaxCharges);
	P_NATIVE_END;
}
// ********** End Class UAC_SOTS_Abilitys Function GetAbilityCharges *******************************

// ********** Begin Class UAC_SOTS_Abilitys Function GetKnownAbilities *****************************
struct Z_Construct_UFunction_UAC_SOTS_Abilitys_GetKnownAbilities_Statics
{
	struct AC_SOTS_Abilitys_eventGetKnownAbilities_Parms
	{
		TArray<FGameplayTag> OutAbilityTags;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS Ability|Query" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns all ability tags that currently have runtime state on this\n// component (i.e., granted or previously activated abilities).\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/SOTS_AbilityComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns all ability tags that currently have runtime state on this\ncomponent (i.e., granted or previously activated abilities)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetKnownAbilities constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutAbilityTags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutAbilityTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetKnownAbilities constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetKnownAbilities Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAC_SOTS_Abilitys_GetKnownAbilities_Statics::NewProp_OutAbilityTags_Inner = { "OutAbilityTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAC_SOTS_Abilitys_GetKnownAbilities_Statics::NewProp_OutAbilityTags = { "OutAbilityTags", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_SOTS_Abilitys_eventGetKnownAbilities_Parms, OutAbilityTags), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAC_SOTS_Abilitys_GetKnownAbilities_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_SOTS_Abilitys_GetKnownAbilities_Statics::NewProp_OutAbilityTags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_SOTS_Abilitys_GetKnownAbilities_Statics::NewProp_OutAbilityTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_SOTS_Abilitys_GetKnownAbilities_Statics::PropPointers) < 2048);
// ********** End Function GetKnownAbilities Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_SOTS_Abilitys_GetKnownAbilities_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAC_SOTS_Abilitys, nullptr, "GetKnownAbilities", 	Z_Construct_UFunction_UAC_SOTS_Abilitys_GetKnownAbilities_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_SOTS_Abilitys_GetKnownAbilities_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAC_SOTS_Abilitys_GetKnownAbilities_Statics::AC_SOTS_Abilitys_eventGetKnownAbilities_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_SOTS_Abilitys_GetKnownAbilities_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAC_SOTS_Abilitys_GetKnownAbilities_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAC_SOTS_Abilitys_GetKnownAbilities_Statics::AC_SOTS_Abilitys_eventGetKnownAbilities_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAC_SOTS_Abilitys_GetKnownAbilities()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_SOTS_Abilitys_GetKnownAbilities_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAC_SOTS_Abilitys::execGetKnownAbilities)
{
	P_GET_TARRAY_REF(FGameplayTag,Z_Param_Out_OutAbilityTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetKnownAbilities(Z_Param_Out_OutAbilityTags);
	P_NATIVE_END;
}
// ********** End Class UAC_SOTS_Abilitys Function GetKnownAbilities *******************************

// ********** Begin Class UAC_SOTS_Abilitys Function GetSerializedState ****************************
struct Z_Construct_UFunction_UAC_SOTS_Abilitys_GetSerializedState_Statics
{
	struct AC_SOTS_Abilitys_eventGetSerializedState_Parms
	{
		F_SOTS_AbilityComponentSaveData OutData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS Ability|Save" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Serialize / restore the component's runtime state for save systems.\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/SOTS_AbilityComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Serialize / restore the component's runtime state for save systems." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetSerializedState constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSerializedState constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSerializedState Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAC_SOTS_Abilitys_GetSerializedState_Statics::NewProp_OutData = { "OutData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_SOTS_Abilitys_eventGetSerializedState_Parms, OutData), Z_Construct_UScriptStruct_F_SOTS_AbilityComponentSaveData, METADATA_PARAMS(0, nullptr) }; // 3719592203
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAC_SOTS_Abilitys_GetSerializedState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_SOTS_Abilitys_GetSerializedState_Statics::NewProp_OutData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_SOTS_Abilitys_GetSerializedState_Statics::PropPointers) < 2048);
// ********** End Function GetSerializedState Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_SOTS_Abilitys_GetSerializedState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAC_SOTS_Abilitys, nullptr, "GetSerializedState", 	Z_Construct_UFunction_UAC_SOTS_Abilitys_GetSerializedState_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_SOTS_Abilitys_GetSerializedState_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAC_SOTS_Abilitys_GetSerializedState_Statics::AC_SOTS_Abilitys_eventGetSerializedState_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_SOTS_Abilitys_GetSerializedState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAC_SOTS_Abilitys_GetSerializedState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAC_SOTS_Abilitys_GetSerializedState_Statics::AC_SOTS_Abilitys_eventGetSerializedState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAC_SOTS_Abilitys_GetSerializedState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_SOTS_Abilitys_GetSerializedState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAC_SOTS_Abilitys::execGetSerializedState)
{
	P_GET_STRUCT_REF(F_SOTS_AbilityComponentSaveData,Z_Param_Out_OutData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetSerializedState(Z_Param_Out_OutData);
	P_NATIVE_END;
}
// ********** End Class UAC_SOTS_Abilitys Function GetSerializedState ******************************

// ********** Begin Class UAC_SOTS_Abilitys Function GrantAbility **********************************
struct Z_Construct_UFunction_UAC_SOTS_Abilitys_GrantAbility_Statics
{
	struct AC_SOTS_Abilitys_eventGrantAbility_Parms
	{
		FGameplayTag AbilityTag;
		F_SOTS_AbilityGrantOptions Options;
		F_SOTS_AbilityHandle OutHandle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS Ability" },
		{ "ModuleRelativePath", "Public/Components/SOTS_AbilityComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GrantAbility constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutHandle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GrantAbility constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GrantAbility Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAC_SOTS_Abilitys_GrantAbility_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_SOTS_Abilitys_eventGrantAbility_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAC_SOTS_Abilitys_GrantAbility_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_SOTS_Abilitys_eventGrantAbility_Parms, Options), Z_Construct_UScriptStruct_F_SOTS_AbilityGrantOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Options_MetaData), NewProp_Options_MetaData) }; // 1070780000
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAC_SOTS_Abilitys_GrantAbility_Statics::NewProp_OutHandle = { "OutHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_SOTS_Abilitys_eventGrantAbility_Parms, OutHandle), Z_Construct_UScriptStruct_F_SOTS_AbilityHandle, METADATA_PARAMS(0, nullptr) }; // 3514428892
void Z_Construct_UFunction_UAC_SOTS_Abilitys_GrantAbility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AC_SOTS_Abilitys_eventGrantAbility_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAC_SOTS_Abilitys_GrantAbility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AC_SOTS_Abilitys_eventGrantAbility_Parms), &Z_Construct_UFunction_UAC_SOTS_Abilitys_GrantAbility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAC_SOTS_Abilitys_GrantAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_SOTS_Abilitys_GrantAbility_Statics::NewProp_AbilityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_SOTS_Abilitys_GrantAbility_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_SOTS_Abilitys_GrantAbility_Statics::NewProp_OutHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_SOTS_Abilitys_GrantAbility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_SOTS_Abilitys_GrantAbility_Statics::PropPointers) < 2048);
// ********** End Function GrantAbility Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_SOTS_Abilitys_GrantAbility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAC_SOTS_Abilitys, nullptr, "GrantAbility", 	Z_Construct_UFunction_UAC_SOTS_Abilitys_GrantAbility_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_SOTS_Abilitys_GrantAbility_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAC_SOTS_Abilitys_GrantAbility_Statics::AC_SOTS_Abilitys_eventGrantAbility_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_SOTS_Abilitys_GrantAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAC_SOTS_Abilitys_GrantAbility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAC_SOTS_Abilitys_GrantAbility_Statics::AC_SOTS_Abilitys_eventGrantAbility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAC_SOTS_Abilitys_GrantAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_SOTS_Abilitys_GrantAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAC_SOTS_Abilitys::execGrantAbility)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTag);
	P_GET_STRUCT_REF(F_SOTS_AbilityGrantOptions,Z_Param_Out_Options);
	P_GET_STRUCT_REF(F_SOTS_AbilityHandle,Z_Param_Out_OutHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GrantAbility(Z_Param_AbilityTag,Z_Param_Out_Options,Z_Param_Out_OutHandle);
	P_NATIVE_END;
}
// ********** End Class UAC_SOTS_Abilitys Function GrantAbility ************************************

// ********** Begin Class UAC_SOTS_Abilitys Function HasAbility ************************************
struct Z_Construct_UFunction_UAC_SOTS_Abilitys_HasAbility_Statics
{
	struct AC_SOTS_Abilitys_eventHasAbility_Parms
	{
		FGameplayTag AbilityTag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS Ability|Query" },
		{ "ModuleRelativePath", "Public/Components/SOTS_AbilityComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HasAbility constinit property declarations ****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasAbility constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasAbility Property Definitions ***************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAC_SOTS_Abilitys_HasAbility_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_SOTS_Abilitys_eventHasAbility_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
void Z_Construct_UFunction_UAC_SOTS_Abilitys_HasAbility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AC_SOTS_Abilitys_eventHasAbility_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAC_SOTS_Abilitys_HasAbility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AC_SOTS_Abilitys_eventHasAbility_Parms), &Z_Construct_UFunction_UAC_SOTS_Abilitys_HasAbility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAC_SOTS_Abilitys_HasAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_SOTS_Abilitys_HasAbility_Statics::NewProp_AbilityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_SOTS_Abilitys_HasAbility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_SOTS_Abilitys_HasAbility_Statics::PropPointers) < 2048);
// ********** End Function HasAbility Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_SOTS_Abilitys_HasAbility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAC_SOTS_Abilitys, nullptr, "HasAbility", 	Z_Construct_UFunction_UAC_SOTS_Abilitys_HasAbility_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_SOTS_Abilitys_HasAbility_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAC_SOTS_Abilitys_HasAbility_Statics::AC_SOTS_Abilitys_eventHasAbility_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_SOTS_Abilitys_HasAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAC_SOTS_Abilitys_HasAbility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAC_SOTS_Abilitys_HasAbility_Statics::AC_SOTS_Abilitys_eventHasAbility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAC_SOTS_Abilitys_HasAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_SOTS_Abilitys_HasAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAC_SOTS_Abilitys::execHasAbility)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasAbility(Z_Param_AbilityTag);
	P_NATIVE_END;
}
// ********** End Class UAC_SOTS_Abilitys Function HasAbility **************************************

// ********** Begin Class UAC_SOTS_Abilitys Function IsAbilityOnCooldown ***************************
struct Z_Construct_UFunction_UAC_SOTS_Abilitys_IsAbilityOnCooldown_Statics
{
	struct AC_SOTS_Abilitys_eventIsAbilityOnCooldown_Parms
	{
		FGameplayTag AbilityTag;
		bool bOutIsOnCooldown;
		float OutRemainingTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS Ability|Query" },
		{ "ModuleRelativePath", "Public/Components/SOTS_AbilityComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsAbilityOnCooldown constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
	static void NewProp_bOutIsOnCooldown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutIsOnCooldown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutRemainingTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsAbilityOnCooldown constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsAbilityOnCooldown Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAC_SOTS_Abilitys_IsAbilityOnCooldown_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_SOTS_Abilitys_eventIsAbilityOnCooldown_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
void Z_Construct_UFunction_UAC_SOTS_Abilitys_IsAbilityOnCooldown_Statics::NewProp_bOutIsOnCooldown_SetBit(void* Obj)
{
	((AC_SOTS_Abilitys_eventIsAbilityOnCooldown_Parms*)Obj)->bOutIsOnCooldown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAC_SOTS_Abilitys_IsAbilityOnCooldown_Statics::NewProp_bOutIsOnCooldown = { "bOutIsOnCooldown", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AC_SOTS_Abilitys_eventIsAbilityOnCooldown_Parms), &Z_Construct_UFunction_UAC_SOTS_Abilitys_IsAbilityOnCooldown_Statics::NewProp_bOutIsOnCooldown_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAC_SOTS_Abilitys_IsAbilityOnCooldown_Statics::NewProp_OutRemainingTime = { "OutRemainingTime", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_SOTS_Abilitys_eventIsAbilityOnCooldown_Parms, OutRemainingTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAC_SOTS_Abilitys_IsAbilityOnCooldown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_SOTS_Abilitys_IsAbilityOnCooldown_Statics::NewProp_AbilityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_SOTS_Abilitys_IsAbilityOnCooldown_Statics::NewProp_bOutIsOnCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_SOTS_Abilitys_IsAbilityOnCooldown_Statics::NewProp_OutRemainingTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_SOTS_Abilitys_IsAbilityOnCooldown_Statics::PropPointers) < 2048);
// ********** End Function IsAbilityOnCooldown Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_SOTS_Abilitys_IsAbilityOnCooldown_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAC_SOTS_Abilitys, nullptr, "IsAbilityOnCooldown", 	Z_Construct_UFunction_UAC_SOTS_Abilitys_IsAbilityOnCooldown_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_SOTS_Abilitys_IsAbilityOnCooldown_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAC_SOTS_Abilitys_IsAbilityOnCooldown_Statics::AC_SOTS_Abilitys_eventIsAbilityOnCooldown_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_SOTS_Abilitys_IsAbilityOnCooldown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAC_SOTS_Abilitys_IsAbilityOnCooldown_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAC_SOTS_Abilitys_IsAbilityOnCooldown_Statics::AC_SOTS_Abilitys_eventIsAbilityOnCooldown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAC_SOTS_Abilitys_IsAbilityOnCooldown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_SOTS_Abilitys_IsAbilityOnCooldown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAC_SOTS_Abilitys::execIsAbilityOnCooldown)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTag);
	P_GET_UBOOL_REF(Z_Param_Out_bOutIsOnCooldown);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutRemainingTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IsAbilityOnCooldown(Z_Param_AbilityTag,Z_Param_Out_bOutIsOnCooldown,Z_Param_Out_OutRemainingTime);
	P_NATIVE_END;
}
// ********** End Class UAC_SOTS_Abilitys Function IsAbilityOnCooldown *****************************

// ********** Begin Class UAC_SOTS_Abilitys Function PullProfileStateFromSubsystem *****************
struct Z_Construct_UFunction_UAC_SOTS_Abilitys_PullProfileStateFromSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS Ability|Profile" },
		{ "ModuleRelativePath", "Public/Components/SOTS_AbilityComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function PullProfileStateFromSubsystem constinit property declarations *********
// ********** End Function PullProfileStateFromSubsystem constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_SOTS_Abilitys_PullProfileStateFromSubsystem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAC_SOTS_Abilitys, nullptr, "PullProfileStateFromSubsystem", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_SOTS_Abilitys_PullProfileStateFromSubsystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAC_SOTS_Abilitys_PullProfileStateFromSubsystem_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAC_SOTS_Abilitys_PullProfileStateFromSubsystem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_SOTS_Abilitys_PullProfileStateFromSubsystem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAC_SOTS_Abilitys::execPullProfileStateFromSubsystem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PullProfileStateFromSubsystem();
	P_NATIVE_END;
}
// ********** End Class UAC_SOTS_Abilitys Function PullProfileStateFromSubsystem *******************

// ********** Begin Class UAC_SOTS_Abilitys Function PushProfileStateToSubsystem *******************
struct Z_Construct_UFunction_UAC_SOTS_Abilitys_PushProfileStateToSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS Ability|Profile" },
		{ "ModuleRelativePath", "Public/Components/SOTS_AbilityComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function PushProfileStateToSubsystem constinit property declarations ***********
// ********** End Function PushProfileStateToSubsystem constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_SOTS_Abilitys_PushProfileStateToSubsystem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAC_SOTS_Abilitys, nullptr, "PushProfileStateToSubsystem", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_SOTS_Abilitys_PushProfileStateToSubsystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAC_SOTS_Abilitys_PushProfileStateToSubsystem_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAC_SOTS_Abilitys_PushProfileStateToSubsystem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_SOTS_Abilitys_PushProfileStateToSubsystem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAC_SOTS_Abilitys::execPushProfileStateToSubsystem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PushProfileStateToSubsystem();
	P_NATIVE_END;
}
// ********** End Class UAC_SOTS_Abilitys Function PushProfileStateToSubsystem *********************

// ********** Begin Class UAC_SOTS_Abilitys Function RemoveAbility *********************************
struct Z_Construct_UFunction_UAC_SOTS_Abilitys_RemoveAbility_Statics
{
	struct AC_SOTS_Abilitys_eventRemoveAbility_Parms
	{
		FGameplayTag AbilityTag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ---------- High-level convenience API ----------\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/SOTS_AbilityComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "---------- High-level convenience API ----------" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveAbility constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveAbility constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveAbility Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAC_SOTS_Abilitys_RemoveAbility_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_SOTS_Abilitys_eventRemoveAbility_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
void Z_Construct_UFunction_UAC_SOTS_Abilitys_RemoveAbility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AC_SOTS_Abilitys_eventRemoveAbility_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAC_SOTS_Abilitys_RemoveAbility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AC_SOTS_Abilitys_eventRemoveAbility_Parms), &Z_Construct_UFunction_UAC_SOTS_Abilitys_RemoveAbility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAC_SOTS_Abilitys_RemoveAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_SOTS_Abilitys_RemoveAbility_Statics::NewProp_AbilityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_SOTS_Abilitys_RemoveAbility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_SOTS_Abilitys_RemoveAbility_Statics::PropPointers) < 2048);
// ********** End Function RemoveAbility Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_SOTS_Abilitys_RemoveAbility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAC_SOTS_Abilitys, nullptr, "RemoveAbility", 	Z_Construct_UFunction_UAC_SOTS_Abilitys_RemoveAbility_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_SOTS_Abilitys_RemoveAbility_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAC_SOTS_Abilitys_RemoveAbility_Statics::AC_SOTS_Abilitys_eventRemoveAbility_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_SOTS_Abilitys_RemoveAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAC_SOTS_Abilitys_RemoveAbility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAC_SOTS_Abilitys_RemoveAbility_Statics::AC_SOTS_Abilitys_eventRemoveAbility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAC_SOTS_Abilitys_RemoveAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_SOTS_Abilitys_RemoveAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAC_SOTS_Abilitys::execRemoveAbility)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveAbility(Z_Param_AbilityTag);
	P_NATIVE_END;
}
// ********** End Class UAC_SOTS_Abilitys Function RemoveAbility ***********************************

// ********** Begin Class UAC_SOTS_Abilitys Function RevokeAbilityByTag ****************************
struct Z_Construct_UFunction_UAC_SOTS_Abilitys_RevokeAbilityByTag_Statics
{
	struct AC_SOTS_Abilitys_eventRevokeAbilityByTag_Parms
	{
		FGameplayTag AbilityTag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS Ability" },
		{ "ModuleRelativePath", "Public/Components/SOTS_AbilityComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RevokeAbilityByTag constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RevokeAbilityByTag constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RevokeAbilityByTag Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAC_SOTS_Abilitys_RevokeAbilityByTag_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_SOTS_Abilitys_eventRevokeAbilityByTag_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
void Z_Construct_UFunction_UAC_SOTS_Abilitys_RevokeAbilityByTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AC_SOTS_Abilitys_eventRevokeAbilityByTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAC_SOTS_Abilitys_RevokeAbilityByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AC_SOTS_Abilitys_eventRevokeAbilityByTag_Parms), &Z_Construct_UFunction_UAC_SOTS_Abilitys_RevokeAbilityByTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAC_SOTS_Abilitys_RevokeAbilityByTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_SOTS_Abilitys_RevokeAbilityByTag_Statics::NewProp_AbilityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_SOTS_Abilitys_RevokeAbilityByTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_SOTS_Abilitys_RevokeAbilityByTag_Statics::PropPointers) < 2048);
// ********** End Function RevokeAbilityByTag Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_SOTS_Abilitys_RevokeAbilityByTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAC_SOTS_Abilitys, nullptr, "RevokeAbilityByTag", 	Z_Construct_UFunction_UAC_SOTS_Abilitys_RevokeAbilityByTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_SOTS_Abilitys_RevokeAbilityByTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAC_SOTS_Abilitys_RevokeAbilityByTag_Statics::AC_SOTS_Abilitys_eventRevokeAbilityByTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_SOTS_Abilitys_RevokeAbilityByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAC_SOTS_Abilitys_RevokeAbilityByTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAC_SOTS_Abilitys_RevokeAbilityByTag_Statics::AC_SOTS_Abilitys_eventRevokeAbilityByTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAC_SOTS_Abilitys_RevokeAbilityByTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_SOTS_Abilitys_RevokeAbilityByTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAC_SOTS_Abilitys::execRevokeAbilityByTag)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RevokeAbilityByTag(Z_Param_AbilityTag);
	P_NATIVE_END;
}
// ********** End Class UAC_SOTS_Abilitys Function RevokeAbilityByTag ******************************

// ********** Begin Class UAC_SOTS_Abilitys Function TryActivateAbilityByTag ***********************
struct Z_Construct_UFunction_UAC_SOTS_Abilitys_TryActivateAbilityByTag_Statics
{
	struct AC_SOTS_Abilitys_eventTryActivateAbilityByTag_Parms
	{
		FGameplayTag AbilityTag;
		F_SOTS_AbilityActivationContext Context;
		E_SOTS_AbilityActivationResult OutResult;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS Ability" },
		{ "ModuleRelativePath", "Public/Components/SOTS_AbilityComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function TryActivateAbilityByTag constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function TryActivateAbilityByTag constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function TryActivateAbilityByTag Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAC_SOTS_Abilitys_TryActivateAbilityByTag_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_SOTS_Abilitys_eventTryActivateAbilityByTag_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAC_SOTS_Abilitys_TryActivateAbilityByTag_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_SOTS_Abilitys_eventTryActivateAbilityByTag_Parms, Context), Z_Construct_UScriptStruct_F_SOTS_AbilityActivationContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) }; // 2980214493
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAC_SOTS_Abilitys_TryActivateAbilityByTag_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAC_SOTS_Abilitys_TryActivateAbilityByTag_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_SOTS_Abilitys_eventTryActivateAbilityByTag_Parms, OutResult), Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilityActivationResult, METADATA_PARAMS(0, nullptr) }; // 527710619
void Z_Construct_UFunction_UAC_SOTS_Abilitys_TryActivateAbilityByTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AC_SOTS_Abilitys_eventTryActivateAbilityByTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAC_SOTS_Abilitys_TryActivateAbilityByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AC_SOTS_Abilitys_eventTryActivateAbilityByTag_Parms), &Z_Construct_UFunction_UAC_SOTS_Abilitys_TryActivateAbilityByTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAC_SOTS_Abilitys_TryActivateAbilityByTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_SOTS_Abilitys_TryActivateAbilityByTag_Statics::NewProp_AbilityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_SOTS_Abilitys_TryActivateAbilityByTag_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_SOTS_Abilitys_TryActivateAbilityByTag_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_SOTS_Abilitys_TryActivateAbilityByTag_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_SOTS_Abilitys_TryActivateAbilityByTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_SOTS_Abilitys_TryActivateAbilityByTag_Statics::PropPointers) < 2048);
// ********** End Function TryActivateAbilityByTag Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_SOTS_Abilitys_TryActivateAbilityByTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAC_SOTS_Abilitys, nullptr, "TryActivateAbilityByTag", 	Z_Construct_UFunction_UAC_SOTS_Abilitys_TryActivateAbilityByTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_SOTS_Abilitys_TryActivateAbilityByTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAC_SOTS_Abilitys_TryActivateAbilityByTag_Statics::AC_SOTS_Abilitys_eventTryActivateAbilityByTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_SOTS_Abilitys_TryActivateAbilityByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAC_SOTS_Abilitys_TryActivateAbilityByTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAC_SOTS_Abilitys_TryActivateAbilityByTag_Statics::AC_SOTS_Abilitys_eventTryActivateAbilityByTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAC_SOTS_Abilitys_TryActivateAbilityByTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_SOTS_Abilitys_TryActivateAbilityByTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAC_SOTS_Abilitys::execTryActivateAbilityByTag)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTag);
	P_GET_STRUCT_REF(F_SOTS_AbilityActivationContext,Z_Param_Out_Context);
	P_GET_ENUM_REF(E_SOTS_AbilityActivationResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryActivateAbilityByTag(Z_Param_AbilityTag,Z_Param_Out_Context,(E_SOTS_AbilityActivationResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// ********** End Class UAC_SOTS_Abilitys Function TryActivateAbilityByTag *************************

// ********** Begin Class UAC_SOTS_Abilitys ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAC_SOTS_Abilitys;
UClass* UAC_SOTS_Abilitys::GetPrivateStaticClass()
{
	using TClass = UAC_SOTS_Abilitys;
	if (!Z_Registration_Info_UClass_UAC_SOTS_Abilitys.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AC_SOTS_Abilitys"),
			Z_Registration_Info_UClass_UAC_SOTS_Abilitys.InnerSingleton,
			StaticRegisterNativesUAC_SOTS_Abilitys,
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
	return Z_Registration_Info_UClass_UAC_SOTS_Abilitys.InnerSingleton;
}
UClass* Z_Construct_UClass_UAC_SOTS_Abilitys_NoRegister()
{
	return UAC_SOTS_Abilitys::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAC_SOTS_Abilitys_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "SOTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Main, Blueprint-facing ability component for SOTS.\n *\n * High-level structure (v1.0 pattern):\n * - Static data: abilities are authored as F_SOTS_AbilityDefinition structs, usually\n *   inside USOTS_AbilityDefinitionDA assets. These are registered with the\n *   USOTS_AbilityRegistrySubsystem at startup.\n * - Global lookup: USOTS_AbilityRegistrySubsystem owns the map of AbilityTag ->\n *   F_SOTS_AbilityDefinition and exposes helper functions to fetch definitions\n *   and evaluate FSOTS_AbilityRequirements via USOTS_GAS_AbilityRequirementLibrary.\n * - Per-actor runtime state: UAC_SOTS_Abilitys lives on the player (or any actor)\n *   and tracks which ability tags are known plus per-ability cooldown / charges\n *   state in RuntimeStates.\n * - Implementation: gameplay for each ability lives in Blueprint subclasses of\n *   USOTS_AbilityBase. This component only manages lifecycle, gating, and events.\n */" },
#endif
		{ "IncludePath", "Components/SOTS_AbilityComponent.h" },
		{ "ModuleRelativePath", "Public/Components/SOTS_AbilityComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Main, Blueprint-facing ability component for SOTS.\n\nHigh-level structure (v1.0 pattern):\n- Static data: abilities are authored as F_SOTS_AbilityDefinition structs, usually\n  inside USOTS_AbilityDefinitionDA assets. These are registered with the\n  USOTS_AbilityRegistrySubsystem at startup.\n- Global lookup: USOTS_AbilityRegistrySubsystem owns the map of AbilityTag ->\n  F_SOTS_AbilityDefinition and exposes helper functions to fetch definitions\n  and evaluate FSOTS_AbilityRequirements via USOTS_GAS_AbilityRequirementLibrary.\n- Per-actor runtime state: UAC_SOTS_Abilitys lives on the player (or any actor)\n  and tracks which ability tags are known plus per-ability cooldown / charges\n  state in RuntimeStates.\n- Implementation: gameplay for each ability lives in Blueprint subclasses of\n  USOTS_AbilityBase. This component only manages lifecycle, gating, and events." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAbilityActivated_MetaData[] = {
		{ "Category", "SOTS Ability|Events" },
		{ "ModuleRelativePath", "Public/Components/SOTS_AbilityComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAbilityEnded_MetaData[] = {
		{ "Category", "SOTS Ability|Events" },
		{ "ModuleRelativePath", "Public/Components/SOTS_AbilityComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAbilityFailed_MetaData[] = {
		{ "Category", "SOTS Ability|Events" },
		{ "ModuleRelativePath", "Public/Components/SOTS_AbilityComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAbilityActivatedWithContext_MetaData[] = {
		{ "Category", "SOTS Ability|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Extended activation event that also exposes the activation context for\n// UI or higher-level systems that want to inspect targets / locations.\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/SOTS_AbilityComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Extended activation event that also exposes the activation context for\nUI or higher-level systems that want to inspect targets / locations." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAbilitiesChanged_MetaData[] = {
		{ "Category", "SOTS Ability|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Broadcast whenever the set of known abilities on this component changes.\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/SOTS_AbilityComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Broadcast whenever the set of known abilities on this component changes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAbilityStateChanged_MetaData[] = {
		{ "Category", "SOTS Ability|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Broadcast whenever an individual ability's runtime state (charges, active\n// flag, cooldown) changes.\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/SOTS_AbilityComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Broadcast whenever an individual ability's runtime state (charges, active\nflag, cooldown) changes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/SOTS_AbilityComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/SOTS_AbilityComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeStates_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/SOTS_AbilityComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityInstances_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/SOTS_AbilityComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextInternalHandleId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/SOTS_AbilityComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAC_SOTS_Abilitys constinit property declarations ************************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAbilityActivated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAbilityEnded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAbilityFailed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAbilityActivatedWithContext;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAbilitiesChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAbilityStateChanged;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySubsystem;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RuntimeStates_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RuntimeStates_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_RuntimeStates;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilityInstances_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityInstances_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AbilityInstances;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NextInternalHandleId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAC_SOTS_Abilitys constinit property declarations **************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ActivateAbility"), .Pointer = &UAC_SOTS_Abilitys::execActivateAbility },
		{ .NameUTF8 = UTF8TEXT("ApplySerializedState"), .Pointer = &UAC_SOTS_Abilitys::execApplySerializedState },
		{ .NameUTF8 = UTF8TEXT("CanActivateAbility"), .Pointer = &UAC_SOTS_Abilitys::execCanActivateAbility },
		{ .NameUTF8 = UTF8TEXT("CancelAllAbilities"), .Pointer = &UAC_SOTS_Abilitys::execCancelAllAbilities },
		{ .NameUTF8 = UTF8TEXT("ForceGrantAbility"), .Pointer = &UAC_SOTS_Abilitys::execForceGrantAbility },
		{ .NameUTF8 = UTF8TEXT("ForceRemoveAbility"), .Pointer = &UAC_SOTS_Abilitys::execForceRemoveAbility },
		{ .NameUTF8 = UTF8TEXT("GetAbilityCharges"), .Pointer = &UAC_SOTS_Abilitys::execGetAbilityCharges },
		{ .NameUTF8 = UTF8TEXT("GetKnownAbilities"), .Pointer = &UAC_SOTS_Abilitys::execGetKnownAbilities },
		{ .NameUTF8 = UTF8TEXT("GetSerializedState"), .Pointer = &UAC_SOTS_Abilitys::execGetSerializedState },
		{ .NameUTF8 = UTF8TEXT("GrantAbility"), .Pointer = &UAC_SOTS_Abilitys::execGrantAbility },
		{ .NameUTF8 = UTF8TEXT("HasAbility"), .Pointer = &UAC_SOTS_Abilitys::execHasAbility },
		{ .NameUTF8 = UTF8TEXT("IsAbilityOnCooldown"), .Pointer = &UAC_SOTS_Abilitys::execIsAbilityOnCooldown },
		{ .NameUTF8 = UTF8TEXT("PullProfileStateFromSubsystem"), .Pointer = &UAC_SOTS_Abilitys::execPullProfileStateFromSubsystem },
		{ .NameUTF8 = UTF8TEXT("PushProfileStateToSubsystem"), .Pointer = &UAC_SOTS_Abilitys::execPushProfileStateToSubsystem },
		{ .NameUTF8 = UTF8TEXT("RemoveAbility"), .Pointer = &UAC_SOTS_Abilitys::execRemoveAbility },
		{ .NameUTF8 = UTF8TEXT("RevokeAbilityByTag"), .Pointer = &UAC_SOTS_Abilitys::execRevokeAbilityByTag },
		{ .NameUTF8 = UTF8TEXT("TryActivateAbilityByTag"), .Pointer = &UAC_SOTS_Abilitys::execTryActivateAbilityByTag },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAC_SOTS_Abilitys_ActivateAbility, "ActivateAbility" }, // 2719399871
		{ &Z_Construct_UFunction_UAC_SOTS_Abilitys_ApplySerializedState, "ApplySerializedState" }, // 3491968828
		{ &Z_Construct_UFunction_UAC_SOTS_Abilitys_CanActivateAbility, "CanActivateAbility" }, // 2943010007
		{ &Z_Construct_UFunction_UAC_SOTS_Abilitys_CancelAllAbilities, "CancelAllAbilities" }, // 1525288960
		{ &Z_Construct_UFunction_UAC_SOTS_Abilitys_ForceGrantAbility, "ForceGrantAbility" }, // 1694209447
		{ &Z_Construct_UFunction_UAC_SOTS_Abilitys_ForceRemoveAbility, "ForceRemoveAbility" }, // 2634714378
		{ &Z_Construct_UFunction_UAC_SOTS_Abilitys_GetAbilityCharges, "GetAbilityCharges" }, // 2212603982
		{ &Z_Construct_UFunction_UAC_SOTS_Abilitys_GetKnownAbilities, "GetKnownAbilities" }, // 2585296344
		{ &Z_Construct_UFunction_UAC_SOTS_Abilitys_GetSerializedState, "GetSerializedState" }, // 476391640
		{ &Z_Construct_UFunction_UAC_SOTS_Abilitys_GrantAbility, "GrantAbility" }, // 1100428987
		{ &Z_Construct_UFunction_UAC_SOTS_Abilitys_HasAbility, "HasAbility" }, // 2733749696
		{ &Z_Construct_UFunction_UAC_SOTS_Abilitys_IsAbilityOnCooldown, "IsAbilityOnCooldown" }, // 3798284644
		{ &Z_Construct_UFunction_UAC_SOTS_Abilitys_PullProfileStateFromSubsystem, "PullProfileStateFromSubsystem" }, // 941464981
		{ &Z_Construct_UFunction_UAC_SOTS_Abilitys_PushProfileStateToSubsystem, "PushProfileStateToSubsystem" }, // 1835560001
		{ &Z_Construct_UFunction_UAC_SOTS_Abilitys_RemoveAbility, "RemoveAbility" }, // 3976690480
		{ &Z_Construct_UFunction_UAC_SOTS_Abilitys_RevokeAbilityByTag, "RevokeAbilityByTag" }, // 2089656767
		{ &Z_Construct_UFunction_UAC_SOTS_Abilitys_TryActivateAbilityByTag, "TryActivateAbilityByTag" }, // 917377495
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAC_SOTS_Abilitys>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAC_SOTS_Abilitys_Statics

// ********** Begin Class UAC_SOTS_Abilitys Property Definitions ***********************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAC_SOTS_Abilitys_Statics::NewProp_OnAbilityActivated = { "OnAbilityActivated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAC_SOTS_Abilitys, OnAbilityActivated), Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilitySimpleSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAbilityActivated_MetaData), NewProp_OnAbilityActivated_MetaData) }; // 3488170698
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAC_SOTS_Abilitys_Statics::NewProp_OnAbilityEnded = { "OnAbilityEnded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAC_SOTS_Abilitys, OnAbilityEnded), Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilitySimpleSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAbilityEnded_MetaData), NewProp_OnAbilityEnded_MetaData) }; // 3488170698
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAC_SOTS_Abilitys_Statics::NewProp_OnAbilityFailed = { "OnAbilityFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAC_SOTS_Abilitys, OnAbilityFailed), Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityFailedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAbilityFailed_MetaData), NewProp_OnAbilityFailed_MetaData) }; // 2902397675
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAC_SOTS_Abilitys_Statics::NewProp_OnAbilityActivatedWithContext = { "OnAbilityActivatedWithContext", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAC_SOTS_Abilitys, OnAbilityActivatedWithContext), Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityActivatedWithContextSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAbilityActivatedWithContext_MetaData), NewProp_OnAbilityActivatedWithContext_MetaData) }; // 1752211747
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAC_SOTS_Abilitys_Statics::NewProp_OnAbilitiesChanged = { "OnAbilitiesChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAC_SOTS_Abilitys, OnAbilitiesChanged), Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityListChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAbilitiesChanged_MetaData), NewProp_OnAbilitiesChanged_MetaData) }; // 1411667811
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAC_SOTS_Abilitys_Statics::NewProp_OnAbilityStateChanged = { "OnAbilityStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAC_SOTS_Abilitys, OnAbilityStateChanged), Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityStateChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAbilityStateChanged_MetaData), NewProp_OnAbilityStateChanged_MetaData) }; // 900508499
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAC_SOTS_Abilitys_Statics::NewProp_InventoryComponent = { "InventoryComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAC_SOTS_Abilitys, InventoryComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryComponent_MetaData), NewProp_InventoryComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAC_SOTS_Abilitys_Statics::NewProp_AbilitySubsystem = { "AbilitySubsystem", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAC_SOTS_Abilitys, AbilitySubsystem), Z_Construct_UClass_USOTS_AbilitySubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySubsystem_MetaData), NewProp_AbilitySubsystem_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAC_SOTS_Abilitys_Statics::NewProp_RuntimeStates_ValueProp = { "RuntimeStates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_F_SOTS_AbilityRuntimeState, METADATA_PARAMS(0, nullptr) }; // 2289692467
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAC_SOTS_Abilitys_Statics::NewProp_RuntimeStates_Key_KeyProp = { "RuntimeStates_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAC_SOTS_Abilitys_Statics::NewProp_RuntimeStates = { "RuntimeStates", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAC_SOTS_Abilitys, RuntimeStates), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuntimeStates_MetaData), NewProp_RuntimeStates_MetaData) }; // 517357616 2289692467
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAC_SOTS_Abilitys_Statics::NewProp_AbilityInstances_ValueProp = { "AbilityInstances", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_USOTS_AbilityBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAC_SOTS_Abilitys_Statics::NewProp_AbilityInstances_Key_KeyProp = { "AbilityInstances_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAC_SOTS_Abilitys_Statics::NewProp_AbilityInstances = { "AbilityInstances", nullptr, (EPropertyFlags)0x0020088000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAC_SOTS_Abilitys, AbilityInstances), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityInstances_MetaData), NewProp_AbilityInstances_MetaData) }; // 517357616
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAC_SOTS_Abilitys_Statics::NewProp_NextInternalHandleId = { "NextInternalHandleId", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAC_SOTS_Abilitys, NextInternalHandleId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextInternalHandleId_MetaData), NewProp_NextInternalHandleId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAC_SOTS_Abilitys_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_SOTS_Abilitys_Statics::NewProp_OnAbilityActivated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_SOTS_Abilitys_Statics::NewProp_OnAbilityEnded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_SOTS_Abilitys_Statics::NewProp_OnAbilityFailed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_SOTS_Abilitys_Statics::NewProp_OnAbilityActivatedWithContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_SOTS_Abilitys_Statics::NewProp_OnAbilitiesChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_SOTS_Abilitys_Statics::NewProp_OnAbilityStateChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_SOTS_Abilitys_Statics::NewProp_InventoryComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_SOTS_Abilitys_Statics::NewProp_AbilitySubsystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_SOTS_Abilitys_Statics::NewProp_RuntimeStates_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_SOTS_Abilitys_Statics::NewProp_RuntimeStates_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_SOTS_Abilitys_Statics::NewProp_RuntimeStates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_SOTS_Abilitys_Statics::NewProp_AbilityInstances_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_SOTS_Abilitys_Statics::NewProp_AbilityInstances_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_SOTS_Abilitys_Statics::NewProp_AbilityInstances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_SOTS_Abilitys_Statics::NewProp_NextInternalHandleId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAC_SOTS_Abilitys_Statics::PropPointers) < 2048);
// ********** End Class UAC_SOTS_Abilitys Property Definitions *************************************
UObject* (*const Z_Construct_UClass_UAC_SOTS_Abilitys_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_GAS_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAC_SOTS_Abilitys_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAC_SOTS_Abilitys_Statics::ClassParams = {
	&UAC_SOTS_Abilitys::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAC_SOTS_Abilitys_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAC_SOTS_Abilitys_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAC_SOTS_Abilitys_Statics::Class_MetaDataParams), Z_Construct_UClass_UAC_SOTS_Abilitys_Statics::Class_MetaDataParams)
};
void UAC_SOTS_Abilitys::StaticRegisterNativesUAC_SOTS_Abilitys()
{
	UClass* Class = UAC_SOTS_Abilitys::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UAC_SOTS_Abilitys_Statics::Funcs));
}
UClass* Z_Construct_UClass_UAC_SOTS_Abilitys()
{
	if (!Z_Registration_Info_UClass_UAC_SOTS_Abilitys.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAC_SOTS_Abilitys.OuterSingleton, Z_Construct_UClass_UAC_SOTS_Abilitys_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAC_SOTS_Abilitys.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAC_SOTS_Abilitys);
UAC_SOTS_Abilitys::~UAC_SOTS_Abilitys() {}
// ********** End Class UAC_SOTS_Abilitys **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Components_SOTS_AbilityComponent_h__Script_SOTS_GAS_Plugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAC_SOTS_Abilitys, UAC_SOTS_Abilitys::StaticClass, TEXT("UAC_SOTS_Abilitys"), &Z_Registration_Info_UClass_UAC_SOTS_Abilitys, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAC_SOTS_Abilitys), 1232817171U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Components_SOTS_AbilityComponent_h__Script_SOTS_GAS_Plugin_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Components_SOTS_AbilityComponent_h__Script_SOTS_GAS_Plugin_2787997588{
	TEXT("/Script/SOTS_GAS_Plugin"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Components_SOTS_AbilityComponent_h__Script_SOTS_GAS_Plugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Components_SOTS_AbilityComponent_h__Script_SOTS_GAS_Plugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
