// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SOTS_DragonStealthComponent.h"

#ifdef SOTS_GLOBALSTEALTHMANAGER_SOTS_DragonStealthComponent_generated_h
#error "SOTS_DragonStealthComponent.generated.h already included, missing '#pragma once' in SOTS_DragonStealthComponent.h"
#endif
#define SOTS_GLOBALSTEALTHMANAGER_SOTS_DragonStealthComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESOTS_StealthTier : uint8;

// ********** Begin Class USOTS_DragonStealthComponent *********************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_DragonStealthComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetStealthTier); \
	DECLARE_FUNCTION(execGetGlobalStealthScore01); \
	DECLARE_FUNCTION(execGetShadowLevel01); \
	DECLARE_FUNCTION(execGetLightLevel01);


struct Z_Construct_UClass_USOTS_DragonStealthComponent_Statics;
SOTS_GLOBALSTEALTHMANAGER_API UClass* Z_Construct_UClass_USOTS_DragonStealthComponent_NoRegister();

#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_DragonStealthComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSOTS_DragonStealthComponent(); \
	friend struct ::Z_Construct_UClass_USOTS_DragonStealthComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOTS_GLOBALSTEALTHMANAGER_API UClass* ::Z_Construct_UClass_USOTS_DragonStealthComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(USOTS_DragonStealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SOTS_GlobalStealthManager"), Z_Construct_UClass_USOTS_DragonStealthComponent_NoRegister) \
	DECLARE_SERIALIZER(USOTS_DragonStealthComponent)


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_DragonStealthComponent_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USOTS_DragonStealthComponent(USOTS_DragonStealthComponent&&) = delete; \
	USOTS_DragonStealthComponent(const USOTS_DragonStealthComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USOTS_DragonStealthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USOTS_DragonStealthComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USOTS_DragonStealthComponent) \
	NO_API virtual ~USOTS_DragonStealthComponent();


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_DragonStealthComponent_h_13_PROLOG
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_DragonStealthComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_DragonStealthComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_DragonStealthComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_DragonStealthComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USOTS_DragonStealthComponent;

// ********** End Class USOTS_DragonStealthComponent ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_DragonStealthComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
