// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DismembermentComponent.h"
#include "Engine/EngineTypes.h"
#include "PhysicsEngine/BodyInstance.h"
#include "UObject/CoreNet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeDismembermentComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DISMEMBERMENTSYSTEM_API UClass* Z_Construct_UClass_UDismemberedAnimInstance_NoRegister();
DISMEMBERMENTSYSTEM_API UClass* Z_Construct_UClass_UDismembermentComponent();
DISMEMBERMENTSYSTEM_API UClass* Z_Construct_UClass_UDismembermentComponent_NoRegister();
DISMEMBERMENTSYSTEM_API UClass* Z_Construct_UClass_ULimbMap_NoRegister();
DISMEMBERMENTSYSTEM_API UEnum* Z_Construct_UEnum_DismembermentSystem_EDismemberColorChannel();
DISMEMBERMENTSYSTEM_API UFunction* Z_Construct_UDelegateFunction_DismembermentSystem_OnPostDismemberment__DelegateSignature();
DISMEMBERMENTSYSTEM_API UFunction* Z_Construct_UDelegateFunction_DismembermentSystem_OnPreDismemberment__DelegateSignature();
DISMEMBERMENTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDismemberedLimbFrameDelay();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyInstance();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionResponseContainer();
UPackage* Z_Construct_UPackage__Script_DismembermentSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EDismemberColorChannel ****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDismemberColorChannel;
static UEnum* EDismemberColorChannel_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDismemberColorChannel.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDismemberColorChannel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DismembermentSystem_EDismemberColorChannel, (UObject*)Z_Construct_UPackage__Script_DismembermentSystem(), TEXT("EDismemberColorChannel"));
	}
	return Z_Registration_Info_UEnum_EDismemberColorChannel.OuterSingleton;
}
template<> DISMEMBERMENTSYSTEM_NON_ATTRIBUTED_API UEnum* StaticEnum<EDismemberColorChannel>()
{
	return EDismemberColorChannel_StaticEnum();
}
struct Z_Construct_UEnum_DismembermentSystem_EDismemberColorChannel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "A_Channel.DisplayName", "A" },
		{ "A_Channel.Name", "EDismemberColorChannel::A_Channel" },
		{ "B_Channel.DisplayName", "B" },
		{ "B_Channel.Name", "EDismemberColorChannel::B_Channel" },
		{ "BlueprintType", "true" },
		{ "G_Channel.DisplayName", "G" },
		{ "G_Channel.Name", "EDismemberColorChannel::G_Channel" },
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
		{ "R_Channel.DisplayName", "R" },
		{ "R_Channel.Name", "EDismemberColorChannel::R_Channel" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDismemberColorChannel::R_Channel", (int64)EDismemberColorChannel::R_Channel },
		{ "EDismemberColorChannel::G_Channel", (int64)EDismemberColorChannel::G_Channel },
		{ "EDismemberColorChannel::B_Channel", (int64)EDismemberColorChannel::B_Channel },
		{ "EDismemberColorChannel::A_Channel", (int64)EDismemberColorChannel::A_Channel },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_DismembermentSystem_EDismemberColorChannel_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DismembermentSystem_EDismemberColorChannel_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DismembermentSystem,
	nullptr,
	"EDismemberColorChannel",
	"EDismemberColorChannel",
	Z_Construct_UEnum_DismembermentSystem_EDismemberColorChannel_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DismembermentSystem_EDismemberColorChannel_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DismembermentSystem_EDismemberColorChannel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DismembermentSystem_EDismemberColorChannel_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DismembermentSystem_EDismemberColorChannel()
{
	if (!Z_Registration_Info_UEnum_EDismemberColorChannel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDismemberColorChannel.InnerSingleton, Z_Construct_UEnum_DismembermentSystem_EDismemberColorChannel_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDismemberColorChannel.InnerSingleton;
}
// ********** End Enum EDismemberColorChannel ******************************************************

// ********** Begin ScriptStruct FDismemberedLimbFrameDelay ****************************************
struct Z_Construct_UScriptStruct_FDismemberedLimbFrameDelay_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FDismemberedLimbFrameDelay); }
	static inline consteval int16 GetStructAlignment() { return alignof(FDismemberedLimbFrameDelay); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n *\x09This handles caching the data from a dismemberment event. This\n *\x09is because animations wont update till the next frame so for the\n *\x09limb to copy the parents pose we have to delay a single frame.\n */" },
#endif
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "*     This handles caching the data from a dismemberment event. This\n*     is because animations wont update till the next frame so for the\n*     limb to copy the parents pose we have to delay a single frame." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Impulse_MetaData[] = {
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FDismemberedLimbFrameDelay constinit property declarations ********
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Impulse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FDismemberedLimbFrameDelay constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDismemberedLimbFrameDelay>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FDismemberedLimbFrameDelay_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDismemberedLimbFrameDelay;
class UScriptStruct* FDismemberedLimbFrameDelay::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FDismemberedLimbFrameDelay.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FDismemberedLimbFrameDelay.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDismemberedLimbFrameDelay, (UObject*)Z_Construct_UPackage__Script_DismembermentSystem(), TEXT("DismemberedLimbFrameDelay"));
	}
	return Z_Registration_Info_UScriptStruct_FDismemberedLimbFrameDelay.OuterSingleton;
	}

// ********** Begin ScriptStruct FDismemberedLimbFrameDelay Property Definitions *******************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDismemberedLimbFrameDelay_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDismemberedLimbFrameDelay, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDismemberedLimbFrameDelay_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDismemberedLimbFrameDelay, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMeshComponent_MetaData), NewProp_SkeletalMeshComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDismemberedLimbFrameDelay_Statics::NewProp_Impulse = { "Impulse", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDismemberedLimbFrameDelay, Impulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Impulse_MetaData), NewProp_Impulse_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDismemberedLimbFrameDelay_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDismemberedLimbFrameDelay, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDismemberedLimbFrameDelay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDismemberedLimbFrameDelay_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDismemberedLimbFrameDelay_Statics::NewProp_SkeletalMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDismemberedLimbFrameDelay_Statics::NewProp_Impulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDismemberedLimbFrameDelay_Statics::NewProp_Transform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDismemberedLimbFrameDelay_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FDismemberedLimbFrameDelay Property Definitions *********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDismemberedLimbFrameDelay_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DismembermentSystem,
	nullptr,
	&NewStructOps,
	"DismemberedLimbFrameDelay",
	Z_Construct_UScriptStruct_FDismemberedLimbFrameDelay_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDismemberedLimbFrameDelay_Statics::PropPointers),
	sizeof(FDismemberedLimbFrameDelay),
	alignof(FDismemberedLimbFrameDelay),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDismemberedLimbFrameDelay_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDismemberedLimbFrameDelay_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDismemberedLimbFrameDelay()
{
	if (!Z_Registration_Info_UScriptStruct_FDismemberedLimbFrameDelay.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDismemberedLimbFrameDelay.InnerSingleton, Z_Construct_UScriptStruct_FDismemberedLimbFrameDelay_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FDismemberedLimbFrameDelay.InnerSingleton);
}
// ********** End ScriptStruct FDismemberedLimbFrameDelay ******************************************

