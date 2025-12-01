// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/SOTS_AbilityTypes.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_AbilityTypes() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_USOTS_AbilityBase_NoRegister();
SOTS_GAS_PLUGIN_API UEnum* Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilityActivationPolicy();
SOTS_GAS_PLUGIN_API UEnum* Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilityActivationResult();
SOTS_GAS_PLUGIN_API UEnum* Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilityChargeMode();
SOTS_GAS_PLUGIN_API UEnum* Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilityInventoryMode();
SOTS_GAS_PLUGIN_API UEnum* Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilitySkillGateMode();
SOTS_GAS_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_F_SOTS_AbilityActivationContext();
SOTS_GAS_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_F_SOTS_AbilityComponentSaveData();
SOTS_GAS_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition();
SOTS_GAS_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_F_SOTS_AbilityGrantOptions();
SOTS_GAS_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_F_SOTS_AbilityHandle();
SOTS_GAS_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_F_SOTS_AbilityRuntimeState();
SOTS_GAS_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_F_SOTS_AbilityStateSnapshot();
SOTS_GAS_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_AbilityRequirements();
UPackage* Z_Construct_UPackage__Script_SOTS_GAS_Plugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum E_SOTS_AbilityActivationResult ********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_E_SOTS_AbilityActivationResult;
static UEnum* E_SOTS_AbilityActivationResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_E_SOTS_AbilityActivationResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_E_SOTS_AbilityActivationResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilityActivationResult, (UObject*)Z_Construct_UPackage__Script_SOTS_GAS_Plugin(), TEXT("E_SOTS_AbilityActivationResult"));
	}
	return Z_Registration_Info_UEnum_E_SOTS_AbilityActivationResult.OuterSingleton;
}
template<> SOTS_GAS_PLUGIN_NON_ATTRIBUTED_API UEnum* StaticEnum<E_SOTS_AbilityActivationResult>()
{
	return E_SOTS_AbilityActivationResult_StaticEnum();
}
struct Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilityActivationResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Failed_ChgDepleted.Name", "E_SOTS_AbilityActivationResult::Failed_ChgDepleted" },
		{ "Failed_Cooldown.Name", "E_SOTS_AbilityActivationResult::Failed_Cooldown" },
		{ "Failed_CustomCondition.Name", "E_SOTS_AbilityActivationResult::Failed_CustomCondition" },
		{ "Failed_InventoryGate.Name", "E_SOTS_AbilityActivationResult::Failed_InventoryGate" },
		{ "Failed_OwnerTags.Name", "E_SOTS_AbilityActivationResult::Failed_OwnerTags" },
		{ "Failed_SkillGate.Name", "E_SOTS_AbilityActivationResult::Failed_SkillGate" },
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityTypes.h" },
		{ "Success.Name", "E_SOTS_AbilityActivationResult::Success" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "E_SOTS_AbilityActivationResult::Success", (int64)E_SOTS_AbilityActivationResult::Success },
		{ "E_SOTS_AbilityActivationResult::Failed_Cooldown", (int64)E_SOTS_AbilityActivationResult::Failed_Cooldown },
		{ "E_SOTS_AbilityActivationResult::Failed_ChgDepleted", (int64)E_SOTS_AbilityActivationResult::Failed_ChgDepleted },
		{ "E_SOTS_AbilityActivationResult::Failed_InventoryGate", (int64)E_SOTS_AbilityActivationResult::Failed_InventoryGate },
		{ "E_SOTS_AbilityActivationResult::Failed_OwnerTags", (int64)E_SOTS_AbilityActivationResult::Failed_OwnerTags },
		{ "E_SOTS_AbilityActivationResult::Failed_SkillGate", (int64)E_SOTS_AbilityActivationResult::Failed_SkillGate },
		{ "E_SOTS_AbilityActivationResult::Failed_CustomCondition", (int64)E_SOTS_AbilityActivationResult::Failed_CustomCondition },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilityActivationResult_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilityActivationResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SOTS_GAS_Plugin,
	nullptr,
	"E_SOTS_AbilityActivationResult",
	"E_SOTS_AbilityActivationResult",
	Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilityActivationResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilityActivationResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilityActivationResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilityActivationResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilityActivationResult()
{
	if (!Z_Registration_Info_UEnum_E_SOTS_AbilityActivationResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_E_SOTS_AbilityActivationResult.InnerSingleton, Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilityActivationResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_E_SOTS_AbilityActivationResult.InnerSingleton;
}
// ********** End Enum E_SOTS_AbilityActivationResult **********************************************

// ********** Begin Enum E_SOTS_AbilityInventoryMode ***********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_E_SOTS_AbilityInventoryMode;
static UEnum* E_SOTS_AbilityInventoryMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_E_SOTS_AbilityInventoryMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_E_SOTS_AbilityInventoryMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilityInventoryMode, (UObject*)Z_Construct_UPackage__Script_SOTS_GAS_Plugin(), TEXT("E_SOTS_AbilityInventoryMode"));
	}
	return Z_Registration_Info_UEnum_E_SOTS_AbilityInventoryMode.OuterSingleton;
}
template<> SOTS_GAS_PLUGIN_NON_ATTRIBUTED_API UEnum* StaticEnum<E_SOTS_AbilityInventoryMode>()
{
	return E_SOTS_AbilityInventoryMode_StaticEnum();
}
struct Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilityInventoryMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityTypes.h" },
		{ "None.Name", "E_SOTS_AbilityInventoryMode::None" },
		{ "RequireAndConsume.Name", "E_SOTS_AbilityInventoryMode::RequireAndConsume" },
		{ "RequireOnly.Name", "E_SOTS_AbilityInventoryMode::RequireOnly" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "E_SOTS_AbilityInventoryMode::None", (int64)E_SOTS_AbilityInventoryMode::None },
		{ "E_SOTS_AbilityInventoryMode::RequireAndConsume", (int64)E_SOTS_AbilityInventoryMode::RequireAndConsume },
		{ "E_SOTS_AbilityInventoryMode::RequireOnly", (int64)E_SOTS_AbilityInventoryMode::RequireOnly },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilityInventoryMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilityInventoryMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SOTS_GAS_Plugin,
	nullptr,
	"E_SOTS_AbilityInventoryMode",
	"E_SOTS_AbilityInventoryMode",
	Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilityInventoryMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilityInventoryMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilityInventoryMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilityInventoryMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilityInventoryMode()
{
	if (!Z_Registration_Info_UEnum_E_SOTS_AbilityInventoryMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_E_SOTS_AbilityInventoryMode.InnerSingleton, Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilityInventoryMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_E_SOTS_AbilityInventoryMode.InnerSingleton;
}
// ********** End Enum E_SOTS_AbilityInventoryMode *************************************************

// ********** Begin Enum E_SOTS_AbilityChargeMode **************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_E_SOTS_AbilityChargeMode;
static UEnum* E_SOTS_AbilityChargeMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_E_SOTS_AbilityChargeMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_E_SOTS_AbilityChargeMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilityChargeMode, (UObject*)Z_Construct_UPackage__Script_SOTS_GAS_Plugin(), TEXT("E_SOTS_AbilityChargeMode"));
	}
	return Z_Registration_Info_UEnum_E_SOTS_AbilityChargeMode.OuterSingleton;
}
template<> SOTS_GAS_PLUGIN_NON_ATTRIBUTED_API UEnum* StaticEnum<E_SOTS_AbilityChargeMode>()
{
	return E_SOTS_AbilityChargeMode_StaticEnum();
}
struct Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilityChargeMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Hybrid.Name", "E_SOTS_AbilityChargeMode::Hybrid" },
		{ "InternalOnly.Name", "E_SOTS_AbilityChargeMode::InternalOnly" },
		{ "InventoryLinked.Name", "E_SOTS_AbilityChargeMode::InventoryLinked" },
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "E_SOTS_AbilityChargeMode::InternalOnly", (int64)E_SOTS_AbilityChargeMode::InternalOnly },
		{ "E_SOTS_AbilityChargeMode::InventoryLinked", (int64)E_SOTS_AbilityChargeMode::InventoryLinked },
		{ "E_SOTS_AbilityChargeMode::Hybrid", (int64)E_SOTS_AbilityChargeMode::Hybrid },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilityChargeMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilityChargeMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SOTS_GAS_Plugin,
	nullptr,
	"E_SOTS_AbilityChargeMode",
	"E_SOTS_AbilityChargeMode",
	Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilityChargeMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilityChargeMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilityChargeMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilityChargeMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilityChargeMode()
{
	if (!Z_Registration_Info_UEnum_E_SOTS_AbilityChargeMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_E_SOTS_AbilityChargeMode.InnerSingleton, Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilityChargeMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_E_SOTS_AbilityChargeMode.InnerSingleton;
}
// ********** End Enum E_SOTS_AbilityChargeMode ****************************************************

// ********** Begin Enum E_SOTS_AbilitySkillGateMode ***********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_E_SOTS_AbilitySkillGateMode;
static UEnum* E_SOTS_AbilitySkillGateMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_E_SOTS_AbilitySkillGateMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_E_SOTS_AbilitySkillGateMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilitySkillGateMode, (UObject*)Z_Construct_UPackage__Script_SOTS_GAS_Plugin(), TEXT("E_SOTS_AbilitySkillGateMode"));
	}
	return Z_Registration_Info_UEnum_E_SOTS_AbilitySkillGateMode.OuterSingleton;
}
template<> SOTS_GAS_PLUGIN_NON_ATTRIBUTED_API UEnum* StaticEnum<E_SOTS_AbilitySkillGateMode>()
{
	return E_SOTS_AbilitySkillGateMode_StaticEnum();
}
struct Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilitySkillGateMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityTypes.h" },
		{ "None.Name", "E_SOTS_AbilitySkillGateMode::None" },
		{ "RequireForActivate.Name", "E_SOTS_AbilitySkillGateMode::RequireForActivate" },
		{ "RequireForBoth.Name", "E_SOTS_AbilitySkillGateMode::RequireForBoth" },
		{ "RequireForGrant.Name", "E_SOTS_AbilitySkillGateMode::RequireForGrant" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "E_SOTS_AbilitySkillGateMode::None", (int64)E_SOTS_AbilitySkillGateMode::None },
		{ "E_SOTS_AbilitySkillGateMode::RequireForGrant", (int64)E_SOTS_AbilitySkillGateMode::RequireForGrant },
		{ "E_SOTS_AbilitySkillGateMode::RequireForActivate", (int64)E_SOTS_AbilitySkillGateMode::RequireForActivate },
		{ "E_SOTS_AbilitySkillGateMode::RequireForBoth", (int64)E_SOTS_AbilitySkillGateMode::RequireForBoth },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilitySkillGateMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilitySkillGateMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SOTS_GAS_Plugin,
	nullptr,
	"E_SOTS_AbilitySkillGateMode",
	"E_SOTS_AbilitySkillGateMode",
	Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilitySkillGateMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilitySkillGateMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilitySkillGateMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilitySkillGateMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilitySkillGateMode()
{
	if (!Z_Registration_Info_UEnum_E_SOTS_AbilitySkillGateMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_E_SOTS_AbilitySkillGateMode.InnerSingleton, Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilitySkillGateMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_E_SOTS_AbilitySkillGateMode.InnerSingleton;
}
// ********** End Enum E_SOTS_AbilitySkillGateMode *************************************************

// ********** Begin Enum E_SOTS_AbilityActivationPolicy ********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_E_SOTS_AbilityActivationPolicy;
static UEnum* E_SOTS_AbilityActivationPolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_E_SOTS_AbilityActivationPolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_E_SOTS_AbilityActivationPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilityActivationPolicy, (UObject*)Z_Construct_UPackage__Script_SOTS_GAS_Plugin(), TEXT("E_SOTS_AbilityActivationPolicy"));
	}
	return Z_Registration_Info_UEnum_E_SOTS_AbilityActivationPolicy.OuterSingleton;
}
template<> SOTS_GAS_PLUGIN_NON_ATTRIBUTED_API UEnum* StaticEnum<E_SOTS_AbilityActivationPolicy>()
{
	return E_SOTS_AbilityActivationPolicy_StaticEnum();
}
struct Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilityActivationPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityTypes.h" },
		{ "OnInputPressed.Name", "E_SOTS_AbilityActivationPolicy::OnInputPressed" },
		{ "OnInputReleased.Name", "E_SOTS_AbilityActivationPolicy::OnInputReleased" },
		{ "OnOwnerEvent.Name", "E_SOTS_AbilityActivationPolicy::OnOwnerEvent" },
		{ "Passive.Name", "E_SOTS_AbilityActivationPolicy::Passive" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "E_SOTS_AbilityActivationPolicy::OnInputPressed", (int64)E_SOTS_AbilityActivationPolicy::OnInputPressed },
		{ "E_SOTS_AbilityActivationPolicy::OnInputReleased", (int64)E_SOTS_AbilityActivationPolicy::OnInputReleased },
		{ "E_SOTS_AbilityActivationPolicy::OnOwnerEvent", (int64)E_SOTS_AbilityActivationPolicy::OnOwnerEvent },
		{ "E_SOTS_AbilityActivationPolicy::Passive", (int64)E_SOTS_AbilityActivationPolicy::Passive },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilityActivationPolicy_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilityActivationPolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SOTS_GAS_Plugin,
	nullptr,
	"E_SOTS_AbilityActivationPolicy",
	"E_SOTS_AbilityActivationPolicy",
	Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilityActivationPolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilityActivationPolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilityActivationPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilityActivationPolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilityActivationPolicy()
{
	if (!Z_Registration_Info_UEnum_E_SOTS_AbilityActivationPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_E_SOTS_AbilityActivationPolicy.InnerSingleton, Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilityActivationPolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_E_SOTS_AbilityActivationPolicy.InnerSingleton;
}
// ********** End Enum E_SOTS_AbilityActivationPolicy **********************************************

// ********** Begin ScriptStruct F_SOTS_AbilityHandle **********************************************
struct Z_Construct_UScriptStruct_F_SOTS_AbilityHandle_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(F_SOTS_AbilityHandle); }
	static inline consteval int16 GetStructAlignment() { return alignof(F_SOTS_AbilityHandle); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InternalId_MetaData[] = {
		{ "Category", "_SOTS_AbilityHandle" },
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityTag_MetaData[] = {
		{ "Category", "_SOTS_AbilityHandle" },
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[] = {
		{ "Category", "_SOTS_AbilityHandle" },
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct F_SOTS_AbilityHandle constinit property declarations **************
	static const UECodeGen_Private::FIntPropertyParams NewProp_InternalId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
	static void NewProp_bIsValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct F_SOTS_AbilityHandle constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<F_SOTS_AbilityHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_F_SOTS_AbilityHandle_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_F_SOTS_AbilityHandle;
class UScriptStruct* F_SOTS_AbilityHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_F_SOTS_AbilityHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_F_SOTS_AbilityHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_F_SOTS_AbilityHandle, (UObject*)Z_Construct_UPackage__Script_SOTS_GAS_Plugin(), TEXT("_SOTS_AbilityHandle"));
	}
	return Z_Registration_Info_UScriptStruct_F_SOTS_AbilityHandle.OuterSingleton;
	}

// ********** Begin ScriptStruct F_SOTS_AbilityHandle Property Definitions *************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_F_SOTS_AbilityHandle_Statics::NewProp_InternalId = { "InternalId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(F_SOTS_AbilityHandle, InternalId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InternalId_MetaData), NewProp_InternalId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_F_SOTS_AbilityHandle_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(F_SOTS_AbilityHandle, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityTag_MetaData), NewProp_AbilityTag_MetaData) }; // 517357616
void Z_Construct_UScriptStruct_F_SOTS_AbilityHandle_Statics::NewProp_bIsValid_SetBit(void* Obj)
{
	((F_SOTS_AbilityHandle*)Obj)->bIsValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_F_SOTS_AbilityHandle_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(F_SOTS_AbilityHandle), &Z_Construct_UScriptStruct_F_SOTS_AbilityHandle_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsValid_MetaData), NewProp_bIsValid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_F_SOTS_AbilityHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_F_SOTS_AbilityHandle_Statics::NewProp_InternalId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_F_SOTS_AbilityHandle_Statics::NewProp_AbilityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_F_SOTS_AbilityHandle_Statics::NewProp_bIsValid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_F_SOTS_AbilityHandle_Statics::PropPointers) < 2048);
