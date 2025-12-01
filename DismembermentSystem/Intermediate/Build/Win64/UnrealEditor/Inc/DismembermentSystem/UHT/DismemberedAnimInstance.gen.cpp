// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DismemberedAnimInstance.h"
#include "Components/SkeletalMeshComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeDismemberedAnimInstance() {}

// ********** Begin Cross Module References ********************************************************
DISMEMBERMENTSYSTEM_API UClass* Z_Construct_UClass_UDismemberedAnimInstance();
DISMEMBERMENTSYSTEM_API UClass* Z_Construct_UClass_UDismemberedAnimInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
UPackage* Z_Construct_UPackage__Script_DismembermentSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDismemberedAnimInstance *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UDismemberedAnimInstance;
UClass* UDismemberedAnimInstance::GetPrivateStaticClass()
{
	using TClass = UDismemberedAnimInstance;
	if (!Z_Registration_Info_UClass_UDismemberedAnimInstance.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("DismemberedAnimInstance"),
			Z_Registration_Info_UClass_UDismemberedAnimInstance.InnerSingleton,
			StaticRegisterNativesUDismemberedAnimInstance,
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
	return Z_Registration_Info_UClass_UDismemberedAnimInstance.InnerSingleton;
}
UClass* Z_Construct_UClass_UDismemberedAnimInstance_NoRegister()
{
	return UDismemberedAnimInstance::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDismemberedAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\x09\x09This is an Anim Instance for the Dismembered limbs. This\n *\x09\x09will handle copying the pose from the parent skeleton and\n *\x09\x09""applying the control rig.\n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "DismemberedAnimInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DismemberedAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is an Anim Instance for the Dismembered limbs. This\nwill handle copying the pose from the parent skeleton and\napplying the control rig." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Limb_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/DismemberedAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PelvisBoneName_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/DismemberedAnimInstance.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDismemberedAnimInstance constinit property declarations *****************
	static const UECodeGen_Private::FNamePropertyParams NewProp_Limb;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PelvisBoneName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UDismemberedAnimInstance constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDismemberedAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UDismemberedAnimInstance_Statics

// ********** Begin Class UDismemberedAnimInstance Property Definitions ****************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDismemberedAnimInstance_Statics::NewProp_Limb = { "Limb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDismemberedAnimInstance, Limb), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Limb_MetaData), NewProp_Limb_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDismemberedAnimInstance_Statics::NewProp_PelvisBoneName = { "PelvisBoneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDismemberedAnimInstance, PelvisBoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PelvisBoneName_MetaData), NewProp_PelvisBoneName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDismemberedAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismemberedAnimInstance_Statics::NewProp_Limb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismemberedAnimInstance_Statics::NewProp_PelvisBoneName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDismemberedAnimInstance_Statics::PropPointers) < 2048);
// ********** End Class UDismemberedAnimInstance Property Definitions ******************************
UObject* (*const Z_Construct_UClass_UDismemberedAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_DismembermentSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDismemberedAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDismemberedAnimInstance_Statics::ClassParams = {
	&UDismemberedAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDismemberedAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDismemberedAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDismemberedAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UDismemberedAnimInstance_Statics::Class_MetaDataParams)
};
void UDismemberedAnimInstance::StaticRegisterNativesUDismemberedAnimInstance()
{
}
UClass* Z_Construct_UClass_UDismemberedAnimInstance()
{
	if (!Z_Registration_Info_UClass_UDismemberedAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDismemberedAnimInstance.OuterSingleton, Z_Construct_UClass_UDismemberedAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDismemberedAnimInstance.OuterSingleton;
}
UDismemberedAnimInstance::UDismemberedAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDismemberedAnimInstance);
UDismemberedAnimInstance::~UDismemberedAnimInstance() {}
// ********** End Class UDismemberedAnimInstance ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_DismemberedAnimInstance_h__Script_DismembermentSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDismemberedAnimInstance, UDismemberedAnimInstance::StaticClass, TEXT("UDismemberedAnimInstance"), &Z_Registration_Info_UClass_UDismemberedAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDismemberedAnimInstance), 3925686970U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_DismemberedAnimInstance_h__Script_DismembermentSystem_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_DismemberedAnimInstance_h__Script_DismembermentSystem_153284620{
	TEXT("/Script/DismembermentSystem"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_DismemberedAnimInstance_h__Script_DismembermentSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_DismemberedAnimInstance_h__Script_DismembermentSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
