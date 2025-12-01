// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Gore/BloodPool.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBloodPool() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DISMEMBERMENTSYSTEM_API UClass* Z_Construct_UClass_ABloodPool();
DISMEMBERMENTSYSTEM_API UClass* Z_Construct_UClass_ABloodPool_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_DismembermentSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABloodPool ***************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ABloodPool;
UClass* ABloodPool::GetPrivateStaticClass()
{
	using TClass = ABloodPool;
	if (!Z_Registration_Info_UClass_ABloodPool.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BloodPool"),
			Z_Registration_Info_UClass_ABloodPool.InnerSingleton,
			StaticRegisterNativesABloodPool,
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
	return Z_Registration_Info_UClass_ABloodPool.InnerSingleton;
}
UClass* Z_Construct_UClass_ABloodPool_NoRegister()
{
	return ABloodPool::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABloodPool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Gore/BloodPool.h" },
		{ "ModuleRelativePath", "Public/Gore/BloodPool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collision_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Gore/BloodPool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Decal_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Gore/BloodPool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartDelay_MetaData[] = {
		{ "Category", "Dismemberment" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Gore/BloodPool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a Delay before the Blood Decal Splatters" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLifetime_MetaData[] = {
		{ "Category", "Dismemberment" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Gore/BloodPool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Lifetime of the blood before it dries up and fades away" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecalSize_MetaData[] = {
		{ "Category", "Dismemberment" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Gore/BloodPool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a wrapper for Decal Size" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecalRotation_MetaData[] = {
		{ "Category", "Dismemberment" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Gore/BloodPool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This can be used to set a relative rotation of the Decal" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpTime_MetaData[] = {
		{ "Category", "Dismemberment" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Gore/BloodPool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is the Time it will take in seconds to Lerp to the new Size and Location" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecalMaterial_MetaData[] = {
		{ "Category", "Dismemberment" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Gore/BloodPool.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ABloodPool constinit property declarations *******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Collision;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Decal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartDelay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxLifetime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DecalSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DecalRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DecalMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ABloodPool constinit property declarations *********************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloodPool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ABloodPool_Statics

// ********** Begin Class ABloodPool Property Definitions ******************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloodPool_Statics::NewProp_Collision = { "Collision", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloodPool, Collision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collision_MetaData), NewProp_Collision_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloodPool_Statics::NewProp_Decal = { "Decal", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloodPool, Decal), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Decal_MetaData), NewProp_Decal_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABloodPool_Statics::NewProp_StartDelay = { "StartDelay", nullptr, (EPropertyFlags)0x0011000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloodPool, StartDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartDelay_MetaData), NewProp_StartDelay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABloodPool_Statics::NewProp_MaxLifetime = { "MaxLifetime", nullptr, (EPropertyFlags)0x0011000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloodPool, MaxLifetime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLifetime_MetaData), NewProp_MaxLifetime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABloodPool_Statics::NewProp_DecalSize = { "DecalSize", nullptr, (EPropertyFlags)0x0011000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloodPool, DecalSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecalSize_MetaData), NewProp_DecalSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABloodPool_Statics::NewProp_DecalRotation = { "DecalRotation", nullptr, (EPropertyFlags)0x0011000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloodPool, DecalRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecalRotation_MetaData), NewProp_DecalRotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABloodPool_Statics::NewProp_InterpTime = { "InterpTime", nullptr, (EPropertyFlags)0x0011000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloodPool, InterpTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpTime_MetaData), NewProp_InterpTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloodPool_Statics::NewProp_DecalMaterial = { "DecalMaterial", nullptr, (EPropertyFlags)0x0011000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloodPool, DecalMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecalMaterial_MetaData), NewProp_DecalMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABloodPool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloodPool_Statics::NewProp_Collision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloodPool_Statics::NewProp_Decal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloodPool_Statics::NewProp_StartDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloodPool_Statics::NewProp_MaxLifetime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloodPool_Statics::NewProp_DecalSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloodPool_Statics::NewProp_DecalRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloodPool_Statics::NewProp_InterpTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloodPool_Statics::NewProp_DecalMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloodPool_Statics::PropPointers) < 2048);
// ********** End Class ABloodPool Property Definitions ********************************************
UObject* (*const Z_Construct_UClass_ABloodPool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DismembermentSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloodPool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloodPool_Statics::ClassParams = {
	&ABloodPool::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABloodPool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABloodPool_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloodPool_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloodPool_Statics::Class_MetaDataParams)
};
void ABloodPool::StaticRegisterNativesABloodPool()
{
}
UClass* Z_Construct_UClass_ABloodPool()
{
	if (!Z_Registration_Info_UClass_ABloodPool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloodPool.OuterSingleton, Z_Construct_UClass_ABloodPool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloodPool.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ABloodPool);
ABloodPool::~ABloodPool() {}
// ********** End Class ABloodPool *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_Gore_BloodPool_h__Script_DismembermentSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloodPool, ABloodPool::StaticClass, TEXT("ABloodPool"), &Z_Registration_Info_UClass_ABloodPool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloodPool), 3006116006U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_Gore_BloodPool_h__Script_DismembermentSystem_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_Gore_BloodPool_h__Script_DismembermentSystem_3352115999{
	TEXT("/Script/DismembermentSystem"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_Gore_BloodPool_h__Script_DismembermentSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_Gore_BloodPool_h__Script_DismembermentSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
