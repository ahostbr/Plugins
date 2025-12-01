// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/SOTS_AbilityTypes.h"

#ifdef SOTS_GAS_PLUGIN_SOTS_AbilityTypes_generated_h
#error "SOTS_AbilityTypes.generated.h already included, missing '#pragma once' in SOTS_AbilityTypes.h"
#endif
#define SOTS_GAS_PLUGIN_SOTS_AbilityTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct F_SOTS_AbilityHandle **********************************************
struct Z_Construct_UScriptStruct_F_SOTS_AbilityHandle_Statics;
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Data_SOTS_AbilityTypes_h_59_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_F_SOTS_AbilityHandle_Statics; \
	static class UScriptStruct* StaticStruct();


struct F_SOTS_AbilityHandle;
// ********** End ScriptStruct F_SOTS_AbilityHandle ************************************************

// ********** Begin ScriptStruct F_SOTS_AbilityGrantOptions ****************************************
struct Z_Construct_UScriptStruct_F_SOTS_AbilityGrantOptions_Statics;
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Data_SOTS_AbilityTypes_h_75_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_F_SOTS_AbilityGrantOptions_Statics; \
	static class UScriptStruct* StaticStruct();


struct F_SOTS_AbilityGrantOptions;
// ********** End ScriptStruct F_SOTS_AbilityGrantOptions ******************************************

// ********** Begin ScriptStruct F_SOTS_AbilityActivationContext ***********************************
struct Z_Construct_UScriptStruct_F_SOTS_AbilityActivationContext_Statics;
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Data_SOTS_AbilityTypes_h_91_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_F_SOTS_AbilityActivationContext_Statics; \
	static class UScriptStruct* StaticStruct();


struct F_SOTS_AbilityActivationContext;
// ********** End ScriptStruct F_SOTS_AbilityActivationContext *************************************

// ********** Begin ScriptStruct FSOTS_AbilityRequirements *****************************************
struct Z_Construct_UScriptStruct_FSOTS_AbilityRequirements_Statics;
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Data_SOTS_AbilityTypes_h_113_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSOTS_AbilityRequirements_Statics; \
	static class UScriptStruct* StaticStruct();


struct FSOTS_AbilityRequirements;
// ********** End ScriptStruct FSOTS_AbilityRequirements *******************************************

// ********** Begin ScriptStruct F_SOTS_AbilityDefinition ******************************************
struct Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition_Statics;
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Data_SOTS_AbilityTypes_h_148_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition_Statics; \
	static class UScriptStruct* StaticStruct();


struct F_SOTS_AbilityDefinition;
// ********** End ScriptStruct F_SOTS_AbilityDefinition ********************************************

// ********** Begin ScriptStruct F_SOTS_AbilityRuntimeState ****************************************
struct Z_Construct_UScriptStruct_F_SOTS_AbilityRuntimeState_Statics;
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Data_SOTS_AbilityTypes_h_217_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_F_SOTS_AbilityRuntimeState_Statics; \
	SOTS_GAS_PLUGIN_API static class UScriptStruct* StaticStruct();


struct F_SOTS_AbilityRuntimeState;
// ********** End ScriptStruct F_SOTS_AbilityRuntimeState ******************************************

// ********** Begin ScriptStruct F_SOTS_AbilityStateSnapshot ***************************************
struct Z_Construct_UScriptStruct_F_SOTS_AbilityStateSnapshot_Statics;
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Data_SOTS_AbilityTypes_h_239_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_F_SOTS_AbilityStateSnapshot_Statics; \
	static class UScriptStruct* StaticStruct();


struct F_SOTS_AbilityStateSnapshot;
// ********** End ScriptStruct F_SOTS_AbilityStateSnapshot *****************************************

// ********** Begin ScriptStruct F_SOTS_AbilityComponentSaveData ***********************************
struct Z_Construct_UScriptStruct_F_SOTS_AbilityComponentSaveData_Statics;
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Data_SOTS_AbilityTypes_h_265_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_F_SOTS_AbilityComponentSaveData_Statics; \
	static class UScriptStruct* StaticStruct();


struct F_SOTS_AbilityComponentSaveData;
// ********** End ScriptStruct F_SOTS_AbilityComponentSaveData *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Data_SOTS_AbilityTypes_h

