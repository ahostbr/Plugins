// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LimbMap.h"

#ifdef DISMEMBERMENTSYSTEM_LimbMap_generated_h
#error "LimbMap.generated.h already included, missing '#pragma once' in LimbMap.h"
#endif
#define DISMEMBERMENTSYSTEM_LimbMap_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULimbMap;
class USkeletalMeshComponent;
struct FLimb;

// ********** Begin ScriptStruct FLimb *************************************************************
struct Z_Construct_UScriptStruct_FLimb_Statics;
#define FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_LimbMap_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLimb_Statics; \
	DISMEMBERMENTSYSTEM_API static class UScriptStruct* StaticStruct();


struct FLimb;
// ********** End ScriptStruct FLimb ***************************************************************

// ********** Begin ScriptStruct FLimbKey **********************************************************
struct Z_Construct_UScriptStruct_FLimbKey_Statics;
#define FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_LimbMap_h_57_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLimbKey_Statics; \
	DISMEMBERMENTSYSTEM_API static class UScriptStruct* StaticStruct();


struct FLimbKey;
// ********** End ScriptStruct FLimbKey ************************************************************

// ********** Begin Class ULimbMap *****************************************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_LimbMap_h_96_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMaskOfImmediateLimb); \
	DECLARE_FUNCTION(execGetMaskOfLimb); \
	DECLARE_FUNCTION(execGetWeightsOfLimb); \
	DECLARE_FUNCTION(execGetMaskOfBone); \
	DECLARE_FUNCTION(execGetWeightsOfBone); \
	DECLARE_FUNCTION(execSetLimbWeights); \
	DECLARE_FUNCTION(execGetLimb); \
	DECLARE_FUNCTION(execGetVertexWeightColorForLimb); \
	DECLARE_FUNCTION(execGetVertexWeightColorForBone); \
	DECLARE_FUNCTION(execGetBoneIndex); \
	DECLARE_FUNCTION(execGetBoneName); \
	DECLARE_FUNCTION(execGetAllBonesOfLimb); \
	DECLARE_FUNCTION(execGetDirectChildBone); \
	DECLARE_FUNCTION(execGetLimbMap); \
	DECLARE_FUNCTION(execInitialize);


struct Z_Construct_UClass_ULimbMap_Statics;
DISMEMBERMENTSYSTEM_API UClass* Z_Construct_UClass_ULimbMap_NoRegister();

#define FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_LimbMap_h_96_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULimbMap(); \
	friend struct ::Z_Construct_UClass_ULimbMap_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DISMEMBERMENTSYSTEM_API UClass* ::Z_Construct_UClass_ULimbMap_NoRegister(); \
public: \
	DECLARE_CLASS2(ULimbMap, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DismembermentSystem"), Z_Construct_UClass_ULimbMap_NoRegister) \
	DECLARE_SERIALIZER(ULimbMap)


#define FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_LimbMap_h_96_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULimbMap(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULimbMap(ULimbMap&&) = delete; \
	ULimbMap(const ULimbMap&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULimbMap); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULimbMap); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULimbMap) \
	NO_API virtual ~ULimbMap();


#define FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_LimbMap_h_93_PROLOG
#define FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_LimbMap_h_96_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_LimbMap_h_96_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_LimbMap_h_96_INCLASS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_LimbMap_h_96_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULimbMap;

// ********** End Class ULimbMap *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_LimbMap_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
