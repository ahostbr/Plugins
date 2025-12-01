// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SOTS_MissionDirectorSubsystem.h"
#include "Engine/GameInstance.h"
#include "GameplayTagContainer.h"
#include "SOTS_KEM_Types.h"
#include "SOTS_MissionDirectorTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_MissionDirectorSubsystem() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
SOTS_GLOBALSTEALTHMANAGER_API UClass* Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_NoRegister();
SOTS_GLOBALSTEALTHMANAGER_API UEnum* Z_Construct_UEnum_SOTS_GlobalStealthManager_ESOTSStealthLevel();
SOTS_KILLEXECUTIONMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_KEM_ExecutionEvent();
SOTS_MISSIONDIRECTOR_API UClass* Z_Construct_UClass_USOTS_MissionDefinition_NoRegister();
SOTS_MISSIONDIRECTOR_API UClass* Z_Construct_UClass_USOTS_MissionDirectorSubsystem();
SOTS_MISSIONDIRECTOR_API UClass* Z_Construct_UClass_USOTS_MissionDirectorSubsystem_NoRegister();
SOTS_MISSIONDIRECTOR_API UEnum* Z_Construct_UEnum_SOTS_MissionDirector_ESOTS_MissionState();
SOTS_MISSIONDIRECTOR_API UEnum* Z_Construct_UEnum_SOTS_MissionDirector_ESOTSMissionEventCategory();
SOTS_MISSIONDIRECTOR_API UFunction* Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionEndedSignature__DelegateSignature();
SOTS_MISSIONDIRECTOR_API UFunction* Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionEventLoggedSignature__DelegateSignature();
SOTS_MISSIONDIRECTOR_API UFunction* Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionScoreChangedSignature__DelegateSignature();
SOTS_MISSIONDIRECTOR_API UFunction* Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionSimpleEventSignature__DelegateSignature();
SOTS_MISSIONDIRECTOR_API UFunction* Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_OnObjectiveUpdatedSignature__DelegateSignature();
SOTS_MISSIONDIRECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_MissionEventLogEntry();
SOTS_MISSIONDIRECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_MissionObjectiveRuntimeState();
SOTS_MISSIONDIRECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_MissionRunSummary();
SOTS_MISSIONDIRECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_MissionRuntimeState();
UPackage* Z_Construct_UPackage__Script_SOTS_MissionDirector();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FSOTS_MissionScoreChangedSignature ************************************
struct Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionScoreChangedSignature__DelegateSignature_Statics
{
	struct _Script_SOTS_MissionDirector_eventSOTS_MissionScoreChangedSignature_Parms
	{
		float NewScore;
		float Delta;
		FGameplayTagContainer ContextTags;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FSOTS_MissionScoreChangedSignature constinit property declarations ****
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewScore;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Delta;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContextTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FSOTS_MissionScoreChangedSignature constinit property declarations ******
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FSOTS_MissionScoreChangedSignature Property Definitions ***************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionScoreChangedSignature__DelegateSignature_Statics::NewProp_NewScore = { "NewScore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SOTS_MissionDirector_eventSOTS_MissionScoreChangedSignature_Parms, NewScore), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionScoreChangedSignature__DelegateSignature_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SOTS_MissionDirector_eventSOTS_MissionScoreChangedSignature_Parms, Delta), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionScoreChangedSignature__DelegateSignature_Statics::NewProp_ContextTags = { "ContextTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SOTS_MissionDirector_eventSOTS_MissionScoreChangedSignature_Parms, ContextTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3438578166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionScoreChangedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionScoreChangedSignature__DelegateSignature_Statics::NewProp_NewScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionScoreChangedSignature__DelegateSignature_Statics::NewProp_Delta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionScoreChangedSignature__DelegateSignature_Statics::NewProp_ContextTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionScoreChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FSOTS_MissionScoreChangedSignature Property Definitions *****************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionScoreChangedSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SOTS_MissionDirector, nullptr, "SOTS_MissionScoreChangedSignature__DelegateSignature", 	Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionScoreChangedSignature__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionScoreChangedSignature__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionScoreChangedSignature__DelegateSignature_Statics::_Script_SOTS_MissionDirector_eventSOTS_MissionScoreChangedSignature_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionScoreChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionScoreChangedSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionScoreChangedSignature__DelegateSignature_Statics::_Script_SOTS_MissionDirector_eventSOTS_MissionScoreChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionScoreChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionScoreChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSOTS_MissionScoreChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& SOTS_MissionScoreChangedSignature, float NewScore, float Delta, FGameplayTagContainer ContextTags)
{
	struct _Script_SOTS_MissionDirector_eventSOTS_MissionScoreChangedSignature_Parms
	{
		float NewScore;
		float Delta;
		FGameplayTagContainer ContextTags;
	};
	_Script_SOTS_MissionDirector_eventSOTS_MissionScoreChangedSignature_Parms Parms;
	Parms.NewScore=NewScore;
	Parms.Delta=Delta;
	Parms.ContextTags=ContextTags;
	SOTS_MissionScoreChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FSOTS_MissionScoreChangedSignature **************************************

// ********** Begin Delegate FSOTS_MissionEventLoggedSignature *************************************
struct Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionEventLoggedSignature__DelegateSignature_Statics
{
	struct _Script_SOTS_MissionDirector_eventSOTS_MissionEventLoggedSignature_Parms
	{
		FSOTS_MissionEventLogEntry Entry;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FSOTS_MissionEventLoggedSignature constinit property declarations *****
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entry;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FSOTS_MissionEventLoggedSignature constinit property declarations *******
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FSOTS_MissionEventLoggedSignature Property Definitions ****************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionEventLoggedSignature__DelegateSignature_Statics::NewProp_Entry = { "Entry", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SOTS_MissionDirector_eventSOTS_MissionEventLoggedSignature_Parms, Entry), Z_Construct_UScriptStruct_FSOTS_MissionEventLogEntry, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entry_MetaData), NewProp_Entry_MetaData) }; // 2540198091
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionEventLoggedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionEventLoggedSignature__DelegateSignature_Statics::NewProp_Entry,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionEventLoggedSignature__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FSOTS_MissionEventLoggedSignature Property Definitions ******************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionEventLoggedSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SOTS_MissionDirector, nullptr, "SOTS_MissionEventLoggedSignature__DelegateSignature", 	Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionEventLoggedSignature__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionEventLoggedSignature__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionEventLoggedSignature__DelegateSignature_Statics::_Script_SOTS_MissionDirector_eventSOTS_MissionEventLoggedSignature_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionEventLoggedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionEventLoggedSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionEventLoggedSignature__DelegateSignature_Statics::_Script_SOTS_MissionDirector_eventSOTS_MissionEventLoggedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionEventLoggedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionEventLoggedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSOTS_MissionEventLoggedSignature_DelegateWrapper(const FMulticastScriptDelegate& SOTS_MissionEventLoggedSignature, FSOTS_MissionEventLogEntry const& Entry)
{
	struct _Script_SOTS_MissionDirector_eventSOTS_MissionEventLoggedSignature_Parms
	{
		FSOTS_MissionEventLogEntry Entry;
	};
	_Script_SOTS_MissionDirector_eventSOTS_MissionEventLoggedSignature_Parms Parms;
	Parms.Entry=Entry;
	SOTS_MissionEventLoggedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FSOTS_MissionEventLoggedSignature ***************************************

// ********** Begin Delegate FSOTS_MissionEndedSignature *******************************************
struct Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionEndedSignature__DelegateSignature_Statics
{
	struct _Script_SOTS_MissionDirector_eventSOTS_MissionEndedSignature_Parms
	{
		FSOTS_MissionRunSummary Summary;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Summary_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FSOTS_MissionEndedSignature constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Summary;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FSOTS_MissionEndedSignature constinit property declarations *************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FSOTS_MissionEndedSignature Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionEndedSignature__DelegateSignature_Statics::NewProp_Summary = { "Summary", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SOTS_MissionDirector_eventSOTS_MissionEndedSignature_Parms, Summary), Z_Construct_UScriptStruct_FSOTS_MissionRunSummary, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Summary_MetaData), NewProp_Summary_MetaData) }; // 3169672268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionEndedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionEndedSignature__DelegateSignature_Statics::NewProp_Summary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionEndedSignature__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FSOTS_MissionEndedSignature Property Definitions ************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionEndedSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SOTS_MissionDirector, nullptr, "SOTS_MissionEndedSignature__DelegateSignature", 	Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionEndedSignature__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionEndedSignature__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionEndedSignature__DelegateSignature_Statics::_Script_SOTS_MissionDirector_eventSOTS_MissionEndedSignature_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionEndedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionEndedSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionEndedSignature__DelegateSignature_Statics::_Script_SOTS_MissionDirector_eventSOTS_MissionEndedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionEndedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionEndedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSOTS_MissionEndedSignature_DelegateWrapper(const FMulticastScriptDelegate& SOTS_MissionEndedSignature, FSOTS_MissionRunSummary const& Summary)
{
	struct _Script_SOTS_MissionDirector_eventSOTS_MissionEndedSignature_Parms
	{
		FSOTS_MissionRunSummary Summary;
	};
	_Script_SOTS_MissionDirector_eventSOTS_MissionEndedSignature_Parms Parms;
	Parms.Summary=Summary;
	SOTS_MissionEndedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FSOTS_MissionEndedSignature *********************************************

// ********** Begin Delegate FSOTS_MissionSimpleEventSignature *************************************
struct Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionSimpleEventSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FSOTS_MissionSimpleEventSignature constinit property declarations *****
// ********** End Delegate FSOTS_MissionSimpleEventSignature constinit property declarations *******
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionSimpleEventSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SOTS_MissionDirector, nullptr, "SOTS_MissionSimpleEventSignature__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionSimpleEventSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionSimpleEventSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionSimpleEventSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionSimpleEventSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSOTS_MissionSimpleEventSignature_DelegateWrapper(const FMulticastScriptDelegate& SOTS_MissionSimpleEventSignature)
{
	SOTS_MissionSimpleEventSignature.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FSOTS_MissionSimpleEventSignature ***************************************

// ********** Begin Delegate FSOTS_OnObjectiveUpdatedSignature *************************************
struct Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_OnObjectiveUpdatedSignature__DelegateSignature_Statics
{
	struct _Script_SOTS_MissionDirector_eventSOTS_OnObjectiveUpdatedSignature_Parms
	{
		FName ObjectiveId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FSOTS_OnObjectiveUpdatedSignature constinit property declarations *****
	static const UECodeGen_Private::FNamePropertyParams NewProp_ObjectiveId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FSOTS_OnObjectiveUpdatedSignature constinit property declarations *******
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FSOTS_OnObjectiveUpdatedSignature Property Definitions ****************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_OnObjectiveUpdatedSignature__DelegateSignature_Statics::NewProp_ObjectiveId = { "ObjectiveId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SOTS_MissionDirector_eventSOTS_OnObjectiveUpdatedSignature_Parms, ObjectiveId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_OnObjectiveUpdatedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_OnObjectiveUpdatedSignature__DelegateSignature_Statics::NewProp_ObjectiveId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_OnObjectiveUpdatedSignature__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FSOTS_OnObjectiveUpdatedSignature Property Definitions ******************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_OnObjectiveUpdatedSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SOTS_MissionDirector, nullptr, "SOTS_OnObjectiveUpdatedSignature__DelegateSignature", 	Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_OnObjectiveUpdatedSignature__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_OnObjectiveUpdatedSignature__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_OnObjectiveUpdatedSignature__DelegateSignature_Statics::_Script_SOTS_MissionDirector_eventSOTS_OnObjectiveUpdatedSignature_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_OnObjectiveUpdatedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_OnObjectiveUpdatedSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_OnObjectiveUpdatedSignature__DelegateSignature_Statics::_Script_SOTS_MissionDirector_eventSOTS_OnObjectiveUpdatedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_OnObjectiveUpdatedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_OnObjectiveUpdatedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSOTS_OnObjectiveUpdatedSignature_DelegateWrapper(const FMulticastScriptDelegate& SOTS_OnObjectiveUpdatedSignature, FName ObjectiveId)
{
	struct _Script_SOTS_MissionDirector_eventSOTS_OnObjectiveUpdatedSignature_Parms
	{
		FName ObjectiveId;
	};
	_Script_SOTS_MissionDirector_eventSOTS_OnObjectiveUpdatedSignature_Parms Parms;
	Parms.ObjectiveId=ObjectiveId;
	SOTS_OnObjectiveUpdatedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FSOTS_OnObjectiveUpdatedSignature ***************************************

// ********** Begin Class USOTS_MissionDirectorSubsystem Function CompleteObjectiveByTag ***********
struct Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_CompleteObjectiveByTag_Statics
{
	struct SOTS_MissionDirectorSubsystem_eventCompleteObjectiveByTag_Parms
	{
		FGameplayTag CompletedTag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Marks any objectives whose CompletionTag matches CompletedTag as complete. */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Marks any objectives whose CompletionTag matches CompletedTag as complete." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompletedTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function CompleteObjectiveByTag constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_CompletedTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CompleteObjectiveByTag constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CompleteObjectiveByTag Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_CompleteObjectiveByTag_Statics::NewProp_CompletedTag = { "CompletedTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MissionDirectorSubsystem_eventCompleteObjectiveByTag_Parms, CompletedTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompletedTag_MetaData), NewProp_CompletedTag_MetaData) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_CompleteObjectiveByTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_CompleteObjectiveByTag_Statics::NewProp_CompletedTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_CompleteObjectiveByTag_Statics::PropPointers) < 2048);
// ********** End Function CompleteObjectiveByTag Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_CompleteObjectiveByTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_MissionDirectorSubsystem, nullptr, "CompleteObjectiveByTag", 	Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_CompleteObjectiveByTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_CompleteObjectiveByTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_CompleteObjectiveByTag_Statics::SOTS_MissionDirectorSubsystem_eventCompleteObjectiveByTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_CompleteObjectiveByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_CompleteObjectiveByTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_CompleteObjectiveByTag_Statics::SOTS_MissionDirectorSubsystem_eventCompleteObjectiveByTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_CompleteObjectiveByTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_CompleteObjectiveByTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_MissionDirectorSubsystem::execCompleteObjectiveByTag)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_CompletedTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CompleteObjectiveByTag(Z_Param_Out_CompletedTag);
	P_NATIVE_END;
}
// ********** End Class USOTS_MissionDirectorSubsystem Function CompleteObjectiveByTag *************

// ********** Begin Class USOTS_MissionDirectorSubsystem Function EndMissionRun ********************
struct Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_EndMissionRun_Statics
{
	struct SOTS_MissionDirectorSubsystem_eventEndMissionRun_Parms
	{
		bool bSuccess;
		FSOTS_MissionRunSummary OutSummary;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Ends the mission and builds a summary, which you can pass to your debrief UI. */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ends the mission and builds a summary, which you can pass to your debrief UI." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function EndMissionRun constinit property declarations *************************
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutSummary;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EndMissionRun constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EndMissionRun Property Definitions ************************************
void Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_EndMissionRun_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((SOTS_MissionDirectorSubsystem_eventEndMissionRun_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_EndMissionRun_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_MissionDirectorSubsystem_eventEndMissionRun_Parms), &Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_EndMissionRun_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_EndMissionRun_Statics::NewProp_OutSummary = { "OutSummary", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MissionDirectorSubsystem_eventEndMissionRun_Parms, OutSummary), Z_Construct_UScriptStruct_FSOTS_MissionRunSummary, METADATA_PARAMS(0, nullptr) }; // 3169672268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_EndMissionRun_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_EndMissionRun_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_EndMissionRun_Statics::NewProp_OutSummary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_EndMissionRun_Statics::PropPointers) < 2048);
// ********** End Function EndMissionRun Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_EndMissionRun_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_MissionDirectorSubsystem, nullptr, "EndMissionRun", 	Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_EndMissionRun_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_EndMissionRun_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_EndMissionRun_Statics::SOTS_MissionDirectorSubsystem_eventEndMissionRun_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_EndMissionRun_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_EndMissionRun_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_EndMissionRun_Statics::SOTS_MissionDirectorSubsystem_eventEndMissionRun_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_EndMissionRun()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_EndMissionRun_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_MissionDirectorSubsystem::execEndMissionRun)
{
	P_GET_UBOOL(Z_Param_bSuccess);
	P_GET_STRUCT_REF(FSOTS_MissionRunSummary,Z_Param_Out_OutSummary);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndMissionRun(Z_Param_bSuccess,Z_Param_Out_OutSummary);
	P_NATIVE_END;
}
// ********** End Class USOTS_MissionDirectorSubsystem Function EndMissionRun **********************

// ********** Begin Class USOTS_MissionDirectorSubsystem Function ExportMissionState ***************
struct Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_ExportMissionState_Statics
{
	struct SOTS_MissionDirectorSubsystem_eventExportMissionState_Parms
	{
		FName MissionId;
		FSOTS_MissionRuntimeState OutState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Serializes mission runtime state (objectives, outcome, metrics) for\n// a specific mission id. Currently this mirrors GetCurrentMissionState\n// while allowing profile systems to store multiple missions.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Serializes mission runtime state (objectives, outcome, metrics) for\na specific mission id. Currently this mirrors GetCurrentMissionState\nwhile allowing profile systems to store multiple missions." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ExportMissionState constinit property declarations ********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_MissionId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ExportMissionState constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ExportMissionState Property Definitions *******************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_ExportMissionState_Statics::NewProp_MissionId = { "MissionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MissionDirectorSubsystem_eventExportMissionState_Parms, MissionId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_ExportMissionState_Statics::NewProp_OutState = { "OutState", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MissionDirectorSubsystem_eventExportMissionState_Parms, OutState), Z_Construct_UScriptStruct_FSOTS_MissionRuntimeState, METADATA_PARAMS(0, nullptr) }; // 934224171
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_ExportMissionState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_ExportMissionState_Statics::NewProp_MissionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_ExportMissionState_Statics::NewProp_OutState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_ExportMissionState_Statics::PropPointers) < 2048);
// ********** End Function ExportMissionState Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_ExportMissionState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_MissionDirectorSubsystem, nullptr, "ExportMissionState", 	Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_ExportMissionState_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_ExportMissionState_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_ExportMissionState_Statics::SOTS_MissionDirectorSubsystem_eventExportMissionState_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_ExportMissionState_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_ExportMissionState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_ExportMissionState_Statics::SOTS_MissionDirectorSubsystem_eventExportMissionState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_ExportMissionState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_ExportMissionState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_MissionDirectorSubsystem::execExportMissionState)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_MissionId);
	P_GET_STRUCT_REF(FSOTS_MissionRuntimeState,Z_Param_Out_OutState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExportMissionState(Z_Param_MissionId,Z_Param_Out_OutState);
	P_NATIVE_END;
}
// ********** End Class USOTS_MissionDirectorSubsystem Function ExportMissionState *****************

// ********** Begin Class USOTS_MissionDirectorSubsystem Function FailMission **********************
struct Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_FailMission_Statics
{
	struct SOTS_MissionDirectorSubsystem_eventFailMission_Parms
	{
		FGameplayTag FailReasonTag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Explicitly fails the current mission (e.g., scripted failure). */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Explicitly fails the current mission (e.g., scripted failure)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FailReasonTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function FailMission constinit property declarations ***************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_FailReasonTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FailMission constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FailMission Property Definitions **************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_FailMission_Statics::NewProp_FailReasonTag = { "FailReasonTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MissionDirectorSubsystem_eventFailMission_Parms, FailReasonTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FailReasonTag_MetaData), NewProp_FailReasonTag_MetaData) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_FailMission_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_FailMission_Statics::NewProp_FailReasonTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_FailMission_Statics::PropPointers) < 2048);
// ********** End Function FailMission Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_FailMission_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_MissionDirectorSubsystem, nullptr, "FailMission", 	Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_FailMission_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_FailMission_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_FailMission_Statics::SOTS_MissionDirectorSubsystem_eventFailMission_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_FailMission_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_FailMission_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_FailMission_Statics::SOTS_MissionDirectorSubsystem_eventFailMission_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_FailMission()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_FailMission_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_MissionDirectorSubsystem::execFailMission)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_FailReasonTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FailMission(Z_Param_Out_FailReasonTag);
	P_NATIVE_END;
}
// ********** End Class USOTS_MissionDirectorSubsystem Function FailMission ************************

// ********** Begin Class USOTS_MissionDirectorSubsystem Function ForceFailObjective ***************
struct Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_ForceFailObjective_Statics
{
	struct SOTS_MissionDirectorSubsystem_eventForceFailObjective_Parms
	{
		FName ObjectiveId;
		FString Reason;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Explicitly fails a specific objective, optionally with a debug reason.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Explicitly fails a specific objective, optionally with a debug reason." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ForceFailObjective constinit property declarations ********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ObjectiveId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Reason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ForceFailObjective constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ForceFailObjective Property Definitions *******************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_ForceFailObjective_Statics::NewProp_ObjectiveId = { "ObjectiveId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MissionDirectorSubsystem_eventForceFailObjective_Parms, ObjectiveId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_ForceFailObjective_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MissionDirectorSubsystem_eventForceFailObjective_Parms, Reason), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reason_MetaData), NewProp_Reason_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_ForceFailObjective_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_ForceFailObjective_Statics::NewProp_ObjectiveId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_ForceFailObjective_Statics::NewProp_Reason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_ForceFailObjective_Statics::PropPointers) < 2048);
// ********** End Function ForceFailObjective Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_ForceFailObjective_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_MissionDirectorSubsystem, nullptr, "ForceFailObjective", 	Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_ForceFailObjective_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_ForceFailObjective_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_ForceFailObjective_Statics::SOTS_MissionDirectorSubsystem_eventForceFailObjective_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_ForceFailObjective_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_ForceFailObjective_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_ForceFailObjective_Statics::SOTS_MissionDirectorSubsystem_eventForceFailObjective_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_ForceFailObjective()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_ForceFailObjective_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_MissionDirectorSubsystem::execForceFailObjective)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ObjectiveId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Reason);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ForceFailObjective(Z_Param_ObjectiveId,Z_Param_Reason);
	P_NATIVE_END;
}
// ********** End Class USOTS_MissionDirectorSubsystem Function ForceFailObjective *****************

// ********** Begin Class USOTS_MissionDirectorSubsystem Function Get ******************************
struct Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_Get_Statics
{
	struct SOTS_MissionDirectorSubsystem_eventGet_Parms
	{
		const UObject* WorldContextObject;
		USOTS_MissionDirectorSubsystem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Convenience accessor.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convenience accessor." },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_Get_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MissionDirectorSubsystem_eventGet_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MissionDirectorSubsystem_eventGet_Parms, ReturnValue), Z_Construct_UClass_USOTS_MissionDirectorSubsystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_Get_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_Get_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_Get_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_Get_Statics::PropPointers) < 2048);
// ********** End Function Get Property Definitions ************************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_Get_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_MissionDirectorSubsystem, nullptr, "Get", 	Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_Get_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_Get_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_Get_Statics::SOTS_MissionDirectorSubsystem_eventGet_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_Get_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_Get_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_Get_Statics::SOTS_MissionDirectorSubsystem_eventGet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_Get()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_Get_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_MissionDirectorSubsystem::execGet)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USOTS_MissionDirectorSubsystem**)Z_Param__Result=USOTS_MissionDirectorSubsystem::Get(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class USOTS_MissionDirectorSubsystem Function Get ********************************

// ********** Begin Class USOTS_MissionDirectorSubsystem Function GetActiveMissionDefinition *******
struct Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetActiveMissionDefinition_Statics
{
	struct SOTS_MissionDirectorSubsystem_eventGetActiveMissionDefinition_Parms
	{
		USOTS_MissionDefinition* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Mission" },
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetActiveMissionDefinition constinit property declarations ************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetActiveMissionDefinition constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetActiveMissionDefinition Property Definitions ***********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetActiveMissionDefinition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MissionDirectorSubsystem_eventGetActiveMissionDefinition_Parms, ReturnValue), Z_Construct_UClass_USOTS_MissionDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetActiveMissionDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetActiveMissionDefinition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetActiveMissionDefinition_Statics::PropPointers) < 2048);
// ********** End Function GetActiveMissionDefinition Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetActiveMissionDefinition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_MissionDirectorSubsystem, nullptr, "GetActiveMissionDefinition", 	Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetActiveMissionDefinition_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetActiveMissionDefinition_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetActiveMissionDefinition_Statics::SOTS_MissionDirectorSubsystem_eventGetActiveMissionDefinition_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetActiveMissionDefinition_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetActiveMissionDefinition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetActiveMissionDefinition_Statics::SOTS_MissionDirectorSubsystem_eventGetActiveMissionDefinition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetActiveMissionDefinition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetActiveMissionDefinition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_MissionDirectorSubsystem::execGetActiveMissionDefinition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USOTS_MissionDefinition**)Z_Param__Result=P_THIS->GetActiveMissionDefinition();
	P_NATIVE_END;
}
// ********** End Class USOTS_MissionDirectorSubsystem Function GetActiveMissionDefinition *********

// ********** Begin Class USOTS_MissionDirectorSubsystem Function GetCurrentMissionObjectives ******
struct Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentMissionObjectives_Statics
{
	struct SOTS_MissionDirectorSubsystem_eventGetCurrentMissionObjectives_Parms
	{
		TArray<FSOTS_MissionObjectiveRuntimeState> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Mission" },
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentMissionObjectives constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentMissionObjectives constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentMissionObjectives Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentMissionObjectives_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSOTS_MissionObjectiveRuntimeState, METADATA_PARAMS(0, nullptr) }; // 3836113134
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentMissionObjectives_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MissionDirectorSubsystem_eventGetCurrentMissionObjectives_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3836113134
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentMissionObjectives_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentMissionObjectives_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentMissionObjectives_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentMissionObjectives_Statics::PropPointers) < 2048);
// ********** End Function GetCurrentMissionObjectives Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentMissionObjectives_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_MissionDirectorSubsystem, nullptr, "GetCurrentMissionObjectives", 	Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentMissionObjectives_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentMissionObjectives_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentMissionObjectives_Statics::SOTS_MissionDirectorSubsystem_eventGetCurrentMissionObjectives_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentMissionObjectives_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentMissionObjectives_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentMissionObjectives_Statics::SOTS_MissionDirectorSubsystem_eventGetCurrentMissionObjectives_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentMissionObjectives()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentMissionObjectives_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_MissionDirectorSubsystem::execGetCurrentMissionObjectives)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FSOTS_MissionObjectiveRuntimeState>*)Z_Param__Result=P_THIS->GetCurrentMissionObjectives();
	P_NATIVE_END;
}
// ********** End Class USOTS_MissionDirectorSubsystem Function GetCurrentMissionObjectives ********

// ********** Begin Class USOTS_MissionDirectorSubsystem Function GetCurrentMissionResult **********
struct Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentMissionResult_Statics
{
	struct SOTS_MissionDirectorSubsystem_eventGetCurrentMissionResult_Parms
	{
		FSOTS_MissionRunSummary ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns a lightweight result struct for the currently active or last\n// mission run. This is suitable for per-mission profile persistence.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns a lightweight result struct for the currently active or last\nmission run. This is suitable for per-mission profile persistence." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentMissionResult constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentMissionResult constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentMissionResult Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentMissionResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MissionDirectorSubsystem_eventGetCurrentMissionResult_Parms, ReturnValue), Z_Construct_UScriptStruct_FSOTS_MissionRunSummary, METADATA_PARAMS(0, nullptr) }; // 3169672268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentMissionResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentMissionResult_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentMissionResult_Statics::PropPointers) < 2048);
// ********** End Function GetCurrentMissionResult Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentMissionResult_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_MissionDirectorSubsystem, nullptr, "GetCurrentMissionResult", 	Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentMissionResult_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentMissionResult_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentMissionResult_Statics::SOTS_MissionDirectorSubsystem_eventGetCurrentMissionResult_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentMissionResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentMissionResult_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentMissionResult_Statics::SOTS_MissionDirectorSubsystem_eventGetCurrentMissionResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentMissionResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentMissionResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_MissionDirectorSubsystem::execGetCurrentMissionResult)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSOTS_MissionRunSummary*)Z_Param__Result=P_THIS->GetCurrentMissionResult();
	P_NATIVE_END;
}
// ********** End Class USOTS_MissionDirectorSubsystem Function GetCurrentMissionResult ************

// ********** Begin Class USOTS_MissionDirectorSubsystem Function GetCurrentMissionSaveState *******
struct Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentMissionSaveState_Statics
{
	struct SOTS_MissionDirectorSubsystem_eventGetCurrentMissionSaveState_Parms
	{
		FSOTS_MissionRuntimeState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Mission" },
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentMissionSaveState constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentMissionSaveState constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentMissionSaveState Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentMissionSaveState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MissionDirectorSubsystem_eventGetCurrentMissionSaveState_Parms, ReturnValue), Z_Construct_UScriptStruct_FSOTS_MissionRuntimeState, METADATA_PARAMS(0, nullptr) }; // 934224171
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentMissionSaveState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentMissionSaveState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentMissionSaveState_Statics::PropPointers) < 2048);
// ********** End Function GetCurrentMissionSaveState Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentMissionSaveState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_MissionDirectorSubsystem, nullptr, "GetCurrentMissionSaveState", 	Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentMissionSaveState_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentMissionSaveState_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentMissionSaveState_Statics::SOTS_MissionDirectorSubsystem_eventGetCurrentMissionSaveState_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentMissionSaveState_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentMissionSaveState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentMissionSaveState_Statics::SOTS_MissionDirectorSubsystem_eventGetCurrentMissionSaveState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentMissionSaveState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentMissionSaveState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_MissionDirectorSubsystem::execGetCurrentMissionSaveState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSOTS_MissionRuntimeState*)Z_Param__Result=P_THIS->GetCurrentMissionSaveState();
	P_NATIVE_END;
}
// ********** End Class USOTS_MissionDirectorSubsystem Function GetCurrentMissionSaveState *********

// ********** Begin Class USOTS_MissionDirectorSubsystem Function GetCurrentMissionState ***********
struct Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentMissionState_Statics
{
	struct SOTS_MissionDirectorSubsystem_eventGetCurrentMissionState_Parms
	{
		FSOTS_MissionRuntimeState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// High-level runtime state snapshot for UI/save systems.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "High-level runtime state snapshot for UI/save systems." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentMissionState constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentMissionState constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentMissionState Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentMissionState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MissionDirectorSubsystem_eventGetCurrentMissionState_Parms, ReturnValue), Z_Construct_UScriptStruct_FSOTS_MissionRuntimeState, METADATA_PARAMS(0, nullptr) }; // 934224171
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentMissionState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentMissionState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentMissionState_Statics::PropPointers) < 2048);
// ********** End Function GetCurrentMissionState Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentMissionState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_MissionDirectorSubsystem, nullptr, "GetCurrentMissionState", 	Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentMissionState_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentMissionState_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentMissionState_Statics::SOTS_MissionDirectorSubsystem_eventGetCurrentMissionState_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentMissionState_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentMissionState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentMissionState_Statics::SOTS_MissionDirectorSubsystem_eventGetCurrentMissionState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentMissionState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentMissionState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_MissionDirectorSubsystem::execGetCurrentMissionState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSOTS_MissionRuntimeState*)Z_Param__Result=P_THIS->GetCurrentMissionState();
	P_NATIVE_END;
}
// ********** End Class USOTS_MissionDirectorSubsystem Function GetCurrentMissionState *************

// ********** Begin Class USOTS_MissionDirectorSubsystem Function GetCurrentScore ******************
struct Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentScore_Statics
{
	struct SOTS_MissionDirectorSubsystem_eventGetCurrentScore_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Lightweight score-only accessor (no summary build). */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lightweight score-only accessor (no summary build)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentScore constinit property declarations ***********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentScore constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentScore Property Definitions **********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MissionDirectorSubsystem_eventGetCurrentScore_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentScore_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentScore_Statics::PropPointers) < 2048);
