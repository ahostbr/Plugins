// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SOTS_KEM_Types.h"
#include "Data/SOTS_AbilityTypes.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_KEM_Types() {}

// ********** Begin Cross Module References ********************************************************
CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimSceneAsset_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
OMNITRACE_API UEnum* Z_Construct_UEnum_OmniTrace_ESOTS_OmniTraceKEMPreset();
SOTS_GAS_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_AbilityRequirements();
SOTS_GLOBALSTEALTHMANAGER_API UEnum* Z_Construct_UEnum_SOTS_GlobalStealthManager_ESOTS_StealthTier();
SOTS_KILLEXECUTIONMANAGER_API UClass* Z_Construct_UClass_USOTS_KEM_ExecutionDefinition();
SOTS_KILLEXECUTIONMANAGER_API UClass* Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_NoRegister();
SOTS_KILLEXECUTIONMANAGER_API UClass* Z_Construct_UClass_USOTS_KEM_ExecutionRegistryConfig();
SOTS_KILLEXECUTIONMANAGER_API UClass* Z_Construct_UClass_USOTS_KEM_ExecutionRegistryConfig_NoRegister();
SOTS_KILLEXECUTIONMANAGER_API UClass* Z_Construct_UClass_USOTS_SpawnExecutionData();
SOTS_KILLEXECUTIONMANAGER_API UClass* Z_Construct_UClass_USOTS_SpawnExecutionData_NoRegister();
SOTS_KILLEXECUTIONMANAGER_API UEnum* Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_BackendType();
SOTS_KILLEXECUTIONMANAGER_API UEnum* Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_ExecutionFamily();
SOTS_KILLEXECUTIONMANAGER_API UEnum* Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_ExecutionResult();
SOTS_KILLEXECUTIONMANAGER_API UEnum* Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_HeightMode();
SOTS_KILLEXECUTIONMANAGER_API UEnum* Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_WarpRef();
SOTS_KILLEXECUTIONMANAGER_API UEnum* Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEMRejectReason();
SOTS_KILLEXECUTIONMANAGER_API UEnum* Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEMState();
SOTS_KILLEXECUTIONMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_CASQueryResult();
SOTS_KILLEXECUTIONMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_ExecutionContext();
SOTS_KILLEXECUTIONMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_KEM_AISConfig();
SOTS_KILLEXECUTIONMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_KEM_CASConfig();
SOTS_KILLEXECUTIONMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_KEM_CASOffsetConfig();
SOTS_KILLEXECUTIONMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_KEM_ExecutionEvent();
SOTS_KILLEXECUTIONMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_KEM_ExecutionRegistryEntry();
SOTS_KILLEXECUTIONMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_KEM_LevelSequenceConfig();
SOTS_KILLEXECUTIONMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_KEM_OmniTraceWarpResult();
SOTS_KILLEXECUTIONMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_KEM_SpawnActorConfig();
SOTS_KILLEXECUTIONMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_KEM_WarpPointDef();
SOTS_KILLEXECUTIONMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_KEM_WarpRuntimeTarget();
SOTS_KILLEXECUTIONMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_KEMCandidateDebugRecord();
SOTS_KILLEXECUTIONMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_KEMDebugRecord();
SOTS_KILLEXECUTIONMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_KEMDecisionSnapshot();
SOTS_KILLEXECUTIONMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_KEMValidationResult();
UPackage* Z_Construct_UPackage__Script_SOTS_KillExecutionManager();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ESOTS_KEM_BackendType *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESOTS_KEM_BackendType;
static UEnum* ESOTS_KEM_BackendType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESOTS_KEM_BackendType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESOTS_KEM_BackendType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_BackendType, (UObject*)Z_Construct_UPackage__Script_SOTS_KillExecutionManager(), TEXT("ESOTS_KEM_BackendType"));
	}
	return Z_Registration_Info_UEnum_ESOTS_KEM_BackendType.OuterSingleton;
}
template<> SOTS_KILLEXECUTIONMANAGER_NON_ATTRIBUTED_API UEnum* StaticEnum<ESOTS_KEM_BackendType>()
{
	return ESOTS_KEM_BackendType_StaticEnum();
}
struct Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_BackendType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AIS.DisplayName", "AIS" },
		{ "AIS.Name", "ESOTS_KEM_BackendType::AIS" },
		{ "BlueprintType", "true" },
		{ "CAS.DisplayName", "CAS" },
		{ "CAS.Name", "ESOTS_KEM_BackendType::CAS" },
		{ "LevelSequence.DisplayName", "Level Sequence" },
		{ "LevelSequence.Name", "ESOTS_KEM_BackendType::LevelSequence" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
		{ "SpawnActor.DisplayName", "Spawn Actor" },
		{ "SpawnActor.Name", "ESOTS_KEM_BackendType::SpawnActor" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESOTS_KEM_BackendType::CAS", (int64)ESOTS_KEM_BackendType::CAS },
		{ "ESOTS_KEM_BackendType::LevelSequence", (int64)ESOTS_KEM_BackendType::LevelSequence },
		{ "ESOTS_KEM_BackendType::AIS", (int64)ESOTS_KEM_BackendType::AIS },
		{ "ESOTS_KEM_BackendType::SpawnActor", (int64)ESOTS_KEM_BackendType::SpawnActor },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_BackendType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_BackendType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SOTS_KillExecutionManager,
	nullptr,
	"ESOTS_KEM_BackendType",
	"ESOTS_KEM_BackendType",
	Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_BackendType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_BackendType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_BackendType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_BackendType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_BackendType()
{
	if (!Z_Registration_Info_UEnum_ESOTS_KEM_BackendType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESOTS_KEM_BackendType.InnerSingleton, Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_BackendType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESOTS_KEM_BackendType.InnerSingleton;
}
// ********** End Enum ESOTS_KEM_BackendType *******************************************************

// ********** Begin Enum ESOTS_KEM_HeightMode ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESOTS_KEM_HeightMode;
static UEnum* ESOTS_KEM_HeightMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESOTS_KEM_HeightMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESOTS_KEM_HeightMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_HeightMode, (UObject*)Z_Construct_UPackage__Script_SOTS_KillExecutionManager(), TEXT("ESOTS_KEM_HeightMode"));
	}
	return Z_Registration_Info_UEnum_ESOTS_KEM_HeightMode.OuterSingleton;
}
template<> SOTS_KILLEXECUTIONMANAGER_NON_ATTRIBUTED_API UEnum* StaticEnum<ESOTS_KEM_HeightMode>()
{
	return ESOTS_KEM_HeightMode_StaticEnum();
}
struct Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_HeightMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Any.DisplayName", "Any" },
		{ "Any.Name", "ESOTS_KEM_HeightMode::Any" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
		{ "SamePlaneOnly.DisplayName", "Same Plane Only" },
		{ "SamePlaneOnly.Name", "ESOTS_KEM_HeightMode::SamePlaneOnly" },
		{ "VerticalOnly.DisplayName", "Vertical Only" },
		{ "VerticalOnly.Name", "ESOTS_KEM_HeightMode::VerticalOnly" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESOTS_KEM_HeightMode::SamePlaneOnly", (int64)ESOTS_KEM_HeightMode::SamePlaneOnly },
		{ "ESOTS_KEM_HeightMode::VerticalOnly", (int64)ESOTS_KEM_HeightMode::VerticalOnly },
		{ "ESOTS_KEM_HeightMode::Any", (int64)ESOTS_KEM_HeightMode::Any },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_HeightMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_HeightMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SOTS_KillExecutionManager,
	nullptr,
	"ESOTS_KEM_HeightMode",
	"ESOTS_KEM_HeightMode",
	Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_HeightMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_HeightMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_HeightMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_HeightMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_HeightMode()
{
	if (!Z_Registration_Info_UEnum_ESOTS_KEM_HeightMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESOTS_KEM_HeightMode.InnerSingleton, Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_HeightMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESOTS_KEM_HeightMode.InnerSingleton;
}
// ********** End Enum ESOTS_KEM_HeightMode ********************************************************

// ********** Begin Enum ESOTS_KEMState ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESOTS_KEMState;
static UEnum* ESOTS_KEMState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESOTS_KEMState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESOTS_KEMState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEMState, (UObject*)Z_Construct_UPackage__Script_SOTS_KillExecutionManager(), TEXT("ESOTS_KEMState"));
	}
	return Z_Registration_Info_UEnum_ESOTS_KEMState.OuterSingleton;
}
template<> SOTS_KILLEXECUTIONMANAGER_NON_ATTRIBUTED_API UEnum* StaticEnum<ESOTS_KEMState>()
{
	return ESOTS_KEMState_StaticEnum();
}
struct Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEMState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Executing.DisplayName", "Executing" },
		{ "Executing.Name", "ESOTS_KEMState::Executing" },
		{ "FailureCooldown.DisplayName", "Failure Cooldown" },
		{ "FailureCooldown.Name", "ESOTS_KEMState::FailureCooldown" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "ESOTS_KEMState::None" },
		{ "Ready.DisplayName", "Ready" },
		{ "Ready.Name", "ESOTS_KEMState::Ready" },
		{ "SuccessCooldown.DisplayName", "Success Cooldown" },
		{ "SuccessCooldown.Name", "ESOTS_KEMState::SuccessCooldown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESOTS_KEMState::None", (int64)ESOTS_KEMState::None },
		{ "ESOTS_KEMState::Ready", (int64)ESOTS_KEMState::Ready },
		{ "ESOTS_KEMState::Executing", (int64)ESOTS_KEMState::Executing },
		{ "ESOTS_KEMState::SuccessCooldown", (int64)ESOTS_KEMState::SuccessCooldown },
		{ "ESOTS_KEMState::FailureCooldown", (int64)ESOTS_KEMState::FailureCooldown },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEMState_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEMState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SOTS_KillExecutionManager,
	nullptr,
	"ESOTS_KEMState",
	"ESOTS_KEMState",
	Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEMState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEMState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEMState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEMState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEMState()
{
	if (!Z_Registration_Info_UEnum_ESOTS_KEMState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESOTS_KEMState.InnerSingleton, Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEMState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESOTS_KEMState.InnerSingleton;
}
// ********** End Enum ESOTS_KEMState **************************************************************

// ********** Begin Enum ESOTS_KEM_ExecutionResult *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESOTS_KEM_ExecutionResult;
static UEnum* ESOTS_KEM_ExecutionResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESOTS_KEM_ExecutionResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESOTS_KEM_ExecutionResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_ExecutionResult, (UObject*)Z_Construct_UPackage__Script_SOTS_KillExecutionManager(), TEXT("ESOTS_KEM_ExecutionResult"));
	}
	return Z_Registration_Info_UEnum_ESOTS_KEM_ExecutionResult.OuterSingleton;
}
template<> SOTS_KILLEXECUTIONMANAGER_NON_ATTRIBUTED_API UEnum* StaticEnum<ESOTS_KEM_ExecutionResult>()
{
	return ESOTS_KEM_ExecutionResult_StaticEnum();
}
struct Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_ExecutionResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Failed.DisplayName", "Failed" },
		{ "Failed.Name", "ESOTS_KEM_ExecutionResult::Failed" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
		{ "Started.DisplayName", "Started" },
		{ "Started.Name", "ESOTS_KEM_ExecutionResult::Started" },
		{ "Succeeded.DisplayName", "Succeeded" },
		{ "Succeeded.Name", "ESOTS_KEM_ExecutionResult::Succeeded" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESOTS_KEM_ExecutionResult::Started", (int64)ESOTS_KEM_ExecutionResult::Started },
		{ "ESOTS_KEM_ExecutionResult::Succeeded", (int64)ESOTS_KEM_ExecutionResult::Succeeded },
		{ "ESOTS_KEM_ExecutionResult::Failed", (int64)ESOTS_KEM_ExecutionResult::Failed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_ExecutionResult_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_ExecutionResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SOTS_KillExecutionManager,
	nullptr,
	"ESOTS_KEM_ExecutionResult",
	"ESOTS_KEM_ExecutionResult",
	Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_ExecutionResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_ExecutionResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_ExecutionResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_ExecutionResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_ExecutionResult()
{
	if (!Z_Registration_Info_UEnum_ESOTS_KEM_ExecutionResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESOTS_KEM_ExecutionResult.InnerSingleton, Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_ExecutionResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESOTS_KEM_ExecutionResult.InnerSingleton;
}
// ********** End Enum ESOTS_KEM_ExecutionResult ***************************************************

// ********** Begin Enum ESOTS_KEM_ExecutionFamily *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESOTS_KEM_ExecutionFamily;
static UEnum* ESOTS_KEM_ExecutionFamily_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESOTS_KEM_ExecutionFamily.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESOTS_KEM_ExecutionFamily.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_ExecutionFamily, (UObject*)Z_Construct_UPackage__Script_SOTS_KillExecutionManager(), TEXT("ESOTS_KEM_ExecutionFamily"));
	}
	return Z_Registration_Info_UEnum_ESOTS_KEM_ExecutionFamily.OuterSingleton;
}
template<> SOTS_KILLEXECUTIONMANAGER_NON_ATTRIBUTED_API UEnum* StaticEnum<ESOTS_KEM_ExecutionFamily>()
{
	return ESOTS_KEM_ExecutionFamily_StaticEnum();
}
struct Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_ExecutionFamily_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cinematic.DisplayName", "Cinematic" },
		{ "Cinematic.Name", "ESOTS_KEM_ExecutionFamily::Cinematic" },
		{ "CornerFront.DisplayName", "Corner Front" },
		{ "CornerFront.Name", "ESOTS_KEM_ExecutionFamily::CornerFront" },
		{ "CornerLeft.DisplayName", "Corner Left" },
		{ "CornerLeft.Name", "ESOTS_KEM_ExecutionFamily::CornerLeft" },
		{ "CornerRear.DisplayName", "Corner Rear" },
		{ "CornerRear.Name", "ESOTS_KEM_ExecutionFamily::CornerRear" },
		{ "CornerRight.DisplayName", "Corner Right" },
		{ "CornerRight.Name", "ESOTS_KEM_ExecutionFamily::CornerRight" },
		{ "DropPoint.DisplayName", "Drop Point" },
		{ "DropPoint.Name", "ESOTS_KEM_ExecutionFamily::DropPoint" },
		{ "GroundFront.DisplayName", "Ground Front" },
		{ "GroundFront.Name", "ESOTS_KEM_ExecutionFamily::GroundFront" },
		{ "GroundLeft.DisplayName", "Ground Left" },
		{ "GroundLeft.Name", "ESOTS_KEM_ExecutionFamily::GroundLeft" },
		{ "GroundRear.DisplayName", "Ground Rear" },
		{ "GroundRear.Name", "ESOTS_KEM_ExecutionFamily::GroundRear" },
		{ "GroundRight.DisplayName", "Ground Right" },
		{ "GroundRight.Name", "ESOTS_KEM_ExecutionFamily::GroundRight" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
		{ "PullDown.DisplayName", "Pull Down" },
		{ "PullDown.Name", "ESOTS_KEM_ExecutionFamily::PullDown" },
		{ "Unknown.DisplayName", "Unknown" },
		{ "Unknown.Name", "ESOTS_KEM_ExecutionFamily::Unknown" },
		{ "VerticalAbove.DisplayName", "Vertical Above" },
		{ "VerticalAbove.Name", "ESOTS_KEM_ExecutionFamily::VerticalAbove" },
		{ "VerticalBelow.DisplayName", "Vertical Below" },
		{ "VerticalBelow.Name", "ESOTS_KEM_ExecutionFamily::VerticalBelow" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESOTS_KEM_ExecutionFamily::Unknown", (int64)ESOTS_KEM_ExecutionFamily::Unknown },
		{ "ESOTS_KEM_ExecutionFamily::GroundRear", (int64)ESOTS_KEM_ExecutionFamily::GroundRear },
		{ "ESOTS_KEM_ExecutionFamily::GroundFront", (int64)ESOTS_KEM_ExecutionFamily::GroundFront },
		{ "ESOTS_KEM_ExecutionFamily::GroundLeft", (int64)ESOTS_KEM_ExecutionFamily::GroundLeft },
		{ "ESOTS_KEM_ExecutionFamily::GroundRight", (int64)ESOTS_KEM_ExecutionFamily::GroundRight },
		{ "ESOTS_KEM_ExecutionFamily::VerticalAbove", (int64)ESOTS_KEM_ExecutionFamily::VerticalAbove },
		{ "ESOTS_KEM_ExecutionFamily::VerticalBelow", (int64)ESOTS_KEM_ExecutionFamily::VerticalBelow },
		{ "ESOTS_KEM_ExecutionFamily::DropPoint", (int64)ESOTS_KEM_ExecutionFamily::DropPoint },
		{ "ESOTS_KEM_ExecutionFamily::PullDown", (int64)ESOTS_KEM_ExecutionFamily::PullDown },
		{ "ESOTS_KEM_ExecutionFamily::Cinematic", (int64)ESOTS_KEM_ExecutionFamily::Cinematic },
		{ "ESOTS_KEM_ExecutionFamily::CornerRear", (int64)ESOTS_KEM_ExecutionFamily::CornerRear },
		{ "ESOTS_KEM_ExecutionFamily::CornerFront", (int64)ESOTS_KEM_ExecutionFamily::CornerFront },
		{ "ESOTS_KEM_ExecutionFamily::CornerLeft", (int64)ESOTS_KEM_ExecutionFamily::CornerLeft },
		{ "ESOTS_KEM_ExecutionFamily::CornerRight", (int64)ESOTS_KEM_ExecutionFamily::CornerRight },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_ExecutionFamily_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_ExecutionFamily_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SOTS_KillExecutionManager,
	nullptr,
	"ESOTS_KEM_ExecutionFamily",
	"ESOTS_KEM_ExecutionFamily",
	Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_ExecutionFamily_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_ExecutionFamily_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_ExecutionFamily_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_ExecutionFamily_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_ExecutionFamily()
{
	if (!Z_Registration_Info_UEnum_ESOTS_KEM_ExecutionFamily.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESOTS_KEM_ExecutionFamily.InnerSingleton, Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_ExecutionFamily_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESOTS_KEM_ExecutionFamily.InnerSingleton;
}
// ********** End Enum ESOTS_KEM_ExecutionFamily ***************************************************

// ********** Begin Enum ESOTS_KEMRejectReason *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESOTS_KEMRejectReason;
static UEnum* ESOTS_KEMRejectReason_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESOTS_KEMRejectReason.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESOTS_KEMRejectReason.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEMRejectReason, (UObject*)Z_Construct_UPackage__Script_SOTS_KillExecutionManager(), TEXT("ESOTS_KEMRejectReason"));
	}
	return Z_Registration_Info_UEnum_ESOTS_KEMRejectReason.OuterSingleton;
}
template<> SOTS_KILLEXECUTIONMANAGER_NON_ATTRIBUTED_API UEnum* StaticEnum<ESOTS_KEMRejectReason>()
{
	return ESOTS_KEMRejectReason_StaticEnum();
}
struct Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEMRejectReason_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AngleOutOfRange.DisplayName", "Angle Out Of Range" },
		{ "AngleOutOfRange.Name", "ESOTS_KEMRejectReason::AngleOutOfRange" },
		{ "BlueprintType", "true" },
		{ "DataIncomplete.DisplayName", "Data Incomplete" },
		{ "DataIncomplete.Name", "ESOTS_KEMRejectReason::DataIncomplete" },
		{ "DistanceOutOfRange.DisplayName", "Distance Out Of Range" },
		{ "DistanceOutOfRange.Name", "ESOTS_KEMRejectReason::DistanceOutOfRange" },
		{ "HeightModeMismatch.DisplayName", "Height Mode Mismatch" },
		{ "HeightModeMismatch.Name", "ESOTS_KEMRejectReason::HeightModeMismatch" },
		{ "MissingDefinition.DisplayName", "Missing Definition" },
		{ "MissingDefinition.Name", "ESOTS_KEMRejectReason::MissingDefinition" },
		{ "MissionTagMismatch.DisplayName", "Mission Tag Mismatch" },
		{ "MissionTagMismatch.Name", "ESOTS_KEMRejectReason::MissionTagMismatch" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "ESOTS_KEMRejectReason::None" },
		{ "OmniTraceFailed.DisplayName", "OmniTrace Failed" },
		{ "OmniTraceFailed.Name", "ESOTS_KEMRejectReason::OmniTraceFailed" },
		{ "Other.DisplayName", "Other" },
		{ "Other.Name", "ESOTS_KEMRejectReason::Other" },
		{ "StealthBlocked.DisplayName", "Stealth Blocked" },
		{ "StealthBlocked.Name", "ESOTS_KEMRejectReason::StealthBlocked" },
		{ "WarpPointMissing.DisplayName", "Warp Point Missing" },
		{ "WarpPointMissing.Name", "ESOTS_KEMRejectReason::WarpPointMissing" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESOTS_KEMRejectReason::None", (int64)ESOTS_KEMRejectReason::None },
		{ "ESOTS_KEMRejectReason::MissingDefinition", (int64)ESOTS_KEMRejectReason::MissingDefinition },
		{ "ESOTS_KEMRejectReason::StealthBlocked", (int64)ESOTS_KEMRejectReason::StealthBlocked },
		{ "ESOTS_KEMRejectReason::MissionTagMismatch", (int64)ESOTS_KEMRejectReason::MissionTagMismatch },
		{ "ESOTS_KEMRejectReason::DistanceOutOfRange", (int64)ESOTS_KEMRejectReason::DistanceOutOfRange },
		{ "ESOTS_KEMRejectReason::AngleOutOfRange", (int64)ESOTS_KEMRejectReason::AngleOutOfRange },
		{ "ESOTS_KEMRejectReason::HeightModeMismatch", (int64)ESOTS_KEMRejectReason::HeightModeMismatch },
		{ "ESOTS_KEMRejectReason::OmniTraceFailed", (int64)ESOTS_KEMRejectReason::OmniTraceFailed },
		{ "ESOTS_KEMRejectReason::WarpPointMissing", (int64)ESOTS_KEMRejectReason::WarpPointMissing },
		{ "ESOTS_KEMRejectReason::DataIncomplete", (int64)ESOTS_KEMRejectReason::DataIncomplete },
		{ "ESOTS_KEMRejectReason::Other", (int64)ESOTS_KEMRejectReason::Other },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEMRejectReason_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEMRejectReason_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SOTS_KillExecutionManager,
	nullptr,
	"ESOTS_KEMRejectReason",
	"ESOTS_KEMRejectReason",
	Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEMRejectReason_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEMRejectReason_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEMRejectReason_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEMRejectReason_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEMRejectReason()
{
	if (!Z_Registration_Info_UEnum_ESOTS_KEMRejectReason.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESOTS_KEMRejectReason.InnerSingleton, Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEMRejectReason_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESOTS_KEMRejectReason.InnerSingleton;
}
// ********** End Enum ESOTS_KEMRejectReason *******************************************************

// ********** Begin ScriptStruct FSOTS_ExecutionContext ********************************************
struct Z_Construct_UScriptStruct_FSOTS_ExecutionContext_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_ExecutionContext); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_ExecutionContext); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[] = {
		{ "Category", "SOTS_ExecutionContext" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "Category", "SOTS_ExecutionContext" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextTags_MetaData[] = {
		{ "Category", "SOTS_ExecutionContext" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstigatorLocation_MetaData[] = {
		{ "Category", "SOTS_ExecutionContext" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[] = {
		{ "Category", "SOTS_ExecutionContext" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstigatorForward_MetaData[] = {
		{ "Category", "SOTS_ExecutionContext" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetForward_MetaData[] = {
		{ "Category", "SOTS_ExecutionContext" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightDelta_MetaData[] = {
		{ "Category", "SOTS_ExecutionContext" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalStealthScore01_MetaData[] = {
		{ "Category", "SOTS_ExecutionContext" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Global stealth snapshot (threaded in from the global stealth manager).\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Global stealth snapshot (threaded in from the global stealth manager)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadowLevel01_MetaData[] = {
		{ "Category", "SOTS_ExecutionContext" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StealthTier_MetaData[] = {
		{ "Category", "SOTS_ExecutionContext" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_ExecutionContext constinit property declarations ************
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContextTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstigatorLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstigatorForward;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetForward;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightDelta;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GlobalStealthScore01;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShadowLevel01;
	static const UECodeGen_Private::FBytePropertyParams NewProp_StealthTier_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StealthTier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_ExecutionContext constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_ExecutionContext>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_ExecutionContext_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_ExecutionContext;
class UScriptStruct* FSOTS_ExecutionContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_ExecutionContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_ExecutionContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_ExecutionContext, (UObject*)Z_Construct_UPackage__Script_SOTS_KillExecutionManager(), TEXT("SOTS_ExecutionContext"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_ExecutionContext.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_ExecutionContext Property Definitions ***********************
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FSOTS_ExecutionContext_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_ExecutionContext, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instigator_MetaData), NewProp_Instigator_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FSOTS_ExecutionContext_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_ExecutionContext, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_ExecutionContext_Statics::NewProp_ContextTags = { "ContextTags", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_ExecutionContext, ContextTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextTags_MetaData), NewProp_ContextTags_MetaData) }; // 3438578166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_ExecutionContext_Statics::NewProp_InstigatorLocation = { "InstigatorLocation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_ExecutionContext, InstigatorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstigatorLocation_MetaData), NewProp_InstigatorLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_ExecutionContext_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_ExecutionContext, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLocation_MetaData), NewProp_TargetLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_ExecutionContext_Statics::NewProp_InstigatorForward = { "InstigatorForward", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_ExecutionContext, InstigatorForward), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstigatorForward_MetaData), NewProp_InstigatorForward_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_ExecutionContext_Statics::NewProp_TargetForward = { "TargetForward", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_ExecutionContext, TargetForward), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetForward_MetaData), NewProp_TargetForward_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_ExecutionContext_Statics::NewProp_HeightDelta = { "HeightDelta", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_ExecutionContext, HeightDelta), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightDelta_MetaData), NewProp_HeightDelta_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_ExecutionContext_Statics::NewProp_GlobalStealthScore01 = { "GlobalStealthScore01", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_ExecutionContext, GlobalStealthScore01), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalStealthScore01_MetaData), NewProp_GlobalStealthScore01_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_ExecutionContext_Statics::NewProp_ShadowLevel01 = { "ShadowLevel01", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_ExecutionContext, ShadowLevel01), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadowLevel01_MetaData), NewProp_ShadowLevel01_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSOTS_ExecutionContext_Statics::NewProp_StealthTier_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSOTS_ExecutionContext_Statics::NewProp_StealthTier = { "StealthTier", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_ExecutionContext, StealthTier), Z_Construct_UEnum_SOTS_GlobalStealthManager_ESOTS_StealthTier, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StealthTier_MetaData), NewProp_StealthTier_MetaData) }; // 3407880652
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_ExecutionContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_ExecutionContext_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_ExecutionContext_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_ExecutionContext_Statics::NewProp_ContextTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_ExecutionContext_Statics::NewProp_InstigatorLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_ExecutionContext_Statics::NewProp_TargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_ExecutionContext_Statics::NewProp_InstigatorForward,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_ExecutionContext_Statics::NewProp_TargetForward,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_ExecutionContext_Statics::NewProp_HeightDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_ExecutionContext_Statics::NewProp_GlobalStealthScore01,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_ExecutionContext_Statics::NewProp_ShadowLevel01,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_ExecutionContext_Statics::NewProp_StealthTier_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_ExecutionContext_Statics::NewProp_StealthTier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_ExecutionContext_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_ExecutionContext Property Definitions *************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_ExecutionContext_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_KillExecutionManager,
	nullptr,
	&NewStructOps,
	"SOTS_ExecutionContext",
	Z_Construct_UScriptStruct_FSOTS_ExecutionContext_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_ExecutionContext_Statics::PropPointers),
	sizeof(FSOTS_ExecutionContext),
	alignof(FSOTS_ExecutionContext),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_ExecutionContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_ExecutionContext_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_ExecutionContext()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_ExecutionContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_ExecutionContext.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_ExecutionContext_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_ExecutionContext.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_ExecutionContext **********************************************

// ********** Begin ScriptStruct FSOTS_KEM_ExecutionEvent ******************************************
struct Z_Construct_UScriptStruct_FSOTS_KEM_ExecutionEvent_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_KEM_ExecutionEvent); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_KEM_ExecutionEvent); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "SOTS|KEM" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[] = {
		{ "Category", "SOTS|KEM" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "Category", "SOTS|KEM" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionTag_MetaData[] = {
		{ "Category", "SOTS|KEM" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Definition_MetaData[] = {
		{ "Category", "SOTS|KEM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Non-persistent pointer to the definition used for this execution.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
		{ "NativeConstTemplateArg", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Non-persistent pointer to the definition used for this execution." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_KEM_ExecutionEvent constinit property declarations **********
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExecutionTag;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Definition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_KEM_ExecutionEvent constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_KEM_ExecutionEvent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_KEM_ExecutionEvent_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_KEM_ExecutionEvent;
class UScriptStruct* FSOTS_KEM_ExecutionEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_KEM_ExecutionEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_KEM_ExecutionEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_KEM_ExecutionEvent, (UObject*)Z_Construct_UPackage__Script_SOTS_KillExecutionManager(), TEXT("SOTS_KEM_ExecutionEvent"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_KEM_ExecutionEvent.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_KEM_ExecutionEvent Property Definitions *********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSOTS_KEM_ExecutionEvent_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSOTS_KEM_ExecutionEvent_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEM_ExecutionEvent, Result), Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_ExecutionResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 1001899342
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FSOTS_KEM_ExecutionEvent_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEM_ExecutionEvent, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instigator_MetaData), NewProp_Instigator_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FSOTS_KEM_ExecutionEvent_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEM_ExecutionEvent, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_KEM_ExecutionEvent_Statics::NewProp_ExecutionTag = { "ExecutionTag", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEM_ExecutionEvent, ExecutionTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionTag_MetaData), NewProp_ExecutionTag_MetaData) }; // 517357616
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FSOTS_KEM_ExecutionEvent_Statics::NewProp_Definition = { "Definition", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEM_ExecutionEvent, Definition), Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Definition_MetaData), NewProp_Definition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_KEM_ExecutionEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEM_ExecutionEvent_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEM_ExecutionEvent_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEM_ExecutionEvent_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEM_ExecutionEvent_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEM_ExecutionEvent_Statics::NewProp_ExecutionTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEM_ExecutionEvent_Statics::NewProp_Definition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_KEM_ExecutionEvent_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_KEM_ExecutionEvent Property Definitions ***********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_KEM_ExecutionEvent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_KillExecutionManager,
	nullptr,
	&NewStructOps,
	"SOTS_KEM_ExecutionEvent",
	Z_Construct_UScriptStruct_FSOTS_KEM_ExecutionEvent_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_KEM_ExecutionEvent_Statics::PropPointers),
	sizeof(FSOTS_KEM_ExecutionEvent),
	alignof(FSOTS_KEM_ExecutionEvent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_KEM_ExecutionEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_KEM_ExecutionEvent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_KEM_ExecutionEvent()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_KEM_ExecutionEvent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_KEM_ExecutionEvent.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_KEM_ExecutionEvent_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_KEM_ExecutionEvent.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_KEM_ExecutionEvent ********************************************

// ********** Begin ScriptStruct FSOTS_KEMCandidateDebugRecord *************************************
struct Z_Construct_UScriptStruct_FSOTS_KEMCandidateDebugRecord_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_KEMCandidateDebugRecord); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_KEMCandidateDebugRecord); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Lightweight per-candidate debug information for the last KEM selection.\n */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lightweight per-candidate debug information for the last KEM selection." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionName_MetaData[] = {
		{ "Category", "SOTS|KEM" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[] = {
		{ "Category", "SOTS|KEM" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSelected_MetaData[] = {
		{ "Category", "SOTS|KEM" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RejectReason_MetaData[] = {
		{ "Category", "SOTS|KEM" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FailureReason_MetaData[] = {
		{ "Category", "SOTS|KEM" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceToTarget_MetaData[] = {
		{ "Category", "SOTS|KEM" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FacingAngleDeg_MetaData[] = {
		{ "Category", "SOTS|KEM" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightDelta_MetaData[] = {
		{ "Category", "SOTS|KEM" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_KEMCandidateDebugRecord constinit property declarations *****
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExecutionName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Score;
	static void NewProp_bSelected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelected;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RejectReason_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RejectReason;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FailureReason;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceToTarget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FacingAngleDeg;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightDelta;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_KEMCandidateDebugRecord constinit property declarations *******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_KEMCandidateDebugRecord>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_KEMCandidateDebugRecord_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_KEMCandidateDebugRecord;
class UScriptStruct* FSOTS_KEMCandidateDebugRecord::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_KEMCandidateDebugRecord.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_KEMCandidateDebugRecord.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_KEMCandidateDebugRecord, (UObject*)Z_Construct_UPackage__Script_SOTS_KillExecutionManager(), TEXT("SOTS_KEMCandidateDebugRecord"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_KEMCandidateDebugRecord.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_KEMCandidateDebugRecord Property Definitions ****************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSOTS_KEMCandidateDebugRecord_Statics::NewProp_ExecutionName = { "ExecutionName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEMCandidateDebugRecord, ExecutionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionName_MetaData), NewProp_ExecutionName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_KEMCandidateDebugRecord_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEMCandidateDebugRecord, Score), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Score_MetaData), NewProp_Score_MetaData) };
void Z_Construct_UScriptStruct_FSOTS_KEMCandidateDebugRecord_Statics::NewProp_bSelected_SetBit(void* Obj)
{
	((FSOTS_KEMCandidateDebugRecord*)Obj)->bSelected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSOTS_KEMCandidateDebugRecord_Statics::NewProp_bSelected = { "bSelected", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSOTS_KEMCandidateDebugRecord), &Z_Construct_UScriptStruct_FSOTS_KEMCandidateDebugRecord_Statics::NewProp_bSelected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSelected_MetaData), NewProp_bSelected_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSOTS_KEMCandidateDebugRecord_Statics::NewProp_RejectReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSOTS_KEMCandidateDebugRecord_Statics::NewProp_RejectReason = { "RejectReason", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEMCandidateDebugRecord, RejectReason), Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEMRejectReason, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RejectReason_MetaData), NewProp_RejectReason_MetaData) }; // 1995041346
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSOTS_KEMCandidateDebugRecord_Statics::NewProp_FailureReason = { "FailureReason", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEMCandidateDebugRecord, FailureReason), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FailureReason_MetaData), NewProp_FailureReason_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_KEMCandidateDebugRecord_Statics::NewProp_DistanceToTarget = { "DistanceToTarget", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEMCandidateDebugRecord, DistanceToTarget), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceToTarget_MetaData), NewProp_DistanceToTarget_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_KEMCandidateDebugRecord_Statics::NewProp_FacingAngleDeg = { "FacingAngleDeg", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEMCandidateDebugRecord, FacingAngleDeg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FacingAngleDeg_MetaData), NewProp_FacingAngleDeg_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_KEMCandidateDebugRecord_Statics::NewProp_HeightDelta = { "HeightDelta", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEMCandidateDebugRecord, HeightDelta), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightDelta_MetaData), NewProp_HeightDelta_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_KEMCandidateDebugRecord_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEMCandidateDebugRecord_Statics::NewProp_ExecutionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEMCandidateDebugRecord_Statics::NewProp_Score,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEMCandidateDebugRecord_Statics::NewProp_bSelected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEMCandidateDebugRecord_Statics::NewProp_RejectReason_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEMCandidateDebugRecord_Statics::NewProp_RejectReason,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEMCandidateDebugRecord_Statics::NewProp_FailureReason,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEMCandidateDebugRecord_Statics::NewProp_DistanceToTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEMCandidateDebugRecord_Statics::NewProp_FacingAngleDeg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEMCandidateDebugRecord_Statics::NewProp_HeightDelta,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_KEMCandidateDebugRecord_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_KEMCandidateDebugRecord Property Definitions ******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_KEMCandidateDebugRecord_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_KillExecutionManager,
	nullptr,
	&NewStructOps,
	"SOTS_KEMCandidateDebugRecord",
	Z_Construct_UScriptStruct_FSOTS_KEMCandidateDebugRecord_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_KEMCandidateDebugRecord_Statics::PropPointers),
	sizeof(FSOTS_KEMCandidateDebugRecord),
	alignof(FSOTS_KEMCandidateDebugRecord),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_KEMCandidateDebugRecord_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_KEMCandidateDebugRecord_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_KEMCandidateDebugRecord()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_KEMCandidateDebugRecord.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_KEMCandidateDebugRecord.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_KEMCandidateDebugRecord_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_KEMCandidateDebugRecord.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_KEMCandidateDebugRecord ***************************************

// ********** Begin ScriptStruct FSOTS_KEMDecisionSnapshot *****************************************
struct Z_Construct_UScriptStruct_FSOTS_KEMDecisionSnapshot_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_KEMDecisionSnapshot); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_KEMDecisionSnapshot); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[] = {
		{ "Category", "SOTS|KEM|Debug" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "Category", "SOTS|KEM|Debug" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestedTag_MetaData[] = {
		{ "Category", "SOTS|KEM|Debug" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceLabel_MetaData[] = {
		{ "Category", "SOTS|KEM|Debug" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextTags_MetaData[] = {
		{ "Category", "SOTS|KEM|Debug" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CandidateRecords_MetaData[] = {
		{ "Category", "SOTS|KEM|Debug" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_KEMDecisionSnapshot constinit property declarations *********
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequestedTag;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceLabel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContextTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CandidateRecords_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CandidateRecords;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_KEMDecisionSnapshot constinit property declarations ***********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_KEMDecisionSnapshot>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_KEMDecisionSnapshot_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_KEMDecisionSnapshot;
class UScriptStruct* FSOTS_KEMDecisionSnapshot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_KEMDecisionSnapshot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_KEMDecisionSnapshot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_KEMDecisionSnapshot, (UObject*)Z_Construct_UPackage__Script_SOTS_KillExecutionManager(), TEXT("SOTS_KEMDecisionSnapshot"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_KEMDecisionSnapshot.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_KEMDecisionSnapshot Property Definitions ********************
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FSOTS_KEMDecisionSnapshot_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEMDecisionSnapshot, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instigator_MetaData), NewProp_Instigator_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FSOTS_KEMDecisionSnapshot_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEMDecisionSnapshot, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_KEMDecisionSnapshot_Statics::NewProp_RequestedTag = { "RequestedTag", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEMDecisionSnapshot, RequestedTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestedTag_MetaData), NewProp_RequestedTag_MetaData) }; // 517357616
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSOTS_KEMDecisionSnapshot_Statics::NewProp_SourceLabel = { "SourceLabel", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEMDecisionSnapshot, SourceLabel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceLabel_MetaData), NewProp_SourceLabel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_KEMDecisionSnapshot_Statics::NewProp_ContextTags = { "ContextTags", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEMDecisionSnapshot, ContextTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextTags_MetaData), NewProp_ContextTags_MetaData) }; // 3438578166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_KEMDecisionSnapshot_Statics::NewProp_CandidateRecords_Inner = { "CandidateRecords", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSOTS_KEMCandidateDebugRecord, METADATA_PARAMS(0, nullptr) }; // 259323273
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSOTS_KEMDecisionSnapshot_Statics::NewProp_CandidateRecords = { "CandidateRecords", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEMDecisionSnapshot, CandidateRecords), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CandidateRecords_MetaData), NewProp_CandidateRecords_MetaData) }; // 259323273
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_KEMDecisionSnapshot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEMDecisionSnapshot_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEMDecisionSnapshot_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEMDecisionSnapshot_Statics::NewProp_RequestedTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEMDecisionSnapshot_Statics::NewProp_SourceLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEMDecisionSnapshot_Statics::NewProp_ContextTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEMDecisionSnapshot_Statics::NewProp_CandidateRecords_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEMDecisionSnapshot_Statics::NewProp_CandidateRecords,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_KEMDecisionSnapshot_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_KEMDecisionSnapshot Property Definitions **********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_KEMDecisionSnapshot_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_KillExecutionManager,
	nullptr,
	&NewStructOps,
	"SOTS_KEMDecisionSnapshot",
	Z_Construct_UScriptStruct_FSOTS_KEMDecisionSnapshot_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_KEMDecisionSnapshot_Statics::PropPointers),
	sizeof(FSOTS_KEMDecisionSnapshot),
	alignof(FSOTS_KEMDecisionSnapshot),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_KEMDecisionSnapshot_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_KEMDecisionSnapshot_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_KEMDecisionSnapshot()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_KEMDecisionSnapshot.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_KEMDecisionSnapshot.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_KEMDecisionSnapshot_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_KEMDecisionSnapshot.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_KEMDecisionSnapshot *******************************************

// ********** Begin ScriptStruct FSOTS_KEMDebugRecord **********************************************
struct Z_Construct_UScriptStruct_FSOTS_KEMDebugRecord_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_KEMDebugRecord); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_KEMDebugRecord); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * High-level summary record for a single execution request, used by debug UI.\n */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "High-level summary record for a single execution request, used by debug UI." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestedTag_MetaData[] = {
		{ "Category", "SOTS|KEM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Execution tag that was requested / chosen.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Execution tag that was requested / chosen." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionName_MetaData[] = {
		{ "Category", "SOTS|KEM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Friendly execution name (ExecutionTag or asset name).\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Friendly execution name (ExecutionTag or asset name)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[] = {
		{ "Category", "SOTS|KEM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Score of the chosen execution at selection time.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Score of the chosen execution at selection time." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "SOTS|KEM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Final result once the execution completes.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Final result once the execution completes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Phase_MetaData[] = {
		{ "Category", "SOTS|KEM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Textual phase / state (\"Requested\", \"Executing\", \"Finished\", \"Failed\").\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Textual phase / state (\"Requested\", \"Executing\", \"Finished\", \"Failed\")." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FailureReason_MetaData[] = {
		{ "Category", "SOTS|KEM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional failure reason if the execution was rejected or failed.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional failure reason if the execution was rejected or failed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[] = {
		{ "Category", "SOTS|KEM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Instigator / target actors involved in the request.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Instigator / target actors involved in the request." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "Category", "SOTS|KEM" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_KEMDebugRecord constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequestedTag;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExecutionName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Score;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Phase;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FailureReason;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_KEMDebugRecord constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_KEMDebugRecord>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_KEMDebugRecord_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_KEMDebugRecord;
class UScriptStruct* FSOTS_KEMDebugRecord::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_KEMDebugRecord.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_KEMDebugRecord.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_KEMDebugRecord, (UObject*)Z_Construct_UPackage__Script_SOTS_KillExecutionManager(), TEXT("SOTS_KEMDebugRecord"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_KEMDebugRecord.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_KEMDebugRecord Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_KEMDebugRecord_Statics::NewProp_RequestedTag = { "RequestedTag", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEMDebugRecord, RequestedTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestedTag_MetaData), NewProp_RequestedTag_MetaData) }; // 517357616
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSOTS_KEMDebugRecord_Statics::NewProp_ExecutionName = { "ExecutionName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEMDebugRecord, ExecutionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionName_MetaData), NewProp_ExecutionName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_KEMDebugRecord_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEMDebugRecord, Score), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Score_MetaData), NewProp_Score_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSOTS_KEMDebugRecord_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSOTS_KEMDebugRecord_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEMDebugRecord, Result), Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_ExecutionResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 1001899342
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSOTS_KEMDebugRecord_Statics::NewProp_Phase = { "Phase", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEMDebugRecord, Phase), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Phase_MetaData), NewProp_Phase_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSOTS_KEMDebugRecord_Statics::NewProp_FailureReason = { "FailureReason", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEMDebugRecord, FailureReason), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FailureReason_MetaData), NewProp_FailureReason_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FSOTS_KEMDebugRecord_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEMDebugRecord, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instigator_MetaData), NewProp_Instigator_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FSOTS_KEMDebugRecord_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEMDebugRecord, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_KEMDebugRecord_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEMDebugRecord_Statics::NewProp_RequestedTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEMDebugRecord_Statics::NewProp_ExecutionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEMDebugRecord_Statics::NewProp_Score,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEMDebugRecord_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEMDebugRecord_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEMDebugRecord_Statics::NewProp_Phase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEMDebugRecord_Statics::NewProp_FailureReason,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEMDebugRecord_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEMDebugRecord_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_KEMDebugRecord_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_KEMDebugRecord Property Definitions ***************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_KEMDebugRecord_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_KillExecutionManager,
	nullptr,
	&NewStructOps,
	"SOTS_KEMDebugRecord",
	Z_Construct_UScriptStruct_FSOTS_KEMDebugRecord_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_KEMDebugRecord_Statics::PropPointers),
	sizeof(FSOTS_KEMDebugRecord),
	alignof(FSOTS_KEMDebugRecord),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_KEMDebugRecord_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_KEMDebugRecord_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_KEMDebugRecord()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_KEMDebugRecord.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_KEMDebugRecord.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_KEMDebugRecord_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_KEMDebugRecord.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_KEMDebugRecord ************************************************

// ********** Begin ScriptStruct FSOTS_KEMValidationResult *****************************************
struct Z_Construct_UScriptStruct_FSOTS_KEMValidationResult_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_KEMValidationResult); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_KEMValidationResult); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[] = {
		{ "Category", "SOTS|KEM|Validation" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Errors_MetaData[] = {
		{ "Category", "SOTS|KEM|Validation" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Warnings_MetaData[] = {
		{ "Category", "SOTS|KEM|Validation" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_KEMValidationResult constinit property declarations *********
	static void NewProp_bIsValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Errors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Errors;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Warnings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Warnings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_KEMValidationResult constinit property declarations ***********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_KEMValidationResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_KEMValidationResult_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_KEMValidationResult;
class UScriptStruct* FSOTS_KEMValidationResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_KEMValidationResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_KEMValidationResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_KEMValidationResult, (UObject*)Z_Construct_UPackage__Script_SOTS_KillExecutionManager(), TEXT("SOTS_KEMValidationResult"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_KEMValidationResult.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_KEMValidationResult Property Definitions ********************
void Z_Construct_UScriptStruct_FSOTS_KEMValidationResult_Statics::NewProp_bIsValid_SetBit(void* Obj)
{
	((FSOTS_KEMValidationResult*)Obj)->bIsValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSOTS_KEMValidationResult_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSOTS_KEMValidationResult), &Z_Construct_UScriptStruct_FSOTS_KEMValidationResult_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsValid_MetaData), NewProp_bIsValid_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSOTS_KEMValidationResult_Statics::NewProp_Errors_Inner = { "Errors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSOTS_KEMValidationResult_Statics::NewProp_Errors = { "Errors", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEMValidationResult, Errors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Errors_MetaData), NewProp_Errors_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSOTS_KEMValidationResult_Statics::NewProp_Warnings_Inner = { "Warnings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSOTS_KEMValidationResult_Statics::NewProp_Warnings = { "Warnings", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEMValidationResult, Warnings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Warnings_MetaData), NewProp_Warnings_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_KEMValidationResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEMValidationResult_Statics::NewProp_bIsValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEMValidationResult_Statics::NewProp_Errors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEMValidationResult_Statics::NewProp_Errors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEMValidationResult_Statics::NewProp_Warnings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEMValidationResult_Statics::NewProp_Warnings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_KEMValidationResult_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_KEMValidationResult Property Definitions **********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_KEMValidationResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_KillExecutionManager,
	nullptr,
	&NewStructOps,
	"SOTS_KEMValidationResult",
	Z_Construct_UScriptStruct_FSOTS_KEMValidationResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_KEMValidationResult_Statics::PropPointers),
	sizeof(FSOTS_KEMValidationResult),
	alignof(FSOTS_KEMValidationResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_KEMValidationResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_KEMValidationResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_KEMValidationResult()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_KEMValidationResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_KEMValidationResult.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_KEMValidationResult_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_KEMValidationResult.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_KEMValidationResult *******************************************

// ********** Begin ScriptStruct FSOTS_KEM_CASOffsetConfig *****************************************
struct Z_Construct_UScriptStruct_FSOTS_KEM_CASOffsetConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_KEM_CASOffsetConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_KEM_CASOffsetConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstigatorLocalOffsetFromTarget_MetaData[] = {
		{ "Category", "CAS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Instigator local offset relative to target, authored at (0,0,0) in CAS\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Instigator local offset relative to target, authored at (0,0,0) in CAS" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstigatorLocalRotationOffset_MetaData[] = {
		{ "Category", "CAS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional local rotation offset\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional local rotation offset" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxWarpDistance_MetaData[] = {
		{ "Category", "CAS" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Maximum distance the instigator is allowed to warp to reach this offset\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum distance the instigator is allowed to warp to reach this offset" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_KEM_CASOffsetConfig constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstigatorLocalOffsetFromTarget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstigatorLocalRotationOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxWarpDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_KEM_CASOffsetConfig constinit property declarations ***********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_KEM_CASOffsetConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_KEM_CASOffsetConfig_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_KEM_CASOffsetConfig;
class UScriptStruct* FSOTS_KEM_CASOffsetConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_KEM_CASOffsetConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_KEM_CASOffsetConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_KEM_CASOffsetConfig, (UObject*)Z_Construct_UPackage__Script_SOTS_KillExecutionManager(), TEXT("SOTS_KEM_CASOffsetConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_KEM_CASOffsetConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_KEM_CASOffsetConfig Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_KEM_CASOffsetConfig_Statics::NewProp_InstigatorLocalOffsetFromTarget = { "InstigatorLocalOffsetFromTarget", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEM_CASOffsetConfig, InstigatorLocalOffsetFromTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstigatorLocalOffsetFromTarget_MetaData), NewProp_InstigatorLocalOffsetFromTarget_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_KEM_CASOffsetConfig_Statics::NewProp_InstigatorLocalRotationOffset = { "InstigatorLocalRotationOffset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEM_CASOffsetConfig, InstigatorLocalRotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstigatorLocalRotationOffset_MetaData), NewProp_InstigatorLocalRotationOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_KEM_CASOffsetConfig_Statics::NewProp_MaxWarpDistance = { "MaxWarpDistance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEM_CASOffsetConfig, MaxWarpDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxWarpDistance_MetaData), NewProp_MaxWarpDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_KEM_CASOffsetConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEM_CASOffsetConfig_Statics::NewProp_InstigatorLocalOffsetFromTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEM_CASOffsetConfig_Statics::NewProp_InstigatorLocalRotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEM_CASOffsetConfig_Statics::NewProp_MaxWarpDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_KEM_CASOffsetConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_KEM_CASOffsetConfig Property Definitions **********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_KEM_CASOffsetConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_KillExecutionManager,
	nullptr,
	&NewStructOps,
	"SOTS_KEM_CASOffsetConfig",
	Z_Construct_UScriptStruct_FSOTS_KEM_CASOffsetConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_KEM_CASOffsetConfig_Statics::PropPointers),
	sizeof(FSOTS_KEM_CASOffsetConfig),
	alignof(FSOTS_KEM_CASOffsetConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_KEM_CASOffsetConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_KEM_CASOffsetConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_KEM_CASOffsetConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_KEM_CASOffsetConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_KEM_CASOffsetConfig.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_KEM_CASOffsetConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_KEM_CASOffsetConfig.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_KEM_CASOffsetConfig *******************************************

// ********** Begin ScriptStruct FSOTS_KEM_CASConfig ***********************************************
struct Z_Construct_UScriptStruct_FSOTS_KEM_CASConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_KEM_CASConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_KEM_CASConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scene_MetaData[] = {
		{ "Category", "CAS" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionName_MetaData[] = {
		{ "Category", "CAS" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstigatorRoleName_MetaData[] = {
		{ "Category", "CAS" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetRoleName_MetaData[] = {
		{ "Category", "CAS" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSamePlaneHeightDelta_MetaData[] = {
		{ "Category", "CAS" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Same-plane law tolerance\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Same-plane law tolerance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinDistance_MetaData[] = {
		{ "Category", "CAS" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Distance window\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distance window" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[] = {
		{ "Category", "CAS" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxFacingAngleDegrees_MetaData[] = {
		{ "Category", "CAS" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Facing window\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Facing window" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetConfig_MetaData[] = {
		{ "Category", "CAS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Per-execution authored offset / warp tolerance\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Per-execution authored offset / warp tolerance" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_KEM_CASConfig constinit property declarations ***************
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Scene;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SectionName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InstigatorRoleName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TargetRoleName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSamePlaneHeightDelta;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxFacingAngleDegrees;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetConfig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_KEM_CASConfig constinit property declarations *****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_KEM_CASConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_KEM_CASConfig_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_KEM_CASConfig;
class UScriptStruct* FSOTS_KEM_CASConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_KEM_CASConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_KEM_CASConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_KEM_CASConfig, (UObject*)Z_Construct_UPackage__Script_SOTS_KillExecutionManager(), TEXT("SOTS_KEM_CASConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_KEM_CASConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_KEM_CASConfig Property Definitions **************************
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSOTS_KEM_CASConfig_Statics::NewProp_Scene = { "Scene", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEM_CASConfig, Scene), Z_Construct_UClass_UContextualAnimSceneAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scene_MetaData), NewProp_Scene_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSOTS_KEM_CASConfig_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEM_CASConfig, SectionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionName_MetaData), NewProp_SectionName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSOTS_KEM_CASConfig_Statics::NewProp_InstigatorRoleName = { "InstigatorRoleName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEM_CASConfig, InstigatorRoleName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstigatorRoleName_MetaData), NewProp_InstigatorRoleName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSOTS_KEM_CASConfig_Statics::NewProp_TargetRoleName = { "TargetRoleName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEM_CASConfig, TargetRoleName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetRoleName_MetaData), NewProp_TargetRoleName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_KEM_CASConfig_Statics::NewProp_MaxSamePlaneHeightDelta = { "MaxSamePlaneHeightDelta", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEM_CASConfig, MaxSamePlaneHeightDelta), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSamePlaneHeightDelta_MetaData), NewProp_MaxSamePlaneHeightDelta_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_KEM_CASConfig_Statics::NewProp_MinDistance = { "MinDistance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEM_CASConfig, MinDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinDistance_MetaData), NewProp_MinDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_KEM_CASConfig_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEM_CASConfig, MaxDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDistance_MetaData), NewProp_MaxDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_KEM_CASConfig_Statics::NewProp_MaxFacingAngleDegrees = { "MaxFacingAngleDegrees", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEM_CASConfig, MaxFacingAngleDegrees), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxFacingAngleDegrees_MetaData), NewProp_MaxFacingAngleDegrees_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_KEM_CASConfig_Statics::NewProp_OffsetConfig = { "OffsetConfig", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEM_CASConfig, OffsetConfig), Z_Construct_UScriptStruct_FSOTS_KEM_CASOffsetConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetConfig_MetaData), NewProp_OffsetConfig_MetaData) }; // 1240034505
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_KEM_CASConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEM_CASConfig_Statics::NewProp_Scene,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEM_CASConfig_Statics::NewProp_SectionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEM_CASConfig_Statics::NewProp_InstigatorRoleName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEM_CASConfig_Statics::NewProp_TargetRoleName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEM_CASConfig_Statics::NewProp_MaxSamePlaneHeightDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEM_CASConfig_Statics::NewProp_MinDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEM_CASConfig_Statics::NewProp_MaxDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEM_CASConfig_Statics::NewProp_MaxFacingAngleDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEM_CASConfig_Statics::NewProp_OffsetConfig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_KEM_CASConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_KEM_CASConfig Property Definitions ****************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_KEM_CASConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_KillExecutionManager,
	nullptr,
	&NewStructOps,
	"SOTS_KEM_CASConfig",
	Z_Construct_UScriptStruct_FSOTS_KEM_CASConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_KEM_CASConfig_Statics::PropPointers),
	sizeof(FSOTS_KEM_CASConfig),
	alignof(FSOTS_KEM_CASConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_KEM_CASConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_KEM_CASConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_KEM_CASConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_KEM_CASConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_KEM_CASConfig.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_KEM_CASConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_KEM_CASConfig.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_KEM_CASConfig *************************************************

// ********** Begin Enum ESOTS_KEM_WarpRef *********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESOTS_KEM_WarpRef;
static UEnum* ESOTS_KEM_WarpRef_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESOTS_KEM_WarpRef.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESOTS_KEM_WarpRef.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_WarpRef, (UObject*)Z_Construct_UPackage__Script_SOTS_KillExecutionManager(), TEXT("ESOTS_KEM_WarpRef"));
	}
	return Z_Registration_Info_UEnum_ESOTS_KEM_WarpRef.OuterSingleton;
}
template<> SOTS_KILLEXECUTIONMANAGER_NON_ATTRIBUTED_API UEnum* StaticEnum<ESOTS_KEM_WarpRef>()
{
	return ESOTS_KEM_WarpRef_StaticEnum();
}
struct Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_WarpRef_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Instigator.DisplayName", "Instigator Actor" },
		{ "Instigator.Name", "ESOTS_KEM_WarpRef::Instigator" },
		{ "InstigatorBone.DisplayName", "Instigator Bone/Socket" },
		{ "InstigatorBone.Name", "ESOTS_KEM_WarpRef::InstigatorBone" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
		{ "Target.DisplayName", "Target Actor" },
		{ "Target.Name", "ESOTS_KEM_WarpRef::Target" },
		{ "TargetBone.DisplayName", "Target Bone/Socket" },
		{ "TargetBone.Name", "ESOTS_KEM_WarpRef::TargetBone" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESOTS_KEM_WarpRef::Instigator", (int64)ESOTS_KEM_WarpRef::Instigator },
		{ "ESOTS_KEM_WarpRef::Target", (int64)ESOTS_KEM_WarpRef::Target },
		{ "ESOTS_KEM_WarpRef::InstigatorBone", (int64)ESOTS_KEM_WarpRef::InstigatorBone },
		{ "ESOTS_KEM_WarpRef::TargetBone", (int64)ESOTS_KEM_WarpRef::TargetBone },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_WarpRef_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_WarpRef_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SOTS_KillExecutionManager,
	nullptr,
	"ESOTS_KEM_WarpRef",
	"ESOTS_KEM_WarpRef",
	Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_WarpRef_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_WarpRef_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_WarpRef_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_WarpRef_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_WarpRef()
{
	if (!Z_Registration_Info_UEnum_ESOTS_KEM_WarpRef.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESOTS_KEM_WarpRef.InnerSingleton, Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_WarpRef_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESOTS_KEM_WarpRef.InnerSingleton;
}
// ********** End Enum ESOTS_KEM_WarpRef ***********************************************************

// ********** Begin ScriptStruct FSOTS_KEM_WarpPointDef ********************************************
struct Z_Construct_UScriptStruct_FSOTS_KEM_WarpPointDef_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_KEM_WarpPointDef); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_KEM_WarpPointDef); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WarpTargetName_MetaData[] = {
		{ "Category", "Warp" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Reference_MetaData[] = {
		{ "Category", "Warp" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneOrSocketName_MetaData[] = {
		{ "Category", "Warp" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalOffset_MetaData[] = {
		{ "Category", "Warp" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalRotationOffset_MetaData[] = {
		{ "Category", "Warp" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxWarpDistance_MetaData[] = {
		{ "Category", "Warp" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_KEM_WarpPointDef constinit property declarations ************
	static const UECodeGen_Private::FNamePropertyParams NewProp_WarpTargetName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Reference_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Reference;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneOrSocketName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalRotationOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxWarpDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_KEM_WarpPointDef constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_KEM_WarpPointDef>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_KEM_WarpPointDef_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_KEM_WarpPointDef;
class UScriptStruct* FSOTS_KEM_WarpPointDef::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_KEM_WarpPointDef.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_KEM_WarpPointDef.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_KEM_WarpPointDef, (UObject*)Z_Construct_UPackage__Script_SOTS_KillExecutionManager(), TEXT("SOTS_KEM_WarpPointDef"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_KEM_WarpPointDef.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_KEM_WarpPointDef Property Definitions ***********************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSOTS_KEM_WarpPointDef_Statics::NewProp_WarpTargetName = { "WarpTargetName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEM_WarpPointDef, WarpTargetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WarpTargetName_MetaData), NewProp_WarpTargetName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSOTS_KEM_WarpPointDef_Statics::NewProp_Reference_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSOTS_KEM_WarpPointDef_Statics::NewProp_Reference = { "Reference", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEM_WarpPointDef, Reference), Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_WarpRef, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reference_MetaData), NewProp_Reference_MetaData) }; // 2909630492
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSOTS_KEM_WarpPointDef_Statics::NewProp_BoneOrSocketName = { "BoneOrSocketName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEM_WarpPointDef, BoneOrSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneOrSocketName_MetaData), NewProp_BoneOrSocketName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_KEM_WarpPointDef_Statics::NewProp_LocalOffset = { "LocalOffset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEM_WarpPointDef, LocalOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalOffset_MetaData), NewProp_LocalOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_KEM_WarpPointDef_Statics::NewProp_LocalRotationOffset = { "LocalRotationOffset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEM_WarpPointDef, LocalRotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalRotationOffset_MetaData), NewProp_LocalRotationOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_KEM_WarpPointDef_Statics::NewProp_MaxWarpDistance = { "MaxWarpDistance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEM_WarpPointDef, MaxWarpDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxWarpDistance_MetaData), NewProp_MaxWarpDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_KEM_WarpPointDef_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEM_WarpPointDef_Statics::NewProp_WarpTargetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEM_WarpPointDef_Statics::NewProp_Reference_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEM_WarpPointDef_Statics::NewProp_Reference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEM_WarpPointDef_Statics::NewProp_BoneOrSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEM_WarpPointDef_Statics::NewProp_LocalOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEM_WarpPointDef_Statics::NewProp_LocalRotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEM_WarpPointDef_Statics::NewProp_MaxWarpDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_KEM_WarpPointDef_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_KEM_WarpPointDef Property Definitions *************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_KEM_WarpPointDef_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_KillExecutionManager,
	nullptr,
	&NewStructOps,
	"SOTS_KEM_WarpPointDef",
	Z_Construct_UScriptStruct_FSOTS_KEM_WarpPointDef_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_KEM_WarpPointDef_Statics::PropPointers),
	sizeof(FSOTS_KEM_WarpPointDef),
	alignof(FSOTS_KEM_WarpPointDef),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_KEM_WarpPointDef_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_KEM_WarpPointDef_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_KEM_WarpPointDef()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_KEM_WarpPointDef.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_KEM_WarpPointDef.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_KEM_WarpPointDef_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_KEM_WarpPointDef.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_KEM_WarpPointDef **********************************************

// ********** Begin Class USOTS_SpawnExecutionData *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_SpawnExecutionData;
UClass* USOTS_SpawnExecutionData::GetPrivateStaticClass()
{
	using TClass = USOTS_SpawnExecutionData;
	if (!Z_Registration_Info_UClass_USOTS_SpawnExecutionData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_SpawnExecutionData"),
			Z_Registration_Info_UClass_USOTS_SpawnExecutionData.InnerSingleton,
			StaticRegisterNativesUSOTS_SpawnExecutionData,
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
	return Z_Registration_Info_UClass_USOTS_SpawnExecutionData.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_SpawnExecutionData_NoRegister()
{
	return USOTS_SpawnExecutionData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_SpawnExecutionData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SOTS_KEM_Types.h" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstigatorMontage_MetaData[] = {
		{ "Category", "Montages" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Montages to play for this spawn-based execution. TargetMontage can be left null\n// for one-sided executions.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Montages to play for this spawn-based execution. TargetMontage can be left null\nfor one-sided executions." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetMontage_MetaData[] = {
		{ "Category", "Montages" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstigatorWarpPointNames_MetaData[] = {
		{ "Category", "Warp" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Candidate warp point names for the instigator. These should correspond to\n// WarpPoints authored on the owning ExecutionDefinition. OmniTrace or other\n// logic can decide which one is actually used at runtime.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Candidate warp point names for the instigator. These should correspond to\nWarpPoints authored on the owning ExecutionDefinition. OmniTrace or other\nlogic can decide which one is actually used at runtime." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetWarpPointNames_MetaData[] = {
		{ "Category", "Warp" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Candidate warp point names for the target, if required.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Candidate warp point names for the target, if required." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_SpawnExecutionData constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatorMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMontage;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InstigatorWarpPointNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InstigatorWarpPointNames;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TargetWarpPointNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetWarpPointNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USOTS_SpawnExecutionData constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_SpawnExecutionData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_SpawnExecutionData_Statics

// ********** Begin Class USOTS_SpawnExecutionData Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USOTS_SpawnExecutionData_Statics::NewProp_InstigatorMontage = { "InstigatorMontage", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_SpawnExecutionData, InstigatorMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstigatorMontage_MetaData), NewProp_InstigatorMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USOTS_SpawnExecutionData_Statics::NewProp_TargetMontage = { "TargetMontage", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_SpawnExecutionData, TargetMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetMontage_MetaData), NewProp_TargetMontage_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USOTS_SpawnExecutionData_Statics::NewProp_InstigatorWarpPointNames_Inner = { "InstigatorWarpPointNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USOTS_SpawnExecutionData_Statics::NewProp_InstigatorWarpPointNames = { "InstigatorWarpPointNames", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_SpawnExecutionData, InstigatorWarpPointNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstigatorWarpPointNames_MetaData), NewProp_InstigatorWarpPointNames_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USOTS_SpawnExecutionData_Statics::NewProp_TargetWarpPointNames_Inner = { "TargetWarpPointNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USOTS_SpawnExecutionData_Statics::NewProp_TargetWarpPointNames = { "TargetWarpPointNames", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_SpawnExecutionData, TargetWarpPointNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetWarpPointNames_MetaData), NewProp_TargetWarpPointNames_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USOTS_SpawnExecutionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_SpawnExecutionData_Statics::NewProp_InstigatorMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_SpawnExecutionData_Statics::NewProp_TargetMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_SpawnExecutionData_Statics::NewProp_InstigatorWarpPointNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_SpawnExecutionData_Statics::NewProp_InstigatorWarpPointNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_SpawnExecutionData_Statics::NewProp_TargetWarpPointNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_SpawnExecutionData_Statics::NewProp_TargetWarpPointNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_SpawnExecutionData_Statics::PropPointers) < 2048);
// ********** End Class USOTS_SpawnExecutionData Property Definitions ******************************
UObject* (*const Z_Construct_UClass_USOTS_SpawnExecutionData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_KillExecutionManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_SpawnExecutionData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_SpawnExecutionData_Statics::ClassParams = {
	&USOTS_SpawnExecutionData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USOTS_SpawnExecutionData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_SpawnExecutionData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_SpawnExecutionData_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_SpawnExecutionData_Statics::Class_MetaDataParams)
};
void USOTS_SpawnExecutionData::StaticRegisterNativesUSOTS_SpawnExecutionData()
{
}
UClass* Z_Construct_UClass_USOTS_SpawnExecutionData()
{
	if (!Z_Registration_Info_UClass_USOTS_SpawnExecutionData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_SpawnExecutionData.OuterSingleton, Z_Construct_UClass_USOTS_SpawnExecutionData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_SpawnExecutionData.OuterSingleton;
}
USOTS_SpawnExecutionData::USOTS_SpawnExecutionData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_SpawnExecutionData);
USOTS_SpawnExecutionData::~USOTS_SpawnExecutionData() {}
// ********** End Class USOTS_SpawnExecutionData ***************************************************

// ********** Begin ScriptStruct FSOTS_KEM_SpawnActorConfig ****************************************
struct Z_Construct_UScriptStruct_FSOTS_KEM_SpawnActorConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_KEM_SpawnActorConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_KEM_SpawnActorConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HelperClass_MetaData[] = {
		{ "Category", "SpawnActor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Helper actor class to spawn for this execution. */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Helper actor class to spawn for this execution." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionData_MetaData[] = {
		{ "Category", "SpawnActor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** DataAsset describing the spawn-based execution (montages, warp point names, etc). */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DataAsset describing the spawn-based execution (montages, warp point names, etc)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseOmniTraceForWarp_MetaData[] = {
		{ "Category", "SpawnActor|OmniTrace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, KEM will call into OmniTrace to refine the spawn transform / warp targets. */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, KEM will call into OmniTrace to refine the spawn transform / warp targets." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OmniTracePreset_MetaData[] = {
		{ "Category", "SpawnActor|OmniTrace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** KEM preset that determines which OmniTrace pattern is used. */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "KEM preset that determines which OmniTrace pattern is used." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OmniTracePatternTag_MetaData[] = {
		{ "Categories", "SOTS.OmniTrace" },
		{ "Category", "SpawnActor|OmniTrace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** High-level pattern tag that selects which OmniTrace logic to run (e.g. SOTS.OmniTrace.KEM.Ground.Rear.Single). */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "High-level pattern tag that selects which OmniTrace logic to run (e.g. SOTS.OmniTrace.KEM.Ground.Rear.Single)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_KEM_SpawnActorConfig constinit property declarations ********
	static const UECodeGen_Private::FClassPropertyParams NewProp_HelperClass;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ExecutionData;
	static void NewProp_bUseOmniTraceForWarp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseOmniTraceForWarp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OmniTracePreset_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OmniTracePreset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OmniTracePatternTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_KEM_SpawnActorConfig constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_KEM_SpawnActorConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_KEM_SpawnActorConfig_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_KEM_SpawnActorConfig;
class UScriptStruct* FSOTS_KEM_SpawnActorConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_KEM_SpawnActorConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_KEM_SpawnActorConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_KEM_SpawnActorConfig, (UObject*)Z_Construct_UPackage__Script_SOTS_KillExecutionManager(), TEXT("SOTS_KEM_SpawnActorConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_KEM_SpawnActorConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_KEM_SpawnActorConfig Property Definitions *******************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSOTS_KEM_SpawnActorConfig_Statics::NewProp_HelperClass = { "HelperClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEM_SpawnActorConfig, HelperClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HelperClass_MetaData), NewProp_HelperClass_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSOTS_KEM_SpawnActorConfig_Statics::NewProp_ExecutionData = { "ExecutionData", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEM_SpawnActorConfig, ExecutionData), Z_Construct_UClass_USOTS_SpawnExecutionData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionData_MetaData), NewProp_ExecutionData_MetaData) };
void Z_Construct_UScriptStruct_FSOTS_KEM_SpawnActorConfig_Statics::NewProp_bUseOmniTraceForWarp_SetBit(void* Obj)
{
	((FSOTS_KEM_SpawnActorConfig*)Obj)->bUseOmniTraceForWarp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSOTS_KEM_SpawnActorConfig_Statics::NewProp_bUseOmniTraceForWarp = { "bUseOmniTraceForWarp", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSOTS_KEM_SpawnActorConfig), &Z_Construct_UScriptStruct_FSOTS_KEM_SpawnActorConfig_Statics::NewProp_bUseOmniTraceForWarp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseOmniTraceForWarp_MetaData), NewProp_bUseOmniTraceForWarp_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSOTS_KEM_SpawnActorConfig_Statics::NewProp_OmniTracePreset_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSOTS_KEM_SpawnActorConfig_Statics::NewProp_OmniTracePreset = { "OmniTracePreset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEM_SpawnActorConfig, OmniTracePreset), Z_Construct_UEnum_OmniTrace_ESOTS_OmniTraceKEMPreset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OmniTracePreset_MetaData), NewProp_OmniTracePreset_MetaData) }; // 3632778219
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_KEM_SpawnActorConfig_Statics::NewProp_OmniTracePatternTag = { "OmniTracePatternTag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEM_SpawnActorConfig, OmniTracePatternTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OmniTracePatternTag_MetaData), NewProp_OmniTracePatternTag_MetaData) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_KEM_SpawnActorConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEM_SpawnActorConfig_Statics::NewProp_HelperClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEM_SpawnActorConfig_Statics::NewProp_ExecutionData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEM_SpawnActorConfig_Statics::NewProp_bUseOmniTraceForWarp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEM_SpawnActorConfig_Statics::NewProp_OmniTracePreset_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEM_SpawnActorConfig_Statics::NewProp_OmniTracePreset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEM_SpawnActorConfig_Statics::NewProp_OmniTracePatternTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_KEM_SpawnActorConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_KEM_SpawnActorConfig Property Definitions *********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_KEM_SpawnActorConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_KillExecutionManager,
	nullptr,
	&NewStructOps,
	"SOTS_KEM_SpawnActorConfig",
	Z_Construct_UScriptStruct_FSOTS_KEM_SpawnActorConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_KEM_SpawnActorConfig_Statics::PropPointers),
	sizeof(FSOTS_KEM_SpawnActorConfig),
	alignof(FSOTS_KEM_SpawnActorConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_KEM_SpawnActorConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_KEM_SpawnActorConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_KEM_SpawnActorConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_KEM_SpawnActorConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_KEM_SpawnActorConfig.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_KEM_SpawnActorConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_KEM_SpawnActorConfig.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_KEM_SpawnActorConfig ******************************************

// ********** Begin ScriptStruct FSOTS_KEM_LevelSequenceConfig *************************************
struct Z_Construct_UScriptStruct_FSOTS_KEM_LevelSequenceConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_KEM_LevelSequenceConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_KEM_LevelSequenceConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// LevelSequence backend config (kept generic so callers can decide how to play sequences).\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "LevelSequence backend config (kept generic so callers can decide how to play sequences)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SequenceAsset_MetaData[] = {
		{ "Category", "LevelSequence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Generic sequence asset reference (e.g. LevelSequence) to drive cinematic executions. */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generic sequence asset reference (e.g. LevelSequence) to drive cinematic executions." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstigatorBindingName_MetaData[] = {
		{ "Category", "LevelSequence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional binding name for the instigator within the sequence. */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional binding name for the instigator within the sequence." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetBindingName_MetaData[] = {
		{ "Category", "LevelSequence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional binding name for the target within the sequence. */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional binding name for the target within the sequence." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_KEM_LevelSequenceConfig constinit property declarations *****
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SequenceAsset;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InstigatorBindingName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TargetBindingName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_KEM_LevelSequenceConfig constinit property declarations *******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_KEM_LevelSequenceConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_KEM_LevelSequenceConfig_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_KEM_LevelSequenceConfig;
class UScriptStruct* FSOTS_KEM_LevelSequenceConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_KEM_LevelSequenceConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_KEM_LevelSequenceConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_KEM_LevelSequenceConfig, (UObject*)Z_Construct_UPackage__Script_SOTS_KillExecutionManager(), TEXT("SOTS_KEM_LevelSequenceConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_KEM_LevelSequenceConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_KEM_LevelSequenceConfig Property Definitions ****************
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSOTS_KEM_LevelSequenceConfig_Statics::NewProp_SequenceAsset = { "SequenceAsset", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEM_LevelSequenceConfig, SequenceAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SequenceAsset_MetaData), NewProp_SequenceAsset_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSOTS_KEM_LevelSequenceConfig_Statics::NewProp_InstigatorBindingName = { "InstigatorBindingName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEM_LevelSequenceConfig, InstigatorBindingName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstigatorBindingName_MetaData), NewProp_InstigatorBindingName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSOTS_KEM_LevelSequenceConfig_Statics::NewProp_TargetBindingName = { "TargetBindingName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEM_LevelSequenceConfig, TargetBindingName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetBindingName_MetaData), NewProp_TargetBindingName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_KEM_LevelSequenceConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEM_LevelSequenceConfig_Statics::NewProp_SequenceAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEM_LevelSequenceConfig_Statics::NewProp_InstigatorBindingName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEM_LevelSequenceConfig_Statics::NewProp_TargetBindingName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_KEM_LevelSequenceConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_KEM_LevelSequenceConfig Property Definitions ******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_KEM_LevelSequenceConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_KillExecutionManager,
	nullptr,
	&NewStructOps,
	"SOTS_KEM_LevelSequenceConfig",
	Z_Construct_UScriptStruct_FSOTS_KEM_LevelSequenceConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_KEM_LevelSequenceConfig_Statics::PropPointers),
	sizeof(FSOTS_KEM_LevelSequenceConfig),
	alignof(FSOTS_KEM_LevelSequenceConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_KEM_LevelSequenceConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_KEM_LevelSequenceConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_KEM_LevelSequenceConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_KEM_LevelSequenceConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_KEM_LevelSequenceConfig.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_KEM_LevelSequenceConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_KEM_LevelSequenceConfig.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_KEM_LevelSequenceConfig ***************************************

// ********** Begin ScriptStruct FSOTS_KEM_AISConfig ***********************************************
struct Z_Construct_UScriptStruct_FSOTS_KEM_AISConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_KEM_AISConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_KEM_AISConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// AIS / ability backend config \xe2\x80\x93 intentionally lightweight and tag-driven.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AIS / ability backend config \xe2\x80\x93 intentionally lightweight and tag-driven." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTag_MetaData[] = {
		{ "Category", "AIS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** High-level behavior tag used by your AI / ability systems to decide what to run. */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "High-level behavior tag used by your AI / ability systems to decide what to run." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_KEM_AISConfig constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_BehaviorTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_KEM_AISConfig constinit property declarations *****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_KEM_AISConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_KEM_AISConfig_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_KEM_AISConfig;
class UScriptStruct* FSOTS_KEM_AISConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_KEM_AISConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_KEM_AISConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_KEM_AISConfig, (UObject*)Z_Construct_UPackage__Script_SOTS_KillExecutionManager(), TEXT("SOTS_KEM_AISConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_KEM_AISConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_KEM_AISConfig Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_KEM_AISConfig_Statics::NewProp_BehaviorTag = { "BehaviorTag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEM_AISConfig, BehaviorTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorTag_MetaData), NewProp_BehaviorTag_MetaData) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_KEM_AISConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEM_AISConfig_Statics::NewProp_BehaviorTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_KEM_AISConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_KEM_AISConfig Property Definitions ****************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_KEM_AISConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_KillExecutionManager,
	nullptr,
	&NewStructOps,
	"SOTS_KEM_AISConfig",
	Z_Construct_UScriptStruct_FSOTS_KEM_AISConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_KEM_AISConfig_Statics::PropPointers),
	sizeof(FSOTS_KEM_AISConfig),
	alignof(FSOTS_KEM_AISConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_KEM_AISConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_KEM_AISConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_KEM_AISConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_KEM_AISConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_KEM_AISConfig.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_KEM_AISConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_KEM_AISConfig.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_KEM_AISConfig *************************************************

// ********** Begin Class USOTS_KEM_ExecutionDefinition Function ValidateDefinition ****************
struct Z_Construct_UFunction_USOTS_KEM_ExecutionDefinition_ValidateDefinition_Statics
{
	struct SOTS_KEM_ExecutionDefinition_eventValidateDefinition_Parms
	{
		FSOTS_KEMValidationResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|KEM|Validation" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ValidateDefinition constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ValidateDefinition constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ValidateDefinition Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_KEM_ExecutionDefinition_ValidateDefinition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEM_ExecutionDefinition_eventValidateDefinition_Parms, ReturnValue), Z_Construct_UScriptStruct_FSOTS_KEMValidationResult, METADATA_PARAMS(0, nullptr) }; // 44128021
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_KEM_ExecutionDefinition_ValidateDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEM_ExecutionDefinition_ValidateDefinition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEM_ExecutionDefinition_ValidateDefinition_Statics::PropPointers) < 2048);
// ********** End Function ValidateDefinition Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_KEM_ExecutionDefinition_ValidateDefinition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_KEM_ExecutionDefinition, nullptr, "ValidateDefinition", 	Z_Construct_UFunction_USOTS_KEM_ExecutionDefinition_ValidateDefinition_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEM_ExecutionDefinition_ValidateDefinition_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_KEM_ExecutionDefinition_ValidateDefinition_Statics::SOTS_KEM_ExecutionDefinition_eventValidateDefinition_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEM_ExecutionDefinition_ValidateDefinition_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_KEM_ExecutionDefinition_ValidateDefinition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_KEM_ExecutionDefinition_ValidateDefinition_Statics::SOTS_KEM_ExecutionDefinition_eventValidateDefinition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_KEM_ExecutionDefinition_ValidateDefinition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_KEM_ExecutionDefinition_ValidateDefinition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_KEM_ExecutionDefinition::execValidateDefinition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSOTS_KEMValidationResult*)Z_Param__Result=P_THIS->ValidateDefinition();
	P_NATIVE_END;
}
// ********** End Class USOTS_KEM_ExecutionDefinition Function ValidateDefinition ******************

// ********** Begin Class USOTS_KEM_ExecutionDefinition ********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_KEM_ExecutionDefinition;
UClass* USOTS_KEM_ExecutionDefinition::GetPrivateStaticClass()
{
	using TClass = USOTS_KEM_ExecutionDefinition;
	if (!Z_Registration_Info_UClass_USOTS_KEM_ExecutionDefinition.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_KEM_ExecutionDefinition"),
			Z_Registration_Info_UClass_USOTS_KEM_ExecutionDefinition.InnerSingleton,
			StaticRegisterNativesUSOTS_KEM_ExecutionDefinition,
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
	return Z_Registration_Info_UClass_USOTS_KEM_ExecutionDefinition.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_NoRegister()
{
	return USOTS_KEM_ExecutionDefinition::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Main execution definition DA\n" },
#endif
		{ "IncludePath", "SOTS_KEM_Types.h" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Main execution definition DA" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionTag_MetaData[] = {
		{ "Category", "ID" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "ID" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredContextTags_MetaData[] = {
		{ "Category", "Selection" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tags used for selection\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tags used for selection" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockedContextTags_MetaData[] = {
		{ "Category", "Selection" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionFamilyTag_MetaData[] = {
		{ "Category", "Selection" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionTag_MetaData[] = {
		{ "Category", "Selection" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionFamily_MetaData[] = {
		{ "Category", "Selection" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalPositionTags_MetaData[] = {
		{ "Category", "Selection" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightMode_MetaData[] = {
		{ "Category", "Selection" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseScore_MetaData[] = {
		{ "Category", "Selection" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackendType_MetaData[] = {
		{ "Category", "Backend" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Backend type\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Backend type" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxGlobalStealthScore01_MetaData[] = {
		{ "Category", "Selection|Stealth" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional stealth gating: maximum allowed global stealth score for this\n// execution to be considered. 1.0 = no restriction.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional stealth gating: maximum allowed global stealth score for this\nexecution to be considered. 1.0 = no restriction." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinShadowLevel01_MetaData[] = {
		{ "Category", "Selection|Stealth" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional minimum shadow level required for this execution to be preferred.\n// 0.0 = no preference. Higher values bias selection towards deeper shadows.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional minimum shadow level required for this execution to be preferred.\n0.0 = no preference. Higher values bias selection towards deeper shadows." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityRequirementTag_MetaData[] = {
		{ "Category", "SOTS|KEM|Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional ability requirements. When enabled, KEM will consult the GAS\n// ability requirement system before treating this execution as a valid\n// candidate for the current context.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional ability requirements. When enabled, KEM will consult the GAS\nability requirement system before treating this execution as a valid\ncandidate for the current context." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InlineAbilityRequirements_MetaData[] = {
		{ "Category", "SOTS|KEM|Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional inline ability requirements. If authored, these are evaluated\n// directly instead of (or in addition to) looking up a library entry.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional inline ability requirements. If authored, these are evaluated\ndirectly instead of (or in addition to) looking up a library entry." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseAbilityRequirements_MetaData[] = {
		{ "Category", "SOTS|KEM|Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, ability requirements are evaluated for this execution; if false,\n// the fields above are ignored and KEM behaves exactly as before.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, ability requirements are evaluated for this execution; if false,\nthe fields above are ignored and KEM behaves exactly as before." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WarpPoints_MetaData[] = {
		{ "Category", "Warp" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional authored warp points\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional authored warp points" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FXTag_OnExecutionStarted_MetaData[] = {
		{ "Category", "SOTS|KEM|FX" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional FX tags that can be fired when this execution transitions\n// through its lifecycle. These are purely descriptive; FX mapping is\n// handled via the global FX manager + definition libraries.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional FX tags that can be fired when this execution transitions\nthrough its lifecycle. These are purely descriptive; FX mapping is\nhandled via the global FX manager + definition libraries." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FXTag_OnExecutionSucceeded_MetaData[] = {
		{ "Category", "SOTS|KEM|FX" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FXTag_OnExecutionFailed_MetaData[] = {
		{ "Category", "SOTS|KEM|FX" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnActorConfig_MetaData[] = {
		{ "Category", "Backend|SpawnActor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// SpawnActor backend config (used when BackendType == SpawnActor)\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SpawnActor backend config (used when BackendType == SpawnActor)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelSequenceConfig_MetaData[] = {
		{ "Category", "Backend|LevelSequence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// LevelSequence backend config (used when BackendType == LevelSequence)\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "LevelSequence backend config (used when BackendType == LevelSequence)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AISConfig_MetaData[] = {
		{ "Category", "Backend|AIS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// AIS backend config (used when BackendType == AIS)\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AIS backend config (used when BackendType == AIS)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CASConfig_MetaData[] = {
		{ "Category", "Backend|CAS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// CAS backend config (used when BackendType == CAS)\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "CAS backend config (used when BackendType == CAS)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_KEM_ExecutionDefinition constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExecutionTag;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredContextTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlockedContextTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExecutionFamilyTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PositionTag;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ExecutionFamily_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ExecutionFamily;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AdditionalPositionTags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalPositionTags;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HeightMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_HeightMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseScore;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BackendType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BackendType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxGlobalStealthScore01;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinShadowLevel01;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityRequirementTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InlineAbilityRequirements;
	static void NewProp_bUseAbilityRequirements_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAbilityRequirements;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WarpPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WarpPoints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FXTag_OnExecutionStarted;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FXTag_OnExecutionSucceeded;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FXTag_OnExecutionFailed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnActorConfig;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LevelSequenceConfig;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AISConfig;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CASConfig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USOTS_KEM_ExecutionDefinition constinit property declarations **************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ValidateDefinition"), .Pointer = &USOTS_KEM_ExecutionDefinition::execValidateDefinition },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USOTS_KEM_ExecutionDefinition_ValidateDefinition, "ValidateDefinition" }, // 93096221
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_KEM_ExecutionDefinition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics

// ********** Begin Class USOTS_KEM_ExecutionDefinition Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::NewProp_ExecutionTag = { "ExecutionTag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEM_ExecutionDefinition, ExecutionTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionTag_MetaData), NewProp_ExecutionTag_MetaData) }; // 517357616
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEM_ExecutionDefinition, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::NewProp_RequiredContextTags = { "RequiredContextTags", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEM_ExecutionDefinition, RequiredContextTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredContextTags_MetaData), NewProp_RequiredContextTags_MetaData) }; // 3438578166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::NewProp_BlockedContextTags = { "BlockedContextTags", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEM_ExecutionDefinition, BlockedContextTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockedContextTags_MetaData), NewProp_BlockedContextTags_MetaData) }; // 3438578166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::NewProp_ExecutionFamilyTag = { "ExecutionFamilyTag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEM_ExecutionDefinition, ExecutionFamilyTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionFamilyTag_MetaData), NewProp_ExecutionFamilyTag_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::NewProp_PositionTag = { "PositionTag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEM_ExecutionDefinition, PositionTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionTag_MetaData), NewProp_PositionTag_MetaData) }; // 517357616
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::NewProp_ExecutionFamily_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::NewProp_ExecutionFamily = { "ExecutionFamily", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEM_ExecutionDefinition, ExecutionFamily), Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_ExecutionFamily, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionFamily_MetaData), NewProp_ExecutionFamily_MetaData) }; // 2142969268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::NewProp_AdditionalPositionTags_Inner = { "AdditionalPositionTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::NewProp_AdditionalPositionTags = { "AdditionalPositionTags", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEM_ExecutionDefinition, AdditionalPositionTags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalPositionTags_MetaData), NewProp_AdditionalPositionTags_MetaData) }; // 517357616
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::NewProp_HeightMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::NewProp_HeightMode = { "HeightMode", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEM_ExecutionDefinition, HeightMode), Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_HeightMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightMode_MetaData), NewProp_HeightMode_MetaData) }; // 168281772
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::NewProp_BaseScore = { "BaseScore", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEM_ExecutionDefinition, BaseScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseScore_MetaData), NewProp_BaseScore_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::NewProp_BackendType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::NewProp_BackendType = { "BackendType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEM_ExecutionDefinition, BackendType), Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_BackendType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackendType_MetaData), NewProp_BackendType_MetaData) }; // 2399800624
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::NewProp_MaxGlobalStealthScore01 = { "MaxGlobalStealthScore01", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEM_ExecutionDefinition, MaxGlobalStealthScore01), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxGlobalStealthScore01_MetaData), NewProp_MaxGlobalStealthScore01_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::NewProp_MinShadowLevel01 = { "MinShadowLevel01", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEM_ExecutionDefinition, MinShadowLevel01), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinShadowLevel01_MetaData), NewProp_MinShadowLevel01_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::NewProp_AbilityRequirementTag = { "AbilityRequirementTag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEM_ExecutionDefinition, AbilityRequirementTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityRequirementTag_MetaData), NewProp_AbilityRequirementTag_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::NewProp_InlineAbilityRequirements = { "InlineAbilityRequirements", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEM_ExecutionDefinition, InlineAbilityRequirements), Z_Construct_UScriptStruct_FSOTS_AbilityRequirements, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InlineAbilityRequirements_MetaData), NewProp_InlineAbilityRequirements_MetaData) }; // 3678999227
void Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::NewProp_bUseAbilityRequirements_SetBit(void* Obj)
{
	((USOTS_KEM_ExecutionDefinition*)Obj)->bUseAbilityRequirements = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::NewProp_bUseAbilityRequirements = { "bUseAbilityRequirements", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USOTS_KEM_ExecutionDefinition), &Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::NewProp_bUseAbilityRequirements_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseAbilityRequirements_MetaData), NewProp_bUseAbilityRequirements_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::NewProp_WarpPoints_Inner = { "WarpPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSOTS_KEM_WarpPointDef, METADATA_PARAMS(0, nullptr) }; // 1719323992
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::NewProp_WarpPoints = { "WarpPoints", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEM_ExecutionDefinition, WarpPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WarpPoints_MetaData), NewProp_WarpPoints_MetaData) }; // 1719323992
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::NewProp_FXTag_OnExecutionStarted = { "FXTag_OnExecutionStarted", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEM_ExecutionDefinition, FXTag_OnExecutionStarted), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FXTag_OnExecutionStarted_MetaData), NewProp_FXTag_OnExecutionStarted_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::NewProp_FXTag_OnExecutionSucceeded = { "FXTag_OnExecutionSucceeded", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEM_ExecutionDefinition, FXTag_OnExecutionSucceeded), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FXTag_OnExecutionSucceeded_MetaData), NewProp_FXTag_OnExecutionSucceeded_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::NewProp_FXTag_OnExecutionFailed = { "FXTag_OnExecutionFailed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEM_ExecutionDefinition, FXTag_OnExecutionFailed), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FXTag_OnExecutionFailed_MetaData), NewProp_FXTag_OnExecutionFailed_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::NewProp_SpawnActorConfig = { "SpawnActorConfig", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEM_ExecutionDefinition, SpawnActorConfig), Z_Construct_UScriptStruct_FSOTS_KEM_SpawnActorConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnActorConfig_MetaData), NewProp_SpawnActorConfig_MetaData) }; // 3468786023
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::NewProp_LevelSequenceConfig = { "LevelSequenceConfig", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEM_ExecutionDefinition, LevelSequenceConfig), Z_Construct_UScriptStruct_FSOTS_KEM_LevelSequenceConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelSequenceConfig_MetaData), NewProp_LevelSequenceConfig_MetaData) }; // 3346469078
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::NewProp_AISConfig = { "AISConfig", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEM_ExecutionDefinition, AISConfig), Z_Construct_UScriptStruct_FSOTS_KEM_AISConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AISConfig_MetaData), NewProp_AISConfig_MetaData) }; // 18790405
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::NewProp_CASConfig = { "CASConfig", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEM_ExecutionDefinition, CASConfig), Z_Construct_UScriptStruct_FSOTS_KEM_CASConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CASConfig_MetaData), NewProp_CASConfig_MetaData) }; // 1208247288
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::NewProp_ExecutionTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::NewProp_RequiredContextTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::NewProp_BlockedContextTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::NewProp_ExecutionFamilyTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::NewProp_PositionTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::NewProp_ExecutionFamily_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::NewProp_ExecutionFamily,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::NewProp_AdditionalPositionTags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::NewProp_AdditionalPositionTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::NewProp_HeightMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::NewProp_HeightMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::NewProp_BaseScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::NewProp_BackendType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::NewProp_BackendType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::NewProp_MaxGlobalStealthScore01,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::NewProp_MinShadowLevel01,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::NewProp_AbilityRequirementTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::NewProp_InlineAbilityRequirements,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::NewProp_bUseAbilityRequirements,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::NewProp_WarpPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::NewProp_WarpPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::NewProp_FXTag_OnExecutionStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::NewProp_FXTag_OnExecutionSucceeded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::NewProp_FXTag_OnExecutionFailed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::NewProp_SpawnActorConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::NewProp_LevelSequenceConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::NewProp_AISConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::NewProp_CASConfig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::PropPointers) < 2048);
// ********** End Class USOTS_KEM_ExecutionDefinition Property Definitions *************************
UObject* (*const Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_KillExecutionManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::ClassParams = {
	&USOTS_KEM_ExecutionDefinition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::Class_MetaDataParams)
};
void USOTS_KEM_ExecutionDefinition::StaticRegisterNativesUSOTS_KEM_ExecutionDefinition()
{
	UClass* Class = USOTS_KEM_ExecutionDefinition::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::Funcs));
}
UClass* Z_Construct_UClass_USOTS_KEM_ExecutionDefinition()
{
	if (!Z_Registration_Info_UClass_USOTS_KEM_ExecutionDefinition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_KEM_ExecutionDefinition.OuterSingleton, Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_KEM_ExecutionDefinition.OuterSingleton;
}
USOTS_KEM_ExecutionDefinition::USOTS_KEM_ExecutionDefinition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_KEM_ExecutionDefinition);
USOTS_KEM_ExecutionDefinition::~USOTS_KEM_ExecutionDefinition() {}
// ********** End Class USOTS_KEM_ExecutionDefinition **********************************************

// ********** Begin ScriptStruct FSOTS_KEM_ExecutionRegistryEntry **********************************
struct Z_Construct_UScriptStruct_FSOTS_KEM_ExecutionRegistryEntry_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_KEM_ExecutionRegistryEntry); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_KEM_ExecutionRegistryEntry); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Registry entry used by the central ExecutionDefinition registry config\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Registry entry used by the central ExecutionDefinition registry config" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionId_MetaData[] = {
		{ "Category", "KEM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional explicit ID. If left None, the ExecutionDefinition's ExecutionTag name will be used.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional explicit ID. If left None, the ExecutionDefinition's ExecutionTag name will be used." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionDefinition_MetaData[] = {
		{ "Category", "KEM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The execution definition to register. Soft so it can live in Content and be cooked normally.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The execution definition to register. Soft so it can live in Content and be cooked normally." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_KEM_ExecutionRegistryEntry constinit property declarations **
	static const UECodeGen_Private::FNamePropertyParams NewProp_ExecutionId;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ExecutionDefinition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_KEM_ExecutionRegistryEntry constinit property declarations ****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_KEM_ExecutionRegistryEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_KEM_ExecutionRegistryEntry_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_KEM_ExecutionRegistryEntry;
class UScriptStruct* FSOTS_KEM_ExecutionRegistryEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_KEM_ExecutionRegistryEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_KEM_ExecutionRegistryEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_KEM_ExecutionRegistryEntry, (UObject*)Z_Construct_UPackage__Script_SOTS_KillExecutionManager(), TEXT("SOTS_KEM_ExecutionRegistryEntry"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_KEM_ExecutionRegistryEntry.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_KEM_ExecutionRegistryEntry Property Definitions *************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSOTS_KEM_ExecutionRegistryEntry_Statics::NewProp_ExecutionId = { "ExecutionId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEM_ExecutionRegistryEntry, ExecutionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionId_MetaData), NewProp_ExecutionId_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSOTS_KEM_ExecutionRegistryEntry_Statics::NewProp_ExecutionDefinition = { "ExecutionDefinition", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEM_ExecutionRegistryEntry, ExecutionDefinition), Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionDefinition_MetaData), NewProp_ExecutionDefinition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_KEM_ExecutionRegistryEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEM_ExecutionRegistryEntry_Statics::NewProp_ExecutionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEM_ExecutionRegistryEntry_Statics::NewProp_ExecutionDefinition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_KEM_ExecutionRegistryEntry_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_KEM_ExecutionRegistryEntry Property Definitions ***************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_KEM_ExecutionRegistryEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_KillExecutionManager,
	nullptr,
	&NewStructOps,
	"SOTS_KEM_ExecutionRegistryEntry",
	Z_Construct_UScriptStruct_FSOTS_KEM_ExecutionRegistryEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_KEM_ExecutionRegistryEntry_Statics::PropPointers),
	sizeof(FSOTS_KEM_ExecutionRegistryEntry),
	alignof(FSOTS_KEM_ExecutionRegistryEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_KEM_ExecutionRegistryEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_KEM_ExecutionRegistryEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_KEM_ExecutionRegistryEntry()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_KEM_ExecutionRegistryEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_KEM_ExecutionRegistryEntry.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_KEM_ExecutionRegistryEntry_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_KEM_ExecutionRegistryEntry.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_KEM_ExecutionRegistryEntry ************************************

// ********** Begin Class USOTS_KEM_ExecutionRegistryConfig ****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_KEM_ExecutionRegistryConfig;
UClass* USOTS_KEM_ExecutionRegistryConfig::GetPrivateStaticClass()
{
	using TClass = USOTS_KEM_ExecutionRegistryConfig;
	if (!Z_Registration_Info_UClass_USOTS_KEM_ExecutionRegistryConfig.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_KEM_ExecutionRegistryConfig"),
			Z_Registration_Info_UClass_USOTS_KEM_ExecutionRegistryConfig.InnerSingleton,
			StaticRegisterNativesUSOTS_KEM_ExecutionRegistryConfig,
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
	return Z_Registration_Info_UClass_USOTS_KEM_ExecutionRegistryConfig.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_KEM_ExecutionRegistryConfig_NoRegister()
{
	return USOTS_KEM_ExecutionRegistryConfig::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_KEM_ExecutionRegistryConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DataAsset that holds the list of all execution definitions for this project.\n// In SOTS this is intended to be authored as a single asset like:\n//   'DA_KEMExecutionDefinitionRegistryConfig'\n" },
#endif
		{ "IncludePath", "SOTS_KEM_Types.h" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DataAsset that holds the list of all execution definitions for this project.\nIn SOTS this is intended to be authored as a single asset like:\n  'DA_KEMExecutionDefinitionRegistryConfig'" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[] = {
		{ "Category", "KEM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// List of execution definitions to register at startup.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of execution definitions to register at startup." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_KEM_ExecutionRegistryConfig constinit property declarations ********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USOTS_KEM_ExecutionRegistryConfig constinit property declarations **********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_KEM_ExecutionRegistryConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_KEM_ExecutionRegistryConfig_Statics

// ********** Begin Class USOTS_KEM_ExecutionRegistryConfig Property Definitions *******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_KEM_ExecutionRegistryConfig_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSOTS_KEM_ExecutionRegistryEntry, METADATA_PARAMS(0, nullptr) }; // 741238701
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USOTS_KEM_ExecutionRegistryConfig_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEM_ExecutionRegistryConfig, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entries_MetaData), NewProp_Entries_MetaData) }; // 741238701
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USOTS_KEM_ExecutionRegistryConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEM_ExecutionRegistryConfig_Statics::NewProp_Entries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEM_ExecutionRegistryConfig_Statics::NewProp_Entries,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_KEM_ExecutionRegistryConfig_Statics::PropPointers) < 2048);
// ********** End Class USOTS_KEM_ExecutionRegistryConfig Property Definitions *********************
UObject* (*const Z_Construct_UClass_USOTS_KEM_ExecutionRegistryConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_KillExecutionManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_KEM_ExecutionRegistryConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_KEM_ExecutionRegistryConfig_Statics::ClassParams = {
	&USOTS_KEM_ExecutionRegistryConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USOTS_KEM_ExecutionRegistryConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_KEM_ExecutionRegistryConfig_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_KEM_ExecutionRegistryConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_KEM_ExecutionRegistryConfig_Statics::Class_MetaDataParams)
};
void USOTS_KEM_ExecutionRegistryConfig::StaticRegisterNativesUSOTS_KEM_ExecutionRegistryConfig()
{
}
UClass* Z_Construct_UClass_USOTS_KEM_ExecutionRegistryConfig()
{
	if (!Z_Registration_Info_UClass_USOTS_KEM_ExecutionRegistryConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_KEM_ExecutionRegistryConfig.OuterSingleton, Z_Construct_UClass_USOTS_KEM_ExecutionRegistryConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_KEM_ExecutionRegistryConfig.OuterSingleton;
}
USOTS_KEM_ExecutionRegistryConfig::USOTS_KEM_ExecutionRegistryConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_KEM_ExecutionRegistryConfig);
USOTS_KEM_ExecutionRegistryConfig::~USOTS_KEM_ExecutionRegistryConfig() {}
// ********** End Class USOTS_KEM_ExecutionRegistryConfig ******************************************

// ********** Begin ScriptStruct FSOTS_CASQueryResult **********************************************
struct Z_Construct_UScriptStruct_FSOTS_CASQueryResult_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_CASQueryResult); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_CASQueryResult); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_CASQueryResult constinit property declarations **************
// ********** End ScriptStruct FSOTS_CASQueryResult constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_CASQueryResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_CASQueryResult_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_CASQueryResult;
class UScriptStruct* FSOTS_CASQueryResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_CASQueryResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_CASQueryResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_CASQueryResult, (UObject*)Z_Construct_UPackage__Script_SOTS_KillExecutionManager(), TEXT("SOTS_CASQueryResult"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_CASQueryResult.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_CASQueryResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_KillExecutionManager,
	nullptr,
	&NewStructOps,
	"SOTS_CASQueryResult",
	nullptr,
	0,
	sizeof(FSOTS_CASQueryResult),
	alignof(FSOTS_CASQueryResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_CASQueryResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_CASQueryResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_CASQueryResult()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_CASQueryResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_CASQueryResult.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_CASQueryResult_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_CASQueryResult.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_CASQueryResult ************************************************

// ********** Begin ScriptStruct FSOTS_KEM_WarpRuntimeTarget ***************************************
struct Z_Construct_UScriptStruct_FSOTS_KEM_WarpRuntimeTarget_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_KEM_WarpRuntimeTarget); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_KEM_WarpRuntimeTarget); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetName_MetaData[] = {
		{ "Category", "Warp" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Semantic name for this target (\"Rear\", \"Left\", etc.). */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Semantic name for this target (\"Rear\", \"Left\", etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetTransform_MetaData[] = {
		{ "Category", "Warp" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** World-space transform the instigator should warp towards. */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "World-space transform the instigator should warp towards." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_KEM_WarpRuntimeTarget constinit property declarations *******
	static const UECodeGen_Private::FNamePropertyParams NewProp_TargetName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_KEM_WarpRuntimeTarget constinit property declarations *********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_KEM_WarpRuntimeTarget>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_KEM_WarpRuntimeTarget_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_KEM_WarpRuntimeTarget;
class UScriptStruct* FSOTS_KEM_WarpRuntimeTarget::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_KEM_WarpRuntimeTarget.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_KEM_WarpRuntimeTarget.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_KEM_WarpRuntimeTarget, (UObject*)Z_Construct_UPackage__Script_SOTS_KillExecutionManager(), TEXT("SOTS_KEM_WarpRuntimeTarget"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_KEM_WarpRuntimeTarget.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_KEM_WarpRuntimeTarget Property Definitions ******************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSOTS_KEM_WarpRuntimeTarget_Statics::NewProp_TargetName = { "TargetName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEM_WarpRuntimeTarget, TargetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetName_MetaData), NewProp_TargetName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_KEM_WarpRuntimeTarget_Statics::NewProp_TargetTransform = { "TargetTransform", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEM_WarpRuntimeTarget, TargetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetTransform_MetaData), NewProp_TargetTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_KEM_WarpRuntimeTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEM_WarpRuntimeTarget_Statics::NewProp_TargetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEM_WarpRuntimeTarget_Statics::NewProp_TargetTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_KEM_WarpRuntimeTarget_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_KEM_WarpRuntimeTarget Property Definitions ********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_KEM_WarpRuntimeTarget_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_KillExecutionManager,
	nullptr,
	&NewStructOps,
	"SOTS_KEM_WarpRuntimeTarget",
	Z_Construct_UScriptStruct_FSOTS_KEM_WarpRuntimeTarget_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_KEM_WarpRuntimeTarget_Statics::PropPointers),
	sizeof(FSOTS_KEM_WarpRuntimeTarget),
	alignof(FSOTS_KEM_WarpRuntimeTarget),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_KEM_WarpRuntimeTarget_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_KEM_WarpRuntimeTarget_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_KEM_WarpRuntimeTarget()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_KEM_WarpRuntimeTarget.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_KEM_WarpRuntimeTarget.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_KEM_WarpRuntimeTarget_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_KEM_WarpRuntimeTarget.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_KEM_WarpRuntimeTarget *****************************************

// ********** Begin ScriptStruct FSOTS_KEM_OmniTraceWarpResult *************************************
struct Z_Construct_UScriptStruct_FSOTS_KEM_OmniTraceWarpResult_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_KEM_OmniTraceWarpResult); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_KEM_OmniTraceWarpResult); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasHelperSpawn_MetaData[] = {
		{ "Category", "Warp" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether a helper spawn transform was computed. */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether a helper spawn transform was computed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HelperSpawnTransform_MetaData[] = {
		{ "Category", "Warp" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Suggested helper spawn transform (usually aligned behind the target). */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Suggested helper spawn transform (usually aligned behind the target)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WarpTargets_MetaData[] = {
		{ "Category", "Warp" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Per-role warp targets (currently typically one entry named \"Rear\"). */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Per-role warp targets (currently typically one entry named \"Rear\")." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_KEM_OmniTraceWarpResult constinit property declarations *****
	static void NewProp_bHasHelperSpawn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasHelperSpawn;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HelperSpawnTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WarpTargets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WarpTargets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_KEM_OmniTraceWarpResult constinit property declarations *******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_KEM_OmniTraceWarpResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_KEM_OmniTraceWarpResult_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_KEM_OmniTraceWarpResult;
class UScriptStruct* FSOTS_KEM_OmniTraceWarpResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_KEM_OmniTraceWarpResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_KEM_OmniTraceWarpResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_KEM_OmniTraceWarpResult, (UObject*)Z_Construct_UPackage__Script_SOTS_KillExecutionManager(), TEXT("SOTS_KEM_OmniTraceWarpResult"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_KEM_OmniTraceWarpResult.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_KEM_OmniTraceWarpResult Property Definitions ****************
void Z_Construct_UScriptStruct_FSOTS_KEM_OmniTraceWarpResult_Statics::NewProp_bHasHelperSpawn_SetBit(void* Obj)
{
	((FSOTS_KEM_OmniTraceWarpResult*)Obj)->bHasHelperSpawn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSOTS_KEM_OmniTraceWarpResult_Statics::NewProp_bHasHelperSpawn = { "bHasHelperSpawn", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSOTS_KEM_OmniTraceWarpResult), &Z_Construct_UScriptStruct_FSOTS_KEM_OmniTraceWarpResult_Statics::NewProp_bHasHelperSpawn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasHelperSpawn_MetaData), NewProp_bHasHelperSpawn_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_KEM_OmniTraceWarpResult_Statics::NewProp_HelperSpawnTransform = { "HelperSpawnTransform", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEM_OmniTraceWarpResult, HelperSpawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HelperSpawnTransform_MetaData), NewProp_HelperSpawnTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_KEM_OmniTraceWarpResult_Statics::NewProp_WarpTargets_Inner = { "WarpTargets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSOTS_KEM_WarpRuntimeTarget, METADATA_PARAMS(0, nullptr) }; // 3169082111
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSOTS_KEM_OmniTraceWarpResult_Statics::NewProp_WarpTargets = { "WarpTargets", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_KEM_OmniTraceWarpResult, WarpTargets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WarpTargets_MetaData), NewProp_WarpTargets_MetaData) }; // 3169082111
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_KEM_OmniTraceWarpResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEM_OmniTraceWarpResult_Statics::NewProp_bHasHelperSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEM_OmniTraceWarpResult_Statics::NewProp_HelperSpawnTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEM_OmniTraceWarpResult_Statics::NewProp_WarpTargets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_KEM_OmniTraceWarpResult_Statics::NewProp_WarpTargets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_KEM_OmniTraceWarpResult_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_KEM_OmniTraceWarpResult Property Definitions ******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_KEM_OmniTraceWarpResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_KillExecutionManager,
	nullptr,
	&NewStructOps,
	"SOTS_KEM_OmniTraceWarpResult",
	Z_Construct_UScriptStruct_FSOTS_KEM_OmniTraceWarpResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_KEM_OmniTraceWarpResult_Statics::PropPointers),
	sizeof(FSOTS_KEM_OmniTraceWarpResult),
	alignof(FSOTS_KEM_OmniTraceWarpResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_KEM_OmniTraceWarpResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_KEM_OmniTraceWarpResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_KEM_OmniTraceWarpResult()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_KEM_OmniTraceWarpResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_KEM_OmniTraceWarpResult.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_KEM_OmniTraceWarpResult_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_KEM_OmniTraceWarpResult.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_KEM_OmniTraceWarpResult ***************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEM_Types_h__Script_SOTS_KillExecutionManager_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESOTS_KEM_BackendType_StaticEnum, TEXT("ESOTS_KEM_BackendType"), &Z_Registration_Info_UEnum_ESOTS_KEM_BackendType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2399800624U) },
		{ ESOTS_KEM_HeightMode_StaticEnum, TEXT("ESOTS_KEM_HeightMode"), &Z_Registration_Info_UEnum_ESOTS_KEM_HeightMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 168281772U) },
		{ ESOTS_KEMState_StaticEnum, TEXT("ESOTS_KEMState"), &Z_Registration_Info_UEnum_ESOTS_KEMState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4117412423U) },
		{ ESOTS_KEM_ExecutionResult_StaticEnum, TEXT("ESOTS_KEM_ExecutionResult"), &Z_Registration_Info_UEnum_ESOTS_KEM_ExecutionResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1001899342U) },
		{ ESOTS_KEM_ExecutionFamily_StaticEnum, TEXT("ESOTS_KEM_ExecutionFamily"), &Z_Registration_Info_UEnum_ESOTS_KEM_ExecutionFamily, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2142969268U) },
		{ ESOTS_KEMRejectReason_StaticEnum, TEXT("ESOTS_KEMRejectReason"), &Z_Registration_Info_UEnum_ESOTS_KEMRejectReason, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1995041346U) },
		{ ESOTS_KEM_WarpRef_StaticEnum, TEXT("ESOTS_KEM_WarpRef"), &Z_Registration_Info_UEnum_ESOTS_KEM_WarpRef, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2909630492U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSOTS_ExecutionContext::StaticStruct, Z_Construct_UScriptStruct_FSOTS_ExecutionContext_Statics::NewStructOps, TEXT("SOTS_ExecutionContext"),&Z_Registration_Info_UScriptStruct_FSOTS_ExecutionContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_ExecutionContext), 3760104617U) },
		{ FSOTS_KEM_ExecutionEvent::StaticStruct, Z_Construct_UScriptStruct_FSOTS_KEM_ExecutionEvent_Statics::NewStructOps, TEXT("SOTS_KEM_ExecutionEvent"),&Z_Registration_Info_UScriptStruct_FSOTS_KEM_ExecutionEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_KEM_ExecutionEvent), 4193474717U) },
		{ FSOTS_KEMCandidateDebugRecord::StaticStruct, Z_Construct_UScriptStruct_FSOTS_KEMCandidateDebugRecord_Statics::NewStructOps, TEXT("SOTS_KEMCandidateDebugRecord"),&Z_Registration_Info_UScriptStruct_FSOTS_KEMCandidateDebugRecord, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_KEMCandidateDebugRecord), 259323273U) },
		{ FSOTS_KEMDecisionSnapshot::StaticStruct, Z_Construct_UScriptStruct_FSOTS_KEMDecisionSnapshot_Statics::NewStructOps, TEXT("SOTS_KEMDecisionSnapshot"),&Z_Registration_Info_UScriptStruct_FSOTS_KEMDecisionSnapshot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_KEMDecisionSnapshot), 1631666208U) },
		{ FSOTS_KEMDebugRecord::StaticStruct, Z_Construct_UScriptStruct_FSOTS_KEMDebugRecord_Statics::NewStructOps, TEXT("SOTS_KEMDebugRecord"),&Z_Registration_Info_UScriptStruct_FSOTS_KEMDebugRecord, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_KEMDebugRecord), 3971782719U) },
		{ FSOTS_KEMValidationResult::StaticStruct, Z_Construct_UScriptStruct_FSOTS_KEMValidationResult_Statics::NewStructOps, TEXT("SOTS_KEMValidationResult"),&Z_Registration_Info_UScriptStruct_FSOTS_KEMValidationResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_KEMValidationResult), 44128021U) },
		{ FSOTS_KEM_CASOffsetConfig::StaticStruct, Z_Construct_UScriptStruct_FSOTS_KEM_CASOffsetConfig_Statics::NewStructOps, TEXT("SOTS_KEM_CASOffsetConfig"),&Z_Registration_Info_UScriptStruct_FSOTS_KEM_CASOffsetConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_KEM_CASOffsetConfig), 1240034505U) },
		{ FSOTS_KEM_CASConfig::StaticStruct, Z_Construct_UScriptStruct_FSOTS_KEM_CASConfig_Statics::NewStructOps, TEXT("SOTS_KEM_CASConfig"),&Z_Registration_Info_UScriptStruct_FSOTS_KEM_CASConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_KEM_CASConfig), 1208247288U) },
		{ FSOTS_KEM_WarpPointDef::StaticStruct, Z_Construct_UScriptStruct_FSOTS_KEM_WarpPointDef_Statics::NewStructOps, TEXT("SOTS_KEM_WarpPointDef"),&Z_Registration_Info_UScriptStruct_FSOTS_KEM_WarpPointDef, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_KEM_WarpPointDef), 1719323992U) },
		{ FSOTS_KEM_SpawnActorConfig::StaticStruct, Z_Construct_UScriptStruct_FSOTS_KEM_SpawnActorConfig_Statics::NewStructOps, TEXT("SOTS_KEM_SpawnActorConfig"),&Z_Registration_Info_UScriptStruct_FSOTS_KEM_SpawnActorConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_KEM_SpawnActorConfig), 3468786023U) },
		{ FSOTS_KEM_LevelSequenceConfig::StaticStruct, Z_Construct_UScriptStruct_FSOTS_KEM_LevelSequenceConfig_Statics::NewStructOps, TEXT("SOTS_KEM_LevelSequenceConfig"),&Z_Registration_Info_UScriptStruct_FSOTS_KEM_LevelSequenceConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_KEM_LevelSequenceConfig), 3346469078U) },
		{ FSOTS_KEM_AISConfig::StaticStruct, Z_Construct_UScriptStruct_FSOTS_KEM_AISConfig_Statics::NewStructOps, TEXT("SOTS_KEM_AISConfig"),&Z_Registration_Info_UScriptStruct_FSOTS_KEM_AISConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_KEM_AISConfig), 18790405U) },
		{ FSOTS_KEM_ExecutionRegistryEntry::StaticStruct, Z_Construct_UScriptStruct_FSOTS_KEM_ExecutionRegistryEntry_Statics::NewStructOps, TEXT("SOTS_KEM_ExecutionRegistryEntry"),&Z_Registration_Info_UScriptStruct_FSOTS_KEM_ExecutionRegistryEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_KEM_ExecutionRegistryEntry), 741238701U) },
		{ FSOTS_CASQueryResult::StaticStruct, Z_Construct_UScriptStruct_FSOTS_CASQueryResult_Statics::NewStructOps, TEXT("SOTS_CASQueryResult"),&Z_Registration_Info_UScriptStruct_FSOTS_CASQueryResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_CASQueryResult), 1414127916U) },
		{ FSOTS_KEM_WarpRuntimeTarget::StaticStruct, Z_Construct_UScriptStruct_FSOTS_KEM_WarpRuntimeTarget_Statics::NewStructOps, TEXT("SOTS_KEM_WarpRuntimeTarget"),&Z_Registration_Info_UScriptStruct_FSOTS_KEM_WarpRuntimeTarget, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_KEM_WarpRuntimeTarget), 3169082111U) },
		{ FSOTS_KEM_OmniTraceWarpResult::StaticStruct, Z_Construct_UScriptStruct_FSOTS_KEM_OmniTraceWarpResult_Statics::NewStructOps, TEXT("SOTS_KEM_OmniTraceWarpResult"),&Z_Registration_Info_UScriptStruct_FSOTS_KEM_OmniTraceWarpResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_KEM_OmniTraceWarpResult), 708898929U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_SpawnExecutionData, USOTS_SpawnExecutionData::StaticClass, TEXT("USOTS_SpawnExecutionData"), &Z_Registration_Info_UClass_USOTS_SpawnExecutionData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_SpawnExecutionData), 3278883275U) },
		{ Z_Construct_UClass_USOTS_KEM_ExecutionDefinition, USOTS_KEM_ExecutionDefinition::StaticClass, TEXT("USOTS_KEM_ExecutionDefinition"), &Z_Registration_Info_UClass_USOTS_KEM_ExecutionDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_KEM_ExecutionDefinition), 1302204408U) },
		{ Z_Construct_UClass_USOTS_KEM_ExecutionRegistryConfig, USOTS_KEM_ExecutionRegistryConfig::StaticClass, TEXT("USOTS_KEM_ExecutionRegistryConfig"), &Z_Registration_Info_UClass_USOTS_KEM_ExecutionRegistryConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_KEM_ExecutionRegistryConfig), 2454748126U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEM_Types_h__Script_SOTS_KillExecutionManager_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEM_Types_h__Script_SOTS_KillExecutionManager_1415664728{
	TEXT("/Script/SOTS_KillExecutionManager"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEM_Types_h__Script_SOTS_KillExecutionManager_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEM_Types_h__Script_SOTS_KillExecutionManager_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEM_Types_h__Script_SOTS_KillExecutionManager_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEM_Types_h__Script_SOTS_KillExecutionManager_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEM_Types_h__Script_SOTS_KillExecutionManager_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEM_Types_h__Script_SOTS_KillExecutionManager_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