// ********** Begin Delegate FOnPreDismemberment ***************************************************
struct Z_Construct_UDelegateFunction_DismembermentSystem_OnPreDismemberment__DelegateSignature_Statics
{
	struct _Script_DismembermentSystem_eventOnPreDismemberment_Parms
	{
		FName BoneName;
		FVector Impulse;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n *\x09""Dismemberment Component is used for cutting off the\n *\x09limbs of a Skeletal Mesh. This component uses a control\n *\x09rig to scale bones based on their bone names.\n */" },
#endif
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "*     Dismemberment Component is used for cutting off the\n*     limbs of a Skeletal Mesh. This component uses a control\n*     rig to scale bones based on their bone names." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnPreDismemberment constinit property declarations *******************
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Impulse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnPreDismemberment constinit property declarations *********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnPreDismemberment Property Definitions ******************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_DismembermentSystem_OnPreDismemberment__DelegateSignature_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DismembermentSystem_eventOnPreDismemberment_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_DismembermentSystem_OnPreDismemberment__DelegateSignature_Statics::NewProp_Impulse = { "Impulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DismembermentSystem_eventOnPreDismemberment_Parms, Impulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DismembermentSystem_OnPreDismemberment__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DismembermentSystem_OnPreDismemberment__DelegateSignature_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DismembermentSystem_OnPreDismemberment__DelegateSignature_Statics::NewProp_Impulse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DismembermentSystem_OnPreDismemberment__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnPreDismemberment Property Definitions ********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_DismembermentSystem_OnPreDismemberment__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_DismembermentSystem, nullptr, "OnPreDismemberment__DelegateSignature", 	Z_Construct_UDelegateFunction_DismembermentSystem_OnPreDismemberment__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DismembermentSystem_OnPreDismemberment__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_DismembermentSystem_OnPreDismemberment__DelegateSignature_Statics::_Script_DismembermentSystem_eventOnPreDismemberment_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DismembermentSystem_OnPreDismemberment__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DismembermentSystem_OnPreDismemberment__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_DismembermentSystem_OnPreDismemberment__DelegateSignature_Statics::_Script_DismembermentSystem_eventOnPreDismemberment_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_DismembermentSystem_OnPreDismemberment__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DismembermentSystem_OnPreDismemberment__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPreDismemberment_DelegateWrapper(const FMulticastScriptDelegate& OnPreDismemberment, FName BoneName, FVector Impulse)
{
	struct _Script_DismembermentSystem_eventOnPreDismemberment_Parms
	{
		FName BoneName;
		FVector Impulse;
	};
	_Script_DismembermentSystem_eventOnPreDismemberment_Parms Parms;
	Parms.BoneName=BoneName;
	Parms.Impulse=Impulse;
	OnPreDismemberment.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnPreDismemberment *****************************************************

// ********** Begin Delegate FOnPostDismemberment **************************************************
struct Z_Construct_UDelegateFunction_DismembermentSystem_OnPostDismemberment__DelegateSignature_Statics
{
	struct _Script_DismembermentSystem_eventOnPostDismemberment_Parms
	{
		FName BoneName;
		USkeletalMeshComponent* DismemberedMesh;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DismemberedMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnPostDismemberment constinit property declarations ******************
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DismemberedMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnPostDismemberment constinit property declarations ********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnPostDismemberment Property Definitions *****************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_DismembermentSystem_OnPostDismemberment__DelegateSignature_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DismembermentSystem_eventOnPostDismemberment_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_DismembermentSystem_OnPostDismemberment__DelegateSignature_Statics::NewProp_DismemberedMesh = { "DismemberedMesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DismembermentSystem_eventOnPostDismemberment_Parms, DismemberedMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DismemberedMesh_MetaData), NewProp_DismemberedMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DismembermentSystem_OnPostDismemberment__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DismembermentSystem_OnPostDismemberment__DelegateSignature_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DismembermentSystem_OnPostDismemberment__DelegateSignature_Statics::NewProp_DismemberedMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DismembermentSystem_OnPostDismemberment__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnPostDismemberment Property Definitions *******************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_DismembermentSystem_OnPostDismemberment__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_DismembermentSystem, nullptr, "OnPostDismemberment__DelegateSignature", 	Z_Construct_UDelegateFunction_DismembermentSystem_OnPostDismemberment__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DismembermentSystem_OnPostDismemberment__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_DismembermentSystem_OnPostDismemberment__DelegateSignature_Statics::_Script_DismembermentSystem_eventOnPostDismemberment_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DismembermentSystem_OnPostDismemberment__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DismembermentSystem_OnPostDismemberment__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_DismembermentSystem_OnPostDismemberment__DelegateSignature_Statics::_Script_DismembermentSystem_eventOnPostDismemberment_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_DismembermentSystem_OnPostDismemberment__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DismembermentSystem_OnPostDismemberment__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPostDismemberment_DelegateWrapper(const FMulticastScriptDelegate& OnPostDismemberment, FName BoneName, USkeletalMeshComponent* DismemberedMesh)
{
	struct _Script_DismembermentSystem_eventOnPostDismemberment_Parms
	{
		FName BoneName;
		USkeletalMeshComponent* DismemberedMesh;
	};
	_Script_DismembermentSystem_eventOnPostDismemberment_Parms Parms;
	Parms.BoneName=BoneName;
	Parms.DismemberedMesh=DismemberedMesh;
	OnPostDismemberment.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnPostDismemberment ****************************************************

// ********** Begin Class UDismembermentComponent Function BeginFrameDelayedDismemberment **********
struct Z_Construct_UFunction_UDismembermentComponent_BeginFrameDelayedDismemberment_Statics
{
	struct DismembermentComponent_eventBeginFrameDelayedDismemberment_Parms
	{
		USkeletalMeshComponent* Component;
		FName BoneName;
		FVector Impulse;
		FTransform Transform;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Impulse_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function BeginFrameDelayedDismemberment constinit property declarations ********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Impulse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BeginFrameDelayedDismemberment constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BeginFrameDelayedDismemberment Property Definitions *******************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDismembermentComponent_BeginFrameDelayedDismemberment_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DismembermentComponent_eventBeginFrameDelayedDismemberment_Parms, Component), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDismembermentComponent_BeginFrameDelayedDismemberment_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DismembermentComponent_eventBeginFrameDelayedDismemberment_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDismembermentComponent_BeginFrameDelayedDismemberment_Statics::NewProp_Impulse = { "Impulse", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DismembermentComponent_eventBeginFrameDelayedDismemberment_Parms, Impulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Impulse_MetaData), NewProp_Impulse_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDismembermentComponent_BeginFrameDelayedDismemberment_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DismembermentComponent_eventBeginFrameDelayedDismemberment_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDismembermentComponent_BeginFrameDelayedDismemberment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismembermentComponent_BeginFrameDelayedDismemberment_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismembermentComponent_BeginFrameDelayedDismemberment_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismembermentComponent_BeginFrameDelayedDismemberment_Statics::NewProp_Impulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismembermentComponent_BeginFrameDelayedDismemberment_Statics::NewProp_Transform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_BeginFrameDelayedDismemberment_Statics::PropPointers) < 2048);
// ********** End Function BeginFrameDelayedDismemberment Property Definitions *********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDismembermentComponent_BeginFrameDelayedDismemberment_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDismembermentComponent, nullptr, "BeginFrameDelayedDismemberment", 	Z_Construct_UFunction_UDismembermentComponent_BeginFrameDelayedDismemberment_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_BeginFrameDelayedDismemberment_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UDismembermentComponent_BeginFrameDelayedDismemberment_Statics::DismembermentComponent_eventBeginFrameDelayedDismemberment_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_BeginFrameDelayedDismemberment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDismembermentComponent_BeginFrameDelayedDismemberment_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDismembermentComponent_BeginFrameDelayedDismemberment_Statics::DismembermentComponent_eventBeginFrameDelayedDismemberment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDismembermentComponent_BeginFrameDelayedDismemberment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDismembermentComponent_BeginFrameDelayedDismemberment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDismembermentComponent::execBeginFrameDelayedDismemberment)
{
	P_GET_OBJECT(USkeletalMeshComponent,Z_Param_Component);
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Impulse);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BeginFrameDelayedDismemberment(Z_Param_Component,Z_Param_BoneName,Z_Param_Out_Impulse,Z_Param_Out_Transform);
	P_NATIVE_END;
}
// ********** End Class UDismembermentComponent Function BeginFrameDelayedDismemberment ************

// ********** Begin Class UDismembermentComponent Function CleanUpAllReferencedLimbs ***************
struct Z_Construct_UFunction_UDismembermentComponent_CleanUpAllReferencedLimbs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dismemberment" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Removes all the characters detached limbs from the world. */" },
#endif
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes all the characters detached limbs from the world." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function CleanUpAllReferencedLimbs constinit property declarations *************
// ********** End Function CleanUpAllReferencedLimbs constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDismembermentComponent_CleanUpAllReferencedLimbs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDismembermentComponent, nullptr, "CleanUpAllReferencedLimbs", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_CleanUpAllReferencedLimbs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDismembermentComponent_CleanUpAllReferencedLimbs_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UDismembermentComponent_CleanUpAllReferencedLimbs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDismembermentComponent_CleanUpAllReferencedLimbs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDismembermentComponent::execCleanUpAllReferencedLimbs)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CleanUpAllReferencedLimbs();
	P_NATIVE_END;
}
// ********** End Class UDismembermentComponent Function CleanUpAllReferencedLimbs *****************

// ********** Begin Class UDismembermentComponent Function CleanUpReferencedLimb *******************
struct Z_Construct_UFunction_UDismembermentComponent_CleanUpReferencedLimb_Statics
{
	struct DismembermentComponent_eventCleanUpReferencedLimb_Parms
	{
		FName BoneName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dismemberment" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Removes the detached limb from the world. */" },
#endif
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes the detached limb from the world." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function CleanUpReferencedLimb constinit property declarations *****************
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CleanUpReferencedLimb constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CleanUpReferencedLimb Property Definitions ****************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDismembermentComponent_CleanUpReferencedLimb_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DismembermentComponent_eventCleanUpReferencedLimb_Parms, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDismembermentComponent_CleanUpReferencedLimb_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismembermentComponent_CleanUpReferencedLimb_Statics::NewProp_BoneName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_CleanUpReferencedLimb_Statics::PropPointers) < 2048);
// ********** End Function CleanUpReferencedLimb Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDismembermentComponent_CleanUpReferencedLimb_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDismembermentComponent, nullptr, "CleanUpReferencedLimb", 	Z_Construct_UFunction_UDismembermentComponent_CleanUpReferencedLimb_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_CleanUpReferencedLimb_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UDismembermentComponent_CleanUpReferencedLimb_Statics::DismembermentComponent_eventCleanUpReferencedLimb_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_CleanUpReferencedLimb_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDismembermentComponent_CleanUpReferencedLimb_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDismembermentComponent_CleanUpReferencedLimb_Statics::DismembermentComponent_eventCleanUpReferencedLimb_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDismembermentComponent_CleanUpReferencedLimb()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDismembermentComponent_CleanUpReferencedLimb_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDismembermentComponent::execCleanUpReferencedLimb)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CleanUpReferencedLimb(Z_Param_BoneName);
	P_NATIVE_END;
}
// ********** End Class UDismembermentComponent Function CleanUpReferencedLimb *********************

// ********** Begin Class UDismembermentComponent Function DestroyLimb *****************************
struct Z_Construct_UFunction_UDismembermentComponent_DestroyLimb_Statics
{
	struct DismembermentComponent_eventDestroyLimb_Parms
	{
		FName BoneName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dismemberment" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This will hide a limb on the Owning Mesh without spawning a dismembered limb with it. */" },
#endif
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This will hide a limb on the Owning Mesh without spawning a dismembered limb with it." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function DestroyLimb constinit property declarations ***************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DestroyLimb constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DestroyLimb Property Definitions **************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDismembermentComponent_DestroyLimb_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DismembermentComponent_eventDestroyLimb_Parms, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDismembermentComponent_DestroyLimb_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismembermentComponent_DestroyLimb_Statics::NewProp_BoneName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_DestroyLimb_Statics::PropPointers) < 2048);
// ********** End Function DestroyLimb Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDismembermentComponent_DestroyLimb_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDismembermentComponent, nullptr, "DestroyLimb", 	Z_Construct_UFunction_UDismembermentComponent_DestroyLimb_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_DestroyLimb_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UDismembermentComponent_DestroyLimb_Statics::DismembermentComponent_eventDestroyLimb_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_DestroyLimb_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDismembermentComponent_DestroyLimb_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDismembermentComponent_DestroyLimb_Statics::DismembermentComponent_eventDestroyLimb_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDismembermentComponent_DestroyLimb()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDismembermentComponent_DestroyLimb_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDismembermentComponent::execDestroyLimb)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DestroyLimb(Z_Param_BoneName);
	P_NATIVE_END;
}
// ********** End Class UDismembermentComponent Function DestroyLimb *******************************

// ********** Begin Class UDismembermentComponent Function DismemberLimb ***************************
struct Z_Construct_UFunction_UDismembermentComponent_DismemberLimb_Statics
{
	struct DismembermentComponent_eventDismemberLimb_Parms
	{
		FName BoneName;
		FVector Impulse;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dismemberment" },
		{ "CPP_Default_Impulse", "0.000000,0.000000,0.000000" },
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Main function to call when Dismembering a Limb" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function DismemberLimb constinit property declarations *************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Impulse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DismemberLimb constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DismemberLimb Property Definitions ************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDismembermentComponent_DismemberLimb_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DismembermentComponent_eventDismemberLimb_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDismembermentComponent_DismemberLimb_Statics::NewProp_Impulse = { "Impulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DismembermentComponent_eventDismemberLimb_Parms, Impulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDismembermentComponent_DismemberLimb_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismembermentComponent_DismemberLimb_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismembermentComponent_DismemberLimb_Statics::NewProp_Impulse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_DismemberLimb_Statics::PropPointers) < 2048);
// ********** End Function DismemberLimb Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDismembermentComponent_DismemberLimb_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDismembermentComponent, nullptr, "DismemberLimb", 	Z_Construct_UFunction_UDismembermentComponent_DismemberLimb_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_DismemberLimb_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UDismembermentComponent_DismemberLimb_Statics::DismembermentComponent_eventDismemberLimb_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_DismemberLimb_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDismembermentComponent_DismemberLimb_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDismembermentComponent_DismemberLimb_Statics::DismembermentComponent_eventDismemberLimb_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDismembermentComponent_DismemberLimb()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDismembermentComponent_DismemberLimb_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDismembermentComponent::execDismemberLimb)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_GET_STRUCT(FVector,Z_Param_Impulse);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DismemberLimb(Z_Param_BoneName,Z_Param_Impulse);
	P_NATIVE_END;
}
// ********** End Class UDismembermentComponent Function DismemberLimb *****************************

// ********** Begin Class UDismembermentComponent Function DismemberLimb_Internal ******************
struct Z_Construct_UFunction_UDismembermentComponent_DismemberLimb_Internal_Statics
{
	struct DismembermentComponent_eventDismemberLimb_Internal_Parms
	{
		FName BoneName;
		FVector Impulse;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* This is the actual code that runs when a bone gets dismembered */" },
#endif
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is the actual code that runs when a bone gets dismembered" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Impulse_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function DismemberLimb_Internal constinit property declarations ****************
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Impulse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DismemberLimb_Internal constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DismemberLimb_Internal Property Definitions ***************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDismembermentComponent_DismemberLimb_Internal_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DismembermentComponent_eventDismemberLimb_Internal_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDismembermentComponent_DismemberLimb_Internal_Statics::NewProp_Impulse = { "Impulse", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DismembermentComponent_eventDismemberLimb_Internal_Parms, Impulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Impulse_MetaData), NewProp_Impulse_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDismembermentComponent_DismemberLimb_Internal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismembermentComponent_DismemberLimb_Internal_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismembermentComponent_DismemberLimb_Internal_Statics::NewProp_Impulse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_DismemberLimb_Internal_Statics::PropPointers) < 2048);
// ********** End Function DismemberLimb_Internal Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDismembermentComponent_DismemberLimb_Internal_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDismembermentComponent, nullptr, "DismemberLimb_Internal", 	Z_Construct_UFunction_UDismembermentComponent_DismemberLimb_Internal_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_DismemberLimb_Internal_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UDismembermentComponent_DismemberLimb_Internal_Statics::DismembermentComponent_eventDismemberLimb_Internal_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_DismemberLimb_Internal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDismembermentComponent_DismemberLimb_Internal_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDismembermentComponent_DismemberLimb_Internal_Statics::DismembermentComponent_eventDismemberLimb_Internal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDismembermentComponent_DismemberLimb_Internal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDismembermentComponent_DismemberLimb_Internal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDismembermentComponent::execDismemberLimb_Internal)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Impulse);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DismemberLimb_Internal(Z_Param_BoneName,Z_Param_Out_Impulse);
	P_NATIVE_END;
}
// ********** End Class UDismembermentComponent Function DismemberLimb_Internal ********************

