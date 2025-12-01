// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OmniTraceDebugSubsystem.h"

#ifdef OMNITRACE_OmniTraceDebugSubsystem_generated_h
#error "OmniTraceDebugSubsystem.generated.h already included, missing '#pragma once' in OmniTraceDebugSubsystem.h"
#endif
#define OMNITRACE_OmniTraceDebugSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOmniTraceDebugSubsystem *************************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceDebugSubsystem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOmniTrace_DrawLastKEMTrace);


struct Z_Construct_UClass_UOmniTraceDebugSubsystem_Statics;
OMNITRACE_API UClass* Z_Construct_UClass_UOmniTraceDebugSubsystem_NoRegister();

#define FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceDebugSubsystem_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOmniTraceDebugSubsystem(); \
	friend struct ::Z_Construct_UClass_UOmniTraceDebugSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OMNITRACE_API UClass* ::Z_Construct_UClass_UOmniTraceDebugSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UOmniTraceDebugSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OmniTrace"), Z_Construct_UClass_UOmniTraceDebugSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UOmniTraceDebugSubsystem)


#define FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceDebugSubsystem_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOmniTraceDebugSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOmniTraceDebugSubsystem(UOmniTraceDebugSubsystem&&) = delete; \
	UOmniTraceDebugSubsystem(const UOmniTraceDebugSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOmniTraceDebugSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOmniTraceDebugSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOmniTraceDebugSubsystem) \
	NO_API virtual ~UOmniTraceDebugSubsystem();


#define FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceDebugSubsystem_h_11_PROLOG
#define FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceDebugSubsystem_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceDebugSubsystem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceDebugSubsystem_h_14_INCLASS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceDebugSubsystem_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOmniTraceDebugSubsystem;

// ********** End Class UOmniTraceDebugSubsystem ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceDebugSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