// ********** End ScriptStruct F_SOTS_AbilityHandle Property Definitions ***************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_F_SOTS_AbilityHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_GAS_Plugin,
	nullptr,
	&NewStructOps,
	"_SOTS_AbilityHandle",
	Z_Construct_UScriptStruct_F_SOTS_AbilityHandle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_F_SOTS_AbilityHandle_Statics::PropPointers),
	sizeof(F_SOTS_AbilityHandle),
	alignof(F_SOTS_AbilityHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_F_SOTS_AbilityHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_F_SOTS_AbilityHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_F_SOTS_AbilityHandle()
{
	if (!Z_Registration_Info_UScriptStruct_F_SOTS_AbilityHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_F_SOTS_AbilityHandle.InnerSingleton, Z_Construct_UScriptStruct_F_SOTS_AbilityHandle_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_F_SOTS_AbilityHandle.InnerSingleton);
}
// ********** End ScriptStruct F_SOTS_AbilityHandle ************************************************

// ********** Begin ScriptStruct F_SOTS_AbilityGrantOptions ****************************************
struct Z_Construct_UScriptStruct_F_SOTS_AbilityGrantOptions_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(F_SOTS_AbilityGrantOptions); }
	static inline consteval int16 GetStructAlignment() { return alignof(F_SOTS_AbilityGrantOptions); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialCharges_MetaData[] = {
		{ "Category", "_SOTS_AbilityGrantOptions" },
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStartOnCooldown_MetaData[] = {
		{ "Category", "_SOTS_AbilityGrantOptions" },
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideCooldownSeconds_MetaData[] = {
		{ "Category", "_SOTS_AbilityGrantOptions" },
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct F_SOTS_AbilityGrantOptions constinit property declarations ********
	static const UECodeGen_Private::FIntPropertyParams NewProp_InitialCharges;
	static void NewProp_bStartOnCooldown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartOnCooldown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OverrideCooldownSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct F_SOTS_AbilityGrantOptions constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<F_SOTS_AbilityGrantOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_F_SOTS_AbilityGrantOptions_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_F_SOTS_AbilityGrantOptions;
class UScriptStruct* F_SOTS_AbilityGrantOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_F_SOTS_AbilityGrantOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_F_SOTS_AbilityGrantOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_F_SOTS_AbilityGrantOptions, (UObject*)Z_Construct_UPackage__Script_SOTS_GAS_Plugin(), TEXT("_SOTS_AbilityGrantOptions"));
	}
	return Z_Registration_Info_UScriptStruct_F_SOTS_AbilityGrantOptions.OuterSingleton;
	}

// ********** Begin ScriptStruct F_SOTS_AbilityGrantOptions Property Definitions *******************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_F_SOTS_AbilityGrantOptions_Statics::NewProp_InitialCharges = { "InitialCharges", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(F_SOTS_AbilityGrantOptions, InitialCharges), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialCharges_MetaData), NewProp_InitialCharges_MetaData) };
void Z_Construct_UScriptStruct_F_SOTS_AbilityGrantOptions_Statics::NewProp_bStartOnCooldown_SetBit(void* Obj)
{
	((F_SOTS_AbilityGrantOptions*)Obj)->bStartOnCooldown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_F_SOTS_AbilityGrantOptions_Statics::NewProp_bStartOnCooldown = { "bStartOnCooldown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(F_SOTS_AbilityGrantOptions), &Z_Construct_UScriptStruct_F_SOTS_AbilityGrantOptions_Statics::NewProp_bStartOnCooldown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStartOnCooldown_MetaData), NewProp_bStartOnCooldown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_F_SOTS_AbilityGrantOptions_Statics::NewProp_OverrideCooldownSeconds = { "OverrideCooldownSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(F_SOTS_AbilityGrantOptions, OverrideCooldownSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideCooldownSeconds_MetaData), NewProp_OverrideCooldownSeconds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_F_SOTS_AbilityGrantOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_F_SOTS_AbilityGrantOptions_Statics::NewProp_InitialCharges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_F_SOTS_AbilityGrantOptions_Statics::NewProp_bStartOnCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_F_SOTS_AbilityGrantOptions_Statics::NewProp_OverrideCooldownSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_F_SOTS_AbilityGrantOptions_Statics::PropPointers) < 2048);
// ********** End ScriptStruct F_SOTS_AbilityGrantOptions Property Definitions *********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_F_SOTS_AbilityGrantOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_GAS_Plugin,
	nullptr,
	&NewStructOps,
	"_SOTS_AbilityGrantOptions",
	Z_Construct_UScriptStruct_F_SOTS_AbilityGrantOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_F_SOTS_AbilityGrantOptions_Statics::PropPointers),
	sizeof(F_SOTS_AbilityGrantOptions),
	alignof(F_SOTS_AbilityGrantOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_F_SOTS_AbilityGrantOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_F_SOTS_AbilityGrantOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_F_SOTS_AbilityGrantOptions()
{
	if (!Z_Registration_Info_UScriptStruct_F_SOTS_AbilityGrantOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_F_SOTS_AbilityGrantOptions.InnerSingleton, Z_Construct_UScriptStruct_F_SOTS_AbilityGrantOptions_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_F_SOTS_AbilityGrantOptions.InnerSingleton);
}
// ********** End ScriptStruct F_SOTS_AbilityGrantOptions ******************************************

// ********** Begin ScriptStruct F_SOTS_AbilityActivationContext ***********************************
struct Z_Construct_UScriptStruct_F_SOTS_AbilityActivationContext_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(F_SOTS_AbilityActivationContext); }
	static inline consteval int16 GetStructAlignment() { return alignof(F_SOTS_AbilityActivationContext); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[] = {
		{ "Category", "_SOTS_AbilityActivationContext" },
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[] = {
		{ "Category", "_SOTS_AbilityActivationContext" },
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[] = {
		{ "Category", "_SOTS_AbilityActivationContext" },
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivationTags_MetaData[] = {
		{ "Category", "_SOTS_AbilityActivationContext" },
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct F_SOTS_AbilityActivationContext constinit property declarations ***
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActivationTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct F_SOTS_AbilityActivationContext constinit property declarations *****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<F_SOTS_AbilityActivationContext>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_F_SOTS_AbilityActivationContext_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_F_SOTS_AbilityActivationContext;
class UScriptStruct* F_SOTS_AbilityActivationContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_F_SOTS_AbilityActivationContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_F_SOTS_AbilityActivationContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_F_SOTS_AbilityActivationContext, (UObject*)Z_Construct_UPackage__Script_SOTS_GAS_Plugin(), TEXT("_SOTS_AbilityActivationContext"));
	}
	return Z_Registration_Info_UScriptStruct_F_SOTS_AbilityActivationContext.OuterSingleton;
	}

// ********** Begin ScriptStruct F_SOTS_AbilityActivationContext Property Definitions **************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_F_SOTS_AbilityActivationContext_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(F_SOTS_AbilityActivationContext, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instigator_MetaData), NewProp_Instigator_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_F_SOTS_AbilityActivationContext_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(F_SOTS_AbilityActivationContext, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActor_MetaData), NewProp_TargetActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_F_SOTS_AbilityActivationContext_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(F_SOTS_AbilityActivationContext, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLocation_MetaData), NewProp_TargetLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_F_SOTS_AbilityActivationContext_Statics::NewProp_ActivationTags = { "ActivationTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(F_SOTS_AbilityActivationContext, ActivationTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivationTags_MetaData), NewProp_ActivationTags_MetaData) }; // 3438578166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_F_SOTS_AbilityActivationContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_F_SOTS_AbilityActivationContext_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_F_SOTS_AbilityActivationContext_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_F_SOTS_AbilityActivationContext_Statics::NewProp_TargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_F_SOTS_AbilityActivationContext_Statics::NewProp_ActivationTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_F_SOTS_AbilityActivationContext_Statics::PropPointers) < 2048);
// ********** End ScriptStruct F_SOTS_AbilityActivationContext Property Definitions ****************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_F_SOTS_AbilityActivationContext_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_GAS_Plugin,
	nullptr,
	&NewStructOps,
	"_SOTS_AbilityActivationContext",
	Z_Construct_UScriptStruct_F_SOTS_AbilityActivationContext_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_F_SOTS_AbilityActivationContext_Statics::PropPointers),
	sizeof(F_SOTS_AbilityActivationContext),
	alignof(F_SOTS_AbilityActivationContext),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_F_SOTS_AbilityActivationContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_F_SOTS_AbilityActivationContext_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_F_SOTS_AbilityActivationContext()
{
	if (!Z_Registration_Info_UScriptStruct_F_SOTS_AbilityActivationContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_F_SOTS_AbilityActivationContext.InnerSingleton, Z_Construct_UScriptStruct_F_SOTS_AbilityActivationContext_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_F_SOTS_AbilityActivationContext.InnerSingleton);
}
// ********** End ScriptStruct F_SOTS_AbilityActivationContext *************************************

// ********** Begin ScriptStruct FSOTS_AbilityRequirements *****************************************
struct Z_Construct_UScriptStruct_FSOTS_AbilityRequirements_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_AbilityRequirements); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_AbilityRequirements); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Generic, reusable description of what an ability requires in order\n// to be considered usable. This does not perform activation logic;\n// it simply describes the gates that other systems should check.\n" },
#endif
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generic, reusable description of what an ability requires in order\nto be considered usable. This does not perform activation logic;\nit simply describes the gates that other systems should check." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityTag_MetaData[] = {
		{ "Category", "SOTS|GAS|Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional identifier; in libraries you typically index by AbilityTag.\n" },