// ********** Begin Class UDismembermentComponent Function DismemberLimb_Multi *********************
struct DismembermentComponent_eventDismemberLimb_Multi_Parms
{
	FName BoneName;
	FVector Impulse;
};
static FName NAME_UDismembermentComponent_DismemberLimb_Multi = FName(TEXT("DismemberLimb_Multi"));
void UDismembermentComponent::DismemberLimb_Multi(FName BoneName, FVector const& Impulse)
{
	DismembermentComponent_eventDismemberLimb_Multi_Parms Parms;
	Parms.BoneName=BoneName;
	Parms.Impulse=Impulse;
	UFunction* Func = FindFunctionChecked(NAME_UDismembermentComponent_DismemberLimb_Multi);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UDismembermentComponent_DismemberLimb_Multi_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Impulse_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function DismemberLimb_Multi constinit property declarations *******************
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Impulse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DismemberLimb_Multi constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DismemberLimb_Multi Property Definitions ******************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDismembermentComponent_DismemberLimb_Multi_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DismembermentComponent_eventDismemberLimb_Multi_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDismembermentComponent_DismemberLimb_Multi_Statics::NewProp_Impulse = { "Impulse", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DismembermentComponent_eventDismemberLimb_Multi_Parms, Impulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Impulse_MetaData), NewProp_Impulse_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDismembermentComponent_DismemberLimb_Multi_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismembermentComponent_DismemberLimb_Multi_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismembermentComponent_DismemberLimb_Multi_Statics::NewProp_Impulse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_DismemberLimb_Multi_Statics::PropPointers) < 2048);
// ********** End Function DismemberLimb_Multi Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDismembermentComponent_DismemberLimb_Multi_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDismembermentComponent, nullptr, "DismemberLimb_Multi", 	Z_Construct_UFunction_UDismembermentComponent_DismemberLimb_Multi_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_DismemberLimb_Multi_Statics::PropPointers), 
sizeof(DismembermentComponent_eventDismemberLimb_Multi_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80824C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_DismemberLimb_Multi_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDismembermentComponent_DismemberLimb_Multi_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(DismembermentComponent_eventDismemberLimb_Multi_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDismembermentComponent_DismemberLimb_Multi()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDismembermentComponent_DismemberLimb_Multi_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDismembermentComponent::execDismemberLimb_Multi)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_GET_STRUCT(FVector,Z_Param_Impulse);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->DismemberLimb_Multi_Validate(Z_Param_BoneName,Z_Param_Impulse))
	{
		RPC_ValidateFailed(TEXT("DismemberLimb_Multi_Validate"));
		return;
	}
	P_THIS->DismemberLimb_Multi_Implementation(Z_Param_BoneName,Z_Param_Impulse);
	P_NATIVE_END;
}
// ********** End Class UDismembermentComponent Function DismemberLimb_Multi ***********************

