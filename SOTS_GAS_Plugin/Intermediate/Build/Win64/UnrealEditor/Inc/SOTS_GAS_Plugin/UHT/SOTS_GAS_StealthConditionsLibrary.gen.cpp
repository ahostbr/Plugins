// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SOTS_GAS_StealthConditionsLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_GAS_StealthConditionsLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_USOTS_GAS_StealthConditionsLibrary();
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_USOTS_GAS_StealthConditionsLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_SOTS_GAS_Plugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USOTS_GAS_StealthConditionsLibrary Function CanUseLoudAbility ************
struct Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_CanUseLoudAbility_Statics
{
	struct SOTS_GAS_StealthConditionsLibrary_eventCanUseLoudAbility_Parms
	{
		const UObject* WorldContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|GAS|Stealth" },
		{ "ModuleRelativePath", "Public/SOTS_GAS_StealthConditionsLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function CanUseLoudAbility constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CanUseLoudAbility constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CanUseLoudAbility Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_CanUseLoudAbility_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_StealthConditionsLibrary_eventCanUseLoudAbility_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
void Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_CanUseLoudAbility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SOTS_GAS_StealthConditionsLibrary_eventCanUseLoudAbility_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_CanUseLoudAbility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_GAS_StealthConditionsLibrary_eventCanUseLoudAbility_Parms), &Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_CanUseLoudAbility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_CanUseLoudAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_CanUseLoudAbility_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_CanUseLoudAbility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_CanUseLoudAbility_Statics::PropPointers) < 2048);
// ********** End Function CanUseLoudAbility Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_CanUseLoudAbility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_GAS_StealthConditionsLibrary, nullptr, "CanUseLoudAbility", 	Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_CanUseLoudAbility_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_CanUseLoudAbility_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_CanUseLoudAbility_Statics::SOTS_GAS_StealthConditionsLibrary_eventCanUseLoudAbility_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_CanUseLoudAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_CanUseLoudAbility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_CanUseLoudAbility_Statics::SOTS_GAS_StealthConditionsLibrary_eventCanUseLoudAbility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_CanUseLoudAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_CanUseLoudAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_GAS_StealthConditionsLibrary::execCanUseLoudAbility)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USOTS_GAS_StealthConditionsLibrary::CanUseLoudAbility(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class USOTS_GAS_StealthConditionsLibrary Function CanUseLoudAbility **************

