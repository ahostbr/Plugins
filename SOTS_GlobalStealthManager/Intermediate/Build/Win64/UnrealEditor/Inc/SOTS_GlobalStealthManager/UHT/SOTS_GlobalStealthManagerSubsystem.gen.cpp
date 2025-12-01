// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SOTS_GlobalStealthManagerSubsystem.h"
#include "Engine/GameInstance.h"
#include "SOTS_GlobalStealthTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_GlobalStealthManagerSubsystem() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
SOTS_GLOBALSTEALTHMANAGER_API UClass* Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem();
SOTS_GLOBALSTEALTHMANAGER_API UClass* Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_NoRegister();
SOTS_GLOBALSTEALTHMANAGER_API UClass* Z_Construct_UClass_USOTS_StealthConfigDataAsset_NoRegister();
SOTS_GLOBALSTEALTHMANAGER_API UEnum* Z_Construct_UEnum_SOTS_GlobalStealthManager_ESOTS_StealthTier();
SOTS_GLOBALSTEALTHMANAGER_API UEnum* Z_Construct_UEnum_SOTS_GlobalStealthManager_ESOTSStealthLevel();
SOTS_GLOBALSTEALTHMANAGER_API UFunction* Z_Construct_UDelegateFunction_SOTS_GlobalStealthManager_SOTS_PlayerDetectionStateChangedSignature__DelegateSignature();
SOTS_GLOBALSTEALTHMANAGER_API UFunction* Z_Construct_UDelegateFunction_SOTS_GlobalStealthManager_SOTS_StealthLevelChangedSignature__DelegateSignature();
SOTS_GLOBALSTEALTHMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_PlayerStealthState();
SOTS_GLOBALSTEALTHMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_StealthModifier();
SOTS_GLOBALSTEALTHMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_StealthSample();
SOTS_GLOBALSTEALTHMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_StealthScoreBreakdown();
SOTS_GLOBALSTEALTHMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_StealthScoringConfig();
UPackage* Z_Construct_UPackage__Script_SOTS_GlobalStealthManager();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FSOTS_StealthLevelChangedSignature ************************************
struct Z_Construct_UDelegateFunction_SOTS_GlobalStealthManager_SOTS_StealthLevelChangedSignature__DelegateSignature_Statics
{
	struct _Script_SOTS_GlobalStealthManager_eventSOTS_StealthLevelChangedSignature_Parms
	{
		ESOTSStealthLevel OldLevel;
		ESOTSStealthLevel NewLevel;
		float NewScore;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthManagerSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FSOTS_StealthLevelChangedSignature constinit property declarations ****
	static const UECodeGen_Private::FBytePropertyParams NewProp_OldLevel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OldLevel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewLevel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewScore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FSOTS_StealthLevelChangedSignature constinit property declarations ******
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FSOTS_StealthLevelChangedSignature Property Definitions ***************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SOTS_GlobalStealthManager_SOTS_StealthLevelChangedSignature__DelegateSignature_Statics::NewProp_OldLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SOTS_GlobalStealthManager_SOTS_StealthLevelChangedSignature__DelegateSignature_Statics::NewProp_OldLevel = { "OldLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SOTS_GlobalStealthManager_eventSOTS_StealthLevelChangedSignature_Parms, OldLevel), Z_Construct_UEnum_SOTS_GlobalStealthManager_ESOTSStealthLevel, METADATA_PARAMS(0, nullptr) }; // 3112324723
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SOTS_GlobalStealthManager_SOTS_StealthLevelChangedSignature__DelegateSignature_Statics::NewProp_NewLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SOTS_GlobalStealthManager_SOTS_StealthLevelChangedSignature__DelegateSignature_Statics::NewProp_NewLevel = { "NewLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SOTS_GlobalStealthManager_eventSOTS_StealthLevelChangedSignature_Parms, NewLevel), Z_Construct_UEnum_SOTS_GlobalStealthManager_ESOTSStealthLevel, METADATA_PARAMS(0, nullptr) }; // 3112324723
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_SOTS_GlobalStealthManager_SOTS_StealthLevelChangedSignature__DelegateSignature_Statics::NewProp_NewScore = { "NewScore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SOTS_GlobalStealthManager_eventSOTS_StealthLevelChangedSignature_Parms, NewScore), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SOTS_GlobalStealthManager_SOTS_StealthLevelChangedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SOTS_GlobalStealthManager_SOTS_StealthLevelChangedSignature__DelegateSignature_Statics::NewProp_OldLevel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SOTS_GlobalStealthManager_SOTS_StealthLevelChangedSignature__DelegateSignature_Statics::NewProp_OldLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SOTS_GlobalStealthManager_SOTS_StealthLevelChangedSignature__DelegateSignature_Statics::NewProp_NewLevel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SOTS_GlobalStealthManager_SOTS_StealthLevelChangedSignature__DelegateSignature_Statics::NewProp_NewLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SOTS_GlobalStealthManager_SOTS_StealthLevelChangedSignature__DelegateSignature_Statics::NewProp_NewScore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_GlobalStealthManager_SOTS_StealthLevelChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FSOTS_StealthLevelChangedSignature Property Definitions *****************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SOTS_GlobalStealthManager_SOTS_StealthLevelChangedSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SOTS_GlobalStealthManager, nullptr, "SOTS_StealthLevelChangedSignature__DelegateSignature", 	Z_Construct_UDelegateFunction_SOTS_GlobalStealthManager_SOTS_StealthLevelChangedSignature__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_GlobalStealthManager_SOTS_StealthLevelChangedSignature__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SOTS_GlobalStealthManager_SOTS_StealthLevelChangedSignature__DelegateSignature_Statics::_Script_SOTS_GlobalStealthManager_eventSOTS_StealthLevelChangedSignature_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_GlobalStealthManager_SOTS_StealthLevelChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SOTS_GlobalStealthManager_SOTS_StealthLevelChangedSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SOTS_GlobalStealthManager_SOTS_StealthLevelChangedSignature__DelegateSignature_Statics::_Script_SOTS_GlobalStealthManager_eventSOTS_StealthLevelChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SOTS_GlobalStealthManager_SOTS_StealthLevelChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SOTS_GlobalStealthManager_SOTS_StealthLevelChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSOTS_StealthLevelChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& SOTS_StealthLevelChangedSignature, ESOTSStealthLevel OldLevel, ESOTSStealthLevel NewLevel, float NewScore)
{
	struct _Script_SOTS_GlobalStealthManager_eventSOTS_StealthLevelChangedSignature_Parms
	{
		ESOTSStealthLevel OldLevel;
		ESOTSStealthLevel NewLevel;
		float NewScore;
	};
	_Script_SOTS_GlobalStealthManager_eventSOTS_StealthLevelChangedSignature_Parms Parms;
	Parms.OldLevel=OldLevel;
	Parms.NewLevel=NewLevel;
	Parms.NewScore=NewScore;
	SOTS_StealthLevelChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FSOTS_StealthLevelChangedSignature **************************************

// ********** Begin Delegate FSOTS_PlayerDetectionStateChangedSignature ****************************
struct Z_Construct_UDelegateFunction_SOTS_GlobalStealthManager_SOTS_PlayerDetectionStateChangedSignature__DelegateSignature_Statics
{
	struct _Script_SOTS_GlobalStealthManager_eventSOTS_PlayerDetectionStateChangedSignature_Parms
	{
		bool bDetected;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthManagerSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FSOTS_PlayerDetectionStateChangedSignature constinit property declarations 
	static void NewProp_bDetected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDetected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FSOTS_PlayerDetectionStateChangedSignature constinit property declarations 
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FSOTS_PlayerDetectionStateChangedSignature Property Definitions *******
void Z_Construct_UDelegateFunction_SOTS_GlobalStealthManager_SOTS_PlayerDetectionStateChangedSignature__DelegateSignature_Statics::NewProp_bDetected_SetBit(void* Obj)
{
	((_Script_SOTS_GlobalStealthManager_eventSOTS_PlayerDetectionStateChangedSignature_Parms*)Obj)->bDetected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SOTS_GlobalStealthManager_SOTS_PlayerDetectionStateChangedSignature__DelegateSignature_Statics::NewProp_bDetected = { "bDetected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SOTS_GlobalStealthManager_eventSOTS_PlayerDetectionStateChangedSignature_Parms), &Z_Construct_UDelegateFunction_SOTS_GlobalStealthManager_SOTS_PlayerDetectionStateChangedSignature__DelegateSignature_Statics::NewProp_bDetected_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SOTS_GlobalStealthManager_SOTS_PlayerDetectionStateChangedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SOTS_GlobalStealthManager_SOTS_PlayerDetectionStateChangedSignature__DelegateSignature_Statics::NewProp_bDetected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_GlobalStealthManager_SOTS_PlayerDetectionStateChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FSOTS_PlayerDetectionStateChangedSignature Property Definitions *********
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SOTS_GlobalStealthManager_SOTS_PlayerDetectionStateChangedSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SOTS_GlobalStealthManager, nullptr, "SOTS_PlayerDetectionStateChangedSignature__DelegateSignature", 	Z_Construct_UDelegateFunction_SOTS_GlobalStealthManager_SOTS_PlayerDetectionStateChangedSignature__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_GlobalStealthManager_SOTS_PlayerDetectionStateChangedSignature__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SOTS_GlobalStealthManager_SOTS_PlayerDetectionStateChangedSignature__DelegateSignature_Statics::_Script_SOTS_GlobalStealthManager_eventSOTS_PlayerDetectionStateChangedSignature_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_GlobalStealthManager_SOTS_PlayerDetectionStateChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SOTS_GlobalStealthManager_SOTS_PlayerDetectionStateChangedSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SOTS_GlobalStealthManager_SOTS_PlayerDetectionStateChangedSignature__DelegateSignature_Statics::_Script_SOTS_GlobalStealthManager_eventSOTS_PlayerDetectionStateChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SOTS_GlobalStealthManager_SOTS_PlayerDetectionStateChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SOTS_GlobalStealthManager_SOTS_PlayerDetectionStateChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSOTS_PlayerDetectionStateChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& SOTS_PlayerDetectionStateChangedSignature, bool bDetected)
{
	struct _Script_SOTS_GlobalStealthManager_eventSOTS_PlayerDetectionStateChangedSignature_Parms
	{
		bool bDetected;
	};
	_Script_SOTS_GlobalStealthManager_eventSOTS_PlayerDetectionStateChangedSignature_Parms Parms;
	Parms.bDetected=bDetected ? true : false;
	SOTS_PlayerDetectionStateChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FSOTS_PlayerDetectionStateChangedSignature ******************************

// ********** Begin Class USOTS_GlobalStealthManagerSubsystem Function AddStealthModifier **********
struct Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_AddStealthModifier_Statics
{
	struct SOTS_GlobalStealthManagerSubsystem_eventAddStealthModifier_Parms
	{
		FSOTS_StealthModifier Modifier;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stealth|Modifiers" },
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthManagerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Modifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddStealthModifier constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Modifier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddStealthModifier constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddStealthModifier Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_AddStealthModifier_Statics::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GlobalStealthManagerSubsystem_eventAddStealthModifier_Parms, Modifier), Z_Construct_UScriptStruct_FSOTS_StealthModifier, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Modifier_MetaData), NewProp_Modifier_MetaData) }; // 3619836574
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_AddStealthModifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_AddStealthModifier_Statics::NewProp_Modifier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_AddStealthModifier_Statics::PropPointers) < 2048);
// ********** End Function AddStealthModifier Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_AddStealthModifier_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem, nullptr, "AddStealthModifier", 	Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_AddStealthModifier_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_AddStealthModifier_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_AddStealthModifier_Statics::SOTS_GlobalStealthManagerSubsystem_eventAddStealthModifier_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_AddStealthModifier_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_AddStealthModifier_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_AddStealthModifier_Statics::SOTS_GlobalStealthManagerSubsystem_eventAddStealthModifier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_AddStealthModifier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_AddStealthModifier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_GlobalStealthManagerSubsystem::execAddStealthModifier)
{
	P_GET_STRUCT_REF(FSOTS_StealthModifier,Z_Param_Out_Modifier);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddStealthModifier(Z_Param_Out_Modifier);
	P_NATIVE_END;
}
// ********** End Class USOTS_GlobalStealthManagerSubsystem Function AddStealthModifier ************

// ********** Begin Class USOTS_GlobalStealthManagerSubsystem Function Get *************************
struct Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_Get_Statics
{
	struct SOTS_GlobalStealthManagerSubsystem_eventGet_Parms
	{
		const UObject* WorldContextObject;
		USOTS_GlobalStealthManagerSubsystem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stealth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Easy access helper for Blueprints and C++\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Easy access helper for Blueprints and C++" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Get constinit property declarations ***********************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Get constinit property declarations *************************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Get Property Definitions **********************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_Get_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GlobalStealthManagerSubsystem_eventGet_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GlobalStealthManagerSubsystem_eventGet_Parms, ReturnValue), Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_Get_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_Get_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_Get_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_Get_Statics::PropPointers) < 2048);
// ********** End Function Get Property Definitions ************************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_Get_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem, nullptr, "Get", 	Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_Get_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_Get_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_Get_Statics::SOTS_GlobalStealthManagerSubsystem_eventGet_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_Get_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_Get_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_Get_Statics::SOTS_GlobalStealthManagerSubsystem_eventGet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_Get()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_Get_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_GlobalStealthManagerSubsystem::execGet)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USOTS_GlobalStealthManagerSubsystem**)Z_Param__Result=USOTS_GlobalStealthManagerSubsystem::Get(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class USOTS_GlobalStealthManagerSubsystem Function Get ***************************

// ********** Begin Class USOTS_GlobalStealthManagerSubsystem Function GetCurrentStealthBreakdown **
struct Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetCurrentStealthBreakdown_Statics
{
	struct SOTS_GlobalStealthManagerSubsystem_eventGetCurrentStealthBreakdown_Parms
	{
		FSOTS_StealthScoreBreakdown ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Stealth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the latest score breakdown snapshot (copied by value).\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the latest score breakdown snapshot (copied by value)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentStealthBreakdown constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentStealthBreakdown constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentStealthBreakdown Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetCurrentStealthBreakdown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GlobalStealthManagerSubsystem_eventGetCurrentStealthBreakdown_Parms, ReturnValue), Z_Construct_UScriptStruct_FSOTS_StealthScoreBreakdown, METADATA_PARAMS(0, nullptr) }; // 587956614
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetCurrentStealthBreakdown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetCurrentStealthBreakdown_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetCurrentStealthBreakdown_Statics::PropPointers) < 2048);
// ********** End Function GetCurrentStealthBreakdown Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetCurrentStealthBreakdown_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem, nullptr, "GetCurrentStealthBreakdown", 	Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetCurrentStealthBreakdown_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetCurrentStealthBreakdown_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetCurrentStealthBreakdown_Statics::SOTS_GlobalStealthManagerSubsystem_eventGetCurrentStealthBreakdown_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetCurrentStealthBreakdown_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetCurrentStealthBreakdown_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetCurrentStealthBreakdown_Statics::SOTS_GlobalStealthManagerSubsystem_eventGetCurrentStealthBreakdown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetCurrentStealthBreakdown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetCurrentStealthBreakdown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_GlobalStealthManagerSubsystem::execGetCurrentStealthBreakdown)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSOTS_StealthScoreBreakdown*)Z_Param__Result=P_THIS->GetCurrentStealthBreakdown();
	P_NATIVE_END;
}
// ********** End Class USOTS_GlobalStealthManagerSubsystem Function GetCurrentStealthBreakdown ****

// ********** Begin Class USOTS_GlobalStealthManagerSubsystem Function GetCurrentStealthLevel ******
struct Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetCurrentStealthLevel_Statics
{
	struct SOTS_GlobalStealthManagerSubsystem_eventGetCurrentStealthLevel_Parms
	{
		ESOTSStealthLevel ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stealth" },
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthManagerSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentStealthLevel constinit property declarations ****************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentStealthLevel constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentStealthLevel Property Definitions ***************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetCurrentStealthLevel_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetCurrentStealthLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GlobalStealthManagerSubsystem_eventGetCurrentStealthLevel_Parms, ReturnValue), Z_Construct_UEnum_SOTS_GlobalStealthManager_ESOTSStealthLevel, METADATA_PARAMS(0, nullptr) }; // 3112324723
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetCurrentStealthLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetCurrentStealthLevel_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetCurrentStealthLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetCurrentStealthLevel_Statics::PropPointers) < 2048);
// ********** End Function GetCurrentStealthLevel Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetCurrentStealthLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem, nullptr, "GetCurrentStealthLevel", 	Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetCurrentStealthLevel_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetCurrentStealthLevel_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetCurrentStealthLevel_Statics::SOTS_GlobalStealthManagerSubsystem_eventGetCurrentStealthLevel_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetCurrentStealthLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetCurrentStealthLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetCurrentStealthLevel_Statics::SOTS_GlobalStealthManagerSubsystem_eventGetCurrentStealthLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetCurrentStealthLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetCurrentStealthLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_GlobalStealthManagerSubsystem::execGetCurrentStealthLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESOTSStealthLevel*)Z_Param__Result=P_THIS->GetCurrentStealthLevel();
	P_NATIVE_END;
}
// ********** End Class USOTS_GlobalStealthManagerSubsystem Function GetCurrentStealthLevel ********

// ********** Begin Class USOTS_GlobalStealthManagerSubsystem Function GetCurrentStealthScore ******
struct Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetCurrentStealthScore_Statics
{
	struct SOTS_GlobalStealthManagerSubsystem_eventGetCurrentStealthScore_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stealth" },
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthManagerSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentStealthScore constinit property declarations ****************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentStealthScore constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentStealthScore Property Definitions ***************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetCurrentStealthScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GlobalStealthManagerSubsystem_eventGetCurrentStealthScore_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetCurrentStealthScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetCurrentStealthScore_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetCurrentStealthScore_Statics::PropPointers) < 2048);
// ********** End Function GetCurrentStealthScore Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetCurrentStealthScore_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem, nullptr, "GetCurrentStealthScore", 	Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetCurrentStealthScore_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetCurrentStealthScore_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetCurrentStealthScore_Statics::SOTS_GlobalStealthManagerSubsystem_eventGetCurrentStealthScore_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetCurrentStealthScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetCurrentStealthScore_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetCurrentStealthScore_Statics::SOTS_GlobalStealthManagerSubsystem_eventGetCurrentStealthScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetCurrentStealthScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetCurrentStealthScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_GlobalStealthManagerSubsystem::execGetCurrentStealthScore)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCurrentStealthScore();
	P_NATIVE_END;
}
// ********** End Class USOTS_GlobalStealthManagerSubsystem Function GetCurrentStealthScore ********

