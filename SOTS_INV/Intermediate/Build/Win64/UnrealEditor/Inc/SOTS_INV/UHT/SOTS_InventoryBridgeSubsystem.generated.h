// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SOTS_InventoryBridgeSubsystem.h"

#ifdef SOTS_INV_SOTS_InventoryBridgeSubsystem_generated_h
#error "SOTS_InventoryBridgeSubsystem.generated.h already included, missing '#pragma once' in SOTS_InventoryBridgeSubsystem.h"
#endif
#define SOTS_INV_SOTS_InventoryBridgeSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USOTS_InventoryBridgeSubsystem *******************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_INV_Source_SOTS_INV_Public_SOTS_InventoryBridgeSubsystem_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClearQuickSlots); \
	DECLARE_FUNCTION(execSetQuickSlotItem); \
	DECLARE_FUNCTION(execAddStashItemById); \
	DECLARE_FUNCTION(execAddCarriedItemById); \
	DECLARE_FUNCTION(execClearAllInventory);


struct Z_Construct_UClass_USOTS_InventoryBridgeSubsystem_Statics;
SOTS_INV_API UClass* Z_Construct_UClass_USOTS_InventoryBridgeSubsystem_NoRegister();

#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_INV_Source_SOTS_INV_Public_SOTS_InventoryBridgeSubsystem_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSOTS_InventoryBridgeSubsystem(); \
	friend struct ::Z_Construct_UClass_USOTS_InventoryBridgeSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOTS_INV_API UClass* ::Z_Construct_UClass_USOTS_InventoryBridgeSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(USOTS_InventoryBridgeSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SOTS_INV"), Z_Construct_UClass_USOTS_InventoryBridgeSubsystem_NoRegister) \
	DECLARE_SERIALIZER(USOTS_InventoryBridgeSubsystem)


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_INV_Source_SOTS_INV_Public_SOTS_InventoryBridgeSubsystem_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USOTS_InventoryBridgeSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USOTS_InventoryBridgeSubsystem(USOTS_InventoryBridgeSubsystem&&) = delete; \
	USOTS_InventoryBridgeSubsystem(const USOTS_InventoryBridgeSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USOTS_InventoryBridgeSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USOTS_InventoryBridgeSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USOTS_InventoryBridgeSubsystem) \
	NO_API virtual ~USOTS_InventoryBridgeSubsystem();


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_INV_Source_SOTS_INV_Public_SOTS_InventoryBridgeSubsystem_h_9_PROLOG
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_INV_Source_SOTS_INV_Public_SOTS_InventoryBridgeSubsystem_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_INV_Source_SOTS_INV_Public_SOTS_InventoryBridgeSubsystem_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_INV_Source_SOTS_INV_Public_SOTS_InventoryBridgeSubsystem_h_12_INCLASS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_INV_Source_SOTS_INV_Public_SOTS_InventoryBridgeSubsystem_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USOTS_InventoryBridgeSubsystem;

// ********** End Class USOTS_InventoryBridgeSubsystem *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SAS_ShadowsAndShurikens_Plugins_SOTS_INV_Source_SOTS_INV_Public_SOTS_InventoryBridgeSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