// ********** Begin Class USOTS_GAS_StealthConditionsLibrary Function GetCurrentStealthScore01 *****
struct Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_GetCurrentStealthScore01_Statics
{
	struct SOTS_GAS_StealthConditionsLibrary_eventGetCurrentStealthScore01_Parms
	{
		const UObject* WorldContextObject;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|GAS|Stealth" },
		{ "ModuleRelativePath", "Public/SOTS_GAS_StealthConditionsLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentStealthScore01 constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentStealthScore01 constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentStealthScore01 Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_GetCurrentStealthScore01_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_StealthConditionsLibrary_eventGetCurrentStealthScore01_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_GetCurrentStealthScore01_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_StealthConditionsLibrary_eventGetCurrentStealthScore01_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_GetCurrentStealthScore01_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_GetCurrentStealthScore01_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_GetCurrentStealthScore01_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_GetCurrentStealthScore01_Statics::PropPointers) < 2048);
// ********** End Function GetCurrentStealthScore01 Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_GetCurrentStealthScore01_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_GAS_StealthConditionsLibrary, nullptr, "GetCurrentStealthScore01", 	Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_GetCurrentStealthScore01_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_GetCurrentStealthScore01_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_GetCurrentStealthScore01_Statics::SOTS_GAS_StealthConditionsLibrary_eventGetCurrentStealthScore01_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_GetCurrentStealthScore01_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_GetCurrentStealthScore01_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_GetCurrentStealthScore01_Statics::SOTS_GAS_StealthConditionsLibrary_eventGetCurrentStealthScore01_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_GetCurrentStealthScore01()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_GetCurrentStealthScore01_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_GAS_StealthConditionsLibrary::execGetCurrentStealthScore01)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USOTS_GAS_StealthConditionsLibrary::GetCurrentStealthScore01(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class USOTS_GAS_StealthConditionsLibrary Function GetCurrentStealthScore01 *******

// ********** Begin Class USOTS_GAS_StealthConditionsLibrary Function GetCurrentStealthTier ********
struct Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_GetCurrentStealthTier_Statics
{
	struct SOTS_GAS_StealthConditionsLibrary_eventGetCurrentStealthTier_Parms
	{
		const UObject* WorldContextObject;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|GAS|Stealth" },
		{ "ModuleRelativePath", "Public/SOTS_GAS_StealthConditionsLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentStealthTier constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentStealthTier constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentStealthTier Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_GetCurrentStealthTier_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_StealthConditionsLibrary_eventGetCurrentStealthTier_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_GetCurrentStealthTier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_StealthConditionsLibrary_eventGetCurrentStealthTier_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_GetCurrentStealthTier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_GetCurrentStealthTier_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_GetCurrentStealthTier_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_GetCurrentStealthTier_Statics::PropPointers) < 2048);
// ********** End Function GetCurrentStealthTier Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_GetCurrentStealthTier_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_GAS_StealthConditionsLibrary, nullptr, "GetCurrentStealthTier", 	Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_GetCurrentStealthTier_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_GetCurrentStealthTier_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_GetCurrentStealthTier_Statics::SOTS_GAS_StealthConditionsLibrary_eventGetCurrentStealthTier_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_GetCurrentStealthTier_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_GetCurrentStealthTier_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_GetCurrentStealthTier_Statics::SOTS_GAS_StealthConditionsLibrary_eventGetCurrentStealthTier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_GetCurrentStealthTier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_GetCurrentStealthTier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_GAS_StealthConditionsLibrary::execGetCurrentStealthTier)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USOTS_GAS_StealthConditionsLibrary::GetCurrentStealthTier(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class USOTS_GAS_StealthConditionsLibrary Function GetCurrentStealthTier **********

// ********** Begin Class USOTS_GAS_StealthConditionsLibrary Function IsPlayerHidden ***************
struct Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_IsPlayerHidden_Statics
{
	struct SOTS_GAS_StealthConditionsLibrary_eventIsPlayerHidden_Parms
	{
		const UObject* WorldContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|GAS|Stealth" },
		{ "ModuleRelativePath", "Public/SOTS_GAS_StealthConditionsLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsPlayerHidden constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsPlayerHidden constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsPlayerHidden Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_IsPlayerHidden_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_StealthConditionsLibrary_eventIsPlayerHidden_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
void Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_IsPlayerHidden_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SOTS_GAS_StealthConditionsLibrary_eventIsPlayerHidden_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_IsPlayerHidden_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_GAS_StealthConditionsLibrary_eventIsPlayerHidden_Parms), &Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_IsPlayerHidden_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_IsPlayerHidden_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_IsPlayerHidden_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_IsPlayerHidden_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_IsPlayerHidden_Statics::PropPointers) < 2048);
// ********** End Function IsPlayerHidden Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_IsPlayerHidden_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_GAS_StealthConditionsLibrary, nullptr, "IsPlayerHidden", 	Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_IsPlayerHidden_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_IsPlayerHidden_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_IsPlayerHidden_Statics::SOTS_GAS_StealthConditionsLibrary_eventIsPlayerHidden_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_IsPlayerHidden_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_IsPlayerHidden_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_IsPlayerHidden_Statics::SOTS_GAS_StealthConditionsLibrary_eventIsPlayerHidden_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_IsPlayerHidden()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_IsPlayerHidden_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_GAS_StealthConditionsLibrary::execIsPlayerHidden)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USOTS_GAS_StealthConditionsLibrary::IsPlayerHidden(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class USOTS_GAS_StealthConditionsLibrary Function IsPlayerHidden *****************

// ********** Begin Class USOTS_GAS_StealthConditionsLibrary Function IsPlayerInLowProfileStealth **
struct Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_IsPlayerInLowProfileStealth_Statics
{
	struct SOTS_GAS_StealthConditionsLibrary_eventIsPlayerInLowProfileStealth_Parms
	{
		const UObject* WorldContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|GAS|Stealth" },
		{ "ModuleRelativePath", "Public/SOTS_GAS_StealthConditionsLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsPlayerInLowProfileStealth constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsPlayerInLowProfileStealth constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsPlayerInLowProfileStealth Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_IsPlayerInLowProfileStealth_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_StealthConditionsLibrary_eventIsPlayerInLowProfileStealth_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
void Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_IsPlayerInLowProfileStealth_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SOTS_GAS_StealthConditionsLibrary_eventIsPlayerInLowProfileStealth_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_IsPlayerInLowProfileStealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_GAS_StealthConditionsLibrary_eventIsPlayerInLowProfileStealth_Parms), &Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_IsPlayerInLowProfileStealth_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_IsPlayerInLowProfileStealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_IsPlayerInLowProfileStealth_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_IsPlayerInLowProfileStealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_IsPlayerInLowProfileStealth_Statics::PropPointers) < 2048);
// ********** End Function IsPlayerInLowProfileStealth Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_IsPlayerInLowProfileStealth_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_GAS_StealthConditionsLibrary, nullptr, "IsPlayerInLowProfileStealth", 	Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_IsPlayerInLowProfileStealth_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_IsPlayerInLowProfileStealth_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_IsPlayerInLowProfileStealth_Statics::SOTS_GAS_StealthConditionsLibrary_eventIsPlayerInLowProfileStealth_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_IsPlayerInLowProfileStealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_IsPlayerInLowProfileStealth_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_IsPlayerInLowProfileStealth_Statics::SOTS_GAS_StealthConditionsLibrary_eventIsPlayerInLowProfileStealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_IsPlayerInLowProfileStealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_IsPlayerInLowProfileStealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_GAS_StealthConditionsLibrary::execIsPlayerInLowProfileStealth)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USOTS_GAS_StealthConditionsLibrary::IsPlayerInLowProfileStealth(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class USOTS_GAS_StealthConditionsLibrary Function IsPlayerInLowProfileStealth ****

// ********** Begin Class USOTS_GAS_StealthConditionsLibrary ***************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_GAS_StealthConditionsLibrary;
UClass* USOTS_GAS_StealthConditionsLibrary::GetPrivateStaticClass()
{
	using TClass = USOTS_GAS_StealthConditionsLibrary;
	if (!Z_Registration_Info_UClass_USOTS_GAS_StealthConditionsLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_GAS_StealthConditionsLibrary"),
			Z_Registration_Info_UClass_USOTS_GAS_StealthConditionsLibrary.InnerSingleton,
			StaticRegisterNativesUSOTS_GAS_StealthConditionsLibrary,
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
	return Z_Registration_Info_UClass_USOTS_GAS_StealthConditionsLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_GAS_StealthConditionsLibrary_NoRegister()
{
	return USOTS_GAS_StealthConditionsLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_GAS_StealthConditionsLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SOTS_GAS_StealthConditionsLibrary.h" },
		{ "ModuleRelativePath", "Public/SOTS_GAS_StealthConditionsLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_GAS_StealthConditionsLibrary constinit property declarations *******
// ********** End Class USOTS_GAS_StealthConditionsLibrary constinit property declarations *********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CanUseLoudAbility"), .Pointer = &USOTS_GAS_StealthConditionsLibrary::execCanUseLoudAbility },
		{ .NameUTF8 = UTF8TEXT("GetCurrentStealthScore01"), .Pointer = &USOTS_GAS_StealthConditionsLibrary::execGetCurrentStealthScore01 },
		{ .NameUTF8 = UTF8TEXT("GetCurrentStealthTier"), .Pointer = &USOTS_GAS_StealthConditionsLibrary::execGetCurrentStealthTier },
		{ .NameUTF8 = UTF8TEXT("IsPlayerHidden"), .Pointer = &USOTS_GAS_StealthConditionsLibrary::execIsPlayerHidden },
		{ .NameUTF8 = UTF8TEXT("IsPlayerInLowProfileStealth"), .Pointer = &USOTS_GAS_StealthConditionsLibrary::execIsPlayerInLowProfileStealth },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_CanUseLoudAbility, "CanUseLoudAbility" }, // 2106769737
		{ &Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_GetCurrentStealthScore01, "GetCurrentStealthScore01" }, // 2523422092
		{ &Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_GetCurrentStealthTier, "GetCurrentStealthTier" }, // 4173683147
		{ &Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_IsPlayerHidden, "IsPlayerHidden" }, // 3355758783
		{ &Z_Construct_UFunction_USOTS_GAS_StealthConditionsLibrary_IsPlayerInLowProfileStealth, "IsPlayerInLowProfileStealth" }, // 249451095
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_GAS_StealthConditionsLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_GAS_StealthConditionsLibrary_Statics
UObject* (*const Z_Construct_UClass_USOTS_GAS_StealthConditionsLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_GAS_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_GAS_StealthConditionsLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_GAS_StealthConditionsLibrary_Statics::ClassParams = {
	&USOTS_GAS_StealthConditionsLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_GAS_StealthConditionsLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_GAS_StealthConditionsLibrary_Statics::Class_MetaDataParams)
};
void USOTS_GAS_StealthConditionsLibrary::StaticRegisterNativesUSOTS_GAS_StealthConditionsLibrary()
{
	UClass* Class = USOTS_GAS_StealthConditionsLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USOTS_GAS_StealthConditionsLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_USOTS_GAS_StealthConditionsLibrary()
{
	if (!Z_Registration_Info_UClass_USOTS_GAS_StealthConditionsLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_GAS_StealthConditionsLibrary.OuterSingleton, Z_Construct_UClass_USOTS_GAS_StealthConditionsLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_GAS_StealthConditionsLibrary.OuterSingleton;
}
USOTS_GAS_StealthConditionsLibrary::USOTS_GAS_StealthConditionsLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_GAS_StealthConditionsLibrary);
USOTS_GAS_StealthConditionsLibrary::~USOTS_GAS_StealthConditionsLibrary() {}
// ********** End Class USOTS_GAS_StealthConditionsLibrary *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_SOTS_GAS_StealthConditionsLibrary_h__Script_SOTS_GAS_Plugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_GAS_StealthConditionsLibrary, USOTS_GAS_StealthConditionsLibrary::StaticClass, TEXT("USOTS_GAS_StealthConditionsLibrary"), &Z_Registration_Info_UClass_USOTS_GAS_StealthConditionsLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_GAS_StealthConditionsLibrary), 3695494042U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_SOTS_GAS_StealthConditionsLibrary_h__Script_SOTS_GAS_Plugin_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_SOTS_GAS_StealthConditionsLibrary_h__Script_SOTS_GAS_Plugin_3063438992{
	TEXT("/Script/SOTS_GAS_Plugin"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_SOTS_GAS_StealthConditionsLibrary_h__Script_SOTS_GAS_Plugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_SOTS_GAS_StealthConditionsLibrary_h__Script_SOTS_GAS_Plugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