// ********** Begin Class USOTS_GlobalStealthManagerSubsystem Function GetStealthScoreFor **********
struct Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetStealthScoreFor_Statics
{
	struct SOTS_GlobalStealthManagerSubsystem_eventGetStealthScoreFor_Parms
	{
		const AActor* Actor;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Stealth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns 0-1 final stealth/visibility score for an actor (0=fully hidden, 1=fully exposed). */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns 0-1 final stealth/visibility score for an actor (0=fully hidden, 1=fully exposed)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetStealthScoreFor constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetStealthScoreFor constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetStealthScoreFor Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetStealthScoreFor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GlobalStealthManagerSubsystem_eventGetStealthScoreFor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetStealthScoreFor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GlobalStealthManagerSubsystem_eventGetStealthScoreFor_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetStealthScoreFor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetStealthScoreFor_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetStealthScoreFor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetStealthScoreFor_Statics::PropPointers) < 2048);
// ********** End Function GetStealthScoreFor Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetStealthScoreFor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem, nullptr, "GetStealthScoreFor", 	Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetStealthScoreFor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetStealthScoreFor_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetStealthScoreFor_Statics::SOTS_GlobalStealthManagerSubsystem_eventGetStealthScoreFor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetStealthScoreFor_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetStealthScoreFor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetStealthScoreFor_Statics::SOTS_GlobalStealthManagerSubsystem_eventGetStealthScoreFor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetStealthScoreFor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetStealthScoreFor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_GlobalStealthManagerSubsystem::execGetStealthScoreFor)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetStealthScoreFor(Z_Param_Actor);
	P_NATIVE_END;
}
// ********** End Class USOTS_GlobalStealthManagerSubsystem Function GetStealthScoreFor ************