// ********** End Function GetCurrentScore Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentScore_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_MissionDirectorSubsystem, nullptr, "GetCurrentScore", 	Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentScore_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentScore_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentScore_Statics::SOTS_MissionDirectorSubsystem_eventGetCurrentScore_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentScore_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentScore_Statics::SOTS_MissionDirectorSubsystem_eventGetCurrentScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_MissionDirectorSubsystem::execGetCurrentScore)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCurrentScore();
	P_NATIVE_END;
}
// ********** End Class USOTS_MissionDirectorSubsystem Function GetCurrentScore ********************

// ********** Begin Class USOTS_MissionDirectorSubsystem Function GetMissionState ******************
struct Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetMissionState_Statics
{
	struct SOTS_MissionDirectorSubsystem_eventGetMissionState_Parms
	{
		ESOTS_MissionState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the high-level mission state driven by the mission definition. */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the high-level mission state driven by the mission definition." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetMissionState constinit property declarations ***********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetMissionState constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetMissionState Property Definitions **********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetMissionState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetMissionState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MissionDirectorSubsystem_eventGetMissionState_Parms, ReturnValue), Z_Construct_UEnum_SOTS_MissionDirector_ESOTS_MissionState, METADATA_PARAMS(0, nullptr) }; // 3018231392
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetMissionState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetMissionState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetMissionState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetMissionState_Statics::PropPointers) < 2048);
// ********** End Function GetMissionState Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetMissionState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_MissionDirectorSubsystem, nullptr, "GetMissionState", 	Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetMissionState_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetMissionState_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetMissionState_Statics::SOTS_MissionDirectorSubsystem_eventGetMissionState_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetMissionState_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetMissionState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetMissionState_Statics::SOTS_MissionDirectorSubsystem_eventGetMissionState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetMissionState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetMissionState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_MissionDirectorSubsystem::execGetMissionState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESOTS_MissionState*)Z_Param__Result=P_THIS->GetMissionState();
	P_NATIVE_END;
}
// ********** End Class USOTS_MissionDirectorSubsystem Function GetMissionState ********************