// ********** Begin Enum E_SOTS_AbilityActivationResult ********************************************
#define FOREACH_ENUM_E_SOTS_ABILITYACTIVATIONRESULT(op) \
	op(E_SOTS_AbilityActivationResult::Success) \
	op(E_SOTS_AbilityActivationResult::Failed_Cooldown) \
	op(E_SOTS_AbilityActivationResult::Failed_ChgDepleted) \
	op(E_SOTS_AbilityActivationResult::Failed_InventoryGate) \
	op(E_SOTS_AbilityActivationResult::Failed_OwnerTags) \
	op(E_SOTS_AbilityActivationResult::Failed_SkillGate) \
	op(E_SOTS_AbilityActivationResult::Failed_CustomCondition) 

enum class E_SOTS_AbilityActivationResult : uint8;
template<> struct TIsUEnumClass<E_SOTS_AbilityActivationResult> { enum { Value = true }; };
template<> SOTS_GAS_PLUGIN_NON_ATTRIBUTED_API UEnum* StaticEnum<E_SOTS_AbilityActivationResult>();
// ********** End Enum E_SOTS_AbilityActivationResult **********************************************

// ********** Begin Enum E_SOTS_AbilityInventoryMode ***********************************************
#define FOREACH_ENUM_E_SOTS_ABILITYINVENTORYMODE(op) \
	op(E_SOTS_AbilityInventoryMode::None) \
	op(E_SOTS_AbilityInventoryMode::RequireAndConsume) \
	op(E_SOTS_AbilityInventoryMode::RequireOnly) 

enum class E_SOTS_AbilityInventoryMode : uint8;
template<> struct TIsUEnumClass<E_SOTS_AbilityInventoryMode> { enum { Value = true }; };
template<> SOTS_GAS_PLUGIN_NON_ATTRIBUTED_API UEnum* StaticEnum<E_SOTS_AbilityInventoryMode>();
// ********** End Enum E_SOTS_AbilityInventoryMode *************************************************

// ********** Begin Enum E_SOTS_AbilityChargeMode **************************************************
#define FOREACH_ENUM_E_SOTS_ABILITYCHARGEMODE(op) \
	op(E_SOTS_AbilityChargeMode::InternalOnly) \
	op(E_SOTS_AbilityChargeMode::InventoryLinked) \
	op(E_SOTS_AbilityChargeMode::Hybrid) 

enum class E_SOTS_AbilityChargeMode : uint8;
template<> struct TIsUEnumClass<E_SOTS_AbilityChargeMode> { enum { Value = true }; };
template<> SOTS_GAS_PLUGIN_NON_ATTRIBUTED_API UEnum* StaticEnum<E_SOTS_AbilityChargeMode>();
// ********** End Enum E_SOTS_AbilityChargeMode ****************************************************

// ********** Begin Enum E_SOTS_AbilitySkillGateMode ***********************************************
#define FOREACH_ENUM_E_SOTS_ABILITYSKILLGATEMODE(op) \
	op(E_SOTS_AbilitySkillGateMode::None) \
	op(E_SOTS_AbilitySkillGateMode::RequireForGrant) \
	op(E_SOTS_AbilitySkillGateMode::RequireForActivate) \
	op(E_SOTS_AbilitySkillGateMode::RequireForBoth) 

enum class E_SOTS_AbilitySkillGateMode : uint8;
template<> struct TIsUEnumClass<E_SOTS_AbilitySkillGateMode> { enum { Value = true }; };
template<> SOTS_GAS_PLUGIN_NON_ATTRIBUTED_API UEnum* StaticEnum<E_SOTS_AbilitySkillGateMode>();
// ********** End Enum E_SOTS_AbilitySkillGateMode *************************************************

// ********** Begin Enum E_SOTS_AbilityActivationPolicy ********************************************
#define FOREACH_ENUM_E_SOTS_ABILITYACTIVATIONPOLICY(op) \
	op(E_SOTS_AbilityActivationPolicy::OnInputPressed) \
	op(E_SOTS_AbilityActivationPolicy::OnInputReleased) \
	op(E_SOTS_AbilityActivationPolicy::OnOwnerEvent) \
	op(E_SOTS_AbilityActivationPolicy::Passive) 

enum class E_SOTS_AbilityActivationPolicy : uint8;
template<> struct TIsUEnumClass<E_SOTS_AbilityActivationPolicy> { enum { Value = true }; };
template<> SOTS_GAS_PLUGIN_NON_ATTRIBUTED_API UEnum* StaticEnum<E_SOTS_AbilityActivationPolicy>();
// ********** End Enum E_SOTS_AbilityActivationPolicy **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