// ********** Begin Class USOTS_GlobalStealthManagerSubsystem Function GetStealthState *************
struct Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetStealthState_Statics
{
	struct SOTS_GlobalStealthManagerSubsystem_eventGetStealthState_Parms
	{
		FSOTS_PlayerStealthState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stealth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// High-level state accessors used by other systems (KEM, FX, dragon).\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "High-level state accessors used by other systems (KEM, FX, dragon)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetStealthState constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetStealthState constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetStealthState Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetStealthState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GlobalStealthManagerSubsystem_eventGetStealthState_Parms, ReturnValue), Z_Construct_UScriptStruct_FSOTS_PlayerStealthState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2815183295
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetStealthState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetStealthState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetStealthState_Statics::PropPointers) < 2048);
// ********** End Function GetStealthState Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetStealthState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem, nullptr, "GetStealthState", 	Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetStealthState_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetStealthState_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetStealthState_Statics::SOTS_GlobalStealthManagerSubsystem_eventGetStealthState_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetStealthState_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetStealthState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetStealthState_Statics::SOTS_GlobalStealthManagerSubsystem_eventGetStealthState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetStealthState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetStealthState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_GlobalStealthManagerSubsystem::execGetStealthState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSOTS_PlayerStealthState*)Z_Param__Result=P_THIS->GetStealthState();
	P_NATIVE_END;
}
// ********** End Class USOTS_GlobalStealthManagerSubsystem Function GetStealthState ***************