#endif
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional identifier; in libraries you typically index by AbilityTag." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredSkillTags_MetaData[] = {
		{ "Category", "SOTS|GAS|Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Skill tags that must be present (from the skill tree subsystem).\n" },
#endif
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Skill tags that must be present (from the skill tree subsystem)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredPlayerTags_MetaData[] = {
		{ "Category", "SOTS|GAS|Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Generic tags required on the player/profile (e.g., Player.State.HasDragon).\n" },
#endif
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generic tags required on the player/profile (e.g., Player.State.HasDragon)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinStealthTier_MetaData[] = {
		{ "Category", "SOTS|GAS|Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If >= 0, the global stealth tier must be >= this (cast from ESOTS_StealthTier).\n" },
#endif
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If >= 0, the global stealth tier must be >= this (cast from ESOTS_StealthTier)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStealthTier_MetaData[] = {
		{ "Category", "SOTS|GAS|Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If >= 0, the global stealth tier must be <= this.\n" },
#endif
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If >= 0, the global stealth tier must be <= this." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisallowWhenCompromised_MetaData[] = {
		{ "Category", "SOTS|GAS|Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, disallow when the tier is \"Compromised\" (or higher, if extended later).\n" },
#endif
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, disallow when the tier is \"Compromised\" (or higher, if extended later)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStealthScore01_MetaData[] = {
		{ "Category", "SOTS|GAS|Ability" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional soft cap on overall stealth score: ability is disabled if score exceeds this.\n// < 0.0 = ignore.\n" },
#endif
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional soft cap on overall stealth score: ability is disabled if score exceeds this.\n< 0.0 = ignore." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_AbilityRequirements constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredSkillTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredPlayerTags;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinStealthTier;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxStealthTier;
	static void NewProp_bDisallowWhenCompromised_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisallowWhenCompromised;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxStealthScore01;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_AbilityRequirements constinit property declarations ***********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_AbilityRequirements>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_AbilityRequirements_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_AbilityRequirements;
class UScriptStruct* FSOTS_AbilityRequirements::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_AbilityRequirements.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_AbilityRequirements.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_AbilityRequirements, (UObject*)Z_Construct_UPackage__Script_SOTS_GAS_Plugin(), TEXT("SOTS_AbilityRequirements"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_AbilityRequirements.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_AbilityRequirements Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_AbilityRequirements_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_AbilityRequirements, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityTag_MetaData), NewProp_AbilityTag_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_AbilityRequirements_Statics::NewProp_RequiredSkillTags = { "RequiredSkillTags", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_AbilityRequirements, RequiredSkillTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredSkillTags_MetaData), NewProp_RequiredSkillTags_MetaData) }; // 3438578166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_AbilityRequirements_Statics::NewProp_RequiredPlayerTags = { "RequiredPlayerTags", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_AbilityRequirements, RequiredPlayerTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredPlayerTags_MetaData), NewProp_RequiredPlayerTags_MetaData) }; // 3438578166
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSOTS_AbilityRequirements_Statics::NewProp_MinStealthTier = { "MinStealthTier", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_AbilityRequirements, MinStealthTier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinStealthTier_MetaData), NewProp_MinStealthTier_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSOTS_AbilityRequirements_Statics::NewProp_MaxStealthTier = { "MaxStealthTier", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_AbilityRequirements, MaxStealthTier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStealthTier_MetaData), NewProp_MaxStealthTier_MetaData) };
void Z_Construct_UScriptStruct_FSOTS_AbilityRequirements_Statics::NewProp_bDisallowWhenCompromised_SetBit(void* Obj)
{
	((FSOTS_AbilityRequirements*)Obj)->bDisallowWhenCompromised = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSOTS_AbilityRequirements_Statics::NewProp_bDisallowWhenCompromised = { "bDisallowWhenCompromised", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSOTS_AbilityRequirements), &Z_Construct_UScriptStruct_FSOTS_AbilityRequirements_Statics::NewProp_bDisallowWhenCompromised_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisallowWhenCompromised_MetaData), NewProp_bDisallowWhenCompromised_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_AbilityRequirements_Statics::NewProp_MaxStealthScore01 = { "MaxStealthScore01", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_AbilityRequirements, MaxStealthScore01), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStealthScore01_MetaData), NewProp_MaxStealthScore01_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_AbilityRequirements_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_AbilityRequirements_Statics::NewProp_AbilityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_AbilityRequirements_Statics::NewProp_RequiredSkillTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_AbilityRequirements_Statics::NewProp_RequiredPlayerTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_AbilityRequirements_Statics::NewProp_MinStealthTier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_AbilityRequirements_Statics::NewProp_MaxStealthTier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_AbilityRequirements_Statics::NewProp_bDisallowWhenCompromised,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_AbilityRequirements_Statics::NewProp_MaxStealthScore01,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_AbilityRequirements_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_AbilityRequirements Property Definitions **********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_AbilityRequirements_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_GAS_Plugin,
	nullptr,
	&NewStructOps,
	"SOTS_AbilityRequirements",
	Z_Construct_UScriptStruct_FSOTS_AbilityRequirements_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_AbilityRequirements_Statics::PropPointers),
	sizeof(FSOTS_AbilityRequirements),
	alignof(FSOTS_AbilityRequirements),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_AbilityRequirements_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_AbilityRequirements_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_AbilityRequirements()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_AbilityRequirements.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_AbilityRequirements.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_AbilityRequirements_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_AbilityRequirements.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_AbilityRequirements *******************************************

