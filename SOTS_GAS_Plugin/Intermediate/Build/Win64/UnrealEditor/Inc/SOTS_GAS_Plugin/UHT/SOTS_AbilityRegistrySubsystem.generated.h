// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystems/SOTS_AbilityRegistrySubsystem.h"

#ifdef SOTS_GAS_PLUGIN_SOTS_AbilityRegistrySubsystem_generated_h
#error "SOTS_AbilityRegistrySubsystem.generated.h already included, missing '#pragma once' in SOTS_AbilityRegistrySubsystem.h"
#endif
#define SOTS_GAS_PLUGIN_SOTS_AbilityRegistrySubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USOTS_AbilityDefinitionDA;
class USOTS_AbilityDefinitionLibrary;
struct F_SOTS_AbilityDefinition;
struct FGameplayTag;
struct FSOTS_AbilityRequirementCheckResult;

// ********** Begin Class USOTS_AbilityRegistrySubsystem *******************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Subsystems_SOTS_AbilityRegistrySubsystem_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCanActivateAbilityByTag); \
	DECLARE_FUNCTION(execEvaluateAbilityRequirementsForTag); \
	DECLARE_FUNCTION(execGetAllAbilityDefinitions); \
	DECLARE_FUNCTION(execGetAbilityDefinitionDAByTag); \
	DECLARE_FUNCTION(execGetAbilityDefinitionByTag); \
	DECLARE_FUNCTION(execRegisterAbilityDefinitionsFromDataAsset); \
	DECLARE_FUNCTION(execRegisterAbilityDefinitionsFromArray); \
	DECLARE_FUNCTION(execRegisterAbilityDefinitionDA); \
	DECLARE_FUNCTION(execRegisterAbilityDefinition);


struct Z_Construct_UClass_USOTS_AbilityRegistrySubsystem_Statics;
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_USOTS_AbilityRegistrySubsystem_NoRegister();

#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Subsystems_SOTS_AbilityRegistrySubsystem_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSOTS_AbilityRegistrySubsystem(); \
	friend struct ::Z_Construct_UClass_USOTS_AbilityRegistrySubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOTS_GAS_PLUGIN_API UClass* ::Z_Construct_UClass_USOTS_AbilityRegistrySubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(USOTS_AbilityRegistrySubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SOTS_GAS_Plugin"), Z_Construct_UClass_USOTS_AbilityRegistrySubsystem_NoRegister) \
	DECLARE_SERIALIZER(USOTS_AbilityRegistrySubsystem)


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Subsystems_SOTS_AbilityRegistrySubsystem_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USOTS_AbilityRegistrySubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USOTS_AbilityRegistrySubsystem(USOTS_AbilityRegistrySubsystem&&) = delete; \
	USOTS_AbilityRegistrySubsystem(const USOTS_AbilityRegistrySubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USOTS_AbilityRegistrySubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USOTS_AbilityRegistrySubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USOTS_AbilityRegistrySubsystem) \
	NO_API virtual ~USOTS_AbilityRegistrySubsystem();


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Subsystems_SOTS_AbilityRegistrySubsystem_h_10_PROLOG
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Subsystems_SOTS_AbilityRegistrySubsystem_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Subsystems_SOTS_AbilityRegistrySubsystem_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Subsystems_SOTS_AbilityRegistrySubsystem_h_13_INCLASS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Subsystems_SOTS_AbilityRegistrySubsystem_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USOTS_AbilityRegistrySubsystem;

// ********** End Class USOTS_AbilityRegistrySubsystem *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Subsystems_SOTS_AbilityRegistrySubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
