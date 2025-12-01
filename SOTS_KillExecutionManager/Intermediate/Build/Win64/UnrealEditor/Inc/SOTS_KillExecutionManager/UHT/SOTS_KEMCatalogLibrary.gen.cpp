// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SOTS_KEMCatalogLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_KEMCatalogLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
SOTS_KILLEXECUTIONMANAGER_API UClass* Z_Construct_UClass_USOTS_KEM_ExecutionRegistryConfig_NoRegister();
SOTS_KILLEXECUTIONMANAGER_API UClass* Z_Construct_UClass_USOTS_KEMCatalogLibrary();
SOTS_KILLEXECUTIONMANAGER_API UClass* Z_Construct_UClass_USOTS_KEMCatalogLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_SOTS_KillExecutionManager();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USOTS_KEMCatalogLibrary Function GetExecutionCatalog *********************
struct Z_Construct_UFunction_USOTS_KEMCatalogLibrary_GetExecutionCatalog_Statics
{
	struct SOTS_KEMCatalogLibrary_eventGetExecutionCatalog_Parms
	{
		const UObject* WorldContextObject;
		USOTS_KEM_ExecutionRegistryConfig* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|KEM" },
		{ "ModuleRelativePath", "Public/SOTS_KEMCatalogLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetExecutionCatalog constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetExecutionCatalog constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetExecutionCatalog Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_KEMCatalogLibrary_GetExecutionCatalog_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEMCatalogLibrary_eventGetExecutionCatalog_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_KEMCatalogLibrary_GetExecutionCatalog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEMCatalogLibrary_eventGetExecutionCatalog_Parms, ReturnValue), Z_Construct_UClass_USOTS_KEM_ExecutionRegistryConfig_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_KEMCatalogLibrary_GetExecutionCatalog_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEMCatalogLibrary_GetExecutionCatalog_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEMCatalogLibrary_GetExecutionCatalog_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMCatalogLibrary_GetExecutionCatalog_Statics::PropPointers) < 2048);
// ********** End Function GetExecutionCatalog Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_KEMCatalogLibrary_GetExecutionCatalog_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_KEMCatalogLibrary, nullptr, "GetExecutionCatalog", 	Z_Construct_UFunction_USOTS_KEMCatalogLibrary_GetExecutionCatalog_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMCatalogLibrary_GetExecutionCatalog_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_KEMCatalogLibrary_GetExecutionCatalog_Statics::SOTS_KEMCatalogLibrary_eventGetExecutionCatalog_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMCatalogLibrary_GetExecutionCatalog_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_KEMCatalogLibrary_GetExecutionCatalog_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_KEMCatalogLibrary_GetExecutionCatalog_Statics::SOTS_KEMCatalogLibrary_eventGetExecutionCatalog_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_KEMCatalogLibrary_GetExecutionCatalog()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_KEMCatalogLibrary_GetExecutionCatalog_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_KEMCatalogLibrary::execGetExecutionCatalog)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USOTS_KEM_ExecutionRegistryConfig**)Z_Param__Result=USOTS_KEMCatalogLibrary::GetExecutionCatalog(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class USOTS_KEMCatalogLibrary Function GetExecutionCatalog ***********************

// ********** Begin Class USOTS_KEMCatalogLibrary **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_KEMCatalogLibrary;
UClass* USOTS_KEMCatalogLibrary::GetPrivateStaticClass()
{
	using TClass = USOTS_KEMCatalogLibrary;
	if (!Z_Registration_Info_UClass_USOTS_KEMCatalogLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_KEMCatalogLibrary"),
			Z_Registration_Info_UClass_USOTS_KEMCatalogLibrary.InnerSingleton,
			StaticRegisterNativesUSOTS_KEMCatalogLibrary,
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
	return Z_Registration_Info_UClass_USOTS_KEMCatalogLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_KEMCatalogLibrary_NoRegister()
{
	return USOTS_KEMCatalogLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_KEMCatalogLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SOTS_KEMCatalogLibrary.h" },
		{ "ModuleRelativePath", "Public/SOTS_KEMCatalogLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_KEMCatalogLibrary constinit property declarations ******************
// ********** End Class USOTS_KEMCatalogLibrary constinit property declarations ********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetExecutionCatalog"), .Pointer = &USOTS_KEMCatalogLibrary::execGetExecutionCatalog },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USOTS_KEMCatalogLibrary_GetExecutionCatalog, "GetExecutionCatalog" }, // 4123991833
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_KEMCatalogLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_KEMCatalogLibrary_Statics
UObject* (*const Z_Construct_UClass_USOTS_KEMCatalogLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_KillExecutionManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_KEMCatalogLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_KEMCatalogLibrary_Statics::ClassParams = {
	&USOTS_KEMCatalogLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_KEMCatalogLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_KEMCatalogLibrary_Statics::Class_MetaDataParams)
};
void USOTS_KEMCatalogLibrary::StaticRegisterNativesUSOTS_KEMCatalogLibrary()
{
	UClass* Class = USOTS_KEMCatalogLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USOTS_KEMCatalogLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_USOTS_KEMCatalogLibrary()
{
	if (!Z_Registration_Info_UClass_USOTS_KEMCatalogLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_KEMCatalogLibrary.OuterSingleton, Z_Construct_UClass_USOTS_KEMCatalogLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_KEMCatalogLibrary.OuterSingleton;
}
USOTS_KEMCatalogLibrary::USOTS_KEMCatalogLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_KEMCatalogLibrary);
USOTS_KEMCatalogLibrary::~USOTS_KEMCatalogLibrary() {}
// ********** End Class USOTS_KEMCatalogLibrary ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEMCatalogLibrary_h__Script_SOTS_KillExecutionManager_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_KEMCatalogLibrary, USOTS_KEMCatalogLibrary::StaticClass, TEXT("USOTS_KEMCatalogLibrary"), &Z_Registration_Info_UClass_USOTS_KEMCatalogLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_KEMCatalogLibrary), 1179911469U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEMCatalogLibrary_h__Script_SOTS_KillExecutionManager_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEMCatalogLibrary_h__Script_SOTS_KillExecutionManager_2625514861{
	TEXT("/Script/SOTS_KillExecutionManager"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEMCatalogLibrary_h__Script_SOTS_KillExecutionManager_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEMCatalogLibrary_h__Script_SOTS_KillExecutionManager_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