// ********** Begin Class USOTS_GlobalStealthManagerSubsystem Function GetStealthTier **************
struct Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetStealthTier_Statics
{
	struct SOTS_GlobalStealthManagerSubsystem_eventGetStealthTier_Parms
	{
		ESOTS_StealthTier ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stealth" },
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthManagerSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetStealthTier constinit property declarations ************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetStealthTier constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetStealthTier Property Definitions ***********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetStealthTier_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetStealthTier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GlobalStealthManagerSubsystem_eventGetStealthTier_Parms, ReturnValue), Z_Construct_UEnum_SOTS_GlobalStealthManager_ESOTS_StealthTier, METADATA_PARAMS(0, nullptr) }; // 3407880652
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetStealthTier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetStealthTier_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetStealthTier_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetStealthTier_Statics::PropPointers) < 2048);
// ********** End Function GetStealthTier Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetStealthTier_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem, nullptr, "GetStealthTier", 	Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetStealthTier_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetStealthTier_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetStealthTier_Statics::SOTS_GlobalStealthManagerSubsystem_eventGetStealthTier_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetStealthTier_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetStealthTier_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetStealthTier_Statics::SOTS_GlobalStealthManagerSubsystem_eventGetStealthTier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetStealthTier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetStealthTier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_GlobalStealthManagerSubsystem::execGetStealthTier)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESOTS_StealthTier*)Z_Param__Result=P_THIS->GetStealthTier();
	P_NATIVE_END;
}
// ********** End Class USOTS_GlobalStealthManagerSubsystem Function GetStealthTier ****************

// ********** Begin Class USOTS_GlobalStealthManagerSubsystem Function IsPlayerDetected ************
struct Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_IsPlayerDetected_Statics
{
	struct SOTS_GlobalStealthManagerSubsystem_eventIsPlayerDetected_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stealth" },
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthManagerSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsPlayerDetected constinit property declarations **********************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsPlayerDetected constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsPlayerDetected Property Definitions *********************************
void Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_IsPlayerDetected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SOTS_GlobalStealthManagerSubsystem_eventIsPlayerDetected_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_IsPlayerDetected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_GlobalStealthManagerSubsystem_eventIsPlayerDetected_Parms), &Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_IsPlayerDetected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_IsPlayerDetected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_IsPlayerDetected_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_IsPlayerDetected_Statics::PropPointers) < 2048);
// ********** End Function IsPlayerDetected Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_IsPlayerDetected_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem, nullptr, "IsPlayerDetected", 	Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_IsPlayerDetected_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_IsPlayerDetected_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_IsPlayerDetected_Statics::SOTS_GlobalStealthManagerSubsystem_eventIsPlayerDetected_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_IsPlayerDetected_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_IsPlayerDetected_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_IsPlayerDetected_Statics::SOTS_GlobalStealthManagerSubsystem_eventIsPlayerDetected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_IsPlayerDetected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_IsPlayerDetected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_GlobalStealthManagerSubsystem::execIsPlayerDetected)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPlayerDetected();
	P_NATIVE_END;
}
// ********** End Class USOTS_GlobalStealthManagerSubsystem Function IsPlayerDetected **************

// ********** Begin Class USOTS_GlobalStealthManagerSubsystem Function PopStealthConfig ************
struct Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_PopStealthConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Stealth" },
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthManagerSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function PopStealthConfig constinit property declarations **********************
// ********** End Function PopStealthConfig constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_PopStealthConfig_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem, nullptr, "PopStealthConfig", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_PopStealthConfig_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_PopStealthConfig_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_PopStealthConfig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_PopStealthConfig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_GlobalStealthManagerSubsystem::execPopStealthConfig)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PopStealthConfig();
	P_NATIVE_END;
}
// ********** End Class USOTS_GlobalStealthManagerSubsystem Function PopStealthConfig **************

