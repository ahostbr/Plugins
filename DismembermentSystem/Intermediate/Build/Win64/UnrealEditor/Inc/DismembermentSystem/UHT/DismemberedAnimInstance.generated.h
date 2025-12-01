// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DismemberedAnimInstance.h"

#ifdef DISMEMBERMENTSYSTEM_DismemberedAnimInstance_generated_h
#error "DismemberedAnimInstance.generated.h already included, missing '#pragma once' in DismemberedAnimInstance.h"
#endif
#define DISMEMBERMENTSYSTEM_DismemberedAnimInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDismemberedAnimInstance *************************************************
struct Z_Construct_UClass_UDismemberedAnimInstance_Statics;
DISMEMBERMENTSYSTEM_API UClass* Z_Construct_UClass_UDismemberedAnimInstance_NoRegister();

#define FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_DismemberedAnimInstance_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDismemberedAnimInstance(); \
	friend struct ::Z_Construct_UClass_UDismemberedAnimInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DISMEMBERMENTSYSTEM_API UClass* ::Z_Construct_UClass_UDismemberedAnimInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UDismemberedAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DismembermentSystem"), Z_Construct_UClass_UDismemberedAnimInstance_NoRegister) \
	DECLARE_SERIALIZER(UDismemberedAnimInstance)


#define FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_DismemberedAnimInstance_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDismemberedAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDismemberedAnimInstance(UDismemberedAnimInstance&&) = delete; \
	UDismemberedAnimInstance(const UDismemberedAnimInstance&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDismemberedAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDismemberedAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDismemberedAnimInstance) \
	NO_API virtual ~UDismemberedAnimInstance();


#define FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_DismemberedAnimInstance_h_15_PROLOG
#define FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_DismemberedAnimInstance_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_DismemberedAnimInstance_h_18_INCLASS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_DismemberedAnimInstance_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDismemberedAnimInstance;

// ********** End Class UDismemberedAnimInstance ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_DismemberedAnimInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