// ********** Begin Class UDismembermentComponent Function DismemberLimb_Server ********************
struct DismembermentComponent_eventDismemberLimb_Server_Parms
{
	FName BoneName;
	FVector Impulse;
};
static FName NAME_UDismembermentComponent_DismemberLimb_Server = FName(TEXT("DismemberLimb_Server"));
void UDismembermentComponent::DismemberLimb_Server(FName BoneName, FVector const& Impulse)
{
	DismembermentComponent_eventDismemberLimb_Server_Parms Parms;
	Parms.BoneName=BoneName;
	Parms.Impulse=Impulse;
	UFunction* Func = FindFunctionChecked(NAME_UDismembermentComponent_DismemberLimb_Server);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UDismembermentComponent_DismemberLimb_Server_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Impulse_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function DismemberLimb_Server constinit property declarations ******************
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Impulse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DismemberLimb_Server constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DismemberLimb_Server Property Definitions *****************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDismembermentComponent_DismemberLimb_Server_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DismembermentComponent_eventDismemberLimb_Server_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDismembermentComponent_DismemberLimb_Server_Statics::NewProp_Impulse = { "Impulse", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DismembermentComponent_eventDismemberLimb_Server_Parms, Impulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Impulse_MetaData), NewProp_Impulse_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDismembermentComponent_DismemberLimb_Server_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismembermentComponent_DismemberLimb_Server_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismembermentComponent_DismemberLimb_Server_Statics::NewProp_Impulse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_DismemberLimb_Server_Statics::PropPointers) < 2048);
// ********** End Function DismemberLimb_Server Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDismembermentComponent_DismemberLimb_Server_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDismembermentComponent, nullptr, "DismemberLimb_Server", 	Z_Construct_UFunction_UDismembermentComponent_DismemberLimb_Server_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_DismemberLimb_Server_Statics::PropPointers), 
sizeof(DismembermentComponent_eventDismemberLimb_Server_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80A20C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_DismemberLimb_Server_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDismembermentComponent_DismemberLimb_Server_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(DismembermentComponent_eventDismemberLimb_Server_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDismembermentComponent_DismemberLimb_Server()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDismembermentComponent_DismemberLimb_Server_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDismembermentComponent::execDismemberLimb_Server)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_GET_STRUCT(FVector,Z_Param_Impulse);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->DismemberLimb_Server_Validate(Z_Param_BoneName,Z_Param_Impulse))
	{
		RPC_ValidateFailed(TEXT("DismemberLimb_Server_Validate"));
		return;
	}
	P_THIS->DismemberLimb_Server_Implementation(Z_Param_BoneName,Z_Param_Impulse);
	P_NATIVE_END;
}
// ********** End Class UDismembermentComponent Function DismemberLimb_Server **********************

// ********** Begin Class UDismembermentComponent Function DismemberLimbFrameDelayed ***************
struct Z_Construct_UFunction_UDismembermentComponent_DismemberLimbFrameDelayed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DismemberLimbFrameDelayed constinit property declarations *************
// ********** End Function DismemberLimbFrameDelayed constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDismembermentComponent_DismemberLimbFrameDelayed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDismembermentComponent, nullptr, "DismemberLimbFrameDelayed", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_DismemberLimbFrameDelayed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDismembermentComponent_DismemberLimbFrameDelayed_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UDismembermentComponent_DismemberLimbFrameDelayed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDismembermentComponent_DismemberLimbFrameDelayed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDismembermentComponent::execDismemberLimbFrameDelayed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DismemberLimbFrameDelayed();
	P_NATIVE_END;
}
// ********** End Class UDismembermentComponent Function DismemberLimbFrameDelayed *****************

// ********** Begin Class UDismembermentComponent Function DismemberPingDelayed ********************
struct Z_Construct_UFunction_UDismembermentComponent_DismemberPingDelayed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Delay the OnRep_DismemberedBones so that we can check if dismemberment was already handled locally. */" },
#endif
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delay the OnRep_DismemberedBones so that we can check if dismemberment was already handled locally." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function DismemberPingDelayed constinit property declarations ******************
// ********** End Function DismemberPingDelayed constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDismembermentComponent_DismemberPingDelayed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDismembermentComponent, nullptr, "DismemberPingDelayed", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_DismemberPingDelayed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDismembermentComponent_DismemberPingDelayed_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UDismembermentComponent_DismemberPingDelayed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDismembermentComponent_DismemberPingDelayed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDismembermentComponent::execDismemberPingDelayed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DismemberPingDelayed();
	P_NATIVE_END;
}
// ********** End Class UDismembermentComponent Function DismemberPingDelayed **********************

// ********** Begin Class UDismembermentComponent Function GetAllDismemberedLimbs ******************
struct Z_Construct_UFunction_UDismembermentComponent_GetAllDismemberedLimbs_Statics
{
	struct DismembermentComponent_eventGetAllDismemberedLimbs_Parms
	{
		TArray<USkeletalMeshComponent*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dismemberment" },
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAllDismemberedLimbs constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAllDismemberedLimbs constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAllDismemberedLimbs Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDismembermentComponent_GetAllDismemberedLimbs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDismembermentComponent_GetAllDismemberedLimbs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DismembermentComponent_eventGetAllDismemberedLimbs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDismembermentComponent_GetAllDismemberedLimbs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismembermentComponent_GetAllDismemberedLimbs_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismembermentComponent_GetAllDismemberedLimbs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_GetAllDismemberedLimbs_Statics::PropPointers) < 2048);
// ********** End Function GetAllDismemberedLimbs Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDismembermentComponent_GetAllDismemberedLimbs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDismembermentComponent, nullptr, "GetAllDismemberedLimbs", 	Z_Construct_UFunction_UDismembermentComponent_GetAllDismemberedLimbs_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_GetAllDismemberedLimbs_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UDismembermentComponent_GetAllDismemberedLimbs_Statics::DismembermentComponent_eventGetAllDismemberedLimbs_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_GetAllDismemberedLimbs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDismembermentComponent_GetAllDismemberedLimbs_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDismembermentComponent_GetAllDismemberedLimbs_Statics::DismembermentComponent_eventGetAllDismemberedLimbs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDismembermentComponent_GetAllDismemberedLimbs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDismembermentComponent_GetAllDismemberedLimbs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDismembermentComponent::execGetAllDismemberedLimbs)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<USkeletalMeshComponent*>*)Z_Param__Result=P_THIS->GetAllDismemberedLimbs();
	P_NATIVE_END;
}
// ********** End Class UDismembermentComponent Function GetAllDismemberedLimbs ********************

// ********** Begin Class UDismembermentComponent Function GetBoneNameOptions **********************
struct Z_Construct_UFunction_UDismembermentComponent_GetBoneNameOptions_Statics
{
	struct DismembermentComponent_eventGetBoneNameOptions_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetBoneNameOptions constinit property declarations ********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetBoneNameOptions constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetBoneNameOptions Property Definitions *******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDismembermentComponent_GetBoneNameOptions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDismembermentComponent_GetBoneNameOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DismembermentComponent_eventGetBoneNameOptions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDismembermentComponent_GetBoneNameOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismembermentComponent_GetBoneNameOptions_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismembermentComponent_GetBoneNameOptions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_GetBoneNameOptions_Statics::PropPointers) < 2048);
// ********** End Function GetBoneNameOptions Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDismembermentComponent_GetBoneNameOptions_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDismembermentComponent, nullptr, "GetBoneNameOptions", 	Z_Construct_UFunction_UDismembermentComponent_GetBoneNameOptions_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_GetBoneNameOptions_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UDismembermentComponent_GetBoneNameOptions_Statics::DismembermentComponent_eventGetBoneNameOptions_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_GetBoneNameOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDismembermentComponent_GetBoneNameOptions_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDismembermentComponent_GetBoneNameOptions_Statics::DismembermentComponent_eventGetBoneNameOptions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDismembermentComponent_GetBoneNameOptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDismembermentComponent_GetBoneNameOptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDismembermentComponent::execGetBoneNameOptions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetBoneNameOptions();
	P_NATIVE_END;
}
// ********** End Class UDismembermentComponent Function GetBoneNameOptions ************************

