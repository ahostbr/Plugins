// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SOTS_MMSSBPLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_MMSSBPLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
SOTS_MMSS_API UClass* Z_Construct_UClass_USOTS_MMSSBPLibrary();
SOTS_MMSS_API UClass* Z_Construct_UClass_USOTS_MMSSBPLibrary_NoRegister();
SOTS_MMSS_API UClass* Z_Construct_UClass_USOTS_MMSSSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_SOTS_MMSS();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USOTS_MMSSBPLibrary Function GetMusicManagerSubsystem ********************
struct Z_Construct_UFunction_USOTS_MMSSBPLibrary_GetMusicManagerSubsystem_Statics
{
	struct SOTS_MMSSBPLibrary_eventGetMusicManagerSubsystem_Parms
	{
		const UObject* WorldContextObject;
		USOTS_MMSSSubsystem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Music" },
		{ "ModuleRelativePath", "Public/SOTS_MMSSBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetMusicManagerSubsystem constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetMusicManagerSubsystem constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetMusicManagerSubsystem Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_MMSSBPLibrary_GetMusicManagerSubsystem_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MMSSBPLibrary_eventGetMusicManagerSubsystem_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_MMSSBPLibrary_GetMusicManagerSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MMSSBPLibrary_eventGetMusicManagerSubsystem_Parms, ReturnValue), Z_Construct_UClass_USOTS_MMSSSubsystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_MMSSBPLibrary_GetMusicManagerSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MMSSBPLibrary_GetMusicManagerSubsystem_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MMSSBPLibrary_GetMusicManagerSubsystem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MMSSBPLibrary_GetMusicManagerSubsystem_Statics::PropPointers) < 2048);
// ********** End Function GetMusicManagerSubsystem Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_MMSSBPLibrary_GetMusicManagerSubsystem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_MMSSBPLibrary, nullptr, "GetMusicManagerSubsystem", 	Z_Construct_UFunction_USOTS_MMSSBPLibrary_GetMusicManagerSubsystem_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MMSSBPLibrary_GetMusicManagerSubsystem_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_MMSSBPLibrary_GetMusicManagerSubsystem_Statics::SOTS_MMSSBPLibrary_eventGetMusicManagerSubsystem_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MMSSBPLibrary_GetMusicManagerSubsystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_MMSSBPLibrary_GetMusicManagerSubsystem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_MMSSBPLibrary_GetMusicManagerSubsystem_Statics::SOTS_MMSSBPLibrary_eventGetMusicManagerSubsystem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_MMSSBPLibrary_GetMusicManagerSubsystem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_MMSSBPLibrary_GetMusicManagerSubsystem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_MMSSBPLibrary::execGetMusicManagerSubsystem)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USOTS_MMSSSubsystem**)Z_Param__Result=USOTS_MMSSBPLibrary::GetMusicManagerSubsystem(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class USOTS_MMSSBPLibrary Function GetMusicManagerSubsystem **********************

// ********** Begin Class USOTS_MMSSBPLibrary ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_MMSSBPLibrary;
UClass* USOTS_MMSSBPLibrary::GetPrivateStaticClass()
{
	using TClass = USOTS_MMSSBPLibrary;
	if (!Z_Registration_Info_UClass_USOTS_MMSSBPLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_MMSSBPLibrary"),
			Z_Registration_Info_UClass_USOTS_MMSSBPLibrary.InnerSingleton,
			StaticRegisterNativesUSOTS_MMSSBPLibrary,
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
	return Z_Registration_Info_UClass_USOTS_MMSSBPLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_MMSSBPLibrary_NoRegister()
{
	return USOTS_MMSSBPLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_MMSSBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Lightweight Blueprint helper for accessing the music manager subsystem.\n */" },
#endif
		{ "IncludePath", "SOTS_MMSSBPLibrary.h" },
		{ "ModuleRelativePath", "Public/SOTS_MMSSBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lightweight Blueprint helper for accessing the music manager subsystem." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_MMSSBPLibrary constinit property declarations **********************
// ********** End Class USOTS_MMSSBPLibrary constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetMusicManagerSubsystem"), .Pointer = &USOTS_MMSSBPLibrary::execGetMusicManagerSubsystem },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USOTS_MMSSBPLibrary_GetMusicManagerSubsystem, "GetMusicManagerSubsystem" }, // 2430360928
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_MMSSBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_MMSSBPLibrary_Statics
UObject* (*const Z_Construct_UClass_USOTS_MMSSBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_MMSS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_MMSSBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_MMSSBPLibrary_Statics::ClassParams = {
	&USOTS_MMSSBPLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_MMSSBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_MMSSBPLibrary_Statics::Class_MetaDataParams)
};
void USOTS_MMSSBPLibrary::StaticRegisterNativesUSOTS_MMSSBPLibrary()
{
	UClass* Class = USOTS_MMSSBPLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USOTS_MMSSBPLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_USOTS_MMSSBPLibrary()
{
	if (!Z_Registration_Info_UClass_USOTS_MMSSBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_MMSSBPLibrary.OuterSingleton, Z_Construct_UClass_USOTS_MMSSBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_MMSSBPLibrary.OuterSingleton;
}
USOTS_MMSSBPLibrary::USOTS_MMSSBPLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_MMSSBPLibrary);
USOTS_MMSSBPLibrary::~USOTS_MMSSBPLibrary() {}
// ********** End Class USOTS_MMSSBPLibrary ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MMSS_Source_SOTS_MMSS_Public_SOTS_MMSSBPLibrary_h__Script_SOTS_MMSS_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_MMSSBPLibrary, USOTS_MMSSBPLibrary::StaticClass, TEXT("USOTS_MMSSBPLibrary"), &Z_Registration_Info_UClass_USOTS_MMSSBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_MMSSBPLibrary), 3475643555U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MMSS_Source_SOTS_MMSS_Public_SOTS_MMSSBPLibrary_h__Script_SOTS_MMSS_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MMSS_Source_SOTS_MMSS_Public_SOTS_MMSSBPLibrary_h__Script_SOTS_MMSS_3767804114{
	TEXT("/Script/SOTS_MMSS"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MMSS_Source_SOTS_MMSS_Public_SOTS_MMSSBPLibrary_h__Script_SOTS_MMSS_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MMSS_Source_SOTS_MMSS_Public_SOTS_MMSSBPLibrary_h__Script_SOTS_MMSS_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