// ********** Begin ScriptStruct F_SOTS_AbilityDefinition ******************************************
struct Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(F_SOTS_AbilityDefinition); }
	static inline consteval int16 GetStructAlignment() { return alignof(F_SOTS_AbilityDefinition); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityTag_MetaData[] = {
		{ "Category", "Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Stable identifier for this ability (used everywhere as the primary key).\n" },
#endif
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stable identifier for this ability (used everywhere as the primary key)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityCategoryTag_MetaData[] = {
		{ "Category", "Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional high-level category (e.g. Ability.Dragon, Ability.Item, Ability.Utility).\n" },
#endif
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional high-level category (e.g. Ability.Dragon, Ability.Item, Ability.Utility)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityClass_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CooldownSeconds_MetaData[] = {
		{ "Category", "Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Simple, generic cooldown time in seconds. Content may also implement\n// more complex cooldown rules in Blueprint, but this field is the shared\n// baseline used by the ability component.\n" },
#endif
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple, generic cooldown time in seconds. Content may also implement\nmore complex cooldown rules in Blueprint, but this field is the shared\nbaseline used by the ability component." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCharges_MetaData[] = {
		{ "Category", "Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Generic finite-uses budget for this ability. If <= 0, the ability is\n// treated as having infinite internal charges.\n" },
#endif
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generic finite-uses budget for this ability. If <= 0, the ability is\ntreated as having infinite internal charges." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChargeMode_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryMode_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkillGateMode_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredOwnerTags_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockedOwnerTags_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredInventoryTags_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredSkillTags_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrantedTagsWhileActive_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityRequirements_MetaData[] = {
		{ "Category", "Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional, authored requirements that describe what must be true in\n// order for this ability to be considered usable. These are evaluated\n// via USOTS_GAS_AbilityRequirementLibrary and are intentionally kept\n// data-only so they can be reused by systems such as KEM, UI, and\n// MissionDirector.\n" },
#endif
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional, authored requirements that describe what must be true in\norder for this ability to be considered usable. These are evaluated\nvia USOTS_GAS_AbilityRequirementLibrary and are intentionally kept\ndata-only so they can be reused by systems such as KEM, UI, and\nMissionDirector." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FXTag_OnActivate_MetaData[] = {
		{ "Category", "Ability|FX" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional FX tags that are fired via the global FX manager when this\n// ability successfully activates or fails due to requirements.\n" },
#endif
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional FX tags that are fired via the global FX manager when this\nability successfully activates or fails due to requirements." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FXTag_OnFailRequirements_MetaData[] = {
		{ "Category", "Ability|FX" },
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct F_SOTS_AbilityDefinition constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityCategoryTag;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CooldownSeconds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxCharges;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ChargeMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ChargeMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InventoryMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InventoryMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SkillGateMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SkillGateMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredOwnerTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlockedOwnerTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredInventoryTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredSkillTags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RequiredSkillTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedTagsWhileActive;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityRequirements;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FXTag_OnActivate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FXTag_OnFailRequirements;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct F_SOTS_AbilityDefinition constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<F_SOTS_AbilityDefinition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_F_SOTS_AbilityDefinition;
class UScriptStruct* F_SOTS_AbilityDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_F_SOTS_AbilityDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_F_SOTS_AbilityDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition, (UObject*)Z_Construct_UPackage__Script_SOTS_GAS_Plugin(), TEXT("_SOTS_AbilityDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_F_SOTS_AbilityDefinition.OuterSingleton;
	}

// ********** Begin ScriptStruct F_SOTS_AbilityDefinition Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(F_SOTS_AbilityDefinition, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityTag_MetaData), NewProp_AbilityTag_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition_Statics::NewProp_AbilityCategoryTag = { "AbilityCategoryTag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(F_SOTS_AbilityDefinition, AbilityCategoryTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityCategoryTag_MetaData), NewProp_AbilityCategoryTag_MetaData) }; // 517357616
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition_Statics::NewProp_AbilityClass = { "AbilityClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(F_SOTS_AbilityDefinition, AbilityClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_USOTS_AbilityBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityClass_MetaData), NewProp_AbilityClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition_Statics::NewProp_CooldownSeconds = { "CooldownSeconds", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(F_SOTS_AbilityDefinition, CooldownSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CooldownSeconds_MetaData), NewProp_CooldownSeconds_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition_Statics::NewProp_MaxCharges = { "MaxCharges", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(F_SOTS_AbilityDefinition, MaxCharges), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCharges_MetaData), NewProp_MaxCharges_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition_Statics::NewProp_ChargeMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition_Statics::NewProp_ChargeMode = { "ChargeMode", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(F_SOTS_AbilityDefinition, ChargeMode), Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilityChargeMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChargeMode_MetaData), NewProp_ChargeMode_MetaData) }; // 633024671
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition_Statics::NewProp_InventoryMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition_Statics::NewProp_InventoryMode = { "InventoryMode", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(F_SOTS_AbilityDefinition, InventoryMode), Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilityInventoryMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryMode_MetaData), NewProp_InventoryMode_MetaData) }; // 1526728624
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition_Statics::NewProp_SkillGateMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition_Statics::NewProp_SkillGateMode = { "SkillGateMode", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(F_SOTS_AbilityDefinition, SkillGateMode), Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilitySkillGateMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkillGateMode_MetaData), NewProp_SkillGateMode_MetaData) }; // 3127725924
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition_Statics::NewProp_RequiredOwnerTags = { "RequiredOwnerTags", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(F_SOTS_AbilityDefinition, RequiredOwnerTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredOwnerTags_MetaData), NewProp_RequiredOwnerTags_MetaData) }; // 3438578166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition_Statics::NewProp_BlockedOwnerTags = { "BlockedOwnerTags", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(F_SOTS_AbilityDefinition, BlockedOwnerTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockedOwnerTags_MetaData), NewProp_BlockedOwnerTags_MetaData) }; // 3438578166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition_Statics::NewProp_RequiredInventoryTags = { "RequiredInventoryTags", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(F_SOTS_AbilityDefinition, RequiredInventoryTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredInventoryTags_MetaData), NewProp_RequiredInventoryTags_MetaData) }; // 3438578166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition_Statics::NewProp_RequiredSkillTags_Inner = { "RequiredSkillTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition_Statics::NewProp_RequiredSkillTags = { "RequiredSkillTags", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(F_SOTS_AbilityDefinition, RequiredSkillTags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredSkillTags_MetaData), NewProp_RequiredSkillTags_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition_Statics::NewProp_GrantedTagsWhileActive = { "GrantedTagsWhileActive", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(F_SOTS_AbilityDefinition, GrantedTagsWhileActive), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrantedTagsWhileActive_MetaData), NewProp_GrantedTagsWhileActive_MetaData) }; // 3438578166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition_Statics::NewProp_AbilityRequirements = { "AbilityRequirements", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(F_SOTS_AbilityDefinition, AbilityRequirements), Z_Construct_UScriptStruct_FSOTS_AbilityRequirements, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityRequirements_MetaData), NewProp_AbilityRequirements_MetaData) }; // 3678999227
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition_Statics::NewProp_FXTag_OnActivate = { "FXTag_OnActivate", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(F_SOTS_AbilityDefinition, FXTag_OnActivate), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FXTag_OnActivate_MetaData), NewProp_FXTag_OnActivate_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition_Statics::NewProp_FXTag_OnFailRequirements = { "FXTag_OnFailRequirements", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(F_SOTS_AbilityDefinition, FXTag_OnFailRequirements), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FXTag_OnFailRequirements_MetaData), NewProp_FXTag_OnFailRequirements_MetaData) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition_Statics::NewProp_AbilityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition_Statics::NewProp_AbilityCategoryTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition_Statics::NewProp_AbilityClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition_Statics::NewProp_CooldownSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition_Statics::NewProp_MaxCharges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition_Statics::NewProp_ChargeMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition_Statics::NewProp_ChargeMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition_Statics::NewProp_InventoryMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition_Statics::NewProp_InventoryMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition_Statics::NewProp_SkillGateMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition_Statics::NewProp_SkillGateMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition_Statics::NewProp_RequiredOwnerTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition_Statics::NewProp_BlockedOwnerTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition_Statics::NewProp_RequiredInventoryTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition_Statics::NewProp_RequiredSkillTags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition_Statics::NewProp_RequiredSkillTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition_Statics::NewProp_GrantedTagsWhileActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition_Statics::NewProp_AbilityRequirements,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition_Statics::NewProp_FXTag_OnActivate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition_Statics::NewProp_FXTag_OnFailRequirements,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition_Statics::PropPointers) < 2048);
// ********** End ScriptStruct F_SOTS_AbilityDefinition Property Definitions ***********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_GAS_Plugin,
	nullptr,
	&NewStructOps,
	"_SOTS_AbilityDefinition",
	Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition_Statics::PropPointers),
	sizeof(F_SOTS_AbilityDefinition),
	alignof(F_SOTS_AbilityDefinition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition()
{
	if (!Z_Registration_Info_UScriptStruct_F_SOTS_AbilityDefinition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_F_SOTS_AbilityDefinition.InnerSingleton, Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_F_SOTS_AbilityDefinition.InnerSingleton);
}
// ********** End ScriptStruct F_SOTS_AbilityDefinition ********************************************

// ********** Begin ScriptStruct F_SOTS_AbilityRuntimeState ****************************************
struct Z_Construct_UScriptStruct_F_SOTS_AbilityRuntimeState_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(F_SOTS_AbilityRuntimeState); }
	static inline consteval int16 GetStructAlignment() { return alignof(F_SOTS_AbilityRuntimeState); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCharges_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CooldownEndTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct F_SOTS_AbilityRuntimeState constinit property declarations ********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static void NewProp_bIsActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentCharges;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CooldownEndTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct F_SOTS_AbilityRuntimeState constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<F_SOTS_AbilityRuntimeState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_F_SOTS_AbilityRuntimeState_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_F_SOTS_AbilityRuntimeState;
class UScriptStruct* F_SOTS_AbilityRuntimeState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_F_SOTS_AbilityRuntimeState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_F_SOTS_AbilityRuntimeState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_F_SOTS_AbilityRuntimeState, (UObject*)Z_Construct_UPackage__Script_SOTS_GAS_Plugin(), TEXT("_SOTS_AbilityRuntimeState"));
	}
	return Z_Registration_Info_UScriptStruct_F_SOTS_AbilityRuntimeState.OuterSingleton;
	}

