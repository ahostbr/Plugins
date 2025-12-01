// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SOTS_AIPerceptionLibrary.h"

#ifdef SOTS_AIPERCEPTION_SOTS_AIPerceptionLibrary_generated_h
#error "SOTS_AIPerceptionLibrary.generated.h already included, missing '#pragma once' in SOTS_AIPerceptionLibrary.h"
#endif
#define SOTS_AIPERCEPTION_SOTS_AIPerceptionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
struct FGameplayTag;

// ********** Begin Class USOTS_AIPerceptionLibrary ************************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_AIPerception_Source_SOTS_AIPerception_Public_SOTS_AIPerceptionLibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSOTS_ReportNoise);


struct Z_Construct_UClass_USOTS_AIPerceptionLibrary_Statics;
SOTS_AIPERCEPTION_API UClass* Z_Construct_UClass_USOTS_AIPerceptionLibrary_NoRegister();

#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_AIPerception_Source_SOTS_AIPerception_Public_SOTS_AIPerceptionLibrary_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSOTS_AIPerceptionLibrary(); \
	friend struct ::Z_Construct_UClass_USOTS_AIPerceptionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOTS_AIPERCEPTION_API UClass* ::Z_Construct_UClass_USOTS_AIPerceptionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(USOTS_AIPerceptionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SOTS_AIPerception"), Z_Construct_UClass_USOTS_AIPerceptionLibrary_NoRegister) \
	DECLARE_SERIALIZER(USOTS_AIPerceptionLibrary)


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_AIPerception_Source_SOTS_AIPerception_Public_SOTS_AIPerceptionLibrary_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USOTS_AIPerceptionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USOTS_AIPerceptionLibrary(USOTS_AIPerceptionLibrary&&) = delete; \
	USOTS_AIPerceptionLibrary(const USOTS_AIPerceptionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USOTS_AIPerceptionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USOTS_AIPerceptionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USOTS_AIPerceptionLibrary) \
	NO_API virtual ~USOTS_AIPerceptionLibrary();


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_AIPerception_Source_SOTS_AIPerception_Public_SOTS_AIPerceptionLibrary_h_8_PROLOG
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_AIPerception_Source_SOTS_AIPerception_Public_SOTS_AIPerceptionLibrary_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_AIPerception_Source_SOTS_AIPerception_Public_SOTS_AIPerceptionLibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_AIPerception_Source_SOTS_AIPerception_Public_SOTS_AIPerceptionLibrary_h_11_INCLASS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_AIPerception_Source_SOTS_AIPerception_Public_SOTS_AIPerceptionLibrary_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USOTS_AIPerceptionLibrary;

// ********** End Class USOTS_AIPerceptionLibrary **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SAS_ShadowsAndShurikens_Plugins_SOTS_AIPerception_Source_SOTS_AIPerception_Public_SOTS_AIPerceptionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
