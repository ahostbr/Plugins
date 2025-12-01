// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InvSPInventoryComponent.h"

#ifdef SOTS_INV_InvSPInventoryComponent_generated_h
#error "InvSPInventoryComponent.generated.h already included, missing '#pragma once' in InvSPInventoryComponent.h"
#endif
#define SOTS_INV_InvSPInventoryComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInvSP_InventoryComponent ************************************************
struct Z_Construct_UClass_UInvSP_InventoryComponent_Statics;
SOTS_INV_API UClass* Z_Construct_UClass_UInvSP_InventoryComponent_NoRegister();

#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_INV_Source_SOTS_INV_Public_InvSPInventoryComponent_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInvSP_InventoryComponent(); \
	friend struct ::Z_Construct_UClass_UInvSP_InventoryComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOTS_INV_API UClass* ::Z_Construct_UClass_UInvSP_InventoryComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UInvSP_InventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SOTS_INV"), Z_Construct_UClass_UInvSP_InventoryComponent_NoRegister) \
	DECLARE_SERIALIZER(UInvSP_InventoryComponent)


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_INV_Source_SOTS_INV_Public_InvSPInventoryComponent_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInvSP_InventoryComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInvSP_InventoryComponent(UInvSP_InventoryComponent&&) = delete; \
	UInvSP_InventoryComponent(const UInvSP_InventoryComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInvSP_InventoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInvSP_InventoryComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInvSP_InventoryComponent) \
	NO_API virtual ~UInvSP_InventoryComponent();


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_INV_Source_SOTS_INV_Public_InvSPInventoryComponent_h_8_PROLOG
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_INV_Source_SOTS_INV_Public_InvSPInventoryComponent_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_INV_Source_SOTS_INV_Public_InvSPInventoryComponent_h_11_INCLASS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_INV_Source_SOTS_INV_Public_InvSPInventoryComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInvSP_InventoryComponent;

// ********** End Class UInvSP_InventoryComponent **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SAS_ShadowsAndShurikens_Plugins_SOTS_INV_Source_SOTS_INV_Public_InvSPInventoryComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