// ********** Begin ScriptStruct F_SOTS_AbilityRuntimeState Property Definitions *******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_F_SOTS_AbilityRuntimeState_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(F_SOTS_AbilityRuntimeState, Handle), Z_Construct_UScriptStruct_F_SOTS_AbilityHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handle_MetaData), NewProp_Handle_MetaData) }; // 3514428892
void Z_Construct_UScriptStruct_F_SOTS_AbilityRuntimeState_Statics::NewProp_bIsActive_SetBit(void* Obj)
{
	((F_SOTS_AbilityRuntimeState*)Obj)->bIsActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_F_SOTS_AbilityRuntimeState_Statics::NewProp_bIsActive = { "bIsActive", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(F_SOTS_AbilityRuntimeState), &Z_Construct_UScriptStruct_F_SOTS_AbilityRuntimeState_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsActive_MetaData), NewProp_bIsActive_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_F_SOTS_AbilityRuntimeState_Statics::NewProp_CurrentCharges = { "CurrentCharges", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(F_SOTS_AbilityRuntimeState, CurrentCharges), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentCharges_MetaData), NewProp_CurrentCharges_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_F_SOTS_AbilityRuntimeState_Statics::NewProp_CooldownEndTime = { "CooldownEndTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(F_SOTS_AbilityRuntimeState, CooldownEndTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CooldownEndTime_MetaData), NewProp_CooldownEndTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_F_SOTS_AbilityRuntimeState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_F_SOTS_AbilityRuntimeState_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_F_SOTS_AbilityRuntimeState_Statics::NewProp_bIsActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_F_SOTS_AbilityRuntimeState_Statics::NewProp_CurrentCharges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_F_SOTS_AbilityRuntimeState_Statics::NewProp_CooldownEndTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_F_SOTS_AbilityRuntimeState_Statics::PropPointers) < 2048);
// ********** End ScriptStruct F_SOTS_AbilityRuntimeState Property Definitions *********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_F_SOTS_AbilityRuntimeState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_GAS_Plugin,
	nullptr,
	&NewStructOps,
	"_SOTS_AbilityRuntimeState",
	Z_Construct_UScriptStruct_F_SOTS_AbilityRuntimeState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_F_SOTS_AbilityRuntimeState_Statics::PropPointers),
	sizeof(F_SOTS_AbilityRuntimeState),
	alignof(F_SOTS_AbilityRuntimeState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_F_SOTS_AbilityRuntimeState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_F_SOTS_AbilityRuntimeState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_F_SOTS_AbilityRuntimeState()
{
	if (!Z_Registration_Info_UScriptStruct_F_SOTS_AbilityRuntimeState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_F_SOTS_AbilityRuntimeState.InnerSingleton, Z_Construct_UScriptStruct_F_SOTS_AbilityRuntimeState_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_F_SOTS_AbilityRuntimeState.InnerSingleton);
}
// ********** End ScriptStruct F_SOTS_AbilityRuntimeState ******************************************

// ********** Begin ScriptStruct F_SOTS_AbilityStateSnapshot ***************************************
struct Z_Construct_UScriptStruct_F_SOTS_AbilityStateSnapshot_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(F_SOTS_AbilityStateSnapshot); }
	static inline consteval int16 GetStructAlignment() { return alignof(F_SOTS_AbilityStateSnapshot); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Lightweight snapshot of per-ability runtime state that is safe to expose\n// to Blueprint UI and save systems. This mirrors the internal runtime state\n// but avoids leaking implementation details such as absolute world times.\n" },
#endif
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lightweight snapshot of per-ability runtime state that is safe to expose\nto Blueprint UI and save systems. This mirrors the internal runtime state\nbut avoids leaking implementation details such as absolute world times." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityTag_MetaData[] = {
		{ "Category", "SOTS|GAS|Ability" },
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[] = {
		{ "Category", "SOTS|GAS|Ability" },
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCharges_MetaData[] = {
		{ "Category", "SOTS|GAS|Ability" },
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsOnCooldown_MetaData[] = {
		{ "Category", "SOTS|GAS|Ability" },
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemainingCooldown_MetaData[] = {
		{ "Category", "SOTS|GAS|Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Remaining cooldown time in seconds at the moment the snapshot was taken.\n" },
#endif
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remaining cooldown time in seconds at the moment the snapshot was taken." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct F_SOTS_AbilityStateSnapshot constinit property declarations *******
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
	static void NewProp_bIsActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentCharges;
	static void NewProp_bIsOnCooldown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOnCooldown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RemainingCooldown;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct F_SOTS_AbilityStateSnapshot constinit property declarations *********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<F_SOTS_AbilityStateSnapshot>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_F_SOTS_AbilityStateSnapshot_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_F_SOTS_AbilityStateSnapshot;
class UScriptStruct* F_SOTS_AbilityStateSnapshot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_F_SOTS_AbilityStateSnapshot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_F_SOTS_AbilityStateSnapshot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_F_SOTS_AbilityStateSnapshot, (UObject*)Z_Construct_UPackage__Script_SOTS_GAS_Plugin(), TEXT("_SOTS_AbilityStateSnapshot"));
	}
	return Z_Registration_Info_UScriptStruct_F_SOTS_AbilityStateSnapshot.OuterSingleton;
	}

// ********** Begin ScriptStruct F_SOTS_AbilityStateSnapshot Property Definitions ******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_F_SOTS_AbilityStateSnapshot_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(F_SOTS_AbilityStateSnapshot, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityTag_MetaData), NewProp_AbilityTag_MetaData) }; // 517357616
void Z_Construct_UScriptStruct_F_SOTS_AbilityStateSnapshot_Statics::NewProp_bIsActive_SetBit(void* Obj)
{
	((F_SOTS_AbilityStateSnapshot*)Obj)->bIsActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_F_SOTS_AbilityStateSnapshot_Statics::NewProp_bIsActive = { "bIsActive", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(F_SOTS_AbilityStateSnapshot), &Z_Construct_UScriptStruct_F_SOTS_AbilityStateSnapshot_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsActive_MetaData), NewProp_bIsActive_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_F_SOTS_AbilityStateSnapshot_Statics::NewProp_CurrentCharges = { "CurrentCharges", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(F_SOTS_AbilityStateSnapshot, CurrentCharges), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentCharges_MetaData), NewProp_CurrentCharges_MetaData) };
void Z_Construct_UScriptStruct_F_SOTS_AbilityStateSnapshot_Statics::NewProp_bIsOnCooldown_SetBit(void* Obj)
{
	((F_SOTS_AbilityStateSnapshot*)Obj)->bIsOnCooldown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_F_SOTS_AbilityStateSnapshot_Statics::NewProp_bIsOnCooldown = { "bIsOnCooldown", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(F_SOTS_AbilityStateSnapshot), &Z_Construct_UScriptStruct_F_SOTS_AbilityStateSnapshot_Statics::NewProp_bIsOnCooldown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsOnCooldown_MetaData), NewProp_bIsOnCooldown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_F_SOTS_AbilityStateSnapshot_Statics::NewProp_RemainingCooldown = { "RemainingCooldown", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(F_SOTS_AbilityStateSnapshot, RemainingCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemainingCooldown_MetaData), NewProp_RemainingCooldown_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_F_SOTS_AbilityStateSnapshot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_F_SOTS_AbilityStateSnapshot_Statics::NewProp_AbilityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_F_SOTS_AbilityStateSnapshot_Statics::NewProp_bIsActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_F_SOTS_AbilityStateSnapshot_Statics::NewProp_CurrentCharges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_F_SOTS_AbilityStateSnapshot_Statics::NewProp_bIsOnCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_F_SOTS_AbilityStateSnapshot_Statics::NewProp_RemainingCooldown,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_F_SOTS_AbilityStateSnapshot_Statics::PropPointers) < 2048);
// ********** End ScriptStruct F_SOTS_AbilityStateSnapshot Property Definitions ********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_F_SOTS_AbilityStateSnapshot_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_GAS_Plugin,
	nullptr,
	&NewStructOps,
	"_SOTS_AbilityStateSnapshot",
	Z_Construct_UScriptStruct_F_SOTS_AbilityStateSnapshot_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_F_SOTS_AbilityStateSnapshot_Statics::PropPointers),
	sizeof(F_SOTS_AbilityStateSnapshot),
	alignof(F_SOTS_AbilityStateSnapshot),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_F_SOTS_AbilityStateSnapshot_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_F_SOTS_AbilityStateSnapshot_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_F_SOTS_AbilityStateSnapshot()
{
	if (!Z_Registration_Info_UScriptStruct_F_SOTS_AbilityStateSnapshot.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_F_SOTS_AbilityStateSnapshot.InnerSingleton, Z_Construct_UScriptStruct_F_SOTS_AbilityStateSnapshot_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_F_SOTS_AbilityStateSnapshot.InnerSingleton);
}
// ********** End ScriptStruct F_SOTS_AbilityStateSnapshot *****************************************

// ********** Begin ScriptStruct F_SOTS_AbilityComponentSaveData ***********************************
struct Z_Construct_UScriptStruct_F_SOTS_AbilityComponentSaveData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(F_SOTS_AbilityComponentSaveData); }
	static inline consteval int16 GetStructAlignment() { return alignof(F_SOTS_AbilityComponentSaveData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Serialized representation of an ability component's state. This is intended\n// for profile / mission saves and can be round-tripped back into the ability\n// component without requiring any level-specific wiring.\n" },
#endif
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Serialized representation of an ability component's state. This is intended\nfor profile / mission saves and can be round-tripped back into the ability\ncomponent without requiring any level-specific wiring." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedAbilities_MetaData[] = {
		{ "Category", "SOTS|GAS|Ability" },
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct F_SOTS_AbilityComponentSaveData constinit property declarations ***
	static const UECodeGen_Private::FStructPropertyParams NewProp_SavedAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SavedAbilities;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct F_SOTS_AbilityComponentSaveData constinit property declarations *****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<F_SOTS_AbilityComponentSaveData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_F_SOTS_AbilityComponentSaveData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_F_SOTS_AbilityComponentSaveData;
class UScriptStruct* F_SOTS_AbilityComponentSaveData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_F_SOTS_AbilityComponentSaveData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_F_SOTS_AbilityComponentSaveData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_F_SOTS_AbilityComponentSaveData, (UObject*)Z_Construct_UPackage__Script_SOTS_GAS_Plugin(), TEXT("_SOTS_AbilityComponentSaveData"));
	}
	return Z_Registration_Info_UScriptStruct_F_SOTS_AbilityComponentSaveData.OuterSingleton;
	}