// ********** Begin Class USOTS_MissionDirectorSubsystem Function GetNextMissionIdByOutcome ********
struct Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetNextMissionIdByOutcome_Statics
{
	struct SOTS_MissionDirectorSubsystem_eventGetNextMissionIdByOutcome_Parms
	{
		FName OutMissionId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Reads the next mission id configured for the current outcome tag, if any.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reads the next mission id configured for the current outcome tag, if any." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetNextMissionIdByOutcome constinit property declarations *************
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutMissionId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNextMissionIdByOutcome constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNextMissionIdByOutcome Property Definitions ************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetNextMissionIdByOutcome_Statics::NewProp_OutMissionId = { "OutMissionId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MissionDirectorSubsystem_eventGetNextMissionIdByOutcome_Parms, OutMissionId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetNextMissionIdByOutcome_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SOTS_MissionDirectorSubsystem_eventGetNextMissionIdByOutcome_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetNextMissionIdByOutcome_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_MissionDirectorSubsystem_eventGetNextMissionIdByOutcome_Parms), &Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetNextMissionIdByOutcome_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetNextMissionIdByOutcome_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetNextMissionIdByOutcome_Statics::NewProp_OutMissionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetNextMissionIdByOutcome_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetNextMissionIdByOutcome_Statics::PropPointers) < 2048);
// ********** End Function GetNextMissionIdByOutcome Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetNextMissionIdByOutcome_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_MissionDirectorSubsystem, nullptr, "GetNextMissionIdByOutcome", 	Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetNextMissionIdByOutcome_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetNextMissionIdByOutcome_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetNextMissionIdByOutcome_Statics::SOTS_MissionDirectorSubsystem_eventGetNextMissionIdByOutcome_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetNextMissionIdByOutcome_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetNextMissionIdByOutcome_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetNextMissionIdByOutcome_Statics::SOTS_MissionDirectorSubsystem_eventGetNextMissionIdByOutcome_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetNextMissionIdByOutcome()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetNextMissionIdByOutcome_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_MissionDirectorSubsystem::execGetNextMissionIdByOutcome)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_OutMissionId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetNextMissionIdByOutcome(Z_Param_Out_OutMissionId);
	P_NATIVE_END;
}
// ********** End Class USOTS_MissionDirectorSubsystem Function GetNextMissionIdByOutcome **********

// ********** Begin Class USOTS_MissionDirectorSubsystem Function HandleExecutionEvent *************
struct Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_HandleExecutionEvent_Statics
{
	struct SOTS_MissionDirectorSubsystem_eventHandleExecutionEvent_Parms
	{
		FSOTS_KEM_ExecutionEvent Event;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// KEM integration: invoked when the KillExecutionManager broadcasts an\n// execution event so objectives with RequiredExecutionTag / RequiredTargetTag\n// can be evaluated.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "KEM integration: invoked when the KillExecutionManager broadcasts an\nexecution event so objectives with RequiredExecutionTag / RequiredTargetTag\ncan be evaluated." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleExecutionEvent constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Event;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleExecutionEvent constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleExecutionEvent Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_HandleExecutionEvent_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MissionDirectorSubsystem_eventHandleExecutionEvent_Parms, Event), Z_Construct_UScriptStruct_FSOTS_KEM_ExecutionEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Event_MetaData), NewProp_Event_MetaData) }; // 4193474717
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_HandleExecutionEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_HandleExecutionEvent_Statics::NewProp_Event,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_HandleExecutionEvent_Statics::PropPointers) < 2048);
// ********** End Function HandleExecutionEvent Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_HandleExecutionEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_MissionDirectorSubsystem, nullptr, "HandleExecutionEvent", 	Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_HandleExecutionEvent_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_HandleExecutionEvent_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_HandleExecutionEvent_Statics::SOTS_MissionDirectorSubsystem_eventHandleExecutionEvent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_HandleExecutionEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_HandleExecutionEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_HandleExecutionEvent_Statics::SOTS_MissionDirectorSubsystem_eventHandleExecutionEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_HandleExecutionEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_HandleExecutionEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_MissionDirectorSubsystem::execHandleExecutionEvent)
{
	P_GET_STRUCT_REF(FSOTS_KEM_ExecutionEvent,Z_Param_Out_Event);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleExecutionEvent(Z_Param_Out_Event);
	P_NATIVE_END;
}
// ********** End Class USOTS_MissionDirectorSubsystem Function HandleExecutionEvent ***************

// ********** Begin Class USOTS_MissionDirectorSubsystem Function HandleStealthLevelChanged ********
struct Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_HandleStealthLevelChanged_Statics
{
	struct SOTS_MissionDirectorSubsystem_eventHandleStealthLevelChanged_Parms
	{
		ESOTSStealthLevel OldLevel;
		ESOTSStealthLevel NewLevel;
		float NewScore;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleStealthLevelChanged constinit property declarations *************
	static const UECodeGen_Private::FBytePropertyParams NewProp_OldLevel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OldLevel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewLevel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewScore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleStealthLevelChanged constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleStealthLevelChanged Property Definitions ************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_HandleStealthLevelChanged_Statics::NewProp_OldLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_HandleStealthLevelChanged_Statics::NewProp_OldLevel = { "OldLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MissionDirectorSubsystem_eventHandleStealthLevelChanged_Parms, OldLevel), Z_Construct_UEnum_SOTS_GlobalStealthManager_ESOTSStealthLevel, METADATA_PARAMS(0, nullptr) }; // 3112324723
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_HandleStealthLevelChanged_Statics::NewProp_NewLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_HandleStealthLevelChanged_Statics::NewProp_NewLevel = { "NewLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MissionDirectorSubsystem_eventHandleStealthLevelChanged_Parms, NewLevel), Z_Construct_UEnum_SOTS_GlobalStealthManager_ESOTSStealthLevel, METADATA_PARAMS(0, nullptr) }; // 3112324723
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_HandleStealthLevelChanged_Statics::NewProp_NewScore = { "NewScore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MissionDirectorSubsystem_eventHandleStealthLevelChanged_Parms, NewScore), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_HandleStealthLevelChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_HandleStealthLevelChanged_Statics::NewProp_OldLevel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_HandleStealthLevelChanged_Statics::NewProp_OldLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_HandleStealthLevelChanged_Statics::NewProp_NewLevel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_HandleStealthLevelChanged_Statics::NewProp_NewLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_HandleStealthLevelChanged_Statics::NewProp_NewScore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_HandleStealthLevelChanged_Statics::PropPointers) < 2048);
// ********** End Function HandleStealthLevelChanged Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_HandleStealthLevelChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_MissionDirectorSubsystem, nullptr, "HandleStealthLevelChanged", 	Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_HandleStealthLevelChanged_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_HandleStealthLevelChanged_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_HandleStealthLevelChanged_Statics::SOTS_MissionDirectorSubsystem_eventHandleStealthLevelChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_HandleStealthLevelChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_HandleStealthLevelChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_HandleStealthLevelChanged_Statics::SOTS_MissionDirectorSubsystem_eventHandleStealthLevelChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_HandleStealthLevelChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_HandleStealthLevelChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_MissionDirectorSubsystem::execHandleStealthLevelChanged)
{
	P_GET_ENUM(ESOTSStealthLevel,Z_Param_OldLevel);
	P_GET_ENUM(ESOTSStealthLevel,Z_Param_NewLevel);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewScore);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleStealthLevelChanged(ESOTSStealthLevel(Z_Param_OldLevel),ESOTSStealthLevel(Z_Param_NewLevel),Z_Param_NewScore);
	P_NATIVE_END;
}
// ********** End Class USOTS_MissionDirectorSubsystem Function HandleStealthLevelChanged **********

// ********** Begin Class USOTS_MissionDirectorSubsystem Function ImportMissionState ***************
struct Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_ImportMissionState_Statics
{
	struct SOTS_MissionDirectorSubsystem_eventImportMissionState_Parms
	{
		FSOTS_MissionRuntimeState InState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Restores mission runtime state previously exported for a mission id.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Restores mission runtime state previously exported for a mission id." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ImportMissionState constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ImportMissionState constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ImportMissionState Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_ImportMissionState_Statics::NewProp_InState = { "InState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MissionDirectorSubsystem_eventImportMissionState_Parms, InState), Z_Construct_UScriptStruct_FSOTS_MissionRuntimeState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InState_MetaData), NewProp_InState_MetaData) }; // 934224171
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_ImportMissionState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_ImportMissionState_Statics::NewProp_InState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_ImportMissionState_Statics::PropPointers) < 2048);
// ********** End Function ImportMissionState Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_ImportMissionState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_MissionDirectorSubsystem, nullptr, "ImportMissionState", 	Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_ImportMissionState_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_ImportMissionState_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_ImportMissionState_Statics::SOTS_MissionDirectorSubsystem_eventImportMissionState_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_ImportMissionState_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_ImportMissionState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_ImportMissionState_Statics::SOTS_MissionDirectorSubsystem_eventImportMissionState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_ImportMissionState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_ImportMissionState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_MissionDirectorSubsystem::execImportMissionState)
{
	P_GET_STRUCT_REF(FSOTS_MissionRuntimeState,Z_Param_Out_InState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ImportMissionState(Z_Param_Out_InState);
	P_NATIVE_END;
}
// ********** End Class USOTS_MissionDirectorSubsystem Function ImportMissionState *****************

// ********** Begin Class USOTS_MissionDirectorSubsystem Function IsMissionActive ******************
struct Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_IsMissionActive_Statics
{
	struct SOTS_MissionDirectorSubsystem_eventIsMissionActive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mission" },
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsMissionActive constinit property declarations ***********************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsMissionActive constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsMissionActive Property Definitions **********************************
void Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_IsMissionActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SOTS_MissionDirectorSubsystem_eventIsMissionActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_IsMissionActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_MissionDirectorSubsystem_eventIsMissionActive_Parms), &Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_IsMissionActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_IsMissionActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_IsMissionActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_IsMissionActive_Statics::PropPointers) < 2048);
// ********** End Function IsMissionActive Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_IsMissionActive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_MissionDirectorSubsystem, nullptr, "IsMissionActive", 	Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_IsMissionActive_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_IsMissionActive_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_IsMissionActive_Statics::SOTS_MissionDirectorSubsystem_eventIsMissionActive_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_IsMissionActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_IsMissionActive_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_IsMissionActive_Statics::SOTS_MissionDirectorSubsystem_eventIsMissionActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_IsMissionActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_IsMissionActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_MissionDirectorSubsystem::execIsMissionActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsMissionActive();
	P_NATIVE_END;
}
// ********** End Class USOTS_MissionDirectorSubsystem Function IsMissionActive ********************

