// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DismembermentComponent.h"

#ifdef DISMEMBERMENTSYSTEM_DismembermentComponent_generated_h
#error "DismembermentComponent.generated.h already included, missing '#pragma once' in DismembermentComponent.h"
#endif
#define DISMEMBERMENTSYSTEM_DismembermentComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USkeletalMeshComponent;
class USkeleton;

// ********** Begin ScriptStruct FDismemberedLimbFrameDelay ****************************************
struct Z_Construct_UScriptStruct_FDismemberedLimbFrameDelay_Statics;
#define FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_DismembermentComponent_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDismemberedLimbFrameDelay_Statics; \
	DISMEMBERMENTSYSTEM_API static class UScriptStruct* StaticStruct();


struct FDismemberedLimbFrameDelay;
// ********** End ScriptStruct FDismemberedLimbFrameDelay ******************************************

// ********** Begin Delegate FOnPreDismemberment ***************************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_DismembermentComponent_h_48_DELEGATE \
DISMEMBERMENTSYSTEM_API void FOnPreDismemberment_DelegateWrapper(const FMulticastScriptDelegate& OnPreDismemberment, FName BoneName, FVector Impulse);


// ********** End Delegate FOnPreDismemberment *****************************************************

// ********** Begin Delegate FOnPostDismemberment **************************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_DismembermentComponent_h_49_DELEGATE \
DISMEMBERMENTSYSTEM_API void FOnPostDismemberment_DelegateWrapper(const FMulticastScriptDelegate& OnPostDismemberment, FName BoneName, USkeletalMeshComponent* DismemberedMesh);


// ********** End Delegate FOnPostDismemberment ****************************************************

// ********** Begin Class UDismembermentComponent **************************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_DismembermentComponent_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool DismemberLimb_Multi_Validate(FName , FVector const& ); \
	virtual void DismemberLimb_Multi_Implementation(FName BoneName, FVector const& Impulse); \
	virtual bool DismemberLimb_Server_Validate(FName , FVector const& ); \
	virtual void DismemberLimb_Server_Implementation(FName BoneName, FVector const& Impulse); \
	DECLARE_FUNCTION(execCleanUpReferencedLimb); \
	DECLARE_FUNCTION(execCleanUpAllReferencedLimbs); \
	DECLARE_FUNCTION(execResetAllLimbs); \
	DECLARE_FUNCTION(execDismemberLimbFrameDelayed); \
	DECLARE_FUNCTION(execBeginFrameDelayedDismemberment); \
	DECLARE_FUNCTION(execDismemberLimb_Internal); \
	DECLARE_FUNCTION(execDestroyLimb); \
	DECLARE_FUNCTION(execDismemberLimb_Multi); \
	DECLARE_FUNCTION(execDismemberLimb_Server); \
	DECLARE_FUNCTION(execDismemberLimb); \
	DECLARE_FUNCTION(execGetBoneNameOptions); \
	DECLARE_FUNCTION(execDismemberPingDelayed); \
	DECLARE_FUNCTION(execOnRep_DismemberedBones); \
	DECLARE_FUNCTION(execGetAllDismemberedLimbs); \
	DECLARE_FUNCTION(execGetDismemberedLimbByName); \
	DECLARE_FUNCTION(execSetSkeletalMeshComponentToDismember);


#if WITH_EDITOR
#define FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_DismembermentComponent_h_54_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execGetTargetSkeletonFromAnimBP); \
	DECLARE_FUNCTION(execSetAnimInstanceTargetSkeleton);
#else // WITH_EDITOR
#define FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_DismembermentComponent_h_54_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_DismembermentComponent_h_54_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UDismembermentComponent_Statics;
DISMEMBERMENTSYSTEM_API UClass* Z_Construct_UClass_UDismembermentComponent_NoRegister();

#define FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_DismembermentComponent_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDismembermentComponent(); \
	friend struct ::Z_Construct_UClass_UDismembermentComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DISMEMBERMENTSYSTEM_API UClass* ::Z_Construct_UClass_UDismembermentComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UDismembermentComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DismembermentSystem"), Z_Construct_UClass_UDismembermentComponent_NoRegister) \
	DECLARE_SERIALIZER(UDismembermentComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		DismemberedBones=NETFIELD_REP_START, \
		NETFIELD_REP_END=DismemberedBones	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_DismembermentComponent_h_54_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDismembermentComponent(UDismembermentComponent&&) = delete; \
	UDismembermentComponent(const UDismembermentComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDismembermentComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDismembermentComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDismembermentComponent) \
	NO_API virtual ~UDismembermentComponent();


#define FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_DismembermentComponent_h_51_PROLOG
#define FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_DismembermentComponent_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_DismembermentComponent_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_DismembermentComponent_h_54_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_DismembermentComponent_h_54_CALLBACK_WRAPPERS \
	FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_DismembermentComponent_h_54_INCLASS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_DismembermentComponent_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDismembermentComponent;

// ********** End Class UDismembermentComponent ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_DismembermentComponent_h

// ********** Begin Enum EDismemberColorChannel ****************************************************
#define FOREACH_ENUM_EDISMEMBERCOLORCHANNEL(op) \
	op(EDismemberColorChannel::R_Channel) \
	op(EDismemberColorChannel::G_Channel) \
	op(EDismemberColorChannel::B_Channel) \
	op(EDismemberColorChannel::A_Channel) 

enum class EDismemberColorChannel : uint8;
template<> struct TIsUEnumClass<EDismemberColorChannel> { enum { Value = true }; };
template<> DISMEMBERMENTSYSTEM_NON_ATTRIBUTED_API UEnum* StaticEnum<EDismemberColorChannel>();
// ********** End Enum EDismemberColorChannel ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