// ********** Begin Class UDismembermentComponent Function GetDismemberedLimbByName ****************
struct Z_Construct_UFunction_UDismembermentComponent_GetDismemberedLimbByName_Statics
{
	struct DismembermentComponent_eventGetDismemberedLimbByName_Parms
	{
		FName BoneName;
		USkeletalMeshComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dismemberment" },
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDismemberedLimbByName constinit property declarations **************
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDismemberedLimbByName constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDismemberedLimbByName Property Definitions *************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDismembermentComponent_GetDismemberedLimbByName_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DismembermentComponent_eventGetDismemberedLimbByName_Parms, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDismembermentComponent_GetDismemberedLimbByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DismembermentComponent_eventGetDismemberedLimbByName_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDismembermentComponent_GetDismemberedLimbByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismembermentComponent_GetDismemberedLimbByName_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismembermentComponent_GetDismemberedLimbByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_GetDismemberedLimbByName_Statics::PropPointers) < 2048);
// ********** End Function GetDismemberedLimbByName Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDismembermentComponent_GetDismemberedLimbByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDismembermentComponent, nullptr, "GetDismemberedLimbByName", 	Z_Construct_UFunction_UDismembermentComponent_GetDismemberedLimbByName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_GetDismemberedLimbByName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UDismembermentComponent_GetDismemberedLimbByName_Statics::DismembermentComponent_eventGetDismemberedLimbByName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_GetDismemberedLimbByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDismembermentComponent_GetDismemberedLimbByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDismembermentComponent_GetDismemberedLimbByName_Statics::DismembermentComponent_eventGetDismemberedLimbByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDismembermentComponent_GetDismemberedLimbByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDismembermentComponent_GetDismemberedLimbByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDismembermentComponent::execGetDismemberedLimbByName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetDismemberedLimbByName(Z_Param_BoneName);
	P_NATIVE_END;
}
// ********** End Class UDismembermentComponent Function GetDismemberedLimbByName ******************

// ********** Begin Class UDismembermentComponent Function GetTargetSkeletonFromAnimBP *************
#if WITH_EDITOR
struct Z_Construct_UFunction_UDismembermentComponent_GetTargetSkeletonFromAnimBP_Statics
{
	struct DismembermentComponent_eventGetTargetSkeletonFromAnimBP_Parms
	{
		USkeleton* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetTargetSkeletonFromAnimBP constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetTargetSkeletonFromAnimBP constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTargetSkeletonFromAnimBP Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDismembermentComponent_GetTargetSkeletonFromAnimBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DismembermentComponent_eventGetTargetSkeletonFromAnimBP_Parms, ReturnValue), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDismembermentComponent_GetTargetSkeletonFromAnimBP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismembermentComponent_GetTargetSkeletonFromAnimBP_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_GetTargetSkeletonFromAnimBP_Statics::PropPointers) < 2048);
// ********** End Function GetTargetSkeletonFromAnimBP Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDismembermentComponent_GetTargetSkeletonFromAnimBP_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDismembermentComponent, nullptr, "GetTargetSkeletonFromAnimBP", 	Z_Construct_UFunction_UDismembermentComponent_GetTargetSkeletonFromAnimBP_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_GetTargetSkeletonFromAnimBP_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UDismembermentComponent_GetTargetSkeletonFromAnimBP_Statics::DismembermentComponent_eventGetTargetSkeletonFromAnimBP_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x60080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_GetTargetSkeletonFromAnimBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDismembermentComponent_GetTargetSkeletonFromAnimBP_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDismembermentComponent_GetTargetSkeletonFromAnimBP_Statics::DismembermentComponent_eventGetTargetSkeletonFromAnimBP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDismembermentComponent_GetTargetSkeletonFromAnimBP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDismembermentComponent_GetTargetSkeletonFromAnimBP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDismembermentComponent::execGetTargetSkeletonFromAnimBP)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USkeleton**)Z_Param__Result=P_THIS->GetTargetSkeletonFromAnimBP();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// ********** End Class UDismembermentComponent Function GetTargetSkeletonFromAnimBP ***************

// ********** Begin Class UDismembermentComponent Function OnRep_DismemberedBones ******************
struct Z_Construct_UFunction_UDismembermentComponent_OnRep_DismemberedBones_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_DismemberedBones constinit property declarations ****************
// ********** End Function OnRep_DismemberedBones constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDismembermentComponent_OnRep_DismemberedBones_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDismembermentComponent, nullptr, "OnRep_DismemberedBones", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_OnRep_DismemberedBones_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDismembermentComponent_OnRep_DismemberedBones_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UDismembermentComponent_OnRep_DismemberedBones()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDismembermentComponent_OnRep_DismemberedBones_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDismembermentComponent::execOnRep_DismemberedBones)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_DismemberedBones();
	P_NATIVE_END;
}
// ********** End Class UDismembermentComponent Function OnRep_DismemberedBones ********************

// ********** Begin Class UDismembermentComponent Function ResetAllLimbs ***************************
struct Z_Construct_UFunction_UDismembermentComponent_ResetAllLimbs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dismemberment" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Resets all characters limbs so they are no longer dismembered. NOTE: This will also clean up the detached limbs in the world. */" },
#endif
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resets all characters limbs so they are no longer dismembered. NOTE: This will also clean up the detached limbs in the world." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ResetAllLimbs constinit property declarations *************************
// ********** End Function ResetAllLimbs constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDismembermentComponent_ResetAllLimbs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDismembermentComponent, nullptr, "ResetAllLimbs", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_ResetAllLimbs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDismembermentComponent_ResetAllLimbs_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UDismembermentComponent_ResetAllLimbs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDismembermentComponent_ResetAllLimbs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDismembermentComponent::execResetAllLimbs)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetAllLimbs();
	P_NATIVE_END;
}
// ********** End Class UDismembermentComponent Function ResetAllLimbs *****************************