// ********** Begin Class USOTS_MissionDirectorSubsystem Function IsObjectiveCompleted *************
struct Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_IsObjectiveCompleted_Statics
{
	struct SOTS_MissionDirectorSubsystem_eventIsObjectiveCompleted_Parms
	{
		FName ObjectiveId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Mission" },
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsObjectiveCompleted constinit property declarations ******************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ObjectiveId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsObjectiveCompleted constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsObjectiveCompleted Property Definitions *****************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_IsObjectiveCompleted_Statics::NewProp_ObjectiveId = { "ObjectiveId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MissionDirectorSubsystem_eventIsObjectiveCompleted_Parms, ObjectiveId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_IsObjectiveCompleted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SOTS_MissionDirectorSubsystem_eventIsObjectiveCompleted_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_IsObjectiveCompleted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_MissionDirectorSubsystem_eventIsObjectiveCompleted_Parms), &Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_IsObjectiveCompleted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_IsObjectiveCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_IsObjectiveCompleted_Statics::NewProp_ObjectiveId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_IsObjectiveCompleted_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_IsObjectiveCompleted_Statics::PropPointers) < 2048);
// ********** End Function IsObjectiveCompleted Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_IsObjectiveCompleted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_MissionDirectorSubsystem, nullptr, "IsObjectiveCompleted", 	Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_IsObjectiveCompleted_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_IsObjectiveCompleted_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_IsObjectiveCompleted_Statics::SOTS_MissionDirectorSubsystem_eventIsObjectiveCompleted_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_IsObjectiveCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_IsObjectiveCompleted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_IsObjectiveCompleted_Statics::SOTS_MissionDirectorSubsystem_eventIsObjectiveCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_IsObjectiveCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_IsObjectiveCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_MissionDirectorSubsystem::execIsObjectiveCompleted)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ObjectiveId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsObjectiveCompleted(Z_Param_ObjectiveId);
	P_NATIVE_END;
}
// ********** End Class USOTS_MissionDirectorSubsystem Function IsObjectiveCompleted ***************

// ********** Begin Class USOTS_MissionDirectorSubsystem Function NotifyAlertTriggered *************
struct Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_NotifyAlertTriggered_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Simple alert counter hook (e.g. when AI enters fully alerted state).\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple alert counter hook (e.g. when AI enters fully alerted state)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function NotifyAlertTriggered constinit property declarations ******************
// ********** End Function NotifyAlertTriggered constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_NotifyAlertTriggered_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_MissionDirectorSubsystem, nullptr, "NotifyAlertTriggered", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_NotifyAlertTriggered_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_NotifyAlertTriggered_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_NotifyAlertTriggered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_NotifyAlertTriggered_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_MissionDirectorSubsystem::execNotifyAlertTriggered)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NotifyAlertTriggered();
	P_NATIVE_END;
}
// ********** End Class USOTS_MissionDirectorSubsystem Function NotifyAlertTriggered ***************

// ********** Begin Class USOTS_MissionDirectorSubsystem Function NotifyMissionEvent ***************
struct Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_NotifyMissionEvent_Statics
{
	struct SOTS_MissionDirectorSubsystem_eventNotifyMissionEvent_Parms
	{
		FGameplayTag EventTag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Generic mission event hook. Currently this forwards to CompleteObjectiveByTag\n// so that objectives can be completed by broadcasting tags rather than\n// calling the subsystem directly.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generic mission event hook. Currently this forwards to CompleteObjectiveByTag\nso that objectives can be completed by broadcasting tags rather than\ncalling the subsystem directly." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function NotifyMissionEvent constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function NotifyMissionEvent constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function NotifyMissionEvent Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_NotifyMissionEvent_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MissionDirectorSubsystem_eventNotifyMissionEvent_Parms, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTag_MetaData), NewProp_EventTag_MetaData) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_NotifyMissionEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_NotifyMissionEvent_Statics::NewProp_EventTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_NotifyMissionEvent_Statics::PropPointers) < 2048);
// ********** End Function NotifyMissionEvent Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_NotifyMissionEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_MissionDirectorSubsystem, nullptr, "NotifyMissionEvent", 	Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_NotifyMissionEvent_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_NotifyMissionEvent_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_NotifyMissionEvent_Statics::SOTS_MissionDirectorSubsystem_eventNotifyMissionEvent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_NotifyMissionEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_NotifyMissionEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_NotifyMissionEvent_Statics::SOTS_MissionDirectorSubsystem_eventNotifyMissionEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_NotifyMissionEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_NotifyMissionEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_MissionDirectorSubsystem::execNotifyMissionEvent)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_EventTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NotifyMissionEvent(Z_Param_Out_EventTag);
	P_NATIVE_END;
}
// ********** End Class USOTS_MissionDirectorSubsystem Function NotifyMissionEvent *****************

// ********** Begin Class USOTS_MissionDirectorSubsystem Function RegisterObjectiveCompleted *******
struct Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RegisterObjectiveCompleted_Statics
{
	struct SOTS_MissionDirectorSubsystem_eventRegisterObjectiveCompleted_Parms
	{
		bool bIsPrimaryObjective;
		float ScoreDelta;
		FText Title;
		FText Description;
		FGameplayTagContainer ContextTags;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Records an objective completion. */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Records an objective completion." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RegisterObjectiveCompleted constinit property declarations ************
	static void NewProp_bIsPrimaryObjective_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPrimaryObjective;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScoreDelta;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Title;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContextTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RegisterObjectiveCompleted constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RegisterObjectiveCompleted Property Definitions ***********************
void Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RegisterObjectiveCompleted_Statics::NewProp_bIsPrimaryObjective_SetBit(void* Obj)
{
	((SOTS_MissionDirectorSubsystem_eventRegisterObjectiveCompleted_Parms*)Obj)->bIsPrimaryObjective = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RegisterObjectiveCompleted_Statics::NewProp_bIsPrimaryObjective = { "bIsPrimaryObjective", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_MissionDirectorSubsystem_eventRegisterObjectiveCompleted_Parms), &Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RegisterObjectiveCompleted_Statics::NewProp_bIsPrimaryObjective_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RegisterObjectiveCompleted_Statics::NewProp_ScoreDelta = { "ScoreDelta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MissionDirectorSubsystem_eventRegisterObjectiveCompleted_Parms, ScoreDelta), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RegisterObjectiveCompleted_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MissionDirectorSubsystem_eventRegisterObjectiveCompleted_Parms, Title), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RegisterObjectiveCompleted_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MissionDirectorSubsystem_eventRegisterObjectiveCompleted_Parms, Description), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RegisterObjectiveCompleted_Statics::NewProp_ContextTags = { "ContextTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MissionDirectorSubsystem_eventRegisterObjectiveCompleted_Parms, ContextTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextTags_MetaData), NewProp_ContextTags_MetaData) }; // 3438578166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RegisterObjectiveCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RegisterObjectiveCompleted_Statics::NewProp_bIsPrimaryObjective,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RegisterObjectiveCompleted_Statics::NewProp_ScoreDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RegisterObjectiveCompleted_Statics::NewProp_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RegisterObjectiveCompleted_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RegisterObjectiveCompleted_Statics::NewProp_ContextTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RegisterObjectiveCompleted_Statics::PropPointers) < 2048);
// ********** End Function RegisterObjectiveCompleted Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RegisterObjectiveCompleted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_MissionDirectorSubsystem, nullptr, "RegisterObjectiveCompleted", 	Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RegisterObjectiveCompleted_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RegisterObjectiveCompleted_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RegisterObjectiveCompleted_Statics::SOTS_MissionDirectorSubsystem_eventRegisterObjectiveCompleted_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RegisterObjectiveCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RegisterObjectiveCompleted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RegisterObjectiveCompleted_Statics::SOTS_MissionDirectorSubsystem_eventRegisterObjectiveCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RegisterObjectiveCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RegisterObjectiveCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_MissionDirectorSubsystem::execRegisterObjectiveCompleted)
{
	P_GET_UBOOL(Z_Param_bIsPrimaryObjective);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ScoreDelta);
	P_GET_PROPERTY(FTextProperty,Z_Param_Title);
	P_GET_PROPERTY(FTextProperty,Z_Param_Description);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_ContextTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterObjectiveCompleted(Z_Param_bIsPrimaryObjective,Z_Param_ScoreDelta,Z_Param_Title,Z_Param_Description,Z_Param_Out_ContextTags);
	P_NATIVE_END;
}
// ********** End Class USOTS_MissionDirectorSubsystem Function RegisterObjectiveCompleted *********

// ********** Begin Class USOTS_MissionDirectorSubsystem Function RegisterScoreEvent ***************
struct Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RegisterScoreEvent_Statics
{
	struct SOTS_MissionDirectorSubsystem_eventRegisterScoreEvent_Parms
	{
		ESOTSMissionEventCategory Category;
		float ScoreDelta;
		FText Title;
		FText Description;
		FGameplayTagContainer ContextTags;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Generic scoring hook for anything: stealth bonuses, detections, loot, time penalties, etc.\n     * Systems can call this directly instead of building their own scoring.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generic scoring hook for anything: stealth bonuses, detections, loot, time penalties, etc.\nSystems can call this directly instead of building their own scoring." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RegisterScoreEvent constinit property declarations ********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Category_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Category;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScoreDelta;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Title;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContextTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RegisterScoreEvent constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RegisterScoreEvent Property Definitions *******************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RegisterScoreEvent_Statics::NewProp_Category_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RegisterScoreEvent_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MissionDirectorSubsystem_eventRegisterScoreEvent_Parms, Category), Z_Construct_UEnum_SOTS_MissionDirector_ESOTSMissionEventCategory, METADATA_PARAMS(0, nullptr) }; // 2204436384
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RegisterScoreEvent_Statics::NewProp_ScoreDelta = { "ScoreDelta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MissionDirectorSubsystem_eventRegisterScoreEvent_Parms, ScoreDelta), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RegisterScoreEvent_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MissionDirectorSubsystem_eventRegisterScoreEvent_Parms, Title), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RegisterScoreEvent_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MissionDirectorSubsystem_eventRegisterScoreEvent_Parms, Description), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RegisterScoreEvent_Statics::NewProp_ContextTags = { "ContextTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MissionDirectorSubsystem_eventRegisterScoreEvent_Parms, ContextTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextTags_MetaData), NewProp_ContextTags_MetaData) }; // 3438578166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RegisterScoreEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RegisterScoreEvent_Statics::NewProp_Category_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RegisterScoreEvent_Statics::NewProp_Category,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RegisterScoreEvent_Statics::NewProp_ScoreDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RegisterScoreEvent_Statics::NewProp_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RegisterScoreEvent_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RegisterScoreEvent_Statics::NewProp_ContextTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RegisterScoreEvent_Statics::PropPointers) < 2048);
// ********** End Function RegisterScoreEvent Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RegisterScoreEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_MissionDirectorSubsystem, nullptr, "RegisterScoreEvent", 	Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RegisterScoreEvent_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RegisterScoreEvent_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RegisterScoreEvent_Statics::SOTS_MissionDirectorSubsystem_eventRegisterScoreEvent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RegisterScoreEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RegisterScoreEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RegisterScoreEvent_Statics::SOTS_MissionDirectorSubsystem_eventRegisterScoreEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RegisterScoreEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RegisterScoreEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_MissionDirectorSubsystem::execRegisterScoreEvent)
{
	P_GET_ENUM(ESOTSMissionEventCategory,Z_Param_Category);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ScoreDelta);
	P_GET_PROPERTY(FTextProperty,Z_Param_Title);
	P_GET_PROPERTY(FTextProperty,Z_Param_Description);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_ContextTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterScoreEvent(ESOTSMissionEventCategory(Z_Param_Category),Z_Param_ScoreDelta,Z_Param_Title,Z_Param_Description,Z_Param_Out_ContextTags);
	P_NATIVE_END;
}
// ********** End Class USOTS_MissionDirectorSubsystem Function RegisterScoreEvent *****************

// ********** Begin Class USOTS_MissionDirectorSubsystem Function RestoreMissionFromSave ***********
struct Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RestoreMissionFromSave_Statics
{
	struct SOTS_MissionDirectorSubsystem_eventRestoreMissionFromSave_Parms
	{
		FSOTS_MissionRuntimeState SavedState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Mission" },
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RestoreMissionFromSave constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SavedState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RestoreMissionFromSave constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RestoreMissionFromSave Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RestoreMissionFromSave_Statics::NewProp_SavedState = { "SavedState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MissionDirectorSubsystem_eventRestoreMissionFromSave_Parms, SavedState), Z_Construct_UScriptStruct_FSOTS_MissionRuntimeState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedState_MetaData), NewProp_SavedState_MetaData) }; // 934224171
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RestoreMissionFromSave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RestoreMissionFromSave_Statics::NewProp_SavedState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RestoreMissionFromSave_Statics::PropPointers) < 2048);
// ********** End Function RestoreMissionFromSave Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RestoreMissionFromSave_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_MissionDirectorSubsystem, nullptr, "RestoreMissionFromSave", 	Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RestoreMissionFromSave_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RestoreMissionFromSave_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RestoreMissionFromSave_Statics::SOTS_MissionDirectorSubsystem_eventRestoreMissionFromSave_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RestoreMissionFromSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RestoreMissionFromSave_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RestoreMissionFromSave_Statics::SOTS_MissionDirectorSubsystem_eventRestoreMissionFromSave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RestoreMissionFromSave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RestoreMissionFromSave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_MissionDirectorSubsystem::execRestoreMissionFromSave)
{
	P_GET_STRUCT_REF(FSOTS_MissionRuntimeState,Z_Param_Out_SavedState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RestoreMissionFromSave(Z_Param_Out_SavedState);
	P_NATIVE_END;
}
// ********** End Class USOTS_MissionDirectorSubsystem Function RestoreMissionFromSave *************

// ********** Begin Class USOTS_MissionDirectorSubsystem Function StartMission *********************
struct Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_StartMission_Statics
{
	struct SOTS_MissionDirectorSubsystem_eventStartMission_Parms
	{
		USOTS_MissionDefinition* MissionDef;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Starts a mission based on a USOTS_MissionDefinition (objectives + stealth rules). */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Starts a mission based on a USOTS_MissionDefinition (objectives + stealth rules)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function StartMission constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MissionDef;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StartMission constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StartMission Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_StartMission_Statics::NewProp_MissionDef = { "MissionDef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MissionDirectorSubsystem_eventStartMission_Parms, MissionDef), Z_Construct_UClass_USOTS_MissionDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_StartMission_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_StartMission_Statics::NewProp_MissionDef,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_StartMission_Statics::PropPointers) < 2048);
// ********** End Function StartMission Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_StartMission_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_MissionDirectorSubsystem, nullptr, "StartMission", 	Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_StartMission_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_StartMission_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_StartMission_Statics::SOTS_MissionDirectorSubsystem_eventStartMission_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_StartMission_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_StartMission_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_StartMission_Statics::SOTS_MissionDirectorSubsystem_eventStartMission_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_StartMission()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_StartMission_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_MissionDirectorSubsystem::execStartMission)
{
	P_GET_OBJECT(USOTS_MissionDefinition,Z_Param_MissionDef);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartMission(Z_Param_MissionDef);
	P_NATIVE_END;
}
// ********** End Class USOTS_MissionDirectorSubsystem Function StartMission ***********************

// ********** Begin Class USOTS_MissionDirectorSubsystem Function StartMissionRun ******************
struct Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_StartMissionRun_Statics
{
	struct SOTS_MissionDirectorSubsystem_eventStartMissionRun_Parms
	{
		FName MissionId;
		FGameplayTag InDifficultyTag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Starts a new mission run. Resets all state and begins logging. */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Starts a new mission run. Resets all state and begins logging." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function StartMissionRun constinit property declarations ***********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_MissionId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InDifficultyTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StartMissionRun constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StartMissionRun Property Definitions **********************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_StartMissionRun_Statics::NewProp_MissionId = { "MissionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MissionDirectorSubsystem_eventStartMissionRun_Parms, MissionId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_StartMissionRun_Statics::NewProp_InDifficultyTag = { "InDifficultyTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MissionDirectorSubsystem_eventStartMissionRun_Parms, InDifficultyTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_StartMissionRun_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_StartMissionRun_Statics::NewProp_MissionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_StartMissionRun_Statics::NewProp_InDifficultyTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_StartMissionRun_Statics::PropPointers) < 2048);
// ********** End Function StartMissionRun Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_StartMissionRun_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_MissionDirectorSubsystem, nullptr, "StartMissionRun", 	Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_StartMissionRun_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_StartMissionRun_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_StartMissionRun_Statics::SOTS_MissionDirectorSubsystem_eventStartMissionRun_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_StartMissionRun_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_StartMissionRun_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_StartMissionRun_Statics::SOTS_MissionDirectorSubsystem_eventStartMissionRun_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_StartMissionRun()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_StartMissionRun_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_MissionDirectorSubsystem::execStartMissionRun)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_MissionId);
	P_GET_STRUCT(FGameplayTag,Z_Param_InDifficultyTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartMissionRun(Z_Param_MissionId,Z_Param_InDifficultyTag);
	P_NATIVE_END;
}
// ********** End Class USOTS_MissionDirectorSubsystem Function StartMissionRun ********************

// ********** Begin Class USOTS_MissionDirectorSubsystem *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_MissionDirectorSubsystem;
UClass* USOTS_MissionDirectorSubsystem::GetPrivateStaticClass()
{
	using TClass = USOTS_MissionDirectorSubsystem;
	if (!Z_Registration_Info_UClass_USOTS_MissionDirectorSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_MissionDirectorSubsystem"),
			Z_Registration_Info_UClass_USOTS_MissionDirectorSubsystem.InnerSingleton,
			StaticRegisterNativesUSOTS_MissionDirectorSubsystem,
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
	return Z_Registration_Info_UClass_USOTS_MissionDirectorSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_MissionDirectorSubsystem_NoRegister()
{
	return USOTS_MissionDirectorSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Central mission orchestrator and scoring/logging subsystem for SOTS.\n *\n * Current architecture:\n * - Data: USOTS_MissionDefinition assets describe mission id, objectives,\n *   stealth constraints, failure conditions, FX tags, and rewards. They are\n *   content-only and reference maps via soft object pointers.\n * - Runtime: USOTS_MissionDirectorSubsystem tracks the active mission state,\n *   objective completion, stealth/alert metrics (via GSM), and a scored event\n *   log for debrief UI and profile saves.\n * - Integration: other systems (GSM, AI perception, KEM, Ability/SkillTree,\n *   FX, Tag manager) report high-level events via tags or explicit calls;\n *   the director reacts by updating objectives, failing/finishing missions,\n *   and triggering FX/rewards, without owning level scripts or AI behavior.\n */" },
#endif
		{ "IncludePath", "SOTS_MissionDirectorSubsystem.h" },
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Central mission orchestrator and scoring/logging subsystem for SOTS.\n\nCurrent architecture:\n- Data: USOTS_MissionDefinition assets describe mission id, objectives,\n  stealth constraints, failure conditions, FX tags, and rewards. They are\n  content-only and reference maps via soft object pointers.\n- Runtime: USOTS_MissionDirectorSubsystem tracks the active mission state,\n  objective completion, stealth/alert metrics (via GSM), and a scored event\n  log for debrief UI and profile saves.\n- Integration: other systems (GSM, AI perception, KEM, Ability/SkillTree,\n  FX, Tag manager) report high-level events via tags or explicit calls;\n  the director reacts by updating objectives, failing/finishing missions,\n  and triggering FX/rewards, without owning level scripts or AI behavior." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMissionActive_MetaData[] = {
		{ "Category", "Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Is a mission currently active?\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is a mission currently active?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMissionId_MetaData[] = {
		{ "Category", "Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current mission id.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current mission id." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentDifficultyTag_MetaData[] = {
		{ "Category", "Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Difficulty tag used for this run.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Difficulty tag used for this run." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MissionStartTimeSeconds_MetaData[] = {
		{ "Category", "Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// World time when the mission started.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "World time when the mission started." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentScore_MetaData[] = {
		{ "Category", "Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Running score.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Running score." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventLog_MetaData[] = {
		{ "Category", "Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Log entries for the active mission.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Log entries for the active mission." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryObjectivesCompleted_MetaData[] = {
		{ "Category", "Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Objective counters.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Objective counters." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionalObjectivesCompleted_MetaData[] = {
		{ "Category", "Mission" },
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnScoreChanged_MetaData[] = {
		{ "Category", "Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Delegates\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegates" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEventLogged_MetaData[] = {
		{ "Category", "Mission" },
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMissionEnded_MetaData[] = {
		{ "Category", "Mission" },
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveMission_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Active authored mission (if any).\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Active authored mission (if any)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MissionState_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SOTS|Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// High-level mission lifecycle state.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "High-level mission lifecycle state." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectiveCompletion_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Objective completion flags keyed by ObjectiveId.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Objective completion flags keyed by ObjectiveId." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectiveFailed_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Objective failure flags keyed by ObjectiveId.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Objective failure flags keyed by ObjectiveId." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedStealthSubsystem_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cached pointer so we can unbind safely on shutdown.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cached pointer so we can unbind safely on shutdown." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentOutcomeTag_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SOTS|Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Outcome + analytics fields used for branching and debrief.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Outcome + analytics fields used for branching and debrief." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StealthScore_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SOTS|Mission" },
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlertsTriggered_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SOTS|Mission" },
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveMissionIdForProfile_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Profile-oriented mirrors of mission progression.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Profile-oriented mirrors of mission progression." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompletedMissionIds_MetaData[] = {
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FailedMissionIds_MetaData[] = {
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastMissionIdForProfile_MetaData[] = {
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastFinalScoreForProfile_MetaData[] = {
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastDurationSecondsForProfile_MetaData[] = {
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLastMissionCompletedForProfile_MetaData[] = {
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLastMissionFailedForProfile_MetaData[] = {
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMissionStarted_MetaData[] = {
		{ "Category", "SOTS|Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mission events (separate from scoring/debrief).\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mission events (separate from scoring/debrief)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMissionCompleted_MetaData[] = {
		{ "Category", "SOTS|Mission" },
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMissionFailed_MetaData[] = {
		{ "Category", "SOTS|Mission" },
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnObjectiveUpdated_MetaData[] = {
		{ "Category", "SOTS|Mission" },
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_MissionDirectorSubsystem constinit property declarations ***********
	static void NewProp_bMissionActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMissionActive;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CurrentMissionId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentDifficultyTag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MissionStartTimeSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentScore;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventLog_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EventLog;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PrimaryObjectivesCompleted;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OptionalObjectivesCompleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnScoreChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEventLogged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMissionEnded;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveMission;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MissionState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MissionState;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ObjectiveCompletion_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ObjectiveCompletion_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ObjectiveCompletion;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ObjectiveFailed_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ObjectiveFailed_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ObjectiveFailed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedStealthSubsystem;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentOutcomeTag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StealthScore;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AlertsTriggered;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActiveMissionIdForProfile;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CompletedMissionIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CompletedMissionIds;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FailedMissionIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FailedMissionIds;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LastMissionIdForProfile;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LastFinalScoreForProfile;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LastDurationSecondsForProfile;
	static void NewProp_bLastMissionCompletedForProfile_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLastMissionCompletedForProfile;
	static void NewProp_bLastMissionFailedForProfile_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLastMissionFailedForProfile;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMissionStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMissionCompleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMissionFailed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnObjectiveUpdated;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USOTS_MissionDirectorSubsystem constinit property declarations *************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CompleteObjectiveByTag"), .Pointer = &USOTS_MissionDirectorSubsystem::execCompleteObjectiveByTag },
		{ .NameUTF8 = UTF8TEXT("EndMissionRun"), .Pointer = &USOTS_MissionDirectorSubsystem::execEndMissionRun },
		{ .NameUTF8 = UTF8TEXT("ExportMissionState"), .Pointer = &USOTS_MissionDirectorSubsystem::execExportMissionState },
		{ .NameUTF8 = UTF8TEXT("FailMission"), .Pointer = &USOTS_MissionDirectorSubsystem::execFailMission },
		{ .NameUTF8 = UTF8TEXT("ForceFailObjective"), .Pointer = &USOTS_MissionDirectorSubsystem::execForceFailObjective },
		{ .NameUTF8 = UTF8TEXT("Get"), .Pointer = &USOTS_MissionDirectorSubsystem::execGet },
		{ .NameUTF8 = UTF8TEXT("GetActiveMissionDefinition"), .Pointer = &USOTS_MissionDirectorSubsystem::execGetActiveMissionDefinition },
		{ .NameUTF8 = UTF8TEXT("GetCurrentMissionObjectives"), .Pointer = &USOTS_MissionDirectorSubsystem::execGetCurrentMissionObjectives },
		{ .NameUTF8 = UTF8TEXT("GetCurrentMissionResult"), .Pointer = &USOTS_MissionDirectorSubsystem::execGetCurrentMissionResult },
		{ .NameUTF8 = UTF8TEXT("GetCurrentMissionSaveState"), .Pointer = &USOTS_MissionDirectorSubsystem::execGetCurrentMissionSaveState },
		{ .NameUTF8 = UTF8TEXT("GetCurrentMissionState"), .Pointer = &USOTS_MissionDirectorSubsystem::execGetCurrentMissionState },
		{ .NameUTF8 = UTF8TEXT("GetCurrentScore"), .Pointer = &USOTS_MissionDirectorSubsystem::execGetCurrentScore },
		{ .NameUTF8 = UTF8TEXT("GetMissionState"), .Pointer = &USOTS_MissionDirectorSubsystem::execGetMissionState },
		{ .NameUTF8 = UTF8TEXT("GetNextMissionIdByOutcome"), .Pointer = &USOTS_MissionDirectorSubsystem::execGetNextMissionIdByOutcome },
		{ .NameUTF8 = UTF8TEXT("HandleExecutionEvent"), .Pointer = &USOTS_MissionDirectorSubsystem::execHandleExecutionEvent },
		{ .NameUTF8 = UTF8TEXT("HandleStealthLevelChanged"), .Pointer = &USOTS_MissionDirectorSubsystem::execHandleStealthLevelChanged },
		{ .NameUTF8 = UTF8TEXT("ImportMissionState"), .Pointer = &USOTS_MissionDirectorSubsystem::execImportMissionState },
		{ .NameUTF8 = UTF8TEXT("IsMissionActive"), .Pointer = &USOTS_MissionDirectorSubsystem::execIsMissionActive },
		{ .NameUTF8 = UTF8TEXT("IsObjectiveCompleted"), .Pointer = &USOTS_MissionDirectorSubsystem::execIsObjectiveCompleted },
		{ .NameUTF8 = UTF8TEXT("NotifyAlertTriggered"), .Pointer = &USOTS_MissionDirectorSubsystem::execNotifyAlertTriggered },
		{ .NameUTF8 = UTF8TEXT("NotifyMissionEvent"), .Pointer = &USOTS_MissionDirectorSubsystem::execNotifyMissionEvent },
		{ .NameUTF8 = UTF8TEXT("RegisterObjectiveCompleted"), .Pointer = &USOTS_MissionDirectorSubsystem::execRegisterObjectiveCompleted },
		{ .NameUTF8 = UTF8TEXT("RegisterScoreEvent"), .Pointer = &USOTS_MissionDirectorSubsystem::execRegisterScoreEvent },
		{ .NameUTF8 = UTF8TEXT("RestoreMissionFromSave"), .Pointer = &USOTS_MissionDirectorSubsystem::execRestoreMissionFromSave },
		{ .NameUTF8 = UTF8TEXT("StartMission"), .Pointer = &USOTS_MissionDirectorSubsystem::execStartMission },
		{ .NameUTF8 = UTF8TEXT("StartMissionRun"), .Pointer = &USOTS_MissionDirectorSubsystem::execStartMissionRun },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_CompleteObjectiveByTag, "CompleteObjectiveByTag" }, // 616407240
		{ &Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_EndMissionRun, "EndMissionRun" }, // 3164857565
		{ &Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_ExportMissionState, "ExportMissionState" }, // 3065477794
		{ &Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_FailMission, "FailMission" }, // 2206802040
		{ &Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_ForceFailObjective, "ForceFailObjective" }, // 3292078392
		{ &Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_Get, "Get" }, // 4284633803
		{ &Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetActiveMissionDefinition, "GetActiveMissionDefinition" }, // 931209512
		{ &Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentMissionObjectives, "GetCurrentMissionObjectives" }, // 546451482
		{ &Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentMissionResult, "GetCurrentMissionResult" }, // 3275340393
		{ &Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentMissionSaveState, "GetCurrentMissionSaveState" }, // 1123400579
		{ &Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentMissionState, "GetCurrentMissionState" }, // 2986587741
		{ &Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetCurrentScore, "GetCurrentScore" }, // 3892839800
		{ &Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetMissionState, "GetMissionState" }, // 809873079
		{ &Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_GetNextMissionIdByOutcome, "GetNextMissionIdByOutcome" }, // 3091651660
		{ &Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_HandleExecutionEvent, "HandleExecutionEvent" }, // 2629636651
		{ &Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_HandleStealthLevelChanged, "HandleStealthLevelChanged" }, // 1900861217
		{ &Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_ImportMissionState, "ImportMissionState" }, // 2930596562
		{ &Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_IsMissionActive, "IsMissionActive" }, // 3173886214
		{ &Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_IsObjectiveCompleted, "IsObjectiveCompleted" }, // 3593468648
		{ &Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_NotifyAlertTriggered, "NotifyAlertTriggered" }, // 3009756062
		{ &Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_NotifyMissionEvent, "NotifyMissionEvent" }, // 1291331158
		{ &Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RegisterObjectiveCompleted, "RegisterObjectiveCompleted" }, // 4209168348
		{ &Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RegisterScoreEvent, "RegisterScoreEvent" }, // 45151316
		{ &Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_RestoreMissionFromSave, "RestoreMissionFromSave" }, // 2973148093
		{ &Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_StartMission, "StartMission" }, // 1099283128
		{ &Z_Construct_UFunction_USOTS_MissionDirectorSubsystem_StartMissionRun, "StartMissionRun" }, // 3080397172
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_MissionDirectorSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics

// ********** Begin Class USOTS_MissionDirectorSubsystem Property Definitions **********************
void Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_bMissionActive_SetBit(void* Obj)
{
	((USOTS_MissionDirectorSubsystem*)Obj)->bMissionActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_bMissionActive = { "bMissionActive", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USOTS_MissionDirectorSubsystem), &Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_bMissionActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMissionActive_MetaData), NewProp_bMissionActive_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_CurrentMissionId = { "CurrentMissionId", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_MissionDirectorSubsystem, CurrentMissionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMissionId_MetaData), NewProp_CurrentMissionId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_CurrentDifficultyTag = { "CurrentDifficultyTag", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_MissionDirectorSubsystem, CurrentDifficultyTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentDifficultyTag_MetaData), NewProp_CurrentDifficultyTag_MetaData) }; // 517357616
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_MissionStartTimeSeconds = { "MissionStartTimeSeconds", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_MissionDirectorSubsystem, MissionStartTimeSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MissionStartTimeSeconds_MetaData), NewProp_MissionStartTimeSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_CurrentScore = { "CurrentScore", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_MissionDirectorSubsystem, CurrentScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentScore_MetaData), NewProp_CurrentScore_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_EventLog_Inner = { "EventLog", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSOTS_MissionEventLogEntry, METADATA_PARAMS(0, nullptr) }; // 2540198091
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_EventLog = { "EventLog", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_MissionDirectorSubsystem, EventLog), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventLog_MetaData), NewProp_EventLog_MetaData) }; // 2540198091
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_PrimaryObjectivesCompleted = { "PrimaryObjectivesCompleted", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_MissionDirectorSubsystem, PrimaryObjectivesCompleted), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryObjectivesCompleted_MetaData), NewProp_PrimaryObjectivesCompleted_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_OptionalObjectivesCompleted = { "OptionalObjectivesCompleted", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_MissionDirectorSubsystem, OptionalObjectivesCompleted), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionalObjectivesCompleted_MetaData), NewProp_OptionalObjectivesCompleted_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_OnScoreChanged = { "OnScoreChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_MissionDirectorSubsystem, OnScoreChanged), Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionScoreChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnScoreChanged_MetaData), NewProp_OnScoreChanged_MetaData) }; // 2278152336
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_OnEventLogged = { "OnEventLogged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_MissionDirectorSubsystem, OnEventLogged), Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionEventLoggedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEventLogged_MetaData), NewProp_OnEventLogged_MetaData) }; // 1372761502
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_OnMissionEnded = { "OnMissionEnded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_MissionDirectorSubsystem, OnMissionEnded), Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionEndedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMissionEnded_MetaData), NewProp_OnMissionEnded_MetaData) }; // 3978708638
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_ActiveMission = { "ActiveMission", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_MissionDirectorSubsystem, ActiveMission), Z_Construct_UClass_USOTS_MissionDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveMission_MetaData), NewProp_ActiveMission_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_MissionState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_MissionState = { "MissionState", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_MissionDirectorSubsystem, MissionState), Z_Construct_UEnum_SOTS_MissionDirector_ESOTS_MissionState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MissionState_MetaData), NewProp_MissionState_MetaData) }; // 3018231392
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_ObjectiveCompletion_ValueProp = { "ObjectiveCompletion", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_ObjectiveCompletion_Key_KeyProp = { "ObjectiveCompletion_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_ObjectiveCompletion = { "ObjectiveCompletion", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_MissionDirectorSubsystem, ObjectiveCompletion), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectiveCompletion_MetaData), NewProp_ObjectiveCompletion_MetaData) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_ObjectiveFailed_ValueProp = { "ObjectiveFailed", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_ObjectiveFailed_Key_KeyProp = { "ObjectiveFailed_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_ObjectiveFailed = { "ObjectiveFailed", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_MissionDirectorSubsystem, ObjectiveFailed), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectiveFailed_MetaData), NewProp_ObjectiveFailed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_CachedStealthSubsystem = { "CachedStealthSubsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_MissionDirectorSubsystem, CachedStealthSubsystem), Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedStealthSubsystem_MetaData), NewProp_CachedStealthSubsystem_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_CurrentOutcomeTag = { "CurrentOutcomeTag", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_MissionDirectorSubsystem, CurrentOutcomeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentOutcomeTag_MetaData), NewProp_CurrentOutcomeTag_MetaData) }; // 517357616
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_StealthScore = { "StealthScore", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_MissionDirectorSubsystem, StealthScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StealthScore_MetaData), NewProp_StealthScore_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_AlertsTriggered = { "AlertsTriggered", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_MissionDirectorSubsystem, AlertsTriggered), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlertsTriggered_MetaData), NewProp_AlertsTriggered_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_ActiveMissionIdForProfile = { "ActiveMissionIdForProfile", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_MissionDirectorSubsystem, ActiveMissionIdForProfile), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveMissionIdForProfile_MetaData), NewProp_ActiveMissionIdForProfile_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_CompletedMissionIds_Inner = { "CompletedMissionIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_CompletedMissionIds = { "CompletedMissionIds", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_MissionDirectorSubsystem, CompletedMissionIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompletedMissionIds_MetaData), NewProp_CompletedMissionIds_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_FailedMissionIds_Inner = { "FailedMissionIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_FailedMissionIds = { "FailedMissionIds", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_MissionDirectorSubsystem, FailedMissionIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FailedMissionIds_MetaData), NewProp_FailedMissionIds_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_LastMissionIdForProfile = { "LastMissionIdForProfile", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_MissionDirectorSubsystem, LastMissionIdForProfile), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastMissionIdForProfile_MetaData), NewProp_LastMissionIdForProfile_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_LastFinalScoreForProfile = { "LastFinalScoreForProfile", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_MissionDirectorSubsystem, LastFinalScoreForProfile), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastFinalScoreForProfile_MetaData), NewProp_LastFinalScoreForProfile_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_LastDurationSecondsForProfile = { "LastDurationSecondsForProfile", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_MissionDirectorSubsystem, LastDurationSecondsForProfile), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastDurationSecondsForProfile_MetaData), NewProp_LastDurationSecondsForProfile_MetaData) };
void Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_bLastMissionCompletedForProfile_SetBit(void* Obj)
{
	((USOTS_MissionDirectorSubsystem*)Obj)->bLastMissionCompletedForProfile = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_bLastMissionCompletedForProfile = { "bLastMissionCompletedForProfile", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USOTS_MissionDirectorSubsystem), &Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_bLastMissionCompletedForProfile_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLastMissionCompletedForProfile_MetaData), NewProp_bLastMissionCompletedForProfile_MetaData) };
void Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_bLastMissionFailedForProfile_SetBit(void* Obj)
{
	((USOTS_MissionDirectorSubsystem*)Obj)->bLastMissionFailedForProfile = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_bLastMissionFailedForProfile = { "bLastMissionFailedForProfile", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USOTS_MissionDirectorSubsystem), &Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_bLastMissionFailedForProfile_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLastMissionFailedForProfile_MetaData), NewProp_bLastMissionFailedForProfile_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_OnMissionStarted = { "OnMissionStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_MissionDirectorSubsystem, OnMissionStarted), Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionSimpleEventSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMissionStarted_MetaData), NewProp_OnMissionStarted_MetaData) }; // 3904256621
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_OnMissionCompleted = { "OnMissionCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_MissionDirectorSubsystem, OnMissionCompleted), Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionSimpleEventSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMissionCompleted_MetaData), NewProp_OnMissionCompleted_MetaData) }; // 3904256621
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_OnMissionFailed = { "OnMissionFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_MissionDirectorSubsystem, OnMissionFailed), Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionSimpleEventSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMissionFailed_MetaData), NewProp_OnMissionFailed_MetaData) }; // 3904256621
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_OnObjectiveUpdated = { "OnObjectiveUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_MissionDirectorSubsystem, OnObjectiveUpdated), Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_OnObjectiveUpdatedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnObjectiveUpdated_MetaData), NewProp_OnObjectiveUpdated_MetaData) }; // 1576590202
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_bMissionActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_CurrentMissionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_CurrentDifficultyTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_MissionStartTimeSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_CurrentScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_EventLog_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_EventLog,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_PrimaryObjectivesCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_OptionalObjectivesCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_OnScoreChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_OnEventLogged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_OnMissionEnded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_ActiveMission,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_MissionState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_MissionState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_ObjectiveCompletion_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_ObjectiveCompletion_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_ObjectiveCompletion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_ObjectiveFailed_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_ObjectiveFailed_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_ObjectiveFailed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_CachedStealthSubsystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_CurrentOutcomeTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_StealthScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_AlertsTriggered,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_ActiveMissionIdForProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_CompletedMissionIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_CompletedMissionIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_FailedMissionIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_FailedMissionIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_LastMissionIdForProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_LastFinalScoreForProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_LastDurationSecondsForProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_bLastMissionCompletedForProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_bLastMissionFailedForProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_OnMissionStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_OnMissionCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_OnMissionFailed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::NewProp_OnObjectiveUpdated,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::PropPointers) < 2048);
// ********** End Class USOTS_MissionDirectorSubsystem Property Definitions ************************
UObject* (*const Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_MissionDirector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::ClassParams = {
	&USOTS_MissionDirectorSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::Class_MetaDataParams)
};
void USOTS_MissionDirectorSubsystem::StaticRegisterNativesUSOTS_MissionDirectorSubsystem()
{
	UClass* Class = USOTS_MissionDirectorSubsystem::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::Funcs));
}
UClass* Z_Construct_UClass_USOTS_MissionDirectorSubsystem()
{
	if (!Z_Registration_Info_UClass_USOTS_MissionDirectorSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_MissionDirectorSubsystem.OuterSingleton, Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_MissionDirectorSubsystem.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_MissionDirectorSubsystem);
USOTS_MissionDirectorSubsystem::~USOTS_MissionDirectorSubsystem() {}
// ********** End Class USOTS_MissionDirectorSubsystem *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MissionDirector_Source_SOTS_MissionDirector_Public_SOTS_MissionDirectorSubsystem_h__Script_SOTS_MissionDirector_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_MissionDirectorSubsystem, USOTS_MissionDirectorSubsystem::StaticClass, TEXT("USOTS_MissionDirectorSubsystem"), &Z_Registration_Info_UClass_USOTS_MissionDirectorSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_MissionDirectorSubsystem), 3888698747U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MissionDirector_Source_SOTS_MissionDirector_Public_SOTS_MissionDirectorSubsystem_h__Script_SOTS_MissionDirector_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MissionDirector_Source_SOTS_MissionDirector_Public_SOTS_MissionDirectorSubsystem_h__Script_SOTS_MissionDirector_3106568359{
	TEXT("/Script/SOTS_MissionDirector"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MissionDirector_Source_SOTS_MissionDirector_Public_SOTS_MissionDirectorSubsystem_h__Script_SOTS_MissionDirector_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MissionDirector_Source_SOTS_MissionDirector_Public_SOTS_MissionDirectorSubsystem_h__Script_SOTS_MissionDirector_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
