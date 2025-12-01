// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SOTS_KEM_ManagerSubsystem.h"
#include "Engine/GameInstance.h"
#include "GameplayTagContainer.h"
#include "SOTS_KEM_Types.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_KEM_ManagerSubsystem() {}

// ********** Begin Cross Module References ********************************************************
CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimSceneAsset_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
OMNITRACE_API UClass* Z_Construct_UClass_USOTS_OmniTraceKEMPresetLibrary_NoRegister();
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_USOTS_AbilityRequirementLibraryAsset_NoRegister();
SOTS_KILLEXECUTIONMANAGER_API UClass* Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_NoRegister();
SOTS_KILLEXECUTIONMANAGER_API UClass* Z_Construct_UClass_USOTS_KEM_ExecutionRegistryConfig_NoRegister();
SOTS_KILLEXECUTIONMANAGER_API UClass* Z_Construct_UClass_USOTS_KEMManagerSubsystem();
SOTS_KILLEXECUTIONMANAGER_API UClass* Z_Construct_UClass_USOTS_KEMManagerSubsystem_NoRegister();
SOTS_KILLEXECUTIONMANAGER_API UEnum* Z_Construct_UEnum_SOTS_KillExecutionManager_EKEMDebugVerbosity();
SOTS_KILLEXECUTIONMANAGER_API UEnum* Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_ExecutionFamily();
SOTS_KILLEXECUTIONMANAGER_API UEnum* Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEMState();
SOTS_KILLEXECUTIONMANAGER_API UFunction* Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_AISExecutionChosenSignature__DelegateSignature();
SOTS_KILLEXECUTIONMANAGER_API UFunction* Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_CASExecutionChosenSignature__DelegateSignature();
SOTS_KILLEXECUTIONMANAGER_API UFunction* Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_LevelSequenceExecutionChosenSignature__DelegateSignature();
SOTS_KILLEXECUTIONMANAGER_API UFunction* Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_OnExecutionEvent__DelegateSignature();
SOTS_KILLEXECUTIONMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_ExecutionContext();
SOTS_KILLEXECUTIONMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_KEM_ExecutionEvent();
SOTS_KILLEXECUTIONMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_KEMAnchorDebugInfo();
SOTS_KILLEXECUTIONMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_KEMCandidateDebugRecord();
SOTS_KILLEXECUTIONMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_KEMDebugRecord();
SOTS_KILLEXECUTIONMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_KEMDecisionSnapshot();
UPackage* Z_Construct_UPackage__Script_SOTS_KillExecutionManager();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FSOTS_KEMAnchorDebugInfo ******************************************
struct Z_Construct_UScriptStruct_FSOTS_KEMAnchorDebugInfo_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_KEMAnchorDebugInfo); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_KEMAnchorDebugInfo); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_ManagerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnchorName_MetaData[] = {
		{ "Category", "SOTS|KEM|Debug" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_ManagerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionTag_MetaData[] = {
		{ "Category", "SOTS|KEM|Debug" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_ManagerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionFamily_MetaData[] = {
		{ "Category", "SOTS|KEM|Debug" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_ManagerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseRadius_MetaData[] = {
		{ "Category", "SOTS|KEM|Debug" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_ManagerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "SOTS|KEM|Debug" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_ManagerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Forward_MetaData[] = {
		{ "Category", "SOTS|KEM|Debug" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_ManagerSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_KEMAnchorDebugInfo constinit property declarations **********
	static const UECodeGen_Private::FStrPropertyParams NewProp_AnchorName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PositionTag;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ExecutionFamily_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ExecutionFamily;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UseRadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Forward;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_KEMAnchorDebugInfo constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_KEMAnchorDebugInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_KEMAnchorDebugInfo_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_KEMAnchorDebugInfo;
class UScriptStruct* FSOTS_KEMAnchorDebugInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_KEMAnchorDebugInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_KEMAnchorDebugInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_KEMAnchorDebugInfo, (UObject*)Z_Construct_UPackage__Script_SOTS_KillExecutionManager(), TEXT("SOTS_KEMAnchorDebugInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_KEMAnchorDebugInfo.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_KEMAnchorDebugInfo Property Definitions *********************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSOTS_KEMAnchorDebugInfo_Statics::NewProp_AnchorName = { "AnchorName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEMAnchorDebugInfo, AnchorName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnchorName_MetaData), NewProp_AnchorName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_KEMAnchorDebugInfo_Statics::NewProp_PositionTag = { "PositionTag", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEMAnchorDebugInfo, PositionTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionTag_MetaData), NewProp_PositionTag_MetaData) }; // 517357616
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSOTS_KEMAnchorDebugInfo_Statics::NewProp_ExecutionFamily_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSOTS_KEMAnchorDebugInfo_Statics::NewProp_ExecutionFamily = { "ExecutionFamily", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEMAnchorDebugInfo, ExecutionFamily), Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_ExecutionFamily, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionFamily_MetaData), NewProp_ExecutionFamily_MetaData) }; // 2142969268
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_KEMAnchorDebugInfo_Statics::NewProp_UseRadius = { "UseRadius", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEMAnchorDebugInfo, UseRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseRadius_MetaData), NewProp_UseRadius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_KEMAnchorDebugInfo_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEMAnchorDebugInfo, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_KEMAnchorDebugInfo_Statics::NewProp_Forward = { "Forward", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEMAnchorDebugInfo, Forward), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Forward_MetaData), NewProp_Forward_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_KEMAnchorDebugInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEMAnchorDebugInfo_Statics::NewProp_AnchorName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEMAnchorDebugInfo_Statics::NewProp_PositionTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEMAnchorDebugInfo_Statics::NewProp_ExecutionFamily_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEMAnchorDebugInfo_Statics::NewProp_ExecutionFamily,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEMAnchorDebugInfo_Statics::NewProp_UseRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEMAnchorDebugInfo_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEMAnchorDebugInfo_Statics::NewProp_Forward,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_KEMAnchorDebugInfo_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_KEMAnchorDebugInfo Property Definitions ***********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_KEMAnchorDebugInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_KillExecutionManager,
	nullptr,
	&NewStructOps,
	"SOTS_KEMAnchorDebugInfo",
	Z_Construct_UScriptStruct_FSOTS_KEMAnchorDebugInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_KEMAnchorDebugInfo_Statics::PropPointers),
	sizeof(FSOTS_KEMAnchorDebugInfo),
	alignof(FSOTS_KEMAnchorDebugInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_KEMAnchorDebugInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_KEMAnchorDebugInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_KEMAnchorDebugInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_KEMAnchorDebugInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_KEMAnchorDebugInfo.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_KEMAnchorDebugInfo_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_KEMAnchorDebugInfo.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_KEMAnchorDebugInfo ********************************************

// ********** Begin Enum EKEMDebugVerbosity ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EKEMDebugVerbosity;
static UEnum* EKEMDebugVerbosity_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EKEMDebugVerbosity.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EKEMDebugVerbosity.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SOTS_KillExecutionManager_EKEMDebugVerbosity, (UObject*)Z_Construct_UPackage__Script_SOTS_KillExecutionManager(), TEXT("EKEMDebugVerbosity"));
	}
	return Z_Registration_Info_UEnum_EKEMDebugVerbosity.OuterSingleton;
}
template<> SOTS_KILLEXECUTIONMANAGER_NON_ATTRIBUTED_API UEnum* StaticEnum<EKEMDebugVerbosity>()
{
	return EKEMDebugVerbosity_StaticEnum();
}
struct Z_Construct_UEnum_SOTS_KillExecutionManager_EKEMDebugVerbosity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Basic.DisplayName", "Basic" },
		{ "Basic.Name", "EKEMDebugVerbosity::Basic" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_ManagerSubsystem.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EKEMDebugVerbosity::None" },
		{ "Verbose.DisplayName", "Verbose" },
		{ "Verbose.Name", "EKEMDebugVerbosity::Verbose" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EKEMDebugVerbosity::None", (int64)EKEMDebugVerbosity::None },
		{ "EKEMDebugVerbosity::Basic", (int64)EKEMDebugVerbosity::Basic },
		{ "EKEMDebugVerbosity::Verbose", (int64)EKEMDebugVerbosity::Verbose },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SOTS_KillExecutionManager_EKEMDebugVerbosity_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SOTS_KillExecutionManager_EKEMDebugVerbosity_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SOTS_KillExecutionManager,
	nullptr,
	"EKEMDebugVerbosity",
	"EKEMDebugVerbosity",
	Z_Construct_UEnum_SOTS_KillExecutionManager_EKEMDebugVerbosity_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SOTS_KillExecutionManager_EKEMDebugVerbosity_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SOTS_KillExecutionManager_EKEMDebugVerbosity_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SOTS_KillExecutionManager_EKEMDebugVerbosity_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SOTS_KillExecutionManager_EKEMDebugVerbosity()
{
	if (!Z_Registration_Info_UEnum_EKEMDebugVerbosity.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EKEMDebugVerbosity.InnerSingleton, Z_Construct_UEnum_SOTS_KillExecutionManager_EKEMDebugVerbosity_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EKEMDebugVerbosity.InnerSingleton;
}
// ********** End Enum EKEMDebugVerbosity **********************************************************

// ********** Begin Delegate FSOTS_OnExecutionEvent ************************************************
struct Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_OnExecutionEvent__DelegateSignature_Statics
{
	struct _Script_SOTS_KillExecutionManager_eventSOTS_OnExecutionEvent_Parms
	{
		FSOTS_KEM_ExecutionEvent Event;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SOTS_KEM_ManagerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FSOTS_OnExecutionEvent constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Event;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FSOTS_OnExecutionEvent constinit property declarations ******************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FSOTS_OnExecutionEvent Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_OnExecutionEvent__DelegateSignature_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SOTS_KillExecutionManager_eventSOTS_OnExecutionEvent_Parms, Event), Z_Construct_UScriptStruct_FSOTS_KEM_ExecutionEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Event_MetaData), NewProp_Event_MetaData) }; // 4193474717
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_OnExecutionEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_OnExecutionEvent__DelegateSignature_Statics::NewProp_Event,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_OnExecutionEvent__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FSOTS_OnExecutionEvent Property Definitions *****************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_OnExecutionEvent__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SOTS_KillExecutionManager, nullptr, "SOTS_OnExecutionEvent__DelegateSignature", 	Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_OnExecutionEvent__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_OnExecutionEvent__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_OnExecutionEvent__DelegateSignature_Statics::_Script_SOTS_KillExecutionManager_eventSOTS_OnExecutionEvent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_OnExecutionEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_OnExecutionEvent__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_OnExecutionEvent__DelegateSignature_Statics::_Script_SOTS_KillExecutionManager_eventSOTS_OnExecutionEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_OnExecutionEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_OnExecutionEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSOTS_OnExecutionEvent_DelegateWrapper(const FMulticastScriptDelegate& SOTS_OnExecutionEvent, FSOTS_KEM_ExecutionEvent const& Event)
{
	struct _Script_SOTS_KillExecutionManager_eventSOTS_OnExecutionEvent_Parms
	{
		FSOTS_KEM_ExecutionEvent Event;
	};
	_Script_SOTS_KillExecutionManager_eventSOTS_OnExecutionEvent_Parms Parms;
	Parms.Event=Event;
	SOTS_OnExecutionEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FSOTS_OnExecutionEvent **************************************************

// ********** Begin Delegate FSOTS_KEM_CASExecutionChosenSignature *********************************
struct Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_CASExecutionChosenSignature__DelegateSignature_Statics
{
	struct _Script_SOTS_KillExecutionManager_eventSOTS_KEM_CASExecutionChosenSignature_Parms
	{
		USOTS_KEM_ExecutionDefinition* ExecutionDef;
		UContextualAnimSceneAsset* Scene;
		AActor* Instigator;
		AActor* Target;
		FName SectionName;
		FName InstigatorRole;
		FName TargetRole;
		FTransform InstigatorWarpTarget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SOTS_KEM_ManagerSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FSOTS_KEM_CASExecutionChosenSignature constinit property declarations *
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExecutionDef;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Scene;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SectionName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InstigatorRole;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TargetRole;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstigatorWarpTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FSOTS_KEM_CASExecutionChosenSignature constinit property declarations ***
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FSOTS_KEM_CASExecutionChosenSignature Property Definitions ************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_CASExecutionChosenSignature__DelegateSignature_Statics::NewProp_ExecutionDef = { "ExecutionDef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SOTS_KillExecutionManager_eventSOTS_KEM_CASExecutionChosenSignature_Parms, ExecutionDef), Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_CASExecutionChosenSignature__DelegateSignature_Statics::NewProp_Scene = { "Scene", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SOTS_KillExecutionManager_eventSOTS_KEM_CASExecutionChosenSignature_Parms, Scene), Z_Construct_UClass_UContextualAnimSceneAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_CASExecutionChosenSignature__DelegateSignature_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SOTS_KillExecutionManager_eventSOTS_KEM_CASExecutionChosenSignature_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_CASExecutionChosenSignature__DelegateSignature_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SOTS_KillExecutionManager_eventSOTS_KEM_CASExecutionChosenSignature_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_CASExecutionChosenSignature__DelegateSignature_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SOTS_KillExecutionManager_eventSOTS_KEM_CASExecutionChosenSignature_Parms, SectionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_CASExecutionChosenSignature__DelegateSignature_Statics::NewProp_InstigatorRole = { "InstigatorRole", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SOTS_KillExecutionManager_eventSOTS_KEM_CASExecutionChosenSignature_Parms, InstigatorRole), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_CASExecutionChosenSignature__DelegateSignature_Statics::NewProp_TargetRole = { "TargetRole", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SOTS_KillExecutionManager_eventSOTS_KEM_CASExecutionChosenSignature_Parms, TargetRole), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_CASExecutionChosenSignature__DelegateSignature_Statics::NewProp_InstigatorWarpTarget = { "InstigatorWarpTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SOTS_KillExecutionManager_eventSOTS_KEM_CASExecutionChosenSignature_Parms, InstigatorWarpTarget), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_CASExecutionChosenSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_CASExecutionChosenSignature__DelegateSignature_Statics::NewProp_ExecutionDef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_CASExecutionChosenSignature__DelegateSignature_Statics::NewProp_Scene,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_CASExecutionChosenSignature__DelegateSignature_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_CASExecutionChosenSignature__DelegateSignature_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_CASExecutionChosenSignature__DelegateSignature_Statics::NewProp_SectionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_CASExecutionChosenSignature__DelegateSignature_Statics::NewProp_InstigatorRole,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_CASExecutionChosenSignature__DelegateSignature_Statics::NewProp_TargetRole,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_CASExecutionChosenSignature__DelegateSignature_Statics::NewProp_InstigatorWarpTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_CASExecutionChosenSignature__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FSOTS_KEM_CASExecutionChosenSignature Property Definitions **************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_CASExecutionChosenSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SOTS_KillExecutionManager, nullptr, "SOTS_KEM_CASExecutionChosenSignature__DelegateSignature", 	Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_CASExecutionChosenSignature__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_CASExecutionChosenSignature__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_CASExecutionChosenSignature__DelegateSignature_Statics::_Script_SOTS_KillExecutionManager_eventSOTS_KEM_CASExecutionChosenSignature_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_CASExecutionChosenSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_CASExecutionChosenSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_CASExecutionChosenSignature__DelegateSignature_Statics::_Script_SOTS_KillExecutionManager_eventSOTS_KEM_CASExecutionChosenSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_CASExecutionChosenSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_CASExecutionChosenSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSOTS_KEM_CASExecutionChosenSignature_DelegateWrapper(const FMulticastScriptDelegate& SOTS_KEM_CASExecutionChosenSignature, USOTS_KEM_ExecutionDefinition* ExecutionDef, UContextualAnimSceneAsset* Scene, AActor* Instigator, AActor* Target, FName SectionName, FName InstigatorRole, FName TargetRole, FTransform InstigatorWarpTarget)
{
	struct _Script_SOTS_KillExecutionManager_eventSOTS_KEM_CASExecutionChosenSignature_Parms
	{
		USOTS_KEM_ExecutionDefinition* ExecutionDef;
		UContextualAnimSceneAsset* Scene;
		AActor* Instigator;
		AActor* Target;
		FName SectionName;
		FName InstigatorRole;
		FName TargetRole;
		FTransform InstigatorWarpTarget;
	};
	_Script_SOTS_KillExecutionManager_eventSOTS_KEM_CASExecutionChosenSignature_Parms Parms;
	Parms.ExecutionDef=ExecutionDef;
	Parms.Scene=Scene;
	Parms.Instigator=Instigator;
	Parms.Target=Target;
	Parms.SectionName=SectionName;
	Parms.InstigatorRole=InstigatorRole;
	Parms.TargetRole=TargetRole;
	Parms.InstigatorWarpTarget=InstigatorWarpTarget;
	SOTS_KEM_CASExecutionChosenSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FSOTS_KEM_CASExecutionChosenSignature ***********************************

// ********** Begin Delegate FSOTS_KEM_LevelSequenceExecutionChosenSignature ***********************
struct Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_LevelSequenceExecutionChosenSignature__DelegateSignature_Statics
{
	struct _Script_SOTS_KillExecutionManager_eventSOTS_KEM_LevelSequenceExecutionChosenSignature_Parms
	{
		USOTS_KEM_ExecutionDefinition* ExecutionDef;
		AActor* Instigator;
		AActor* Target;
		FSOTS_ExecutionContext Context;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SOTS_KEM_ManagerSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FSOTS_KEM_LevelSequenceExecutionChosenSignature constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExecutionDef;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FSOTS_KEM_LevelSequenceExecutionChosenSignature constinit property declarations 
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FSOTS_KEM_LevelSequenceExecutionChosenSignature Property Definitions **
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_LevelSequenceExecutionChosenSignature__DelegateSignature_Statics::NewProp_ExecutionDef = { "ExecutionDef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SOTS_KillExecutionManager_eventSOTS_KEM_LevelSequenceExecutionChosenSignature_Parms, ExecutionDef), Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_LevelSequenceExecutionChosenSignature__DelegateSignature_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SOTS_KillExecutionManager_eventSOTS_KEM_LevelSequenceExecutionChosenSignature_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_LevelSequenceExecutionChosenSignature__DelegateSignature_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SOTS_KillExecutionManager_eventSOTS_KEM_LevelSequenceExecutionChosenSignature_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_LevelSequenceExecutionChosenSignature__DelegateSignature_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SOTS_KillExecutionManager_eventSOTS_KEM_LevelSequenceExecutionChosenSignature_Parms, Context), Z_Construct_UScriptStruct_FSOTS_ExecutionContext, METADATA_PARAMS(0, nullptr) }; // 3760104617
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_LevelSequenceExecutionChosenSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_LevelSequenceExecutionChosenSignature__DelegateSignature_Statics::NewProp_ExecutionDef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_LevelSequenceExecutionChosenSignature__DelegateSignature_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_LevelSequenceExecutionChosenSignature__DelegateSignature_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_LevelSequenceExecutionChosenSignature__DelegateSignature_Statics::NewProp_Context,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_LevelSequenceExecutionChosenSignature__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FSOTS_KEM_LevelSequenceExecutionChosenSignature Property Definitions ****
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_LevelSequenceExecutionChosenSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SOTS_KillExecutionManager, nullptr, "SOTS_KEM_LevelSequenceExecutionChosenSignature__DelegateSignature", 	Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_LevelSequenceExecutionChosenSignature__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_LevelSequenceExecutionChosenSignature__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_LevelSequenceExecutionChosenSignature__DelegateSignature_Statics::_Script_SOTS_KillExecutionManager_eventSOTS_KEM_LevelSequenceExecutionChosenSignature_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_LevelSequenceExecutionChosenSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_LevelSequenceExecutionChosenSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_LevelSequenceExecutionChosenSignature__DelegateSignature_Statics::_Script_SOTS_KillExecutionManager_eventSOTS_KEM_LevelSequenceExecutionChosenSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_LevelSequenceExecutionChosenSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_LevelSequenceExecutionChosenSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSOTS_KEM_LevelSequenceExecutionChosenSignature_DelegateWrapper(const FMulticastScriptDelegate& SOTS_KEM_LevelSequenceExecutionChosenSignature, USOTS_KEM_ExecutionDefinition* ExecutionDef, AActor* Instigator, AActor* Target, FSOTS_ExecutionContext Context)
{
	struct _Script_SOTS_KillExecutionManager_eventSOTS_KEM_LevelSequenceExecutionChosenSignature_Parms
	{
		USOTS_KEM_ExecutionDefinition* ExecutionDef;
		AActor* Instigator;
		AActor* Target;
		FSOTS_ExecutionContext Context;
	};
	_Script_SOTS_KillExecutionManager_eventSOTS_KEM_LevelSequenceExecutionChosenSignature_Parms Parms;
	Parms.ExecutionDef=ExecutionDef;
	Parms.Instigator=Instigator;
	Parms.Target=Target;
	Parms.Context=Context;
	SOTS_KEM_LevelSequenceExecutionChosenSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FSOTS_KEM_LevelSequenceExecutionChosenSignature *************************

// ********** Begin Delegate FSOTS_KEM_AISExecutionChosenSignature *********************************
struct Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_AISExecutionChosenSignature__DelegateSignature_Statics
{
	struct _Script_SOTS_KillExecutionManager_eventSOTS_KEM_AISExecutionChosenSignature_Parms
	{
		USOTS_KEM_ExecutionDefinition* ExecutionDef;
		AActor* Instigator;
		AActor* Target;
		FSOTS_ExecutionContext Context;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SOTS_KEM_ManagerSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FSOTS_KEM_AISExecutionChosenSignature constinit property declarations *
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExecutionDef;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FSOTS_KEM_AISExecutionChosenSignature constinit property declarations ***
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FSOTS_KEM_AISExecutionChosenSignature Property Definitions ************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_AISExecutionChosenSignature__DelegateSignature_Statics::NewProp_ExecutionDef = { "ExecutionDef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SOTS_KillExecutionManager_eventSOTS_KEM_AISExecutionChosenSignature_Parms, ExecutionDef), Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_AISExecutionChosenSignature__DelegateSignature_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SOTS_KillExecutionManager_eventSOTS_KEM_AISExecutionChosenSignature_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_AISExecutionChosenSignature__DelegateSignature_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SOTS_KillExecutionManager_eventSOTS_KEM_AISExecutionChosenSignature_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_AISExecutionChosenSignature__DelegateSignature_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SOTS_KillExecutionManager_eventSOTS_KEM_AISExecutionChosenSignature_Parms, Context), Z_Construct_UScriptStruct_FSOTS_ExecutionContext, METADATA_PARAMS(0, nullptr) }; // 3760104617
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_AISExecutionChosenSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_AISExecutionChosenSignature__DelegateSignature_Statics::NewProp_ExecutionDef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_AISExecutionChosenSignature__DelegateSignature_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_AISExecutionChosenSignature__DelegateSignature_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_AISExecutionChosenSignature__DelegateSignature_Statics::NewProp_Context,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_AISExecutionChosenSignature__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FSOTS_KEM_AISExecutionChosenSignature Property Definitions **************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_AISExecutionChosenSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SOTS_KillExecutionManager, nullptr, "SOTS_KEM_AISExecutionChosenSignature__DelegateSignature", 	Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_AISExecutionChosenSignature__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_AISExecutionChosenSignature__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_AISExecutionChosenSignature__DelegateSignature_Statics::_Script_SOTS_KillExecutionManager_eventSOTS_KEM_AISExecutionChosenSignature_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_AISExecutionChosenSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_AISExecutionChosenSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_AISExecutionChosenSignature__DelegateSignature_Statics::_Script_SOTS_KillExecutionManager_eventSOTS_KEM_AISExecutionChosenSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_AISExecutionChosenSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_AISExecutionChosenSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSOTS_KEM_AISExecutionChosenSignature_DelegateWrapper(const FMulticastScriptDelegate& SOTS_KEM_AISExecutionChosenSignature, USOTS_KEM_ExecutionDefinition* ExecutionDef, AActor* Instigator, AActor* Target, FSOTS_ExecutionContext Context)
{
	struct _Script_SOTS_KillExecutionManager_eventSOTS_KEM_AISExecutionChosenSignature_Parms
	{
		USOTS_KEM_ExecutionDefinition* ExecutionDef;
		AActor* Instigator;
		AActor* Target;
		FSOTS_ExecutionContext Context;
	};
	_Script_SOTS_KillExecutionManager_eventSOTS_KEM_AISExecutionChosenSignature_Parms Parms;
	Parms.ExecutionDef=ExecutionDef;
	Parms.Instigator=Instigator;
	Parms.Target=Target;
	Parms.Context=Context;
	SOTS_KEM_AISExecutionChosenSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FSOTS_KEM_AISExecutionChosenSignature ***********************************

// ********** Begin Class USOTS_KEMManagerSubsystem Function DrawAnchorDebugVisualization **********
struct Z_Construct_UFunction_USOTS_KEMManagerSubsystem_DrawAnchorDebugVisualization_Statics
{
	struct SOTS_KEMManagerSubsystem_eventDrawAnchorDebugVisualization_Parms
	{
		AActor* CenterActor;
		float Radius;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|KEM|Debug" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_ManagerSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DrawAnchorDebugVisualization constinit property declarations **********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CenterActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DrawAnchorDebugVisualization constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DrawAnchorDebugVisualization Property Definitions *********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_DrawAnchorDebugVisualization_Statics::NewProp_CenterActor = { "CenterActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEMManagerSubsystem_eventDrawAnchorDebugVisualization_Parms, CenterActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_DrawAnchorDebugVisualization_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEMManagerSubsystem_eventDrawAnchorDebugVisualization_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_KEMManagerSubsystem_DrawAnchorDebugVisualization_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEMManagerSubsystem_DrawAnchorDebugVisualization_Statics::NewProp_CenterActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEMManagerSubsystem_DrawAnchorDebugVisualization_Statics::NewProp_Radius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_DrawAnchorDebugVisualization_Statics::PropPointers) < 2048);
// ********** End Function DrawAnchorDebugVisualization Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_DrawAnchorDebugVisualization_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_KEMManagerSubsystem, nullptr, "DrawAnchorDebugVisualization", 	Z_Construct_UFunction_USOTS_KEMManagerSubsystem_DrawAnchorDebugVisualization_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_DrawAnchorDebugVisualization_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_DrawAnchorDebugVisualization_Statics::SOTS_KEMManagerSubsystem_eventDrawAnchorDebugVisualization_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_DrawAnchorDebugVisualization_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_KEMManagerSubsystem_DrawAnchorDebugVisualization_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_DrawAnchorDebugVisualization_Statics::SOTS_KEMManagerSubsystem_eventDrawAnchorDebugVisualization_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_KEMManagerSubsystem_DrawAnchorDebugVisualization()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_KEMManagerSubsystem_DrawAnchorDebugVisualization_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_KEMManagerSubsystem::execDrawAnchorDebugVisualization)
{
	P_GET_OBJECT(AActor,Z_Param_CenterActor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DrawAnchorDebugVisualization(Z_Param_CenterActor,Z_Param_Radius);
	P_NATIVE_END;
}
// ********** End Class USOTS_KEMManagerSubsystem Function DrawAnchorDebugVisualization ************

// ********** Begin Class USOTS_KEMManagerSubsystem Function FindExecutionDefinitionById ***********
struct Z_Construct_UFunction_USOTS_KEMManagerSubsystem_FindExecutionDefinitionById_Statics
{
	struct SOTS_KEMManagerSubsystem_eventFindExecutionDefinitionById_Parms
	{
		FName ExecutionId;
		USOTS_KEM_ExecutionDefinition* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "KEM|Registry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Direct lookup of a definition by its registered ID.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_ManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Direct lookup of a definition by its registered ID." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function FindExecutionDefinitionById constinit property declarations ***********
	static const UECodeGen_Private::FNamePropertyParams NewProp_ExecutionId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FindExecutionDefinitionById constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FindExecutionDefinitionById Property Definitions **********************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_FindExecutionDefinitionById_Statics::NewProp_ExecutionId = { "ExecutionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEMManagerSubsystem_eventFindExecutionDefinitionById_Parms, ExecutionId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_FindExecutionDefinitionById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEMManagerSubsystem_eventFindExecutionDefinitionById_Parms, ReturnValue), Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_KEMManagerSubsystem_FindExecutionDefinitionById_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEMManagerSubsystem_FindExecutionDefinitionById_Statics::NewProp_ExecutionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEMManagerSubsystem_FindExecutionDefinitionById_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_FindExecutionDefinitionById_Statics::PropPointers) < 2048);
// ********** End Function FindExecutionDefinitionById Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_FindExecutionDefinitionById_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_KEMManagerSubsystem, nullptr, "FindExecutionDefinitionById", 	Z_Construct_UFunction_USOTS_KEMManagerSubsystem_FindExecutionDefinitionById_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_FindExecutionDefinitionById_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_FindExecutionDefinitionById_Statics::SOTS_KEMManagerSubsystem_eventFindExecutionDefinitionById_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_FindExecutionDefinitionById_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_KEMManagerSubsystem_FindExecutionDefinitionById_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_FindExecutionDefinitionById_Statics::SOTS_KEMManagerSubsystem_eventFindExecutionDefinitionById_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_KEMManagerSubsystem_FindExecutionDefinitionById()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_KEMManagerSubsystem_FindExecutionDefinitionById_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_KEMManagerSubsystem::execFindExecutionDefinitionById)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ExecutionId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USOTS_KEM_ExecutionDefinition**)Z_Param__Result=P_THIS->FindExecutionDefinitionById(Z_Param_ExecutionId);
	P_NATIVE_END;
}
// ********** End Class USOTS_KEMManagerSubsystem Function FindExecutionDefinitionById *************

// ********** Begin Class USOTS_KEMManagerSubsystem Function ForceResetState ***********************
struct Z_Construct_UFunction_USOTS_KEMManagerSubsystem_ForceResetState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "KEM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Emergency escape hatch to reset the state machine back to Ready (clears any cooldown).\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_ManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Emergency escape hatch to reset the state machine back to Ready (clears any cooldown)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ForceResetState constinit property declarations ***********************
// ********** End Function ForceResetState constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_ForceResetState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_KEMManagerSubsystem, nullptr, "ForceResetState", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_ForceResetState_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_KEMManagerSubsystem_ForceResetState_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USOTS_KEMManagerSubsystem_ForceResetState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_KEMManagerSubsystem_ForceResetState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_KEMManagerSubsystem::execForceResetState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ForceResetState();
	P_NATIVE_END;
}
// ********** End Class USOTS_KEMManagerSubsystem Function ForceResetState *************************

// ********** Begin Class USOTS_KEMManagerSubsystem Function GetCurrentState ***********************
struct Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetCurrentState_Statics
{
	struct SOTS_KEMManagerSubsystem_eventGetCurrentState_Parms
	{
		ESOTS_KEMState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "KEM" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_ManagerSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentState constinit property declarations ***********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentState constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentState Property Definitions **********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetCurrentState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetCurrentState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEMManagerSubsystem_eventGetCurrentState_Parms, ReturnValue), Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEMState, METADATA_PARAMS(0, nullptr) }; // 4117412423
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetCurrentState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetCurrentState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetCurrentState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetCurrentState_Statics::PropPointers) < 2048);
// ********** End Function GetCurrentState Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetCurrentState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_KEMManagerSubsystem, nullptr, "GetCurrentState", 	Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetCurrentState_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetCurrentState_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetCurrentState_Statics::SOTS_KEMManagerSubsystem_eventGetCurrentState_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetCurrentState_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetCurrentState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetCurrentState_Statics::SOTS_KEMManagerSubsystem_eventGetCurrentState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetCurrentState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetCurrentState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_KEMManagerSubsystem::execGetCurrentState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESOTS_KEMState*)Z_Param__Result=P_THIS->GetCurrentState();
	P_NATIVE_END;
}
// ********** End Class USOTS_KEMManagerSubsystem Function GetCurrentState *************************

// ********** Begin Class USOTS_KEMManagerSubsystem Function GetLastDecisionSnapshot ***************
struct Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastDecisionSnapshot_Statics
{
	struct SOTS_KEMManagerSubsystem_eventGetLastDecisionSnapshot_Parms
	{
		FSOTS_KEMDecisionSnapshot OutSnapshot;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "KEM|Debug" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_ManagerSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLastDecisionSnapshot constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutSnapshot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLastDecisionSnapshot constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLastDecisionSnapshot Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastDecisionSnapshot_Statics::NewProp_OutSnapshot = { "OutSnapshot", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEMManagerSubsystem_eventGetLastDecisionSnapshot_Parms, OutSnapshot), Z_Construct_UScriptStruct_FSOTS_KEMDecisionSnapshot, METADATA_PARAMS(0, nullptr) }; // 1631666208
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastDecisionSnapshot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastDecisionSnapshot_Statics::NewProp_OutSnapshot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastDecisionSnapshot_Statics::PropPointers) < 2048);
// ********** End Function GetLastDecisionSnapshot Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastDecisionSnapshot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_KEMManagerSubsystem, nullptr, "GetLastDecisionSnapshot", 	Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastDecisionSnapshot_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastDecisionSnapshot_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastDecisionSnapshot_Statics::SOTS_KEMManagerSubsystem_eventGetLastDecisionSnapshot_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastDecisionSnapshot_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastDecisionSnapshot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastDecisionSnapshot_Statics::SOTS_KEMManagerSubsystem_eventGetLastDecisionSnapshot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastDecisionSnapshot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastDecisionSnapshot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_KEMManagerSubsystem::execGetLastDecisionSnapshot)
{
	P_GET_STRUCT_REF(FSOTS_KEMDecisionSnapshot,Z_Param_Out_OutSnapshot);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetLastDecisionSnapshot(Z_Param_Out_OutSnapshot);
	P_NATIVE_END;
}
// ********** End Class USOTS_KEMManagerSubsystem Function GetLastDecisionSnapshot *****************

// ********** Begin Class USOTS_KEMManagerSubsystem Function GetLastKEMCandidateDebug **************
struct Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastKEMCandidateDebug_Statics
{
	struct SOTS_KEMManagerSubsystem_eventGetLastKEMCandidateDebug_Parms
	{
		TArray<FSOTS_KEMCandidateDebugRecord> OutCandidates;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "KEM|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the candidate breakdown for the most recent selection.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_ManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the candidate breakdown for the most recent selection." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetLastKEMCandidateDebug constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutCandidates_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutCandidates;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLastKEMCandidateDebug constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLastKEMCandidateDebug Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastKEMCandidateDebug_Statics::NewProp_OutCandidates_Inner = { "OutCandidates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSOTS_KEMCandidateDebugRecord, METADATA_PARAMS(0, nullptr) }; // 259323273
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastKEMCandidateDebug_Statics::NewProp_OutCandidates = { "OutCandidates", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEMManagerSubsystem_eventGetLastKEMCandidateDebug_Parms, OutCandidates), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 259323273
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastKEMCandidateDebug_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastKEMCandidateDebug_Statics::NewProp_OutCandidates_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastKEMCandidateDebug_Statics::NewProp_OutCandidates,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastKEMCandidateDebug_Statics::PropPointers) < 2048);
// ********** End Function GetLastKEMCandidateDebug Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastKEMCandidateDebug_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_KEMManagerSubsystem, nullptr, "GetLastKEMCandidateDebug", 	Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastKEMCandidateDebug_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastKEMCandidateDebug_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastKEMCandidateDebug_Statics::SOTS_KEMManagerSubsystem_eventGetLastKEMCandidateDebug_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastKEMCandidateDebug_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastKEMCandidateDebug_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastKEMCandidateDebug_Statics::SOTS_KEMManagerSubsystem_eventGetLastKEMCandidateDebug_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastKEMCandidateDebug()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastKEMCandidateDebug_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_KEMManagerSubsystem::execGetLastKEMCandidateDebug)
{
	P_GET_TARRAY_REF(FSOTS_KEMCandidateDebugRecord,Z_Param_Out_OutCandidates);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetLastKEMCandidateDebug(Z_Param_Out_OutCandidates);
	P_NATIVE_END;
}
// ********** End Class USOTS_KEMManagerSubsystem Function GetLastKEMCandidateDebug ****************

// ********** Begin Class USOTS_KEMManagerSubsystem Function GetLastKEMCandidateStrings ************
struct Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastKEMCandidateStrings_Statics
{
	struct SOTS_KEMManagerSubsystem_eventGetLastKEMCandidateStrings_Parms
	{
		TArray<FString> OutCandidates;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|KEM|Debug" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_ManagerSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLastKEMCandidateStrings constinit property declarations ************
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutCandidates_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutCandidates;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLastKEMCandidateStrings constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLastKEMCandidateStrings Property Definitions ***********************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastKEMCandidateStrings_Statics::NewProp_OutCandidates_Inner = { "OutCandidates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastKEMCandidateStrings_Statics::NewProp_OutCandidates = { "OutCandidates", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEMManagerSubsystem_eventGetLastKEMCandidateStrings_Parms, OutCandidates), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastKEMCandidateStrings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastKEMCandidateStrings_Statics::NewProp_OutCandidates_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastKEMCandidateStrings_Statics::NewProp_OutCandidates,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastKEMCandidateStrings_Statics::PropPointers) < 2048);
// ********** End Function GetLastKEMCandidateStrings Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastKEMCandidateStrings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_KEMManagerSubsystem, nullptr, "GetLastKEMCandidateStrings", 	Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastKEMCandidateStrings_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastKEMCandidateStrings_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastKEMCandidateStrings_Statics::SOTS_KEMManagerSubsystem_eventGetLastKEMCandidateStrings_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastKEMCandidateStrings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastKEMCandidateStrings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastKEMCandidateStrings_Statics::SOTS_KEMManagerSubsystem_eventGetLastKEMCandidateStrings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastKEMCandidateStrings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastKEMCandidateStrings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_KEMManagerSubsystem::execGetLastKEMCandidateStrings)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_OutCandidates);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetLastKEMCandidateStrings(Z_Param_Out_OutCandidates);
	P_NATIVE_END;
}
// ********** End Class USOTS_KEMManagerSubsystem Function GetLastKEMCandidateStrings **************

// ********** Begin Class USOTS_KEMManagerSubsystem Function GetLastKEMDecisionSummary *************
struct Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastKEMDecisionSummary_Statics
{
	struct SOTS_KEMManagerSubsystem_eventGetLastKEMDecisionSummary_Parms
	{
		FString OutSummary;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|KEM|Debug" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_ManagerSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLastKEMDecisionSummary constinit property declarations *************
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutSummary;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLastKEMDecisionSummary constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLastKEMDecisionSummary Property Definitions ************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastKEMDecisionSummary_Statics::NewProp_OutSummary = { "OutSummary", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEMManagerSubsystem_eventGetLastKEMDecisionSummary_Parms, OutSummary), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastKEMDecisionSummary_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastKEMDecisionSummary_Statics::NewProp_OutSummary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastKEMDecisionSummary_Statics::PropPointers) < 2048);
// ********** End Function GetLastKEMDecisionSummary Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastKEMDecisionSummary_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_KEMManagerSubsystem, nullptr, "GetLastKEMDecisionSummary", 	Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastKEMDecisionSummary_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastKEMDecisionSummary_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastKEMDecisionSummary_Statics::SOTS_KEMManagerSubsystem_eventGetLastKEMDecisionSummary_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastKEMDecisionSummary_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastKEMDecisionSummary_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastKEMDecisionSummary_Statics::SOTS_KEMManagerSubsystem_eventGetLastKEMDecisionSummary_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastKEMDecisionSummary()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastKEMDecisionSummary_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_KEMManagerSubsystem::execGetLastKEMDecisionSummary)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutSummary);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetLastKEMDecisionSummary(Z_Param_Out_OutSummary);
	P_NATIVE_END;
}
// ********** End Class USOTS_KEMManagerSubsystem Function GetLastKEMDecisionSummary ***************

// ********** Begin Class USOTS_KEMManagerSubsystem Function GetNearbyAnchorsForDebug **************
struct Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetNearbyAnchorsForDebug_Statics
{
	struct SOTS_KEMManagerSubsystem_eventGetNearbyAnchorsForDebug_Parms
	{
		AActor* CenterActor;
		float Radius;
		TArray<FSOTS_KEMAnchorDebugInfo> OutAnchors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|KEM|Debug" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_ManagerSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNearbyAnchorsForDebug constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CenterActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutAnchors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutAnchors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNearbyAnchorsForDebug constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNearbyAnchorsForDebug Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetNearbyAnchorsForDebug_Statics::NewProp_CenterActor = { "CenterActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEMManagerSubsystem_eventGetNearbyAnchorsForDebug_Parms, CenterActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetNearbyAnchorsForDebug_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEMManagerSubsystem_eventGetNearbyAnchorsForDebug_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetNearbyAnchorsForDebug_Statics::NewProp_OutAnchors_Inner = { "OutAnchors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSOTS_KEMAnchorDebugInfo, METADATA_PARAMS(0, nullptr) }; // 1105416849
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetNearbyAnchorsForDebug_Statics::NewProp_OutAnchors = { "OutAnchors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEMManagerSubsystem_eventGetNearbyAnchorsForDebug_Parms, OutAnchors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1105416849
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetNearbyAnchorsForDebug_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetNearbyAnchorsForDebug_Statics::NewProp_CenterActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetNearbyAnchorsForDebug_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetNearbyAnchorsForDebug_Statics::NewProp_OutAnchors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetNearbyAnchorsForDebug_Statics::NewProp_OutAnchors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetNearbyAnchorsForDebug_Statics::PropPointers) < 2048);
// ********** End Function GetNearbyAnchorsForDebug Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetNearbyAnchorsForDebug_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_KEMManagerSubsystem, nullptr, "GetNearbyAnchorsForDebug", 	Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetNearbyAnchorsForDebug_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetNearbyAnchorsForDebug_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetNearbyAnchorsForDebug_Statics::SOTS_KEMManagerSubsystem_eventGetNearbyAnchorsForDebug_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetNearbyAnchorsForDebug_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetNearbyAnchorsForDebug_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetNearbyAnchorsForDebug_Statics::SOTS_KEMManagerSubsystem_eventGetNearbyAnchorsForDebug_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetNearbyAnchorsForDebug()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetNearbyAnchorsForDebug_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_KEMManagerSubsystem::execGetNearbyAnchorsForDebug)
{
	P_GET_OBJECT(AActor,Z_Param_CenterActor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_TARRAY_REF(FSOTS_KEMAnchorDebugInfo,Z_Param_Out_OutAnchors);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetNearbyAnchorsForDebug(Z_Param_CenterActor,Z_Param_Radius,Z_Param_Out_OutAnchors);
	P_NATIVE_END;
}
// ********** End Class USOTS_KEMManagerSubsystem Function GetNearbyAnchorsForDebug ****************

// ********** Begin Class USOTS_KEMManagerSubsystem Function GetRecentKEMDebugRecords **************
struct Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetRecentKEMDebugRecords_Statics
{
	struct SOTS_KEMManagerSubsystem_eventGetRecentKEMDebugRecords_Parms
	{
		TArray<FSOTS_KEMDebugRecord> OutRecords;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "KEM|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns a copy of the recent debug records (most recent first).\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_ManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns a copy of the recent debug records (most recent first)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetRecentKEMDebugRecords constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutRecords_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutRecords;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRecentKEMDebugRecords constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRecentKEMDebugRecords Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetRecentKEMDebugRecords_Statics::NewProp_OutRecords_Inner = { "OutRecords", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSOTS_KEMDebugRecord, METADATA_PARAMS(0, nullptr) }; // 3971782719
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetRecentKEMDebugRecords_Statics::NewProp_OutRecords = { "OutRecords", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEMManagerSubsystem_eventGetRecentKEMDebugRecords_Parms, OutRecords), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3971782719
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetRecentKEMDebugRecords_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetRecentKEMDebugRecords_Statics::NewProp_OutRecords_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetRecentKEMDebugRecords_Statics::NewProp_OutRecords,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetRecentKEMDebugRecords_Statics::PropPointers) < 2048);
// ********** End Function GetRecentKEMDebugRecords Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetRecentKEMDebugRecords_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_KEMManagerSubsystem, nullptr, "GetRecentKEMDebugRecords", 	Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetRecentKEMDebugRecords_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetRecentKEMDebugRecords_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetRecentKEMDebugRecords_Statics::SOTS_KEMManagerSubsystem_eventGetRecentKEMDebugRecords_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetRecentKEMDebugRecords_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetRecentKEMDebugRecords_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetRecentKEMDebugRecords_Statics::SOTS_KEMManagerSubsystem_eventGetRecentKEMDebugRecords_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetRecentKEMDebugRecords()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetRecentKEMDebugRecords_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_KEMManagerSubsystem::execGetRecentKEMDebugRecords)
{
	P_GET_TARRAY_REF(FSOTS_KEMDebugRecord,Z_Param_Out_OutRecords);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetRecentKEMDebugRecords(Z_Param_Out_OutRecords);
	P_NATIVE_END;
}
// ********** End Class USOTS_KEMManagerSubsystem Function GetRecentKEMDebugRecords ****************

// ********** Begin Class USOTS_KEMManagerSubsystem Function InitializeFromDefaultRegistryConfig ***
struct Z_Construct_UFunction_USOTS_KEMManagerSubsystem_InitializeFromDefaultRegistryConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "KEM|Registry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Convenience helper that loads DefaultRegistryConfig and calls RegisterExecutionDefinitionsFromConfig.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_ManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convenience helper that loads DefaultRegistryConfig and calls RegisterExecutionDefinitionsFromConfig." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function InitializeFromDefaultRegistryConfig constinit property declarations ***
// ********** End Function InitializeFromDefaultRegistryConfig constinit property declarations *****
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_InitializeFromDefaultRegistryConfig_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_KEMManagerSubsystem, nullptr, "InitializeFromDefaultRegistryConfig", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_InitializeFromDefaultRegistryConfig_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_KEMManagerSubsystem_InitializeFromDefaultRegistryConfig_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USOTS_KEMManagerSubsystem_InitializeFromDefaultRegistryConfig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_KEMManagerSubsystem_InitializeFromDefaultRegistryConfig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_KEMManagerSubsystem::execInitializeFromDefaultRegistryConfig)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeFromDefaultRegistryConfig();
	P_NATIVE_END;
}
// ********** End Class USOTS_KEMManagerSubsystem Function InitializeFromDefaultRegistryConfig *****

// ********** Begin Class USOTS_KEMManagerSubsystem Function KEM_DumpCoverage **********************
struct Z_Construct_UFunction_USOTS_KEMManagerSubsystem_KEM_DumpCoverage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SOTS_KEM_ManagerSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function KEM_DumpCoverage constinit property declarations **********************
// ********** End Function KEM_DumpCoverage constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_KEM_DumpCoverage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_KEMManagerSubsystem, nullptr, "KEM_DumpCoverage", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_KEM_DumpCoverage_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_KEMManagerSubsystem_KEM_DumpCoverage_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USOTS_KEMManagerSubsystem_KEM_DumpCoverage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_KEMManagerSubsystem_KEM_DumpCoverage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_KEMManagerSubsystem::execKEM_DumpCoverage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->KEM_DumpCoverage();
	P_NATIVE_END;
}
// ********** End Class USOTS_KEMManagerSubsystem Function KEM_DumpCoverage ************************

// ********** Begin Class USOTS_KEMManagerSubsystem Function KEM_SelfTest **************************
struct Z_Construct_UFunction_USOTS_KEMManagerSubsystem_KEM_SelfTest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SOTS_KEM_ManagerSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function KEM_SelfTest constinit property declarations **************************
// ********** End Function KEM_SelfTest constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_KEM_SelfTest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_KEMManagerSubsystem, nullptr, "KEM_SelfTest", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_KEM_SelfTest_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_KEMManagerSubsystem_KEM_SelfTest_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USOTS_KEMManagerSubsystem_KEM_SelfTest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_KEMManagerSubsystem_KEM_SelfTest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_KEMManagerSubsystem::execKEM_SelfTest)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->KEM_SelfTest();
	P_NATIVE_END;
}
// ********** End Class USOTS_KEMManagerSubsystem Function KEM_SelfTest ****************************

// ********** Begin Class USOTS_KEMManagerSubsystem Function KEM_ToggleAnchorDebug *****************
struct Z_Construct_UFunction_USOTS_KEMManagerSubsystem_KEM_ToggleAnchorDebug_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SOTS_KEM_ManagerSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function KEM_ToggleAnchorDebug constinit property declarations *****************
// ********** End Function KEM_ToggleAnchorDebug constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_KEM_ToggleAnchorDebug_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_KEMManagerSubsystem, nullptr, "KEM_ToggleAnchorDebug", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_KEM_ToggleAnchorDebug_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_KEMManagerSubsystem_KEM_ToggleAnchorDebug_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USOTS_KEMManagerSubsystem_KEM_ToggleAnchorDebug()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_KEMManagerSubsystem_KEM_ToggleAnchorDebug_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_KEMManagerSubsystem::execKEM_ToggleAnchorDebug)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->KEM_ToggleAnchorDebug();
	P_NATIVE_END;
}
// ********** End Class USOTS_KEMManagerSubsystem Function KEM_ToggleAnchorDebug *******************

// ********** Begin Class USOTS_KEMManagerSubsystem Function NotifyExecutionEnded ******************
struct Z_Construct_UFunction_USOTS_KEMManagerSubsystem_NotifyExecutionEnded_Statics
{
	struct SOTS_KEMManagerSubsystem_eventNotifyExecutionEnded_Parms
	{
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "KEM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called externally when an execution fully ends (e.g. CAS montage finished, helper destroyed).\n// This drives the SuccessCooldown / FailureCooldown state before returning to Ready.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_ManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called externally when an execution fully ends (e.g. CAS montage finished, helper destroyed).\nThis drives the SuccessCooldown / FailureCooldown state before returning to Ready." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function NotifyExecutionEnded constinit property declarations ******************
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function NotifyExecutionEnded constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function NotifyExecutionEnded Property Definitions *****************************
void Z_Construct_UFunction_USOTS_KEMManagerSubsystem_NotifyExecutionEnded_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((SOTS_KEMManagerSubsystem_eventNotifyExecutionEnded_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_NotifyExecutionEnded_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_KEMManagerSubsystem_eventNotifyExecutionEnded_Parms), &Z_Construct_UFunction_USOTS_KEMManagerSubsystem_NotifyExecutionEnded_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_KEMManagerSubsystem_NotifyExecutionEnded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEMManagerSubsystem_NotifyExecutionEnded_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_NotifyExecutionEnded_Statics::PropPointers) < 2048);
// ********** End Function NotifyExecutionEnded Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_NotifyExecutionEnded_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_KEMManagerSubsystem, nullptr, "NotifyExecutionEnded", 	Z_Construct_UFunction_USOTS_KEMManagerSubsystem_NotifyExecutionEnded_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_NotifyExecutionEnded_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_NotifyExecutionEnded_Statics::SOTS_KEMManagerSubsystem_eventNotifyExecutionEnded_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_NotifyExecutionEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_KEMManagerSubsystem_NotifyExecutionEnded_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_NotifyExecutionEnded_Statics::SOTS_KEMManagerSubsystem_eventNotifyExecutionEnded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_KEMManagerSubsystem_NotifyExecutionEnded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_KEMManagerSubsystem_NotifyExecutionEnded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_KEMManagerSubsystem::execNotifyExecutionEnded)
{
	P_GET_UBOOL(Z_Param_bSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NotifyExecutionEnded(Z_Param_bSuccess);
	P_NATIVE_END;
}
// ********** End Class USOTS_KEMManagerSubsystem Function NotifyExecutionEnded ********************

// ********** Begin Class USOTS_KEMManagerSubsystem Function RegisterExecutionDefinition ***********
struct Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RegisterExecutionDefinition_Statics
{
	struct SOTS_KEMManagerSubsystem_eventRegisterExecutionDefinition_Parms
	{
		FName ExecutionId;
		USOTS_KEM_ExecutionDefinition* Definition;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "KEM|Registry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Register a single execution definition under a given ID (usually the ExecutionTag's name).\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_ManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Register a single execution definition under a given ID (usually the ExecutionTag's name)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RegisterExecutionDefinition constinit property declarations ***********
	static const UECodeGen_Private::FNamePropertyParams NewProp_ExecutionId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Definition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RegisterExecutionDefinition constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RegisterExecutionDefinition Property Definitions **********************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RegisterExecutionDefinition_Statics::NewProp_ExecutionId = { "ExecutionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEMManagerSubsystem_eventRegisterExecutionDefinition_Parms, ExecutionId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RegisterExecutionDefinition_Statics::NewProp_Definition = { "Definition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEMManagerSubsystem_eventRegisterExecutionDefinition_Parms, Definition), Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RegisterExecutionDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RegisterExecutionDefinition_Statics::NewProp_ExecutionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RegisterExecutionDefinition_Statics::NewProp_Definition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RegisterExecutionDefinition_Statics::PropPointers) < 2048);
// ********** End Function RegisterExecutionDefinition Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RegisterExecutionDefinition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_KEMManagerSubsystem, nullptr, "RegisterExecutionDefinition", 	Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RegisterExecutionDefinition_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RegisterExecutionDefinition_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RegisterExecutionDefinition_Statics::SOTS_KEMManagerSubsystem_eventRegisterExecutionDefinition_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RegisterExecutionDefinition_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RegisterExecutionDefinition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RegisterExecutionDefinition_Statics::SOTS_KEMManagerSubsystem_eventRegisterExecutionDefinition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RegisterExecutionDefinition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RegisterExecutionDefinition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_KEMManagerSubsystem::execRegisterExecutionDefinition)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ExecutionId);
	P_GET_OBJECT(USOTS_KEM_ExecutionDefinition,Z_Param_Definition);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterExecutionDefinition(Z_Param_ExecutionId,Z_Param_Definition);
	P_NATIVE_END;
}
// ********** End Class USOTS_KEMManagerSubsystem Function RegisterExecutionDefinition *************

// ********** Begin Class USOTS_KEMManagerSubsystem Function RegisterExecutionDefinitionsFromConfig 
struct Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RegisterExecutionDefinitionsFromConfig_Statics
{
	struct SOTS_KEMManagerSubsystem_eventRegisterExecutionDefinitionsFromConfig_Parms
	{
		USOTS_KEM_ExecutionRegistryConfig* Config;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "KEM|Registry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Register all definitions from a registry config asset. This will rebuild both the array\n// used by RequestExecution and the internal ID map.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_ManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Register all definitions from a registry config asset. This will rebuild both the array\nused by RequestExecution and the internal ID map." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RegisterExecutionDefinitionsFromConfig constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RegisterExecutionDefinitionsFromConfig constinit property declarations **
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RegisterExecutionDefinitionsFromConfig Property Definitions ***********
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RegisterExecutionDefinitionsFromConfig_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEMManagerSubsystem_eventRegisterExecutionDefinitionsFromConfig_Parms, Config), Z_Construct_UClass_USOTS_KEM_ExecutionRegistryConfig_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RegisterExecutionDefinitionsFromConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RegisterExecutionDefinitionsFromConfig_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RegisterExecutionDefinitionsFromConfig_Statics::PropPointers) < 2048);
// ********** End Function RegisterExecutionDefinitionsFromConfig Property Definitions *************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RegisterExecutionDefinitionsFromConfig_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_KEMManagerSubsystem, nullptr, "RegisterExecutionDefinitionsFromConfig", 	Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RegisterExecutionDefinitionsFromConfig_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RegisterExecutionDefinitionsFromConfig_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RegisterExecutionDefinitionsFromConfig_Statics::SOTS_KEMManagerSubsystem_eventRegisterExecutionDefinitionsFromConfig_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RegisterExecutionDefinitionsFromConfig_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RegisterExecutionDefinitionsFromConfig_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RegisterExecutionDefinitionsFromConfig_Statics::SOTS_KEMManagerSubsystem_eventRegisterExecutionDefinitionsFromConfig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RegisterExecutionDefinitionsFromConfig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RegisterExecutionDefinitionsFromConfig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_KEMManagerSubsystem::execRegisterExecutionDefinitionsFromConfig)
{
	P_GET_OBJECT(USOTS_KEM_ExecutionRegistryConfig,Z_Param_Config);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterExecutionDefinitionsFromConfig(Z_Param_Config);
	P_NATIVE_END;
}
// ********** End Class USOTS_KEMManagerSubsystem Function RegisterExecutionDefinitionsFromConfig **

// ********** Begin Class USOTS_KEMManagerSubsystem Function RequestExecution **********************
struct Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_Statics
{
	struct SOTS_KEMManagerSubsystem_eventRequestExecution_Parms
	{
		const UObject* WorldContextObject;
		AActor* Instigator;
		AActor* Target;
		FGameplayTagContainer ContextTags;
		const USOTS_KEM_ExecutionDefinition* ExecutionOverride;
		FString SourceLabel;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|KEM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gameplay-friendly entry points keep the BP API surface small.\n" },
#endif
		{ "CPP_Default_ExecutionOverride", "None" },
		{ "CPP_Default_SourceLabel", "Blueprint" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_ManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gameplay-friendly entry points keep the BP API surface small." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextTags_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionOverride_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RequestExecution constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContextTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExecutionOverride;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceLabel;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestExecution constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestExecution Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEMManagerSubsystem_eventRequestExecution_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEMManagerSubsystem_eventRequestExecution_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEMManagerSubsystem_eventRequestExecution_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_Statics::NewProp_ContextTags = { "ContextTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEMManagerSubsystem_eventRequestExecution_Parms, ContextTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextTags_MetaData), NewProp_ContextTags_MetaData) }; // 3438578166
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_Statics::NewProp_ExecutionOverride = { "ExecutionOverride", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEMManagerSubsystem_eventRequestExecution_Parms, ExecutionOverride), Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionOverride_MetaData), NewProp_ExecutionOverride_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_Statics::NewProp_SourceLabel = { "SourceLabel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEMManagerSubsystem_eventRequestExecution_Parms, SourceLabel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceLabel_MetaData), NewProp_SourceLabel_MetaData) };
void Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SOTS_KEMManagerSubsystem_eventRequestExecution_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_KEMManagerSubsystem_eventRequestExecution_Parms), &Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_Statics::NewProp_ContextTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_Statics::NewProp_ExecutionOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_Statics::NewProp_SourceLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_Statics::PropPointers) < 2048);
// ********** End Function RequestExecution Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_KEMManagerSubsystem, nullptr, "RequestExecution", 	Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_Statics::SOTS_KEMManagerSubsystem_eventRequestExecution_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_Statics::SOTS_KEMManagerSubsystem_eventRequestExecution_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_KEMManagerSubsystem::execRequestExecution)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(AActor,Z_Param_Instigator);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_ContextTags);
	P_GET_OBJECT(USOTS_KEM_ExecutionDefinition,Z_Param_ExecutionOverride);
	P_GET_PROPERTY(FStrProperty,Z_Param_SourceLabel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RequestExecution(Z_Param_WorldContextObject,Z_Param_Instigator,Z_Param_Target,Z_Param_Out_ContextTags,Z_Param_ExecutionOverride,Z_Param_SourceLabel);
	P_NATIVE_END;
}
// ********** End Class USOTS_KEMManagerSubsystem Function RequestExecution ************************

// ********** Begin Class USOTS_KEMManagerSubsystem Function RequestExecution_FromCinematic ********
struct Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromCinematic_Statics
{
	struct SOTS_KEMManagerSubsystem_eventRequestExecution_FromCinematic_Parms
	{
		AActor* Instigator;
		AActor* Target;
		UObject* ExecutionDefinitionOverride;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|KEM" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_ManagerSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RequestExecution_FromCinematic constinit property declarations ********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExecutionDefinitionOverride;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestExecution_FromCinematic constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestExecution_FromCinematic Property Definitions *******************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromCinematic_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEMManagerSubsystem_eventRequestExecution_FromCinematic_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromCinematic_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEMManagerSubsystem_eventRequestExecution_FromCinematic_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromCinematic_Statics::NewProp_ExecutionDefinitionOverride = { "ExecutionDefinitionOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEMManagerSubsystem_eventRequestExecution_FromCinematic_Parms, ExecutionDefinitionOverride), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromCinematic_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SOTS_KEMManagerSubsystem_eventRequestExecution_FromCinematic_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromCinematic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_KEMManagerSubsystem_eventRequestExecution_FromCinematic_Parms), &Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromCinematic_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromCinematic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromCinematic_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromCinematic_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromCinematic_Statics::NewProp_ExecutionDefinitionOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromCinematic_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromCinematic_Statics::PropPointers) < 2048);
// ********** End Function RequestExecution_FromCinematic Property Definitions *********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromCinematic_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_KEMManagerSubsystem, nullptr, "RequestExecution_FromCinematic", 	Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromCinematic_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromCinematic_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromCinematic_Statics::SOTS_KEMManagerSubsystem_eventRequestExecution_FromCinematic_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromCinematic_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromCinematic_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromCinematic_Statics::SOTS_KEMManagerSubsystem_eventRequestExecution_FromCinematic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromCinematic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromCinematic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_KEMManagerSubsystem::execRequestExecution_FromCinematic)
{
	P_GET_OBJECT(AActor,Z_Param_Instigator);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_OBJECT(UObject,Z_Param_ExecutionDefinitionOverride);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RequestExecution_FromCinematic(Z_Param_Instigator,Z_Param_Target,Z_Param_ExecutionDefinitionOverride);
	P_NATIVE_END;
}
// ********** End Class USOTS_KEMManagerSubsystem Function RequestExecution_FromCinematic **********

// ********** Begin Class USOTS_KEMManagerSubsystem Function RequestExecution_FromDragon ***********
struct Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromDragon_Statics
{
	struct SOTS_KEMManagerSubsystem_eventRequestExecution_FromDragon_Parms
	{
		AActor* Instigator;
		AActor* Target;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|KEM" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_ManagerSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RequestExecution_FromDragon constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestExecution_FromDragon constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestExecution_FromDragon Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromDragon_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEMManagerSubsystem_eventRequestExecution_FromDragon_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromDragon_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEMManagerSubsystem_eventRequestExecution_FromDragon_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromDragon_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SOTS_KEMManagerSubsystem_eventRequestExecution_FromDragon_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromDragon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_KEMManagerSubsystem_eventRequestExecution_FromDragon_Parms), &Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromDragon_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromDragon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromDragon_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromDragon_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromDragon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromDragon_Statics::PropPointers) < 2048);
// ********** End Function RequestExecution_FromDragon Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromDragon_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_KEMManagerSubsystem, nullptr, "RequestExecution_FromDragon", 	Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromDragon_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromDragon_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromDragon_Statics::SOTS_KEMManagerSubsystem_eventRequestExecution_FromDragon_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromDragon_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromDragon_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromDragon_Statics::SOTS_KEMManagerSubsystem_eventRequestExecution_FromDragon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromDragon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromDragon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_KEMManagerSubsystem::execRequestExecution_FromDragon)
{
	P_GET_OBJECT(AActor,Z_Param_Instigator);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RequestExecution_FromDragon(Z_Param_Instigator,Z_Param_Target);
	P_NATIVE_END;
}
// ********** End Class USOTS_KEMManagerSubsystem Function RequestExecution_FromDragon *************

// ********** Begin Class USOTS_KEMManagerSubsystem Function RequestExecution_FromPlayer ***********
struct Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromPlayer_Statics
{
	struct SOTS_KEMManagerSubsystem_eventRequestExecution_FromPlayer_Parms
	{
		AActor* Instigator;
		AActor* Target;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|KEM" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_ManagerSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RequestExecution_FromPlayer constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestExecution_FromPlayer constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestExecution_FromPlayer Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromPlayer_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEMManagerSubsystem_eventRequestExecution_FromPlayer_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromPlayer_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEMManagerSubsystem_eventRequestExecution_FromPlayer_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromPlayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SOTS_KEMManagerSubsystem_eventRequestExecution_FromPlayer_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_KEMManagerSubsystem_eventRequestExecution_FromPlayer_Parms), &Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromPlayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromPlayer_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromPlayer_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromPlayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromPlayer_Statics::PropPointers) < 2048);
// ********** End Function RequestExecution_FromPlayer Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromPlayer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_KEMManagerSubsystem, nullptr, "RequestExecution_FromPlayer", 	Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromPlayer_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromPlayer_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromPlayer_Statics::SOTS_KEMManagerSubsystem_eventRequestExecution_FromPlayer_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromPlayer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromPlayer_Statics::SOTS_KEMManagerSubsystem_eventRequestExecution_FromPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_KEMManagerSubsystem::execRequestExecution_FromPlayer)
{
	P_GET_OBJECT(AActor,Z_Param_Instigator);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RequestExecution_FromPlayer(Z_Param_Instigator,Z_Param_Target);
	P_NATIVE_END;
}
// ********** End Class USOTS_KEMManagerSubsystem Function RequestExecution_FromPlayer *************

// ********** Begin Class USOTS_KEMManagerSubsystem Function RunKEMDebug ***************************
struct Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RunKEMDebug_Statics
{
	struct SOTS_KEMManagerSubsystem_eventRunKEMDebug_Parms
	{
		const UObject* WorldContextObject;
		AActor* Instigator;
		AActor* Target;
		FGameplayTagContainer ContextTags;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "KEM|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Debug helper, logs why definitions passed/failed\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_ManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Debug helper, logs why definitions passed/failed" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RunKEMDebug constinit property declarations ***************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContextTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RunKEMDebug constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RunKEMDebug Property Definitions **************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RunKEMDebug_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEMManagerSubsystem_eventRunKEMDebug_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RunKEMDebug_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEMManagerSubsystem_eventRunKEMDebug_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RunKEMDebug_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEMManagerSubsystem_eventRunKEMDebug_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RunKEMDebug_Statics::NewProp_ContextTags = { "ContextTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEMManagerSubsystem_eventRunKEMDebug_Parms, ContextTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextTags_MetaData), NewProp_ContextTags_MetaData) }; // 3438578166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RunKEMDebug_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RunKEMDebug_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RunKEMDebug_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RunKEMDebug_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RunKEMDebug_Statics::NewProp_ContextTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RunKEMDebug_Statics::PropPointers) < 2048);
// ********** End Function RunKEMDebug Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RunKEMDebug_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_KEMManagerSubsystem, nullptr, "RunKEMDebug", 	Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RunKEMDebug_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RunKEMDebug_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RunKEMDebug_Statics::SOTS_KEMManagerSubsystem_eventRunKEMDebug_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RunKEMDebug_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RunKEMDebug_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RunKEMDebug_Statics::SOTS_KEMManagerSubsystem_eventRunKEMDebug_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RunKEMDebug()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RunKEMDebug_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_KEMManagerSubsystem::execRunKEMDebug)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(AActor,Z_Param_Instigator);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_ContextTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RunKEMDebug(Z_Param_WorldContextObject,Z_Param_Instigator,Z_Param_Target,Z_Param_Out_ContextTags);
	P_NATIVE_END;
}
// ********** End Class USOTS_KEMManagerSubsystem Function RunKEMDebug *****************************

// ********** Begin Class USOTS_KEMManagerSubsystem Function SetAbilityRequirementLibrary **********
struct Z_Construct_UFunction_USOTS_KEMManagerSubsystem_SetAbilityRequirementLibrary_Statics
{
	struct SOTS_KEMManagerSubsystem_eventSetAbilityRequirementLibrary_Parms
	{
		USOTS_AbilityRequirementLibraryAsset* InLibrary;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|KEM|Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional runtime setter for the shared ability requirement library.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_ManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional runtime setter for the shared ability requirement library." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetAbilityRequirementLibrary constinit property declarations **********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InLibrary;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetAbilityRequirementLibrary constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetAbilityRequirementLibrary Property Definitions *********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_SetAbilityRequirementLibrary_Statics::NewProp_InLibrary = { "InLibrary", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEMManagerSubsystem_eventSetAbilityRequirementLibrary_Parms, InLibrary), Z_Construct_UClass_USOTS_AbilityRequirementLibraryAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_KEMManagerSubsystem_SetAbilityRequirementLibrary_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEMManagerSubsystem_SetAbilityRequirementLibrary_Statics::NewProp_InLibrary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_SetAbilityRequirementLibrary_Statics::PropPointers) < 2048);
// ********** End Function SetAbilityRequirementLibrary Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_KEMManagerSubsystem_SetAbilityRequirementLibrary_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_KEMManagerSubsystem, nullptr, "SetAbilityRequirementLibrary", 	Z_Construct_UFunction_USOTS_KEMManagerSubsystem_SetAbilityRequirementLibrary_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_SetAbilityRequirementLibrary_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_SetAbilityRequirementLibrary_Statics::SOTS_KEMManagerSubsystem_eventSetAbilityRequirementLibrary_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_SetAbilityRequirementLibrary_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_KEMManagerSubsystem_SetAbilityRequirementLibrary_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_KEMManagerSubsystem_SetAbilityRequirementLibrary_Statics::SOTS_KEMManagerSubsystem_eventSetAbilityRequirementLibrary_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_KEMManagerSubsystem_SetAbilityRequirementLibrary()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_KEMManagerSubsystem_SetAbilityRequirementLibrary_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_KEMManagerSubsystem::execSetAbilityRequirementLibrary)
{
	P_GET_OBJECT(USOTS_AbilityRequirementLibraryAsset,Z_Param_InLibrary);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAbilityRequirementLibrary(Z_Param_InLibrary);
	P_NATIVE_END;
}
// ********** End Class USOTS_KEMManagerSubsystem Function SetAbilityRequirementLibrary ************

// ********** Begin Class USOTS_KEMManagerSubsystem ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_KEMManagerSubsystem;
UClass* USOTS_KEMManagerSubsystem::GetPrivateStaticClass()
{
	using TClass = USOTS_KEMManagerSubsystem;
	if (!Z_Registration_Info_UClass_USOTS_KEMManagerSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_KEMManagerSubsystem"),
			Z_Registration_Info_UClass_USOTS_KEMManagerSubsystem.InnerSingleton,
			StaticRegisterNativesUSOTS_KEMManagerSubsystem,
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
	return Z_Registration_Info_UClass_USOTS_KEMManagerSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_KEMManagerSubsystem_NoRegister()
{
	return USOTS_KEMManagerSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SOTS_KEM_ManagerSubsystem.h" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_ManagerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerContextTags_MetaData[] = {
		{ "Category", "SOTS|KEM|Gameplay" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_ManagerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DragonContextTags_MetaData[] = {
		{ "Category", "SOTS|KEM|Gameplay" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_ManagerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CinematicContextTags_MetaData[] = {
		{ "Category", "SOTS|KEM|Gameplay" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_ManagerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionDefinitions_MetaData[] = {
		{ "Category", "KEM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Execution definitions to evaluate. Soft so they can live in Content.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_ManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Execution definitions to evaluate. Soft so they can live in Content." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityRequirementLibrary_MetaData[] = {
		{ "Category", "SOTS|KEM|Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional ability requirement library used to resolve requirements by\n// AbilityRequirementTag. If null, definitions that opt into ability\n// requirements but do not provide inline data will treat gating as\n// unconfigured and pass by default.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_ManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional ability requirement library used to resolve requirements by\nAbilityRequirementTag. If null, definitions that opt into ability\nrequirements but do not provide inline data will treat gating as\nunconfigured and pass by default." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableKEMDebug_MetaData[] = {
		{ "Category", "KEM|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional default registry config. If set, you can call InitializeFromDefaultRegistryConfig()\n// (e.g. from your GameInstance) to populate ExecutionDefinitions and the internal ID map.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_ManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional default registry config. If set, you can call InitializeFromDefaultRegistryConfig()\n(e.g. from your GameInstance) to populate ExecutionDefinitions and the internal ID map." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugVerbosity_MetaData[] = {
		{ "Category", "KEM|Debug" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_ManagerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnchorSearchRadius_MetaData[] = {
		{ "Category", "KEM|Debug" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_ManagerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAnchorDebugDraw_MetaData[] = {
		{ "Category", "KEM|Debug" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_ManagerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultRegistryConfig_MetaData[] = {
		{ "Category", "KEM" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_ManagerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionDefinitionsById_MetaData[] = {
		{ "Category", "KEM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Map of ExecutionId -> ExecutionDefinition for direct lookups. Populated by the registry helpers.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_ManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Map of ExecutionId -> ExecutionDefinition for direct lookups. Populated by the registry helpers." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OmniTracePresetLibrary_MetaData[] = {
		{ "Category", "SOTS|KEM|OmniTrace" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_ManagerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[] = {
		{ "Category", "KEM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current high-level state\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_ManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current high-level state" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecentDebugRecords_MetaData[] = {
		{ "Category", "KEM|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Rolling history of recent executions for debug HUD (most recent first).\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_ManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rolling history of recent executions for debug HUD (most recent first)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastCandidateDebug_MetaData[] = {
		{ "Category", "KEM|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Candidate breakdown for the most recent selection.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_ManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Candidate breakdown for the most recent selection." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastDecisionSnapshot_MetaData[] = {
		{ "Category", "KEM|Debug" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_ManagerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SuccessCooldownDuration_MetaData[] = {
		{ "Category", "KEM|Timing" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional cooldowns applied after an execution finishes before returning to Ready.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_ManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional cooldowns applied after an execution finishes before returning to Ready." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FailureCooldownDuration_MetaData[] = {
		{ "Category", "KEM|Timing" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_ManagerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCASExecutionChosen_MetaData[] = {
		{ "Category", "KEM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// CAS execution picked and ready to start: all info needed for MotionWarping + CAS Start node.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_ManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "CAS execution picked and ready to start: all info needed for MotionWarping + CAS Start node." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLevelSequenceExecutionChosen_MetaData[] = {
		{ "Category", "KEM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// LevelSequence-style execution picked. Caller is responsible for actually playing the sequence.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_ManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "LevelSequence-style execution picked. Caller is responsible for actually playing the sequence." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAISExecutionChosen_MetaData[] = {
		{ "Category", "KEM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// AIS / ability-style execution picked. Caller is responsible for driving AI / gameplay reactions.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_ManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AIS / ability-style execution picked. Caller is responsible for driving AI / gameplay reactions." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnExecutionEvent_MetaData[] = {
		{ "Category", "SOTS|KEM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Unified lifecycle event surface for executions (started / succeeded / failed).\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_ManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unified lifecycle event surface for executions (started / succeeded / failed)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_KEMManagerSubsystem constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerContextTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DragonContextTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CinematicContextTags;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ExecutionDefinitions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExecutionDefinitions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilityRequirementLibrary;
	static void NewProp_bEnableKEMDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableKEMDebug;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DebugVerbosity_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DebugVerbosity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnchorSearchRadius;
	static void NewProp_bAnchorDebugDraw_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAnchorDebugDraw;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultRegistryConfig;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ExecutionDefinitionsById_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ExecutionDefinitionsById_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ExecutionDefinitionsById;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OmniTracePresetLibrary;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RecentDebugRecords_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RecentDebugRecords;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastCandidateDebug_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LastCandidateDebug;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastDecisionSnapshot;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SuccessCooldownDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FailureCooldownDuration;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCASExecutionChosen;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLevelSequenceExecutionChosen;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAISExecutionChosen;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnExecutionEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USOTS_KEMManagerSubsystem constinit property declarations ******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("DrawAnchorDebugVisualization"), .Pointer = &USOTS_KEMManagerSubsystem::execDrawAnchorDebugVisualization },
		{ .NameUTF8 = UTF8TEXT("FindExecutionDefinitionById"), .Pointer = &USOTS_KEMManagerSubsystem::execFindExecutionDefinitionById },
		{ .NameUTF8 = UTF8TEXT("ForceResetState"), .Pointer = &USOTS_KEMManagerSubsystem::execForceResetState },
		{ .NameUTF8 = UTF8TEXT("GetCurrentState"), .Pointer = &USOTS_KEMManagerSubsystem::execGetCurrentState },
		{ .NameUTF8 = UTF8TEXT("GetLastDecisionSnapshot"), .Pointer = &USOTS_KEMManagerSubsystem::execGetLastDecisionSnapshot },
		{ .NameUTF8 = UTF8TEXT("GetLastKEMCandidateDebug"), .Pointer = &USOTS_KEMManagerSubsystem::execGetLastKEMCandidateDebug },
		{ .NameUTF8 = UTF8TEXT("GetLastKEMCandidateStrings"), .Pointer = &USOTS_KEMManagerSubsystem::execGetLastKEMCandidateStrings },
		{ .NameUTF8 = UTF8TEXT("GetLastKEMDecisionSummary"), .Pointer = &USOTS_KEMManagerSubsystem::execGetLastKEMDecisionSummary },
		{ .NameUTF8 = UTF8TEXT("GetNearbyAnchorsForDebug"), .Pointer = &USOTS_KEMManagerSubsystem::execGetNearbyAnchorsForDebug },
		{ .NameUTF8 = UTF8TEXT("GetRecentKEMDebugRecords"), .Pointer = &USOTS_KEMManagerSubsystem::execGetRecentKEMDebugRecords },
		{ .NameUTF8 = UTF8TEXT("InitializeFromDefaultRegistryConfig"), .Pointer = &USOTS_KEMManagerSubsystem::execInitializeFromDefaultRegistryConfig },
		{ .NameUTF8 = UTF8TEXT("KEM_DumpCoverage"), .Pointer = &USOTS_KEMManagerSubsystem::execKEM_DumpCoverage },
		{ .NameUTF8 = UTF8TEXT("KEM_SelfTest"), .Pointer = &USOTS_KEMManagerSubsystem::execKEM_SelfTest },
		{ .NameUTF8 = UTF8TEXT("KEM_ToggleAnchorDebug"), .Pointer = &USOTS_KEMManagerSubsystem::execKEM_ToggleAnchorDebug },
		{ .NameUTF8 = UTF8TEXT("NotifyExecutionEnded"), .Pointer = &USOTS_KEMManagerSubsystem::execNotifyExecutionEnded },
		{ .NameUTF8 = UTF8TEXT("RegisterExecutionDefinition"), .Pointer = &USOTS_KEMManagerSubsystem::execRegisterExecutionDefinition },
		{ .NameUTF8 = UTF8TEXT("RegisterExecutionDefinitionsFromConfig"), .Pointer = &USOTS_KEMManagerSubsystem::execRegisterExecutionDefinitionsFromConfig },
		{ .NameUTF8 = UTF8TEXT("RequestExecution"), .Pointer = &USOTS_KEMManagerSubsystem::execRequestExecution },
		{ .NameUTF8 = UTF8TEXT("RequestExecution_FromCinematic"), .Pointer = &USOTS_KEMManagerSubsystem::execRequestExecution_FromCinematic },
		{ .NameUTF8 = UTF8TEXT("RequestExecution_FromDragon"), .Pointer = &USOTS_KEMManagerSubsystem::execRequestExecution_FromDragon },
		{ .NameUTF8 = UTF8TEXT("RequestExecution_FromPlayer"), .Pointer = &USOTS_KEMManagerSubsystem::execRequestExecution_FromPlayer },
		{ .NameUTF8 = UTF8TEXT("RunKEMDebug"), .Pointer = &USOTS_KEMManagerSubsystem::execRunKEMDebug },
		{ .NameUTF8 = UTF8TEXT("SetAbilityRequirementLibrary"), .Pointer = &USOTS_KEMManagerSubsystem::execSetAbilityRequirementLibrary },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USOTS_KEMManagerSubsystem_DrawAnchorDebugVisualization, "DrawAnchorDebugVisualization" }, // 111540781
		{ &Z_Construct_UFunction_USOTS_KEMManagerSubsystem_FindExecutionDefinitionById, "FindExecutionDefinitionById" }, // 1193009760
		{ &Z_Construct_UFunction_USOTS_KEMManagerSubsystem_ForceResetState, "ForceResetState" }, // 3410896126
		{ &Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetCurrentState, "GetCurrentState" }, // 2711150261
		{ &Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastDecisionSnapshot, "GetLastDecisionSnapshot" }, // 2895618132
		{ &Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastKEMCandidateDebug, "GetLastKEMCandidateDebug" }, // 3776150747
		{ &Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastKEMCandidateStrings, "GetLastKEMCandidateStrings" }, // 2222386221
		{ &Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetLastKEMDecisionSummary, "GetLastKEMDecisionSummary" }, // 4234063269
		{ &Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetNearbyAnchorsForDebug, "GetNearbyAnchorsForDebug" }, // 1880157873
		{ &Z_Construct_UFunction_USOTS_KEMManagerSubsystem_GetRecentKEMDebugRecords, "GetRecentKEMDebugRecords" }, // 2633325957
		{ &Z_Construct_UFunction_USOTS_KEMManagerSubsystem_InitializeFromDefaultRegistryConfig, "InitializeFromDefaultRegistryConfig" }, // 241494385
		{ &Z_Construct_UFunction_USOTS_KEMManagerSubsystem_KEM_DumpCoverage, "KEM_DumpCoverage" }, // 819744155
		{ &Z_Construct_UFunction_USOTS_KEMManagerSubsystem_KEM_SelfTest, "KEM_SelfTest" }, // 3193210684
		{ &Z_Construct_UFunction_USOTS_KEMManagerSubsystem_KEM_ToggleAnchorDebug, "KEM_ToggleAnchorDebug" }, // 2614082111
		{ &Z_Construct_UFunction_USOTS_KEMManagerSubsystem_NotifyExecutionEnded, "NotifyExecutionEnded" }, // 906109893
		{ &Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RegisterExecutionDefinition, "RegisterExecutionDefinition" }, // 842496640
		{ &Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RegisterExecutionDefinitionsFromConfig, "RegisterExecutionDefinitionsFromConfig" }, // 3160015165
		{ &Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution, "RequestExecution" }, // 2276005213
		{ &Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromCinematic, "RequestExecution_FromCinematic" }, // 3516821716
		{ &Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromDragon, "RequestExecution_FromDragon" }, // 303223026
		{ &Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RequestExecution_FromPlayer, "RequestExecution_FromPlayer" }, // 578508186
		{ &Z_Construct_UFunction_USOTS_KEMManagerSubsystem_RunKEMDebug, "RunKEMDebug" }, // 4217944859
		{ &Z_Construct_UFunction_USOTS_KEMManagerSubsystem_SetAbilityRequirementLibrary, "SetAbilityRequirementLibrary" }, // 2263478822
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_KEMManagerSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics

// ********** Begin Class USOTS_KEMManagerSubsystem Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::NewProp_PlayerContextTags = { "PlayerContextTags", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEMManagerSubsystem, PlayerContextTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerContextTags_MetaData), NewProp_PlayerContextTags_MetaData) }; // 3438578166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::NewProp_DragonContextTags = { "DragonContextTags", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEMManagerSubsystem, DragonContextTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DragonContextTags_MetaData), NewProp_DragonContextTags_MetaData) }; // 3438578166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::NewProp_CinematicContextTags = { "CinematicContextTags", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEMManagerSubsystem, CinematicContextTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CinematicContextTags_MetaData), NewProp_CinematicContextTags_MetaData) }; // 3438578166
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::NewProp_ExecutionDefinitions_Inner = { "ExecutionDefinitions", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::NewProp_ExecutionDefinitions = { "ExecutionDefinitions", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEMManagerSubsystem, ExecutionDefinitions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionDefinitions_MetaData), NewProp_ExecutionDefinitions_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::NewProp_AbilityRequirementLibrary = { "AbilityRequirementLibrary", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEMManagerSubsystem, AbilityRequirementLibrary), Z_Construct_UClass_USOTS_AbilityRequirementLibraryAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityRequirementLibrary_MetaData), NewProp_AbilityRequirementLibrary_MetaData) };
void Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::NewProp_bEnableKEMDebug_SetBit(void* Obj)
{
	((USOTS_KEMManagerSubsystem*)Obj)->bEnableKEMDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::NewProp_bEnableKEMDebug = { "bEnableKEMDebug", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USOTS_KEMManagerSubsystem), &Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::NewProp_bEnableKEMDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableKEMDebug_MetaData), NewProp_bEnableKEMDebug_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::NewProp_DebugVerbosity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::NewProp_DebugVerbosity = { "DebugVerbosity", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEMManagerSubsystem, DebugVerbosity), Z_Construct_UEnum_SOTS_KillExecutionManager_EKEMDebugVerbosity, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugVerbosity_MetaData), NewProp_DebugVerbosity_MetaData) }; // 4238672743
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::NewProp_AnchorSearchRadius = { "AnchorSearchRadius", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEMManagerSubsystem, AnchorSearchRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnchorSearchRadius_MetaData), NewProp_AnchorSearchRadius_MetaData) };
void Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::NewProp_bAnchorDebugDraw_SetBit(void* Obj)
{
	((USOTS_KEMManagerSubsystem*)Obj)->bAnchorDebugDraw = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::NewProp_bAnchorDebugDraw = { "bAnchorDebugDraw", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USOTS_KEMManagerSubsystem), &Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::NewProp_bAnchorDebugDraw_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAnchorDebugDraw_MetaData), NewProp_bAnchorDebugDraw_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::NewProp_DefaultRegistryConfig = { "DefaultRegistryConfig", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEMManagerSubsystem, DefaultRegistryConfig), Z_Construct_UClass_USOTS_KEM_ExecutionRegistryConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultRegistryConfig_MetaData), NewProp_DefaultRegistryConfig_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::NewProp_ExecutionDefinitionsById_ValueProp = { "ExecutionDefinitionsById", nullptr, (EPropertyFlags)0x0004000000020001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::NewProp_ExecutionDefinitionsById_Key_KeyProp = { "ExecutionDefinitionsById_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::NewProp_ExecutionDefinitionsById = { "ExecutionDefinitionsById", nullptr, (EPropertyFlags)0x0014000000020015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEMManagerSubsystem, ExecutionDefinitionsById), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionDefinitionsById_MetaData), NewProp_ExecutionDefinitionsById_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::NewProp_OmniTracePresetLibrary = { "OmniTracePresetLibrary", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEMManagerSubsystem, OmniTracePresetLibrary), Z_Construct_UClass_USOTS_OmniTraceKEMPresetLibrary_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OmniTracePresetLibrary_MetaData), NewProp_OmniTracePresetLibrary_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEMManagerSubsystem, CurrentState), Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEMState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentState_MetaData), NewProp_CurrentState_MetaData) }; // 4117412423
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::NewProp_RecentDebugRecords_Inner = { "RecentDebugRecords", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSOTS_KEMDebugRecord, METADATA_PARAMS(0, nullptr) }; // 3971782719
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::NewProp_RecentDebugRecords = { "RecentDebugRecords", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEMManagerSubsystem, RecentDebugRecords), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecentDebugRecords_MetaData), NewProp_RecentDebugRecords_MetaData) }; // 3971782719
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::NewProp_LastCandidateDebug_Inner = { "LastCandidateDebug", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSOTS_KEMCandidateDebugRecord, METADATA_PARAMS(0, nullptr) }; // 259323273
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::NewProp_LastCandidateDebug = { "LastCandidateDebug", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEMManagerSubsystem, LastCandidateDebug), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastCandidateDebug_MetaData), NewProp_LastCandidateDebug_MetaData) }; // 259323273
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::NewProp_LastDecisionSnapshot = { "LastDecisionSnapshot", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEMManagerSubsystem, LastDecisionSnapshot), Z_Construct_UScriptStruct_FSOTS_KEMDecisionSnapshot, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastDecisionSnapshot_MetaData), NewProp_LastDecisionSnapshot_MetaData) }; // 1631666208
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::NewProp_SuccessCooldownDuration = { "SuccessCooldownDuration", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEMManagerSubsystem, SuccessCooldownDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SuccessCooldownDuration_MetaData), NewProp_SuccessCooldownDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::NewProp_FailureCooldownDuration = { "FailureCooldownDuration", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEMManagerSubsystem, FailureCooldownDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FailureCooldownDuration_MetaData), NewProp_FailureCooldownDuration_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::NewProp_OnCASExecutionChosen = { "OnCASExecutionChosen", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEMManagerSubsystem, OnCASExecutionChosen), Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_CASExecutionChosenSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCASExecutionChosen_MetaData), NewProp_OnCASExecutionChosen_MetaData) }; // 4250738121
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::NewProp_OnLevelSequenceExecutionChosen = { "OnLevelSequenceExecutionChosen", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEMManagerSubsystem, OnLevelSequenceExecutionChosen), Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_LevelSequenceExecutionChosenSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLevelSequenceExecutionChosen_MetaData), NewProp_OnLevelSequenceExecutionChosen_MetaData) }; // 3056359567
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::NewProp_OnAISExecutionChosen = { "OnAISExecutionChosen", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEMManagerSubsystem, OnAISExecutionChosen), Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_AISExecutionChosenSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAISExecutionChosen_MetaData), NewProp_OnAISExecutionChosen_MetaData) }; // 2693457711
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::NewProp_OnExecutionEvent = { "OnExecutionEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEMManagerSubsystem, OnExecutionEvent), Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_OnExecutionEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnExecutionEvent_MetaData), NewProp_OnExecutionEvent_MetaData) }; // 4009178018
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::NewProp_PlayerContextTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::NewProp_DragonContextTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::NewProp_CinematicContextTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::NewProp_ExecutionDefinitions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::NewProp_ExecutionDefinitions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::NewProp_AbilityRequirementLibrary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::NewProp_bEnableKEMDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::NewProp_DebugVerbosity_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::NewProp_DebugVerbosity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::NewProp_AnchorSearchRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::NewProp_bAnchorDebugDraw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::NewProp_DefaultRegistryConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::NewProp_ExecutionDefinitionsById_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::NewProp_ExecutionDefinitionsById_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::NewProp_ExecutionDefinitionsById,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::NewProp_OmniTracePresetLibrary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::NewProp_CurrentState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::NewProp_CurrentState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::NewProp_RecentDebugRecords_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::NewProp_RecentDebugRecords,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::NewProp_LastCandidateDebug_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::NewProp_LastCandidateDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::NewProp_LastDecisionSnapshot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::NewProp_SuccessCooldownDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::NewProp_FailureCooldownDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::NewProp_OnCASExecutionChosen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::NewProp_OnLevelSequenceExecutionChosen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::NewProp_OnAISExecutionChosen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::NewProp_OnExecutionEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::PropPointers) < 2048);
// ********** End Class USOTS_KEMManagerSubsystem Property Definitions *****************************
UObject* (*const Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_KillExecutionManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::ClassParams = {
	&USOTS_KEMManagerSubsystem::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::Class_MetaDataParams)
};
void USOTS_KEMManagerSubsystem::StaticRegisterNativesUSOTS_KEMManagerSubsystem()
{
	UClass* Class = USOTS_KEMManagerSubsystem::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::Funcs));
}
UClass* Z_Construct_UClass_USOTS_KEMManagerSubsystem()
{
	if (!Z_Registration_Info_UClass_USOTS_KEMManagerSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_KEMManagerSubsystem.OuterSingleton, Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_KEMManagerSubsystem.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_KEMManagerSubsystem);
USOTS_KEMManagerSubsystem::~USOTS_KEMManagerSubsystem() {}
// ********** End Class USOTS_KEMManagerSubsystem **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEM_ManagerSubsystem_h__Script_SOTS_KillExecutionManager_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EKEMDebugVerbosity_StaticEnum, TEXT("EKEMDebugVerbosity"), &Z_Registration_Info_UEnum_EKEMDebugVerbosity, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4238672743U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSOTS_KEMAnchorDebugInfo::StaticStruct, Z_Construct_UScriptStruct_FSOTS_KEMAnchorDebugInfo_Statics::NewStructOps, TEXT("SOTS_KEMAnchorDebugInfo"),&Z_Registration_Info_UScriptStruct_FSOTS_KEMAnchorDebugInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_KEMAnchorDebugInfo), 1105416849U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_KEMManagerSubsystem, USOTS_KEMManagerSubsystem::StaticClass, TEXT("USOTS_KEMManagerSubsystem"), &Z_Registration_Info_UClass_USOTS_KEMManagerSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_KEMManagerSubsystem), 843509056U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEM_ManagerSubsystem_h__Script_SOTS_KillExecutionManager_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEM_ManagerSubsystem_h__Script_SOTS_KillExecutionManager_3779407046{
	TEXT("/Script/SOTS_KillExecutionManager"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEM_ManagerSubsystem_h__Script_SOTS_KillExecutionManager_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEM_ManagerSubsystem_h__Script_SOTS_KillExecutionManager_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEM_ManagerSubsystem_h__Script_SOTS_KillExecutionManager_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEM_ManagerSubsystem_h__Script_SOTS_KillExecutionManager_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEM_ManagerSubsystem_h__Script_SOTS_KillExecutionManager_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEM_ManagerSubsystem_h__Script_SOTS_KillExecutionManager_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