// ********** Begin Class UDismembermentComponent Function SetAnimInstanceTargetSkeleton ***********
#if WITH_EDITOR
struct Z_Construct_UFunction_UDismembermentComponent_SetAnimInstanceTargetSkeleton_Statics
{
	struct DismembermentComponent_eventSetAnimInstanceTargetSkeleton_Parms
	{
		UObject* InAnimInstance;
		USkeleton* InSkeleton;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dismemberment" },
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetAnimInstanceTargetSkeleton constinit property declarations *********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InAnimInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSkeleton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetAnimInstanceTargetSkeleton constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetAnimInstanceTargetSkeleton Property Definitions ********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDismembermentComponent_SetAnimInstanceTargetSkeleton_Statics::NewProp_InAnimInstance = { "InAnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DismembermentComponent_eventSetAnimInstanceTargetSkeleton_Parms, InAnimInstance), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDismembermentComponent_SetAnimInstanceTargetSkeleton_Statics::NewProp_InSkeleton = { "InSkeleton", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DismembermentComponent_eventSetAnimInstanceTargetSkeleton_Parms, InSkeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDismembermentComponent_SetAnimInstanceTargetSkeleton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismembermentComponent_SetAnimInstanceTargetSkeleton_Statics::NewProp_InAnimInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismembermentComponent_SetAnimInstanceTargetSkeleton_Statics::NewProp_InSkeleton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_SetAnimInstanceTargetSkeleton_Statics::PropPointers) < 2048);
// ********** End Function SetAnimInstanceTargetSkeleton Property Definitions **********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDismembermentComponent_SetAnimInstanceTargetSkeleton_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDismembermentComponent, nullptr, "SetAnimInstanceTargetSkeleton", 	Z_Construct_UFunction_UDismembermentComponent_SetAnimInstanceTargetSkeleton_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_SetAnimInstanceTargetSkeleton_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UDismembermentComponent_SetAnimInstanceTargetSkeleton_Statics::DismembermentComponent_eventSetAnimInstanceTargetSkeleton_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24082401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_SetAnimInstanceTargetSkeleton_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDismembermentComponent_SetAnimInstanceTargetSkeleton_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDismembermentComponent_SetAnimInstanceTargetSkeleton_Statics::DismembermentComponent_eventSetAnimInstanceTargetSkeleton_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDismembermentComponent_SetAnimInstanceTargetSkeleton()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDismembermentComponent_SetAnimInstanceTargetSkeleton_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDismembermentComponent::execSetAnimInstanceTargetSkeleton)
{
	P_GET_OBJECT(UObject,Z_Param_InAnimInstance);
	P_GET_OBJECT(USkeleton,Z_Param_InSkeleton);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDismembermentComponent::SetAnimInstanceTargetSkeleton(Z_Param_InAnimInstance,Z_Param_InSkeleton);
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// ********** End Class UDismembermentComponent Function SetAnimInstanceTargetSkeleton *************

// ********** Begin Class UDismembermentComponent Function SetSkeletalMeshComponentToDismember *****
struct Z_Construct_UFunction_UDismembermentComponent_SetSkeletalMeshComponentToDismember_Statics
{
	struct DismembermentComponent_eventSetSkeletalMeshComponentToDismember_Parms
	{
		USkeletalMeshComponent* InSkeletalMeshComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dismemberment" },
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSkeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetSkeletalMeshComponentToDismember constinit property declarations ***
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSkeletalMeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetSkeletalMeshComponentToDismember constinit property declarations *****
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetSkeletalMeshComponentToDismember Property Definitions **************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDismembermentComponent_SetSkeletalMeshComponentToDismember_Statics::NewProp_InSkeletalMeshComponent = { "InSkeletalMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DismembermentComponent_eventSetSkeletalMeshComponentToDismember_Parms, InSkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSkeletalMeshComponent_MetaData), NewProp_InSkeletalMeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDismembermentComponent_SetSkeletalMeshComponentToDismember_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismembermentComponent_SetSkeletalMeshComponentToDismember_Statics::NewProp_InSkeletalMeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_SetSkeletalMeshComponentToDismember_Statics::PropPointers) < 2048);
// ********** End Function SetSkeletalMeshComponentToDismember Property Definitions ****************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDismembermentComponent_SetSkeletalMeshComponentToDismember_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDismembermentComponent, nullptr, "SetSkeletalMeshComponentToDismember", 	Z_Construct_UFunction_UDismembermentComponent_SetSkeletalMeshComponentToDismember_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_SetSkeletalMeshComponentToDismember_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UDismembermentComponent_SetSkeletalMeshComponentToDismember_Statics::DismembermentComponent_eventSetSkeletalMeshComponentToDismember_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismembermentComponent_SetSkeletalMeshComponentToDismember_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDismembermentComponent_SetSkeletalMeshComponentToDismember_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDismembermentComponent_SetSkeletalMeshComponentToDismember_Statics::DismembermentComponent_eventSetSkeletalMeshComponentToDismember_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDismembermentComponent_SetSkeletalMeshComponentToDismember()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDismembermentComponent_SetSkeletalMeshComponentToDismember_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDismembermentComponent::execSetSkeletalMeshComponentToDismember)
{
	P_GET_OBJECT(USkeletalMeshComponent,Z_Param_InSkeletalMeshComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSkeletalMeshComponentToDismember(Z_Param_InSkeletalMeshComponent);
	P_NATIVE_END;
}
// ********** End Class UDismembermentComponent Function SetSkeletalMeshComponentToDismember *******

// ********** Begin Class UDismembermentComponent **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UDismembermentComponent;
UClass* UDismembermentComponent::GetPrivateStaticClass()
{
	using TClass = UDismembermentComponent;
	if (!Z_Registration_Info_UClass_UDismembermentComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("DismembermentComponent"),
			Z_Registration_Info_UClass_UDismembermentComponent.InnerSingleton,
			StaticRegisterNativesUDismembermentComponent,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UDismembermentComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UDismembermentComponent_NoRegister()
{
	return UDismembermentComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDismembermentComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "DisplayName", "Dismemberment Component" },
		{ "IncludePath", "DismembermentComponent.h" },
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideSourceMesh_MetaData[] = {
		{ "Category", "Source Mesh" },
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional setting to manually set the skeletal mesh(s) that should be used for dismemberment by the system. If false, the system will use the first Skeletal Mesh Component found on the Owning Actor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceMeshComponent_MetaData[] = {
		{ "Category", "Source Mesh" },
		{ "EditCondition", "bOverrideSourceMesh" },
		{ "EditConditionHides", "true" },
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use this to manually set the skeletal mesh component that should be used for dismemberment by the system." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DismembermentMeshComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableDismemberment_MetaData[] = {
		{ "Category", "Dismemberment" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n*\x09""Config\n*/" },
#endif
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "*      Config" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportAttachedChildMeshes_MetaData[] = {
		{ "Category", "Dismemberment" },
		{ "EditCondition", "bOverrideSourceMesh == false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LimbCollisionSettings_MetaData[] = {
		{ "Category", "Limb Collision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The Collision settings that are used by the Limbs when dismembered. */" },
#endif
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "SkipUCSModifiedProperties", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Collision settings that are used by the Limbs when dismembered." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LimbCollisionResponses_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Custom Serialize the Collision Responses due to FBodyInstance not able to Serialize properly */" },
#endif
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
		{ "SkipUCSModifiedProperties", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Custom Serialize the Collision Responses due to FBodyInstance not able to Serialize properly" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LimbMap_MetaData[] = {
		{ "Category", "LimbMap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n*\x09Limb Data\n*/" },
#endif
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "*      Limb Data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MissingLimbs_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\x09""A Map of every missing bone and the component that was spawned for it.\n\x09 *\x09""Every Child bone of a limb will be add to this map so that we dont chop\n\x09 *\x09off limbs that do not exist. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A Map of every missing bone and the component that was spawned for it.\n*      Every Child bone of a limb will be add to this map so that we dont chop\n*      off limbs that do not exist." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DismemberedBones_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Used to replicate the Bones being dismembered for clients that didnt experience the dismember event. */" },
#endif
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used to replicate the Bones being dismembered for clients that didnt experience the dismember event." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PelvisBoneName_MetaData[] = {
		{ "Category", "Dismemberment" },
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "REQUIRED: The name of the pelvis bone of the skeleton. This cannot be 'None'." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExcludedBones_MetaData[] = {
		{ "Category", "Dismemberment" },
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "These are bone names that will never get dismembered. Useful for Root or Pelvis bones." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WhitelistBones_MetaData[] = {
		{ "Category", "Dismemberment" },
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Opposite of Excluded Bones. If this is used then only bones contained in this list will be used." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemappedBones_MetaData[] = {
		{ "Category", "Dismemberment" },
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "These are bone names that when dismembered, They will use the mapped name instead. Useful for pelvis bones." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DismemberedAnimInstance_MetaData[] = {
		{ "Category", "Dismemberment" },
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set this to your Dismemberment Anim Instance. If Null, this will be set to the Ue4 Manniquin version that comes with the plugin" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MorphTargetsToCopy_MetaData[] = {
		{ "Category", "Dismemberment|MorphTargets" },
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Name of the Morph Targets that will get copied over to the Limb during Dismemberment. NOTE: Because Morph Target Curves are a private varible within Skeletal Mesh Components, it is impossible to automatically update Morph Targets without this array of Morph Target Names." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateMeshBounds_MetaData[] = {
		{ "Category", "Dismemberment" },
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This will make sure the destroyed limbs are not considered for bounds on the main mesh. This can be expensive based on the amount of meshes that are used for the characters mesh." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameDelayedDismemberedLimbs_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n*\x09""Dismemberment\n*/" },
#endif
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "*      Dismemberment" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPreDismemberment_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n*\x09""Delegates\n*/" },
#endif
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "*      Delegates" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPostDismemberment_MetaData[] = {
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DismemberedVertices_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Used to maintain dismembered limbs of child bones when dismembering a limbs parent | Ex.) Dismember Lower Arm then Dismember Upper Arm. */" },
#endif
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used to maintain dismembered limbs of child bones when dismembering a limbs parent | Ex.) Dismember Lower Arm then Dismember Upper Arm." },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVerifyDismemberedAnimInstanceAtBeginPlay_MetaData[] = {
		{ "Category", "Editor|Advanced" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Verifies on Begin Play that the Dismemberment Anim Instance matches the Target Skeletal Mesh. This can be disabled if: (A) The Skeletal Mesh used by this component is manually assigned. or (B) You are sure the Dismemberment system is set-up properly and want to skip the extra check to verify. NOTE: The check will only occur in the Editor.\n" },
#endif
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Verifies on Begin Play that the Dismemberment Anim Instance matches the Target Skeletal Mesh. This can be disabled if: (A) The Skeletal Mesh used by this component is manually assigned. or (B) You are sure the Dismemberment system is set-up properly and want to skip the extra check to verify. NOTE: The check will only occur in the Editor." },
#endif
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Public/DismembermentComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDismembermentComponent constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
	static void NewProp_bOverrideSourceMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideSourceMesh;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceMeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DismembermentMeshComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DismembermentMeshComponents;
	static void NewProp_bDisableDismemberment_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableDismemberment;
	static void NewProp_bSupportAttachedChildMeshes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportAttachedChildMeshes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LimbCollisionSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LimbCollisionResponses;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LimbMap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MissingLimbs_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MissingLimbs_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MissingLimbs;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DismemberedBones_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DismemberedBones;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PelvisBoneName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ExcludedBones_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludedBones;
	static const UECodeGen_Private::FNamePropertyParams NewProp_WhitelistBones_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WhitelistBones;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RemappedBones_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RemappedBones_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_RemappedBones;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DismemberedAnimInstance;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MorphTargetsToCopy_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MorphTargetsToCopy;
	static void NewProp_bUpdateMeshBounds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateMeshBounds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FrameDelayedDismemberedLimbs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FrameDelayedDismemberedLimbs;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPreDismemberment;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPostDismemberment;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DismemberedVertices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DismemberedVertices;
#if WITH_EDITORONLY_DATA
	static void NewProp_bVerifyDismemberedAnimInstanceAtBeginPlay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVerifyDismemberedAnimInstanceAtBeginPlay;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Version;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UDismembermentComponent constinit property declarations ********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("BeginFrameDelayedDismemberment"), .Pointer = &UDismembermentComponent::execBeginFrameDelayedDismemberment },
		{ .NameUTF8 = UTF8TEXT("CleanUpAllReferencedLimbs"), .Pointer = &UDismembermentComponent::execCleanUpAllReferencedLimbs },
		{ .NameUTF8 = UTF8TEXT("CleanUpReferencedLimb"), .Pointer = &UDismembermentComponent::execCleanUpReferencedLimb },
		{ .NameUTF8 = UTF8TEXT("DestroyLimb"), .Pointer = &UDismembermentComponent::execDestroyLimb },
		{ .NameUTF8 = UTF8TEXT("DismemberLimb"), .Pointer = &UDismembermentComponent::execDismemberLimb },
		{ .NameUTF8 = UTF8TEXT("DismemberLimb_Internal"), .Pointer = &UDismembermentComponent::execDismemberLimb_Internal },
		{ .NameUTF8 = UTF8TEXT("DismemberLimb_Multi"), .Pointer = &UDismembermentComponent::execDismemberLimb_Multi },
		{ .NameUTF8 = UTF8TEXT("DismemberLimb_Server"), .Pointer = &UDismembermentComponent::execDismemberLimb_Server },
		{ .NameUTF8 = UTF8TEXT("DismemberLimbFrameDelayed"), .Pointer = &UDismembermentComponent::execDismemberLimbFrameDelayed },
		{ .NameUTF8 = UTF8TEXT("DismemberPingDelayed"), .Pointer = &UDismembermentComponent::execDismemberPingDelayed },
		{ .NameUTF8 = UTF8TEXT("GetAllDismemberedLimbs"), .Pointer = &UDismembermentComponent::execGetAllDismemberedLimbs },
		{ .NameUTF8 = UTF8TEXT("GetBoneNameOptions"), .Pointer = &UDismembermentComponent::execGetBoneNameOptions },
		{ .NameUTF8 = UTF8TEXT("GetDismemberedLimbByName"), .Pointer = &UDismembermentComponent::execGetDismemberedLimbByName },
#if WITH_EDITOR
		{ .NameUTF8 = UTF8TEXT("GetTargetSkeletonFromAnimBP"), .Pointer = &UDismembermentComponent::execGetTargetSkeletonFromAnimBP },
#endif // WITH_EDITOR
		{ .NameUTF8 = UTF8TEXT("OnRep_DismemberedBones"), .Pointer = &UDismembermentComponent::execOnRep_DismemberedBones },
		{ .NameUTF8 = UTF8TEXT("ResetAllLimbs"), .Pointer = &UDismembermentComponent::execResetAllLimbs },
#if WITH_EDITOR
		{ .NameUTF8 = UTF8TEXT("SetAnimInstanceTargetSkeleton"), .Pointer = &UDismembermentComponent::execSetAnimInstanceTargetSkeleton },
#endif // WITH_EDITOR
		{ .NameUTF8 = UTF8TEXT("SetSkeletalMeshComponentToDismember"), .Pointer = &UDismembermentComponent::execSetSkeletalMeshComponentToDismember },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDismembermentComponent_BeginFrameDelayedDismemberment, "BeginFrameDelayedDismemberment" }, // 3106718994
		{ &Z_Construct_UFunction_UDismembermentComponent_CleanUpAllReferencedLimbs, "CleanUpAllReferencedLimbs" }, // 4253334331
		{ &Z_Construct_UFunction_UDismembermentComponent_CleanUpReferencedLimb, "CleanUpReferencedLimb" }, // 3074450987
		{ &Z_Construct_UFunction_UDismembermentComponent_DestroyLimb, "DestroyLimb" }, // 1137661456
		{ &Z_Construct_UFunction_UDismembermentComponent_DismemberLimb, "DismemberLimb" }, // 3042324888
		{ &Z_Construct_UFunction_UDismembermentComponent_DismemberLimb_Internal, "DismemberLimb_Internal" }, // 2813163858
		{ &Z_Construct_UFunction_UDismembermentComponent_DismemberLimb_Multi, "DismemberLimb_Multi" }, // 2991202503
		{ &Z_Construct_UFunction_UDismembermentComponent_DismemberLimb_Server, "DismemberLimb_Server" }, // 801663458
		{ &Z_Construct_UFunction_UDismembermentComponent_DismemberLimbFrameDelayed, "DismemberLimbFrameDelayed" }, // 1978860691
		{ &Z_Construct_UFunction_UDismembermentComponent_DismemberPingDelayed, "DismemberPingDelayed" }, // 2452087415
		{ &Z_Construct_UFunction_UDismembermentComponent_GetAllDismemberedLimbs, "GetAllDismemberedLimbs" }, // 2443265000
		{ &Z_Construct_UFunction_UDismembermentComponent_GetBoneNameOptions, "GetBoneNameOptions" }, // 3619010456
		{ &Z_Construct_UFunction_UDismembermentComponent_GetDismemberedLimbByName, "GetDismemberedLimbByName" }, // 2690906320
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UDismembermentComponent_GetTargetSkeletonFromAnimBP, "GetTargetSkeletonFromAnimBP" }, // 4238537066
#endif // WITH_EDITOR
		{ &Z_Construct_UFunction_UDismembermentComponent_OnRep_DismemberedBones, "OnRep_DismemberedBones" }, // 1439391005
		{ &Z_Construct_UFunction_UDismembermentComponent_ResetAllLimbs, "ResetAllLimbs" }, // 435162596
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UDismembermentComponent_SetAnimInstanceTargetSkeleton, "SetAnimInstanceTargetSkeleton" }, // 1620475355
#endif // WITH_EDITOR
		{ &Z_Construct_UFunction_UDismembermentComponent_SetSkeletalMeshComponentToDismember, "SetSkeletalMeshComponentToDismember" }, // 2575864532
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDismembermentComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UDismembermentComponent_Statics

// ********** Begin Class UDismembermentComponent Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDismembermentComponent, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMeshComponent_MetaData), NewProp_SkeletalMeshComponent_MetaData) };
void Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_bOverrideSourceMesh_SetBit(void* Obj)
{
	((UDismembermentComponent*)Obj)->bOverrideSourceMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_bOverrideSourceMesh = { "bOverrideSourceMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDismembermentComponent), &Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_bOverrideSourceMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideSourceMesh_MetaData), NewProp_bOverrideSourceMesh_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_SourceMeshComponent = { "SourceMeshComponent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDismembermentComponent, SourceMeshComponent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceMeshComponent_MetaData), NewProp_SourceMeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_DismembermentMeshComponents_Inner = { "DismembermentMeshComponents", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_DismembermentMeshComponents = { "DismembermentMeshComponents", nullptr, (EPropertyFlags)0x0010008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDismembermentComponent, DismembermentMeshComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DismembermentMeshComponents_MetaData), NewProp_DismembermentMeshComponents_MetaData) };
void Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_bDisableDismemberment_SetBit(void* Obj)
{
	((UDismembermentComponent*)Obj)->bDisableDismemberment = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_bDisableDismemberment = { "bDisableDismemberment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDismembermentComponent), &Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_bDisableDismemberment_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableDismemberment_MetaData), NewProp_bDisableDismemberment_MetaData) };
void Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_bSupportAttachedChildMeshes_SetBit(void* Obj)
{
	((UDismembermentComponent*)Obj)->bSupportAttachedChildMeshes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_bSupportAttachedChildMeshes = { "bSupportAttachedChildMeshes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDismembermentComponent), &Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_bSupportAttachedChildMeshes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportAttachedChildMeshes_MetaData), NewProp_bSupportAttachedChildMeshes_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_LimbCollisionSettings = { "LimbCollisionSettings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDismembermentComponent, LimbCollisionSettings), Z_Construct_UScriptStruct_FBodyInstance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LimbCollisionSettings_MetaData), NewProp_LimbCollisionSettings_MetaData) }; // 1979150459
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_LimbCollisionResponses = { "LimbCollisionResponses", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDismembermentComponent, LimbCollisionResponses), Z_Construct_UScriptStruct_FCollisionResponseContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LimbCollisionResponses_MetaData), NewProp_LimbCollisionResponses_MetaData) }; // 1829760405
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_LimbMap = { "LimbMap", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDismembermentComponent, LimbMap), Z_Construct_UClass_ULimbMap_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LimbMap_MetaData), NewProp_LimbMap_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_MissingLimbs_ValueProp = { "MissingLimbs", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_MissingLimbs_Key_KeyProp = { "MissingLimbs_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_MissingLimbs = { "MissingLimbs", nullptr, (EPropertyFlags)0x0010008000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDismembermentComponent, MissingLimbs), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MissingLimbs_MetaData), NewProp_MissingLimbs_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_DismemberedBones_Inner = { "DismemberedBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_DismemberedBones = { "DismemberedBones", "OnRep_DismemberedBones", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDismembermentComponent, DismemberedBones), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DismemberedBones_MetaData), NewProp_DismemberedBones_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_PelvisBoneName = { "PelvisBoneName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDismembermentComponent, PelvisBoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PelvisBoneName_MetaData), NewProp_PelvisBoneName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_ExcludedBones_Inner = { "ExcludedBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_ExcludedBones = { "ExcludedBones", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDismembermentComponent, ExcludedBones), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExcludedBones_MetaData), NewProp_ExcludedBones_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_WhitelistBones_Inner = { "WhitelistBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_WhitelistBones = { "WhitelistBones", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDismembermentComponent, WhitelistBones), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WhitelistBones_MetaData), NewProp_WhitelistBones_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_RemappedBones_ValueProp = { "RemappedBones", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_RemappedBones_Key_KeyProp = { "RemappedBones_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_RemappedBones = { "RemappedBones", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDismembermentComponent, RemappedBones), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemappedBones_MetaData), NewProp_RemappedBones_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_DismemberedAnimInstance = { "DismemberedAnimInstance", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDismembermentComponent, DismemberedAnimInstance), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UDismemberedAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DismemberedAnimInstance_MetaData), NewProp_DismemberedAnimInstance_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_MorphTargetsToCopy_Inner = { "MorphTargetsToCopy", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_MorphTargetsToCopy = { "MorphTargetsToCopy", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDismembermentComponent, MorphTargetsToCopy), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MorphTargetsToCopy_MetaData), NewProp_MorphTargetsToCopy_MetaData) };
void Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_bUpdateMeshBounds_SetBit(void* Obj)
{
	((UDismembermentComponent*)Obj)->bUpdateMeshBounds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_bUpdateMeshBounds = { "bUpdateMeshBounds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDismembermentComponent), &Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_bUpdateMeshBounds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUpdateMeshBounds_MetaData), NewProp_bUpdateMeshBounds_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_FrameDelayedDismemberedLimbs_Inner = { "FrameDelayedDismemberedLimbs", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDismemberedLimbFrameDelay, METADATA_PARAMS(0, nullptr) }; // 2487523051
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_FrameDelayedDismemberedLimbs = { "FrameDelayedDismemberedLimbs", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDismembermentComponent, FrameDelayedDismemberedLimbs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameDelayedDismemberedLimbs_MetaData), NewProp_FrameDelayedDismemberedLimbs_MetaData) }; // 2487523051
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_OnPreDismemberment = { "OnPreDismemberment", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDismembermentComponent, OnPreDismemberment), Z_Construct_UDelegateFunction_DismembermentSystem_OnPreDismemberment__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPreDismemberment_MetaData), NewProp_OnPreDismemberment_MetaData) }; // 71077891
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_OnPostDismemberment = { "OnPostDismemberment", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDismembermentComponent, OnPostDismemberment), Z_Construct_UDelegateFunction_DismembermentSystem_OnPostDismemberment__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPostDismemberment_MetaData), NewProp_OnPostDismemberment_MetaData) }; // 1766798780
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_DismemberedVertices_Inner = { "DismemberedVertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_DismemberedVertices = { "DismemberedVertices", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDismembermentComponent, DismemberedVertices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DismemberedVertices_MetaData), NewProp_DismemberedVertices_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_bVerifyDismemberedAnimInstanceAtBeginPlay_SetBit(void* Obj)
{
	((UDismembermentComponent*)Obj)->bVerifyDismemberedAnimInstanceAtBeginPlay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_bVerifyDismemberedAnimInstanceAtBeginPlay = { "bVerifyDismemberedAnimInstanceAtBeginPlay", nullptr, (EPropertyFlags)0x00200c0800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDismembermentComponent), &Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_bVerifyDismemberedAnimInstanceAtBeginPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVerifyDismemberedAnimInstanceAtBeginPlay_MetaData), NewProp_bVerifyDismemberedAnimInstanceAtBeginPlay_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0040000000030001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDismembermentComponent, Version), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Version_MetaData), NewProp_Version_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDismembermentComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_SkeletalMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_bOverrideSourceMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_SourceMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_DismembermentMeshComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_DismembermentMeshComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_bDisableDismemberment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_bSupportAttachedChildMeshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_LimbCollisionSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_LimbCollisionResponses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_LimbMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_MissingLimbs_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_MissingLimbs_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_MissingLimbs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_DismemberedBones_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_DismemberedBones,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_PelvisBoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_ExcludedBones_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_ExcludedBones,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_WhitelistBones_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_WhitelistBones,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_RemappedBones_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_RemappedBones_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_RemappedBones,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_DismemberedAnimInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_MorphTargetsToCopy_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_MorphTargetsToCopy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_bUpdateMeshBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_FrameDelayedDismemberedLimbs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_FrameDelayedDismemberedLimbs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_OnPreDismemberment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_OnPostDismemberment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_DismemberedVertices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_DismemberedVertices,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_bVerifyDismemberedAnimInstanceAtBeginPlay,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembermentComponent_Statics::NewProp_Version,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDismembermentComponent_Statics::PropPointers) < 2048);
