// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SOTS_AIPerceptionSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_AIPerceptionSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
SOTS_AIPERCEPTION_API UClass* Z_Construct_UClass_USOTS_AIPerceptionComponent_NoRegister();
SOTS_AIPERCEPTION_API UClass* Z_Construct_UClass_USOTS_AIPerceptionSubsystem();
SOTS_AIPERCEPTION_API UClass* Z_Construct_UClass_USOTS_AIPerceptionSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_SOTS_AIPerception();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USOTS_AIPerceptionSubsystem **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_AIPerceptionSubsystem;
UClass* USOTS_AIPerceptionSubsystem::GetPrivateStaticClass()
{
	using TClass = USOTS_AIPerceptionSubsystem;
	if (!Z_Registration_Info_UClass_USOTS_AIPerceptionSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_AIPerceptionSubsystem"),
			Z_Registration_Info_UClass_USOTS_AIPerceptionSubsystem.InnerSingleton,
			StaticRegisterNativesUSOTS_AIPerceptionSubsystem,
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
	return Z_Registration_Info_UClass_USOTS_AIPerceptionSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_AIPerceptionSubsystem_NoRegister()
{
	return USOTS_AIPerceptionSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_AIPerceptionSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * World-level coordinator for SOTS AI perception.\n * Owns the set of all active perception components and broadcasts\n * noise events to them.\n */" },
#endif
		{ "IncludePath", "SOTS_AIPerceptionSubsystem.h" },
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "World-level coordinator for SOTS AI perception.\nOwns the set of all active perception components and broadcasts\nnoise events to them." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredComponents_MetaData[] = {
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_AIPerceptionSubsystem constinit property declarations **************
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_RegisteredComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RegisteredComponents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USOTS_AIPerceptionSubsystem constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_AIPerceptionSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_AIPerceptionSubsystem_Statics

// ********** Begin Class USOTS_AIPerceptionSubsystem Property Definitions *************************
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_USOTS_AIPerceptionSubsystem_Statics::NewProp_RegisteredComponents_Inner = { "RegisteredComponents", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USOTS_AIPerceptionComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USOTS_AIPerceptionSubsystem_Statics::NewProp_RegisteredComponents = { "RegisteredComponents", nullptr, (EPropertyFlags)0x0044008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_AIPerceptionSubsystem, RegisteredComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegisteredComponents_MetaData), NewProp_RegisteredComponents_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USOTS_AIPerceptionSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AIPerceptionSubsystem_Statics::NewProp_RegisteredComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AIPerceptionSubsystem_Statics::NewProp_RegisteredComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_AIPerceptionSubsystem_Statics::PropPointers) < 2048);
// ********** End Class USOTS_AIPerceptionSubsystem Property Definitions ***************************
UObject* (*const Z_Construct_UClass_USOTS_AIPerceptionSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_AIPerception,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_AIPerceptionSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_AIPerceptionSubsystem_Statics::ClassParams = {
	&USOTS_AIPerceptionSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USOTS_AIPerceptionSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_AIPerceptionSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_AIPerceptionSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_AIPerceptionSubsystem_Statics::Class_MetaDataParams)
};
void USOTS_AIPerceptionSubsystem::StaticRegisterNativesUSOTS_AIPerceptionSubsystem()
{
}
UClass* Z_Construct_UClass_USOTS_AIPerceptionSubsystem()
{
	if (!Z_Registration_Info_UClass_USOTS_AIPerceptionSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_AIPerceptionSubsystem.OuterSingleton, Z_Construct_UClass_USOTS_AIPerceptionSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_AIPerceptionSubsystem.OuterSingleton;
}
USOTS_AIPerceptionSubsystem::USOTS_AIPerceptionSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_AIPerceptionSubsystem);
USOTS_AIPerceptionSubsystem::~USOTS_AIPerceptionSubsystem() {}
// ********** End Class USOTS_AIPerceptionSubsystem ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_AIPerception_Source_SOTS_AIPerception_Public_SOTS_AIPerceptionSubsystem_h__Script_SOTS_AIPerception_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_AIPerceptionSubsystem, USOTS_AIPerceptionSubsystem::StaticClass, TEXT("USOTS_AIPerceptionSubsystem"), &Z_Registration_Info_UClass_USOTS_AIPerceptionSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_AIPerceptionSubsystem), 225254992U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_AIPerception_Source_SOTS_AIPerception_Public_SOTS_AIPerceptionSubsystem_h__Script_SOTS_AIPerception_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_AIPerception_Source_SOTS_AIPerception_Public_SOTS_AIPerceptionSubsystem_h__Script_SOTS_AIPerception_3359035489{
	TEXT("/Script/SOTS_AIPerception"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_AIPerception_Source_SOTS_AIPerception_Public_SOTS_AIPerceptionSubsystem_h__Script_SOTS_AIPerception_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_AIPerception_Source_SOTS_AIPerception_Public_SOTS_AIPerceptionSubsystem_h__Script_SOTS_AIPerception_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