// ********** Begin Class USOTS_GlobalStealthManagerSubsystem Function PushStealthConfig ***********
struct Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_PushStealthConfig_Statics
{
	struct SOTS_GlobalStealthManagerSubsystem_eventPushStealthConfig_Parms
	{
		USOTS_StealthConfigDataAsset* NewConfig;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Stealth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Scoped config override API (e.g., used by MissionDirector).\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scoped config override API (e.g., used by MissionDirector)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function PushStealthConfig constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewConfig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PushStealthConfig constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PushStealthConfig Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_PushStealthConfig_Statics::NewProp_NewConfig = { "NewConfig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GlobalStealthManagerSubsystem_eventPushStealthConfig_Parms, NewConfig), Z_Construct_UClass_USOTS_StealthConfigDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_PushStealthConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_PushStealthConfig_Statics::NewProp_NewConfig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_PushStealthConfig_Statics::PropPointers) < 2048);
// ********** End Function PushStealthConfig Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_PushStealthConfig_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem, nullptr, "PushStealthConfig", 	Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_PushStealthConfig_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_PushStealthConfig_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_PushStealthConfig_Statics::SOTS_GlobalStealthManagerSubsystem_eventPushStealthConfig_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_PushStealthConfig_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_PushStealthConfig_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_PushStealthConfig_Statics::SOTS_GlobalStealthManagerSubsystem_eventPushStealthConfig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_PushStealthConfig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_PushStealthConfig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_GlobalStealthManagerSubsystem::execPushStealthConfig)
{
	P_GET_OBJECT(USOTS_StealthConfigDataAsset,Z_Param_NewConfig);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PushStealthConfig(Z_Param_NewConfig);
	P_NATIVE_END;
}
// ********** End Class USOTS_GlobalStealthManagerSubsystem Function PushStealthConfig *************

// ********** Begin Class USOTS_GlobalStealthManagerSubsystem Function RemoveStealthModifierBySource 
struct Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_RemoveStealthModifierBySource_Statics
{
	struct SOTS_GlobalStealthManagerSubsystem_eventRemoveStealthModifierBySource_Parms
	{
		FName SourceId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stealth|Modifiers" },
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthManagerSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveStealthModifierBySource constinit property declarations *********
	static const UECodeGen_Private::FNamePropertyParams NewProp_SourceId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveStealthModifierBySource constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveStealthModifierBySource Property Definitions ********************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_RemoveStealthModifierBySource_Statics::NewProp_SourceId = { "SourceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GlobalStealthManagerSubsystem_eventRemoveStealthModifierBySource_Parms, SourceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_RemoveStealthModifierBySource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_RemoveStealthModifierBySource_Statics::NewProp_SourceId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_RemoveStealthModifierBySource_Statics::PropPointers) < 2048);
// ********** End Function RemoveStealthModifierBySource Property Definitions **********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_RemoveStealthModifierBySource_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem, nullptr, "RemoveStealthModifierBySource", 	Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_RemoveStealthModifierBySource_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_RemoveStealthModifierBySource_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_RemoveStealthModifierBySource_Statics::SOTS_GlobalStealthManagerSubsystem_eventRemoveStealthModifierBySource_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_RemoveStealthModifierBySource_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_RemoveStealthModifierBySource_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_RemoveStealthModifierBySource_Statics::SOTS_GlobalStealthManagerSubsystem_eventRemoveStealthModifierBySource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_RemoveStealthModifierBySource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_RemoveStealthModifierBySource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_GlobalStealthManagerSubsystem::execRemoveStealthModifierBySource)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_SourceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveStealthModifierBySource(Z_Param_SourceId);
	P_NATIVE_END;
}
// ********** End Class USOTS_GlobalStealthManagerSubsystem Function RemoveStealthModifierBySource *

// ********** Begin Class USOTS_GlobalStealthManagerSubsystem Function ReportAISuspicion ***********
struct Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_ReportAISuspicion_Statics
{
	struct SOTS_GlobalStealthManagerSubsystem_eventReportAISuspicion_Parms
	{
		AActor* GuardActor;
		float SuspicionNormalized;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Stealth|AI" },
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthManagerSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReportAISuspicion constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GuardActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SuspicionNormalized;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReportAISuspicion constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReportAISuspicion Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_ReportAISuspicion_Statics::NewProp_GuardActor = { "GuardActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GlobalStealthManagerSubsystem_eventReportAISuspicion_Parms, GuardActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_ReportAISuspicion_Statics::NewProp_SuspicionNormalized = { "SuspicionNormalized", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GlobalStealthManagerSubsystem_eventReportAISuspicion_Parms, SuspicionNormalized), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_ReportAISuspicion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_ReportAISuspicion_Statics::NewProp_GuardActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_ReportAISuspicion_Statics::NewProp_SuspicionNormalized,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_ReportAISuspicion_Statics::PropPointers) < 2048);
// ********** End Function ReportAISuspicion Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_ReportAISuspicion_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem, nullptr, "ReportAISuspicion", 	Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_ReportAISuspicion_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_ReportAISuspicion_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_ReportAISuspicion_Statics::SOTS_GlobalStealthManagerSubsystem_eventReportAISuspicion_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_ReportAISuspicion_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_ReportAISuspicion_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_ReportAISuspicion_Statics::SOTS_GlobalStealthManagerSubsystem_eventReportAISuspicion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_ReportAISuspicion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_ReportAISuspicion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_GlobalStealthManagerSubsystem::execReportAISuspicion)
{
	P_GET_OBJECT(AActor,Z_Param_GuardActor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SuspicionNormalized);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReportAISuspicion(Z_Param_GuardActor,Z_Param_SuspicionNormalized);
	P_NATIVE_END;
}
// ********** End Class USOTS_GlobalStealthManagerSubsystem Function ReportAISuspicion *************

// ********** Begin Class USOTS_GlobalStealthManagerSubsystem Function ReportEnemyDetectionEvent ***
struct Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_ReportEnemyDetectionEvent_Statics
{
	struct SOTS_GlobalStealthManagerSubsystem_eventReportEnemyDetectionEvent_Parms
	{
		AActor* Source;
		bool bDetectedNow;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stealth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Called by AI or mission logic whenever an enemy explicitly detects or loses the player.\n     * This drives the bPlayerDetected flag and the detection delegate.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called by AI or mission logic whenever an enemy explicitly detects or loses the player.\nThis drives the bPlayerDetected flag and the detection delegate." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ReportEnemyDetectionEvent constinit property declarations *************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static void NewProp_bDetectedNow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDetectedNow;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReportEnemyDetectionEvent constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReportEnemyDetectionEvent Property Definitions ************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_ReportEnemyDetectionEvent_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GlobalStealthManagerSubsystem_eventReportEnemyDetectionEvent_Parms, Source), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_ReportEnemyDetectionEvent_Statics::NewProp_bDetectedNow_SetBit(void* Obj)
{
	((SOTS_GlobalStealthManagerSubsystem_eventReportEnemyDetectionEvent_Parms*)Obj)->bDetectedNow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_ReportEnemyDetectionEvent_Statics::NewProp_bDetectedNow = { "bDetectedNow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_GlobalStealthManagerSubsystem_eventReportEnemyDetectionEvent_Parms), &Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_ReportEnemyDetectionEvent_Statics::NewProp_bDetectedNow_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_ReportEnemyDetectionEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_ReportEnemyDetectionEvent_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_ReportEnemyDetectionEvent_Statics::NewProp_bDetectedNow,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_ReportEnemyDetectionEvent_Statics::PropPointers) < 2048);
// ********** End Function ReportEnemyDetectionEvent Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_ReportEnemyDetectionEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem, nullptr, "ReportEnemyDetectionEvent", 	Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_ReportEnemyDetectionEvent_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_ReportEnemyDetectionEvent_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_ReportEnemyDetectionEvent_Statics::SOTS_GlobalStealthManagerSubsystem_eventReportEnemyDetectionEvent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_ReportEnemyDetectionEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_ReportEnemyDetectionEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_ReportEnemyDetectionEvent_Statics::SOTS_GlobalStealthManagerSubsystem_eventReportEnemyDetectionEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_ReportEnemyDetectionEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_ReportEnemyDetectionEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_GlobalStealthManagerSubsystem::execReportEnemyDetectionEvent)
{
	P_GET_OBJECT(AActor,Z_Param_Source);
	P_GET_UBOOL(Z_Param_bDetectedNow);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReportEnemyDetectionEvent(Z_Param_Source,Z_Param_bDetectedNow);
	P_NATIVE_END;
}
// ********** End Class USOTS_GlobalStealthManagerSubsystem Function ReportEnemyDetectionEvent *****

// ********** Begin Class USOTS_GlobalStealthManagerSubsystem Function ReportStealthSample *********
struct Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_ReportStealthSample_Statics
{
	struct SOTS_GlobalStealthManagerSubsystem_eventReportStealthSample_Parms
	{
		FSOTS_StealthSample Sample;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stealth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Main entry point for the player/dragon: submit a new stealth sample.\n     * This recalculates the score and, if thresholds are crossed, fires events.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Main entry point for the player/dragon: submit a new stealth sample.\nThis recalculates the score and, if thresholds are crossed, fires events." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sample_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReportStealthSample constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Sample;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReportStealthSample constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReportStealthSample Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_ReportStealthSample_Statics::NewProp_Sample = { "Sample", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GlobalStealthManagerSubsystem_eventReportStealthSample_Parms, Sample), Z_Construct_UScriptStruct_FSOTS_StealthSample, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sample_MetaData), NewProp_Sample_MetaData) }; // 834369755
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_ReportStealthSample_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_ReportStealthSample_Statics::NewProp_Sample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_ReportStealthSample_Statics::PropPointers) < 2048);
// ********** End Function ReportStealthSample Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_ReportStealthSample_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem, nullptr, "ReportStealthSample", 	Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_ReportStealthSample_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_ReportStealthSample_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_ReportStealthSample_Statics::SOTS_GlobalStealthManagerSubsystem_eventReportStealthSample_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_ReportStealthSample_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_ReportStealthSample_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_ReportStealthSample_Statics::SOTS_GlobalStealthManagerSubsystem_eventReportStealthSample_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_ReportStealthSample()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_ReportStealthSample_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_GlobalStealthManagerSubsystem::execReportStealthSample)
{
	P_GET_STRUCT_REF(FSOTS_StealthSample,Z_Param_Out_Sample);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReportStealthSample(Z_Param_Out_Sample);
	P_NATIVE_END;
}
// ********** End Class USOTS_GlobalStealthManagerSubsystem Function ReportStealthSample ***********

// ********** Begin Class USOTS_GlobalStealthManagerSubsystem Function SetStealthConfig ************
struct Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_SetStealthConfig_Statics
{
	struct SOTS_GlobalStealthManagerSubsystem_eventSetStealthConfig_Parms
	{
		FSOTS_StealthScoringConfig InConfig;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stealth|Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Config API for Mission Director / difficulty systems.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Config API for Mission Director / difficulty systems." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetStealthConfig constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InConfig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetStealthConfig constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetStealthConfig Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_SetStealthConfig_Statics::NewProp_InConfig = { "InConfig", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GlobalStealthManagerSubsystem_eventSetStealthConfig_Parms, InConfig), Z_Construct_UScriptStruct_FSOTS_StealthScoringConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InConfig_MetaData), NewProp_InConfig_MetaData) }; // 1323327223
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_SetStealthConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_SetStealthConfig_Statics::NewProp_InConfig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_SetStealthConfig_Statics::PropPointers) < 2048);
// ********** End Function SetStealthConfig Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_SetStealthConfig_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem, nullptr, "SetStealthConfig", 	Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_SetStealthConfig_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_SetStealthConfig_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_SetStealthConfig_Statics::SOTS_GlobalStealthManagerSubsystem_eventSetStealthConfig_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_SetStealthConfig_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_SetStealthConfig_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_SetStealthConfig_Statics::SOTS_GlobalStealthManagerSubsystem_eventSetStealthConfig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_SetStealthConfig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_SetStealthConfig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_GlobalStealthManagerSubsystem::execSetStealthConfig)
{
	P_GET_STRUCT_REF(FSOTS_StealthScoringConfig,Z_Param_Out_InConfig);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStealthConfig(Z_Param_Out_InConfig);
	P_NATIVE_END;
}
// ********** End Class USOTS_GlobalStealthManagerSubsystem Function SetStealthConfig **************

// ********** Begin Class USOTS_GlobalStealthManagerSubsystem Function SetStealthConfigAsset *******
struct Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_SetStealthConfigAsset_Statics
{
	struct SOTS_GlobalStealthManagerSubsystem_eventSetStealthConfigAsset_Parms
	{
		USOTS_StealthConfigDataAsset* InAsset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stealth|Config" },
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthManagerSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetStealthConfigAsset constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetStealthConfigAsset constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetStealthConfigAsset Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_SetStealthConfigAsset_Statics::NewProp_InAsset = { "InAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GlobalStealthManagerSubsystem_eventSetStealthConfigAsset_Parms, InAsset), Z_Construct_UClass_USOTS_StealthConfigDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_SetStealthConfigAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_SetStealthConfigAsset_Statics::NewProp_InAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_SetStealthConfigAsset_Statics::PropPointers) < 2048);
// ********** End Function SetStealthConfigAsset Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_SetStealthConfigAsset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem, nullptr, "SetStealthConfigAsset", 	Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_SetStealthConfigAsset_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_SetStealthConfigAsset_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_SetStealthConfigAsset_Statics::SOTS_GlobalStealthManagerSubsystem_eventSetStealthConfigAsset_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_SetStealthConfigAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_SetStealthConfigAsset_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_SetStealthConfigAsset_Statics::SOTS_GlobalStealthManagerSubsystem_eventSetStealthConfigAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_SetStealthConfigAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_SetStealthConfigAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_GlobalStealthManagerSubsystem::execSetStealthConfigAsset)
{
	P_GET_OBJECT(USOTS_StealthConfigDataAsset,Z_Param_InAsset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStealthConfigAsset(Z_Param_InAsset);
	P_NATIVE_END;
}
// ********** End Class USOTS_GlobalStealthManagerSubsystem Function SetStealthConfigAsset *********

// ********** Begin Class USOTS_GlobalStealthManagerSubsystem **************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_GlobalStealthManagerSubsystem;
UClass* USOTS_GlobalStealthManagerSubsystem::GetPrivateStaticClass()
{
	using TClass = USOTS_GlobalStealthManagerSubsystem;
	if (!Z_Registration_Info_UClass_USOTS_GlobalStealthManagerSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_GlobalStealthManagerSubsystem"),
			Z_Registration_Info_UClass_USOTS_GlobalStealthManagerSubsystem.InnerSingleton,
			StaticRegisterNativesUSOTS_GlobalStealthManagerSubsystem,
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
	return Z_Registration_Info_UClass_USOTS_GlobalStealthManagerSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_NoRegister()
{
	return USOTS_GlobalStealthManagerSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Global, non-ticking stealth aggregator.\n *\n * Other systems (player movement, cover, AI perception, Ultra Dynamic Sky traces)\n * report discrete samples and events into this subsystem. It computes a single,\n * authoritative stealth score and level that SOTS can use for gameplay, VFX,\n * and UI decisions.\n */" },
#endif
		{ "IncludePath", "SOTS_GlobalStealthManagerSubsystem.h" },
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Global, non-ticking stealth aggregator.\n\nOther systems (player movement, cover, AI perception, Ultra Dynamic Sky traces)\nreport discrete samples and events into this subsystem. It computes a single,\nauthoritative stealth score and level that SOTS can use for gameplay, VFX,\nand UI decisions." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastSample_MetaData[] = {
		{ "Category", "Stealth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Last sample that was processed into the score.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Last sample that was processed into the score." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[] = {
		{ "Category", "Stealth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current player-facing stealth state (light, cover, noise, AI, tiers).\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current player-facing stealth state (light, cover, noise, AI, tiers)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentStealthScore_MetaData[] = {
		{ "Category", "Stealth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// 0 = perfectly hidden, 1 = fully exposed/detected.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "0 = perfectly hidden, 1 = fully exposed/detected." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentStealthLevel_MetaData[] = {
		{ "Category", "Stealth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Discrete, layered stealth state built from the score and events.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Discrete, layered stealth state built from the score and events." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPlayerDetected_MetaData[] = {
		{ "Category", "Stealth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// True if at least one enemy has actively \"spotted\" the player and triggered a fail/alert state.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True if at least one enemy has actively \"spotted\" the player and triggered a fail/alert state." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentBreakdown_MetaData[] = {
		{ "Category", "SOTS|Stealth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Latest breakdown of how the score was composed, for UI/FX/debug.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Latest breakdown of how the score was composed, for UI/FX/debug." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStealthLevelChanged_MetaData[] = {
		{ "Category", "Stealth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Broadcast when the stealth level changes (e.g., for dragon visibility or radial vignette).\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Broadcast when the stealth level changes (e.g., for dragon visibility or radial vignette)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayerDetectionStateChanged_MetaData[] = {
		{ "Category", "Stealth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Broadcast when the binary detection state changes.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Broadcast when the binary detection state changes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultConfigAsset_MetaData[] = {
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Default config asset for this world (can be set on the CDO or via Mission Director).\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default config asset for this world (can be set on the CDO or via Mission Director)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveConfig_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Active scoring config used at runtime. Copied from the active asset so we can tweak/override if needed.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Active scoring config used at runtime. Copied from the active asset so we can tweak/override if needed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveModifiers_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Active modifiers applied on top of raw state.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Active modifiers applied on top of raw state." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GuardSuspicion_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Per-guard AI suspicion (normalized [0..1]) used to build the\n// aggregated AISuspicion term in the stealth score.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Per-guard AI suspicion (normalized [0..1]) used to build the\naggregated AISuspicion term in the stealth score." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StealthConfigStack_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Stack of config assets used for scoped overrides (e.g., per-mission).\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stack of config assets used for scoped overrides (e.g., per-mission)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveStealthConfig_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Currently active config asset driving ActiveConfig (may be null to mean \"no override\").\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Currently active config asset driving ActiveConfig (may be null to mean \"no override\")." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_GlobalStealthManagerSubsystem constinit property declarations ******
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastSample;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentState;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentStealthScore;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentStealthLevel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentStealthLevel;
	static void NewProp_bPlayerDetected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayerDetected;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentBreakdown;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStealthLevelChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerDetectionStateChanged;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultConfigAsset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveConfig;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveModifiers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveModifiers;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GuardSuspicion_ValueProp;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_GuardSuspicion_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_GuardSuspicion;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StealthConfigStack_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StealthConfigStack;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveStealthConfig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USOTS_GlobalStealthManagerSubsystem constinit property declarations ********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddStealthModifier"), .Pointer = &USOTS_GlobalStealthManagerSubsystem::execAddStealthModifier },
		{ .NameUTF8 = UTF8TEXT("Get"), .Pointer = &USOTS_GlobalStealthManagerSubsystem::execGet },
		{ .NameUTF8 = UTF8TEXT("GetCurrentStealthBreakdown"), .Pointer = &USOTS_GlobalStealthManagerSubsystem::execGetCurrentStealthBreakdown },
		{ .NameUTF8 = UTF8TEXT("GetCurrentStealthLevel"), .Pointer = &USOTS_GlobalStealthManagerSubsystem::execGetCurrentStealthLevel },
		{ .NameUTF8 = UTF8TEXT("GetCurrentStealthScore"), .Pointer = &USOTS_GlobalStealthManagerSubsystem::execGetCurrentStealthScore },
		{ .NameUTF8 = UTF8TEXT("GetStealthScoreFor"), .Pointer = &USOTS_GlobalStealthManagerSubsystem::execGetStealthScoreFor },
		{ .NameUTF8 = UTF8TEXT("GetStealthState"), .Pointer = &USOTS_GlobalStealthManagerSubsystem::execGetStealthState },
		{ .NameUTF8 = UTF8TEXT("GetStealthTier"), .Pointer = &USOTS_GlobalStealthManagerSubsystem::execGetStealthTier },
		{ .NameUTF8 = UTF8TEXT("IsPlayerDetected"), .Pointer = &USOTS_GlobalStealthManagerSubsystem::execIsPlayerDetected },
		{ .NameUTF8 = UTF8TEXT("PopStealthConfig"), .Pointer = &USOTS_GlobalStealthManagerSubsystem::execPopStealthConfig },
		{ .NameUTF8 = UTF8TEXT("PushStealthConfig"), .Pointer = &USOTS_GlobalStealthManagerSubsystem::execPushStealthConfig },
		{ .NameUTF8 = UTF8TEXT("RemoveStealthModifierBySource"), .Pointer = &USOTS_GlobalStealthManagerSubsystem::execRemoveStealthModifierBySource },
		{ .NameUTF8 = UTF8TEXT("ReportAISuspicion"), .Pointer = &USOTS_GlobalStealthManagerSubsystem::execReportAISuspicion },
		{ .NameUTF8 = UTF8TEXT("ReportEnemyDetectionEvent"), .Pointer = &USOTS_GlobalStealthManagerSubsystem::execReportEnemyDetectionEvent },
		{ .NameUTF8 = UTF8TEXT("ReportStealthSample"), .Pointer = &USOTS_GlobalStealthManagerSubsystem::execReportStealthSample },
		{ .NameUTF8 = UTF8TEXT("SetStealthConfig"), .Pointer = &USOTS_GlobalStealthManagerSubsystem::execSetStealthConfig },
		{ .NameUTF8 = UTF8TEXT("SetStealthConfigAsset"), .Pointer = &USOTS_GlobalStealthManagerSubsystem::execSetStealthConfigAsset },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_AddStealthModifier, "AddStealthModifier" }, // 165721850
		{ &Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_Get, "Get" }, // 2781878227
		{ &Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetCurrentStealthBreakdown, "GetCurrentStealthBreakdown" }, // 1936284869
		{ &Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetCurrentStealthLevel, "GetCurrentStealthLevel" }, // 1099120298
		{ &Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetCurrentStealthScore, "GetCurrentStealthScore" }, // 1437409160
		{ &Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetStealthScoreFor, "GetStealthScoreFor" }, // 1357173925
		{ &Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetStealthState, "GetStealthState" }, // 3847014149
		{ &Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_GetStealthTier, "GetStealthTier" }, // 1521739762
		{ &Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_IsPlayerDetected, "IsPlayerDetected" }, // 2483822528
		{ &Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_PopStealthConfig, "PopStealthConfig" }, // 2684897697
		{ &Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_PushStealthConfig, "PushStealthConfig" }, // 837019878
		{ &Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_RemoveStealthModifierBySource, "RemoveStealthModifierBySource" }, // 2468505766
		{ &Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_ReportAISuspicion, "ReportAISuspicion" }, // 31752720
		{ &Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_ReportEnemyDetectionEvent, "ReportEnemyDetectionEvent" }, // 145502954
		{ &Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_ReportStealthSample, "ReportStealthSample" }, // 3196524369
		{ &Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_SetStealthConfig, "SetStealthConfig" }, // 3237958849
		{ &Z_Construct_UFunction_USOTS_GlobalStealthManagerSubsystem_SetStealthConfigAsset, "SetStealthConfigAsset" }, // 3355608106
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_GlobalStealthManagerSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_Statics

// ********** Begin Class USOTS_GlobalStealthManagerSubsystem Property Definitions *****************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_Statics::NewProp_LastSample = { "LastSample", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_GlobalStealthManagerSubsystem, LastSample), Z_Construct_UScriptStruct_FSOTS_StealthSample, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastSample_MetaData), NewProp_LastSample_MetaData) }; // 834369755
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_GlobalStealthManagerSubsystem, CurrentState), Z_Construct_UScriptStruct_FSOTS_PlayerStealthState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentState_MetaData), NewProp_CurrentState_MetaData) }; // 2815183295
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_Statics::NewProp_CurrentStealthScore = { "CurrentStealthScore", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_GlobalStealthManagerSubsystem, CurrentStealthScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentStealthScore_MetaData), NewProp_CurrentStealthScore_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_Statics::NewProp_CurrentStealthLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_Statics::NewProp_CurrentStealthLevel = { "CurrentStealthLevel", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_GlobalStealthManagerSubsystem, CurrentStealthLevel), Z_Construct_UEnum_SOTS_GlobalStealthManager_ESOTSStealthLevel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentStealthLevel_MetaData), NewProp_CurrentStealthLevel_MetaData) }; // 3112324723
void Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_Statics::NewProp_bPlayerDetected_SetBit(void* Obj)
{
	((USOTS_GlobalStealthManagerSubsystem*)Obj)->bPlayerDetected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_Statics::NewProp_bPlayerDetected = { "bPlayerDetected", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USOTS_GlobalStealthManagerSubsystem), &Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_Statics::NewProp_bPlayerDetected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPlayerDetected_MetaData), NewProp_bPlayerDetected_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_Statics::NewProp_CurrentBreakdown = { "CurrentBreakdown", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_GlobalStealthManagerSubsystem, CurrentBreakdown), Z_Construct_UScriptStruct_FSOTS_StealthScoreBreakdown, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentBreakdown_MetaData), NewProp_CurrentBreakdown_MetaData) }; // 587956614
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_Statics::NewProp_OnStealthLevelChanged = { "OnStealthLevelChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_GlobalStealthManagerSubsystem, OnStealthLevelChanged), Z_Construct_UDelegateFunction_SOTS_GlobalStealthManager_SOTS_StealthLevelChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStealthLevelChanged_MetaData), NewProp_OnStealthLevelChanged_MetaData) }; // 3487123142
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_Statics::NewProp_OnPlayerDetectionStateChanged = { "OnPlayerDetectionStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_GlobalStealthManagerSubsystem, OnPlayerDetectionStateChanged), Z_Construct_UDelegateFunction_SOTS_GlobalStealthManager_SOTS_PlayerDetectionStateChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlayerDetectionStateChanged_MetaData), NewProp_OnPlayerDetectionStateChanged_MetaData) }; // 2459158482
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_Statics::NewProp_DefaultConfigAsset = { "DefaultConfigAsset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_GlobalStealthManagerSubsystem, DefaultConfigAsset), Z_Construct_UClass_USOTS_StealthConfigDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultConfigAsset_MetaData), NewProp_DefaultConfigAsset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_Statics::NewProp_ActiveConfig = { "ActiveConfig", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_GlobalStealthManagerSubsystem, ActiveConfig), Z_Construct_UScriptStruct_FSOTS_StealthScoringConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveConfig_MetaData), NewProp_ActiveConfig_MetaData) }; // 1323327223
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_Statics::NewProp_ActiveModifiers_Inner = { "ActiveModifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSOTS_StealthModifier, METADATA_PARAMS(0, nullptr) }; // 3619836574
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_Statics::NewProp_ActiveModifiers = { "ActiveModifiers", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_GlobalStealthManagerSubsystem, ActiveModifiers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveModifiers_MetaData), NewProp_ActiveModifiers_MetaData) }; // 3619836574
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_Statics::NewProp_GuardSuspicion_ValueProp = { "GuardSuspicion", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_Statics::NewProp_GuardSuspicion_Key_KeyProp = { "GuardSuspicion_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_Statics::NewProp_GuardSuspicion = { "GuardSuspicion", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_GlobalStealthManagerSubsystem, GuardSuspicion), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GuardSuspicion_MetaData), NewProp_GuardSuspicion_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_Statics::NewProp_StealthConfigStack_Inner = { "StealthConfigStack", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USOTS_StealthConfigDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_Statics::NewProp_StealthConfigStack = { "StealthConfigStack", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_GlobalStealthManagerSubsystem, StealthConfigStack), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StealthConfigStack_MetaData), NewProp_StealthConfigStack_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_Statics::NewProp_ActiveStealthConfig = { "ActiveStealthConfig", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_GlobalStealthManagerSubsystem, ActiveStealthConfig), Z_Construct_UClass_USOTS_StealthConfigDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveStealthConfig_MetaData), NewProp_ActiveStealthConfig_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_Statics::NewProp_LastSample,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_Statics::NewProp_CurrentState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_Statics::NewProp_CurrentStealthScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_Statics::NewProp_CurrentStealthLevel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_Statics::NewProp_CurrentStealthLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_Statics::NewProp_bPlayerDetected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_Statics::NewProp_CurrentBreakdown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_Statics::NewProp_OnStealthLevelChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_Statics::NewProp_OnPlayerDetectionStateChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_Statics::NewProp_DefaultConfigAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_Statics::NewProp_ActiveConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_Statics::NewProp_ActiveModifiers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_Statics::NewProp_ActiveModifiers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_Statics::NewProp_GuardSuspicion_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_Statics::NewProp_GuardSuspicion_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_Statics::NewProp_GuardSuspicion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_Statics::NewProp_StealthConfigStack_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_Statics::NewProp_StealthConfigStack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_Statics::NewProp_ActiveStealthConfig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_Statics::PropPointers) < 2048);
// ********** End Class USOTS_GlobalStealthManagerSubsystem Property Definitions *******************
UObject* (*const Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_GlobalStealthManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_Statics::ClassParams = {
	&USOTS_GlobalStealthManagerSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_Statics::Class_MetaDataParams)
};
void USOTS_GlobalStealthManagerSubsystem::StaticRegisterNativesUSOTS_GlobalStealthManagerSubsystem()
{
	UClass* Class = USOTS_GlobalStealthManagerSubsystem::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_Statics::Funcs));
}
UClass* Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem()
{
	if (!Z_Registration_Info_UClass_USOTS_GlobalStealthManagerSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_GlobalStealthManagerSubsystem.OuterSingleton, Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_GlobalStealthManagerSubsystem.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_GlobalStealthManagerSubsystem);
USOTS_GlobalStealthManagerSubsystem::~USOTS_GlobalStealthManagerSubsystem() {}
// ********** End Class USOTS_GlobalStealthManagerSubsystem ****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_GlobalStealthManagerSubsystem_h__Script_SOTS_GlobalStealthManager_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem, USOTS_GlobalStealthManagerSubsystem::StaticClass, TEXT("USOTS_GlobalStealthManagerSubsystem"), &Z_Registration_Info_UClass_USOTS_GlobalStealthManagerSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_GlobalStealthManagerSubsystem), 1326757416U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_GlobalStealthManagerSubsystem_h__Script_SOTS_GlobalStealthManager_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_GlobalStealthManagerSubsystem_h__Script_SOTS_GlobalStealthManager_1040540971{
	TEXT("/Script/SOTS_GlobalStealthManager"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_GlobalStealthManagerSubsystem_h__Script_SOTS_GlobalStealthManager_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_GlobalStealthManagerSubsystem_h__Script_SOTS_GlobalStealthManager_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