// ********** End Class UDismembermentComponent Property Definitions *******************************
UObject* (*const Z_Construct_UClass_UDismembermentComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_DismembermentSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDismembermentComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDismembermentComponent_Statics::ClassParams = {
	&UDismembermentComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDismembermentComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDismembermentComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDismembermentComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDismembermentComponent_Statics::Class_MetaDataParams)
};
void UDismembermentComponent::StaticRegisterNativesUDismembermentComponent()
{
	UClass* Class = UDismembermentComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UDismembermentComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_UDismembermentComponent()
{
	if (!Z_Registration_Info_UClass_UDismembermentComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDismembermentComponent.OuterSingleton, Z_Construct_UClass_UDismembermentComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDismembermentComponent.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void UDismembermentComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_DismemberedBones(TEXT("DismemberedBones"));
	const bool bIsValid = true
		&& Name_DismemberedBones == ClassReps[(int32)ENetFields_Private::DismemberedBones].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UDismembermentComponent"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDismembermentComponent);
UDismembermentComponent::~UDismembermentComponent() {}
// ********** End Class UDismembermentComponent ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_DismembermentComponent_h__Script_DismembermentSystem_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDismemberColorChannel_StaticEnum, TEXT("EDismemberColorChannel"), &Z_Registration_Info_UEnum_EDismemberColorChannel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4159718130U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDismemberedLimbFrameDelay::StaticStruct, Z_Construct_UScriptStruct_FDismemberedLimbFrameDelay_Statics::NewStructOps, TEXT("DismemberedLimbFrameDelay"),&Z_Registration_Info_UScriptStruct_FDismemberedLimbFrameDelay, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDismemberedLimbFrameDelay), 2487523051U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDismembermentComponent, UDismembermentComponent::StaticClass, TEXT("UDismembermentComponent"), &Z_Registration_Info_UClass_UDismembermentComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDismembermentComponent), 78666587U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_DismembermentComponent_h__Script_DismembermentSystem_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_DismembermentComponent_h__Script_DismembermentSystem_903464610{
	TEXT("/Script/DismembermentSystem"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_DismembermentComponent_h__Script_DismembermentSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_DismembermentComponent_h__Script_DismembermentSystem_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_DismembermentComponent_h__Script_DismembermentSystem_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_DismembermentComponent_h__Script_DismembermentSystem_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_DismembermentComponent_h__Script_DismembermentSystem_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_DismembermentComponent_h__Script_DismembermentSystem_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
