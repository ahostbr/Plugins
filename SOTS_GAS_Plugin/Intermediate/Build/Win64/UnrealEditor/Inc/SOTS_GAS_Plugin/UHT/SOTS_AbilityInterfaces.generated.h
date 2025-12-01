// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/SOTS_AbilityInterfaces.h"

#ifdef SOTS_GAS_PLUGIN_SOTS_AbilityInterfaces_generated_h
#error "SOTS_AbilityInterfaces.generated.h already included, missing '#pragma once' in SOTS_AbilityInterfaces.h"
#endif
#define SOTS_GAS_PLUGIN_SOTS_AbilityInterfaces_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
struct FGameplayTagContainer;

// ********** Begin Interface UBPI_SOTS_InventoryAccess ********************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Interfaces_SOTS_AbilityInterfaces_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ConsumeInventoryItemsByTags_Implementation(FGameplayTagContainer const& ItemTags, int32 Count) { return false; }; \
	virtual int32 GetInventoryItemCountByTags_Implementation(FGameplayTagContainer const& ItemTags) const { return 0; }; \
	DECLARE_FUNCTION(execConsumeInventoryItemsByTags); \
	DECLARE_FUNCTION(execGetInventoryItemCountByTags);


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Interfaces_SOTS_AbilityInterfaces_h_11_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UBPI_SOTS_InventoryAccess_Statics;
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_UBPI_SOTS_InventoryAccess_NoRegister();

#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Interfaces_SOTS_AbilityInterfaces_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBPI_SOTS_InventoryAccess(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBPI_SOTS_InventoryAccess(UBPI_SOTS_InventoryAccess&&) = delete; \
	UBPI_SOTS_InventoryAccess(const UBPI_SOTS_InventoryAccess&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBPI_SOTS_InventoryAccess); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBPI_SOTS_InventoryAccess); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBPI_SOTS_InventoryAccess) \
	virtual ~UBPI_SOTS_InventoryAccess() = default;


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Interfaces_SOTS_AbilityInterfaces_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUBPI_SOTS_InventoryAccess(); \
	friend struct ::Z_Construct_UClass_UBPI_SOTS_InventoryAccess_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOTS_GAS_PLUGIN_API UClass* ::Z_Construct_UClass_UBPI_SOTS_InventoryAccess_NoRegister(); \
public: \
	DECLARE_CLASS2(UBPI_SOTS_InventoryAccess, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SOTS_GAS_Plugin"), Z_Construct_UClass_UBPI_SOTS_InventoryAccess_NoRegister) \
	DECLARE_SERIALIZER(UBPI_SOTS_InventoryAccess)


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Interfaces_SOTS_AbilityInterfaces_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Interfaces_SOTS_AbilityInterfaces_h_11_GENERATED_UINTERFACE_BODY() \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Interfaces_SOTS_AbilityInterfaces_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Interfaces_SOTS_AbilityInterfaces_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IBPI_SOTS_InventoryAccess() {} \
public: \
	typedef UBPI_SOTS_InventoryAccess UClassType; \
	typedef IBPI_SOTS_InventoryAccess ThisClass; \
	static bool Execute_ConsumeInventoryItemsByTags(UObject* O, FGameplayTagContainer const& ItemTags, int32 Count); \
	static int32 Execute_GetInventoryItemCountByTags(const UObject* O, FGameplayTagContainer const& ItemTags); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Interfaces_SOTS_AbilityInterfaces_h_8_PROLOG
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Interfaces_SOTS_AbilityInterfaces_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Interfaces_SOTS_AbilityInterfaces_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Interfaces_SOTS_AbilityInterfaces_h_11_CALLBACK_WRAPPERS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Interfaces_SOTS_AbilityInterfaces_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBPI_SOTS_InventoryAccess;

// ********** End Interface UBPI_SOTS_InventoryAccess **********************************************

// ********** Begin Interface UBPI_SOTS_SkillTreeAccess ********************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Interfaces_SOTS_AbilityInterfaces_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual int32 GetSkillLevel_Implementation(FGameplayTag SkillTag) const { return 0; }; \
	virtual bool IsSkillUnlocked_Implementation(FGameplayTag SkillTag) const { return false; }; \
	DECLARE_FUNCTION(execGetSkillLevel); \
	DECLARE_FUNCTION(execIsSkillUnlocked);


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Interfaces_SOTS_AbilityInterfaces_h_29_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UBPI_SOTS_SkillTreeAccess_Statics;
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_UBPI_SOTS_SkillTreeAccess_NoRegister();

#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Interfaces_SOTS_AbilityInterfaces_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBPI_SOTS_SkillTreeAccess(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBPI_SOTS_SkillTreeAccess(UBPI_SOTS_SkillTreeAccess&&) = delete; \
	UBPI_SOTS_SkillTreeAccess(const UBPI_SOTS_SkillTreeAccess&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBPI_SOTS_SkillTreeAccess); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBPI_SOTS_SkillTreeAccess); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBPI_SOTS_SkillTreeAccess) \
	virtual ~UBPI_SOTS_SkillTreeAccess() = default;


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Interfaces_SOTS_AbilityInterfaces_h_29_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUBPI_SOTS_SkillTreeAccess(); \
	friend struct ::Z_Construct_UClass_UBPI_SOTS_SkillTreeAccess_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOTS_GAS_PLUGIN_API UClass* ::Z_Construct_UClass_UBPI_SOTS_SkillTreeAccess_NoRegister(); \
public: \
	DECLARE_CLASS2(UBPI_SOTS_SkillTreeAccess, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SOTS_GAS_Plugin"), Z_Construct_UClass_UBPI_SOTS_SkillTreeAccess_NoRegister) \
	DECLARE_SERIALIZER(UBPI_SOTS_SkillTreeAccess)


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Interfaces_SOTS_AbilityInterfaces_h_29_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Interfaces_SOTS_AbilityInterfaces_h_29_GENERATED_UINTERFACE_BODY() \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Interfaces_SOTS_AbilityInterfaces_h_29_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Interfaces_SOTS_AbilityInterfaces_h_29_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IBPI_SOTS_SkillTreeAccess() {} \
public: \
	typedef UBPI_SOTS_SkillTreeAccess UClassType; \
	typedef IBPI_SOTS_SkillTreeAccess ThisClass; \
	static int32 Execute_GetSkillLevel(const UObject* O, FGameplayTag SkillTag); \
	static bool Execute_IsSkillUnlocked(const UObject* O, FGameplayTag SkillTag); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Interfaces_SOTS_AbilityInterfaces_h_26_PROLOG
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Interfaces_SOTS_AbilityInterfaces_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Interfaces_SOTS_AbilityInterfaces_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Interfaces_SOTS_AbilityInterfaces_h_29_CALLBACK_WRAPPERS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Interfaces_SOTS_AbilityInterfaces_h_29_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBPI_SOTS_SkillTreeAccess;

// ********** End Interface UBPI_SOTS_SkillTreeAccess **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Interfaces_SOTS_AbilityInterfaces_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