// ********** Begin ScriptStruct F_SOTS_AbilityComponentSaveData Property Definitions **************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_F_SOTS_AbilityComponentSaveData_Statics::NewProp_SavedAbilities_Inner = { "SavedAbilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_F_SOTS_AbilityStateSnapshot, METADATA_PARAMS(0, nullptr) }; // 3662566169
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_F_SOTS_AbilityComponentSaveData_Statics::NewProp_SavedAbilities = { "SavedAbilities", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(F_SOTS_AbilityComponentSaveData, SavedAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedAbilities_MetaData), NewProp_SavedAbilities_MetaData) }; // 3662566169
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_F_SOTS_AbilityComponentSaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_F_SOTS_AbilityComponentSaveData_Statics::NewProp_SavedAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_F_SOTS_AbilityComponentSaveData_Statics::NewProp_SavedAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_F_SOTS_AbilityComponentSaveData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct F_SOTS_AbilityComponentSaveData Property Definitions ****************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_F_SOTS_AbilityComponentSaveData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_GAS_Plugin,
	nullptr,
	&NewStructOps,
	"_SOTS_AbilityComponentSaveData",
	Z_Construct_UScriptStruct_F_SOTS_AbilityComponentSaveData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_F_SOTS_AbilityComponentSaveData_Statics::PropPointers),
	sizeof(F_SOTS_AbilityComponentSaveData),
	alignof(F_SOTS_AbilityComponentSaveData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_F_SOTS_AbilityComponentSaveData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_F_SOTS_AbilityComponentSaveData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_F_SOTS_AbilityComponentSaveData()
{
	if (!Z_Registration_Info_UScriptStruct_F_SOTS_AbilityComponentSaveData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_F_SOTS_AbilityComponentSaveData.InnerSingleton, Z_Construct_UScriptStruct_F_SOTS_AbilityComponentSaveData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_F_SOTS_AbilityComponentSaveData.InnerSingleton);
}
// ********** End ScriptStruct F_SOTS_AbilityComponentSaveData *************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Data_SOTS_AbilityTypes_h__Script_SOTS_GAS_Plugin_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ E_SOTS_AbilityActivationResult_StaticEnum, TEXT("E_SOTS_AbilityActivationResult"), &Z_Registration_Info_UEnum_E_SOTS_AbilityActivationResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 527710619U) },
		{ E_SOTS_AbilityInventoryMode_StaticEnum, TEXT("E_SOTS_AbilityInventoryMode"), &Z_Registration_Info_UEnum_E_SOTS_AbilityInventoryMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1526728624U) },
		{ E_SOTS_AbilityChargeMode_StaticEnum, TEXT("E_SOTS_AbilityChargeMode"), &Z_Registration_Info_UEnum_E_SOTS_AbilityChargeMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 633024671U) },
		{ E_SOTS_AbilitySkillGateMode_StaticEnum, TEXT("E_SOTS_AbilitySkillGateMode"), &Z_Registration_Info_UEnum_E_SOTS_AbilitySkillGateMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3127725924U) },
		{ E_SOTS_AbilityActivationPolicy_StaticEnum, TEXT("E_SOTS_AbilityActivationPolicy"), &Z_Registration_Info_UEnum_E_SOTS_AbilityActivationPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 425934692U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ F_SOTS_AbilityHandle::StaticStruct, Z_Construct_UScriptStruct_F_SOTS_AbilityHandle_Statics::NewStructOps, TEXT("_SOTS_AbilityHandle"),&Z_Registration_Info_UScriptStruct_F_SOTS_AbilityHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(F_SOTS_AbilityHandle), 3514428892U) },
		{ F_SOTS_AbilityGrantOptions::StaticStruct, Z_Construct_UScriptStruct_F_SOTS_AbilityGrantOptions_Statics::NewStructOps, TEXT("_SOTS_AbilityGrantOptions"),&Z_Registration_Info_UScriptStruct_F_SOTS_AbilityGrantOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(F_SOTS_AbilityGrantOptions), 1070780000U) },
		{ F_SOTS_AbilityActivationContext::StaticStruct, Z_Construct_UScriptStruct_F_SOTS_AbilityActivationContext_Statics::NewStructOps, TEXT("_SOTS_AbilityActivationContext"),&Z_Registration_Info_UScriptStruct_F_SOTS_AbilityActivationContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(F_SOTS_AbilityActivationContext), 2980214493U) },
		{ FSOTS_AbilityRequirements::StaticStruct, Z_Construct_UScriptStruct_FSOTS_AbilityRequirements_Statics::NewStructOps, TEXT("SOTS_AbilityRequirements"),&Z_Registration_Info_UScriptStruct_FSOTS_AbilityRequirements, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_AbilityRequirements), 3678999227U) },
		{ F_SOTS_AbilityDefinition::StaticStruct, Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition_Statics::NewStructOps, TEXT("_SOTS_AbilityDefinition"),&Z_Registration_Info_UScriptStruct_F_SOTS_AbilityDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(F_SOTS_AbilityDefinition), 2812081814U) },
		{ F_SOTS_AbilityRuntimeState::StaticStruct, Z_Construct_UScriptStruct_F_SOTS_AbilityRuntimeState_Statics::NewStructOps, TEXT("_SOTS_AbilityRuntimeState"),&Z_Registration_Info_UScriptStruct_F_SOTS_AbilityRuntimeState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(F_SOTS_AbilityRuntimeState), 2289692467U) },
		{ F_SOTS_AbilityStateSnapshot::StaticStruct, Z_Construct_UScriptStruct_F_SOTS_AbilityStateSnapshot_Statics::NewStructOps, TEXT("_SOTS_AbilityStateSnapshot"),&Z_Registration_Info_UScriptStruct_F_SOTS_AbilityStateSnapshot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(F_SOTS_AbilityStateSnapshot), 3662566169U) },
		{ F_SOTS_AbilityComponentSaveData::StaticStruct, Z_Construct_UScriptStruct_F_SOTS_AbilityComponentSaveData_Statics::NewStructOps, TEXT("_SOTS_AbilityComponentSaveData"),&Z_Registration_Info_UScriptStruct_F_SOTS_AbilityComponentSaveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(F_SOTS_AbilityComponentSaveData), 3719592203U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Data_SOTS_AbilityTypes_h__Script_SOTS_GAS_Plugin_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Data_SOTS_AbilityTypes_h__Script_SOTS_GAS_Plugin_3739222101{
	TEXT("/Script/SOTS_GAS_Plugin"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Data_SOTS_AbilityTypes_h__Script_SOTS_GAS_Plugin_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Data_SOTS_AbilityTypes_h__Script_SOTS_GAS_Plugin_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Data_SOTS_AbilityTypes_h__Script_SOTS_GAS_Plugin_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Data_SOTS_AbilityTypes_h__Script_SOTS_GAS_Plugin_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
