// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Gore/BloodPool.h"

#ifdef DISMEMBERMENTSYSTEM_BloodPool_generated_h
#error "BloodPool.generated.h already included, missing '#pragma once' in BloodPool.h"
#endif
#define DISMEMBERMENTSYSTEM_BloodPool_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ABloodPool ***************************************************************
struct Z_Construct_UClass_ABloodPool_Statics;
DISMEMBERMENTSYSTEM_API UClass* Z_Construct_UClass_ABloodPool_NoRegister();

#define FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_Gore_BloodPool_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABloodPool(); \
	friend struct ::Z_Construct_UClass_ABloodPool_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DISMEMBERMENTSYSTEM_API UClass* ::Z_Construct_UClass_ABloodPool_NoRegister(); \
public: \
	DECLARE_CLASS2(ABloodPool, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DismembermentSystem"), Z_Construct_UClass_ABloodPool_NoRegister) \
	DECLARE_SERIALIZER(ABloodPool)


#define FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_Gore_BloodPool_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABloodPool(ABloodPool&&) = delete; \
	ABloodPool(const ABloodPool&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABloodPool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABloodPool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABloodPool) \
	NO_API virtual ~ABloodPool();


#define FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_Gore_BloodPool_h_9_PROLOG
#define FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_Gore_BloodPool_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_Gore_BloodPool_h_12_INCLASS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_Gore_BloodPool_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABloodPool;

// ********** End Class ABloodPool *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_Gore_BloodPool_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
