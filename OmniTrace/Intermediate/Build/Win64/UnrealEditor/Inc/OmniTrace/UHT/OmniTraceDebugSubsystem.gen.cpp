// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OmniTraceDebugSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeOmniTraceDebugSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
OMNITRACE_API UClass* Z_Construct_UClass_UOmniTraceDebugSubsystem();
OMNITRACE_API UClass* Z_Construct_UClass_UOmniTraceDebugSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_OmniTrace();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOmniTraceDebugSubsystem Function OmniTrace_DrawLastKEMTrace *************
struct Z_Construct_UFunction_UOmniTraceDebugSubsystem_OmniTrace_DrawLastKEMTrace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OmniTraceDebugSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OmniTrace_DrawLastKEMTrace constinit property declarations ************
// ********** End Function OmniTrace_DrawLastKEMTrace constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOmniTraceDebugSubsystem_OmniTrace_DrawLastKEMTrace_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOmniTraceDebugSubsystem, nullptr, "OmniTrace_DrawLastKEMTrace", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOmniTraceDebugSubsystem_OmniTrace_DrawLastKEMTrace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOmniTraceDebugSubsystem_OmniTrace_DrawLastKEMTrace_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UOmniTraceDebugSubsystem_OmniTrace_DrawLastKEMTrace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOmniTraceDebugSubsystem_OmniTrace_DrawLastKEMTrace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOmniTraceDebugSubsystem::execOmniTrace_DrawLastKEMTrace)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OmniTrace_DrawLastKEMTrace();
	P_NATIVE_END;
}
// ********** End Class UOmniTraceDebugSubsystem Function OmniTrace_DrawLastKEMTrace ***************

// ********** Begin Class UOmniTraceDebugSubsystem *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UOmniTraceDebugSubsystem;
UClass* UOmniTraceDebugSubsystem::GetPrivateStaticClass()
{
	using TClass = UOmniTraceDebugSubsystem;
	if (!Z_Registration_Info_UClass_UOmniTraceDebugSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OmniTraceDebugSubsystem"),
			Z_Registration_Info_UClass_UOmniTraceDebugSubsystem.InnerSingleton,
			StaticRegisterNativesUOmniTraceDebugSubsystem,
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
	return Z_Registration_Info_UClass_UOmniTraceDebugSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UOmniTraceDebugSubsystem_NoRegister()
{
	return UOmniTraceDebugSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOmniTraceDebugSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OmniTraceDebugSubsystem.h" },
		{ "ModuleRelativePath", "Public/OmniTraceDebugSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOmniTraceDebugSubsystem constinit property declarations *****************
// ********** End Class UOmniTraceDebugSubsystem constinit property declarations *******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("OmniTrace_DrawLastKEMTrace"), .Pointer = &UOmniTraceDebugSubsystem::execOmniTrace_DrawLastKEMTrace },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOmniTraceDebugSubsystem_OmniTrace_DrawLastKEMTrace, "OmniTrace_DrawLastKEMTrace" }, // 2972168634
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOmniTraceDebugSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UOmniTraceDebugSubsystem_Statics
UObject* (*const Z_Construct_UClass_UOmniTraceDebugSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_OmniTrace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOmniTraceDebugSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOmniTraceDebugSubsystem_Statics::ClassParams = {
	&UOmniTraceDebugSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOmniTraceDebugSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UOmniTraceDebugSubsystem_Statics::Class_MetaDataParams)
};
void UOmniTraceDebugSubsystem::StaticRegisterNativesUOmniTraceDebugSubsystem()
{
	UClass* Class = UOmniTraceDebugSubsystem::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UOmniTraceDebugSubsystem_Statics::Funcs));
}
UClass* Z_Construct_UClass_UOmniTraceDebugSubsystem()
{
	if (!Z_Registration_Info_UClass_UOmniTraceDebugSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOmniTraceDebugSubsystem.OuterSingleton, Z_Construct_UClass_UOmniTraceDebugSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOmniTraceDebugSubsystem.OuterSingleton;
}
UOmniTraceDebugSubsystem::UOmniTraceDebugSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOmniTraceDebugSubsystem);
UOmniTraceDebugSubsystem::~UOmniTraceDebugSubsystem() {}
// ********** End Class UOmniTraceDebugSubsystem ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceDebugSubsystem_h__Script_OmniTrace_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOmniTraceDebugSubsystem, UOmniTraceDebugSubsystem::StaticClass, TEXT("UOmniTraceDebugSubsystem"), &Z_Registration_Info_UClass_UOmniTraceDebugSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOmniTraceDebugSubsystem), 2359572158U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceDebugSubsystem_h__Script_OmniTrace_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceDebugSubsystem_h__Script_OmniTrace_1179582256{
	TEXT("/Script/OmniTrace"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceDebugSubsystem_h__Script_OmniTrace_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceDebugSubsystem_h__Script_OmniTrace_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
