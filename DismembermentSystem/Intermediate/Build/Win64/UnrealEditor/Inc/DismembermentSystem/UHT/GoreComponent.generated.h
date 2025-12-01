// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Gore/GoreComponent.h"

#ifdef DISMEMBERMENTSYSTEM_GoreComponent_generated_h
#error "GoreComponent.generated.h already included, missing '#pragma once' in GoreComponent.h"
#endif
#define DISMEMBERMENTSYSTEM_GoreComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneComponent;
class USkeletalMeshComponent;
class UStaticMeshComponent;

// ********** Begin Class UGoreComponent ***********************************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_Gore_GoreComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTickBloodAnimation); \
	DECLARE_FUNCTION(execBeginBloodAnimation); \
	DECLARE_FUNCTION(execApplyBloodToStaticMesh); \
	DECLARE_FUNCTION(execRemoveBloodFromStaticMesh); \
	DECLARE_FUNCTION(execSpawnBloodFX); \
	DECLARE_FUNCTION(execSpawnBloodParticles); \
	DECLARE_FUNCTION(execSpawnBoolDecal); \
	DECLARE_FUNCTION(execApplyBloodToMesh); \
	DECLARE_FUNCTION(execApplyBlood);


struct Z_Construct_UClass_UGoreComponent_Statics;
DISMEMBERMENTSYSTEM_API UClass* Z_Construct_UClass_UGoreComponent_NoRegister();

#define FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_Gore_GoreComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGoreComponent(); \
	friend struct ::Z_Construct_UClass_UGoreComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DISMEMBERMENTSYSTEM_API UClass* ::Z_Construct_UClass_UGoreComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UGoreComponent, UDismembermentComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DismembermentSystem"), Z_Construct_UClass_UGoreComponent_NoRegister) \
	DECLARE_SERIALIZER(UGoreComponent)


#define FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_Gore_GoreComponent_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGoreComponent(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGoreComponent(UGoreComponent&&) = delete; \
	UGoreComponent(const UGoreComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGoreComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGoreComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGoreComponent) \
	NO_API virtual ~UGoreComponent();


#define FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_Gore_GoreComponent_h_13_PROLOG
#define FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_Gore_GoreComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_Gore_GoreComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_Gore_GoreComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_Gore_GoreComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGoreComponent;

// ********** End Class UGoreComponent *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_Gore_GoreComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
