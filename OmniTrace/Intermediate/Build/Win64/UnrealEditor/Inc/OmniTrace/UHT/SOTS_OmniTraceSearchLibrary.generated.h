// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SOTS_OmniTraceSearchLibrary.h"

#ifdef OMNITRACE_SOTS_OmniTraceSearchLibrary_generated_h
#error "SOTS_OmniTraceSearchLibrary.generated.h already included, missing '#pragma once' in SOTS_OmniTraceSearchLibrary.h"
#endif
#define OMNITRACE_SOTS_OmniTraceSearchLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FGameplayTag;
struct FSOTS_SearchPatternResult;

// ********** Begin ScriptStruct FSOTS_SearchPatternResult *****************************************
struct Z_Construct_UScriptStruct_FSOTS_SearchPatternResult_Statics;
#define FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_SOTS_OmniTraceSearchLibrary_h_11_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSOTS_SearchPatternResult_Statics; \
	OMNITRACE_API static class UScriptStruct* StaticStruct();


struct FSOTS_SearchPatternResult;
// ********** End ScriptStruct FSOTS_SearchPatternResult *******************************************

// ********** Begin Class USOTS_OmniTraceSearchLibrary *********************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_SOTS_OmniTraceSearchLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSOTS_RequestSearchPattern);


struct Z_Construct_UClass_USOTS_OmniTraceSearchLibrary_Statics;
OMNITRACE_API UClass* Z_Construct_UClass_USOTS_OmniTraceSearchLibrary_NoRegister();

#define FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_SOTS_OmniTraceSearchLibrary_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSOTS_OmniTraceSearchLibrary(); \
	friend struct ::Z_Construct_UClass_USOTS_OmniTraceSearchLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OMNITRACE_API UClass* ::Z_Construct_UClass_USOTS_OmniTraceSearchLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(USOTS_OmniTraceSearchLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OmniTrace"), Z_Construct_UClass_USOTS_OmniTraceSearchLibrary_NoRegister) \
	DECLARE_SERIALIZER(USOTS_OmniTraceSearchLibrary)


#define FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_SOTS_OmniTraceSearchLibrary_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USOTS_OmniTraceSearchLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USOTS_OmniTraceSearchLibrary(USOTS_OmniTraceSearchLibrary&&) = delete; \
	USOTS_OmniTraceSearchLibrary(const USOTS_OmniTraceSearchLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USOTS_OmniTraceSearchLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USOTS_OmniTraceSearchLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USOTS_OmniTraceSearchLibrary) \
	NO_API virtual ~USOTS_OmniTraceSearchLibrary();


#define FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_SOTS_OmniTraceSearchLibrary_h_21_PROLOG
#define FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_SOTS_OmniTraceSearchLibrary_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_SOTS_OmniTraceSearchLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_SOTS_OmniTraceSearchLibrary_h_24_INCLASS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_SOTS_OmniTraceSearchLibrary_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USOTS_OmniTraceSearchLibrary;

// ********** End Class USOTS_OmniTraceSearchLibrary ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_SOTS_OmniTraceSearchLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
