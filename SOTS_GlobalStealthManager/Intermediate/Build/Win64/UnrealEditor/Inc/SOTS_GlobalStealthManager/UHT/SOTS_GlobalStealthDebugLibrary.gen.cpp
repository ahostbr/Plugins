// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SOTS_GlobalStealthDebugLibrary.h"
#include "UObject/Class.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_GlobalStealthDebugLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
SOTS_GLOBALSTEALTHMANAGER_API UClass* Z_Construct_UClass_USOTS_GlobalStealthDebugLibrary();
SOTS_GLOBALSTEALTHMANAGER_API UClass* Z_Construct_UClass_USOTS_GlobalStealthDebugLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_SOTS_GlobalStealthManager();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USOTS_GlobalStealthDebugLibrary Function RunSOTS_GSM_DebugSample *********
struct Z_Construct_UFunction_USOTS_GlobalStealthDebugLibrary_RunSOTS_GSM_DebugSample_Statics
{
	struct SOTS_GlobalStealthDebugLibrary_eventRunSOTS_GSM_DebugSample_Parms
	{
		const UObject* WorldContextObject;
		AActor* PlayerActor;
		TSubclassOf<AActor> EnemyClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Stealth|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Builds a stealth sample from the player and nearest enemy and sends it\n     * to the Global Stealth Manager. Results are printed to screen and log.\n     *\n     * - Noise is based on player velocity.\n     * - \"Cover\" is approximated by the character's crouch state.\n     * - Light exposure is a simple value derived from crouch/not-crouched.\n     * - Distance and line-of-sight are calculated using the nearest enemy of EnemyClass.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthDebugLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Builds a stealth sample from the player and nearest enemy and sends it\nto the Global Stealth Manager. Results are printed to screen and log.\n\n- Noise is based on player velocity.\n- \"Cover\" is approximated by the character's crouch state.\n- Light exposure is a simple value derived from crouch/not-crouched.\n- Distance and line-of-sight are calculated using the nearest enemy of EnemyClass." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RunSOTS_GSM_DebugSample constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerActor;
	static const UECodeGen_Private::FClassPropertyParams NewProp_EnemyClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RunSOTS_GSM_DebugSample constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RunSOTS_GSM_DebugSample Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_GlobalStealthDebugLibrary_RunSOTS_GSM_DebugSample_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GlobalStealthDebugLibrary_eventRunSOTS_GSM_DebugSample_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_GlobalStealthDebugLibrary_RunSOTS_GSM_DebugSample_Statics::NewProp_PlayerActor = { "PlayerActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GlobalStealthDebugLibrary_eventRunSOTS_GSM_DebugSample_Parms, PlayerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USOTS_GlobalStealthDebugLibrary_RunSOTS_GSM_DebugSample_Statics::NewProp_EnemyClass = { "EnemyClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GlobalStealthDebugLibrary_eventRunSOTS_GSM_DebugSample_Parms, EnemyClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_GlobalStealthDebugLibrary_RunSOTS_GSM_DebugSample_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GlobalStealthDebugLibrary_RunSOTS_GSM_DebugSample_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GlobalStealthDebugLibrary_RunSOTS_GSM_DebugSample_Statics::NewProp_PlayerActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GlobalStealthDebugLibrary_RunSOTS_GSM_DebugSample_Statics::NewProp_EnemyClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GlobalStealthDebugLibrary_RunSOTS_GSM_DebugSample_Statics::PropPointers) < 2048);
// ********** End Function RunSOTS_GSM_DebugSample Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_GlobalStealthDebugLibrary_RunSOTS_GSM_DebugSample_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_GlobalStealthDebugLibrary, nullptr, "RunSOTS_GSM_DebugSample", 	Z_Construct_UFunction_USOTS_GlobalStealthDebugLibrary_RunSOTS_GSM_DebugSample_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GlobalStealthDebugLibrary_RunSOTS_GSM_DebugSample_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_GlobalStealthDebugLibrary_RunSOTS_GSM_DebugSample_Statics::SOTS_GlobalStealthDebugLibrary_eventRunSOTS_GSM_DebugSample_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GlobalStealthDebugLibrary_RunSOTS_GSM_DebugSample_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_GlobalStealthDebugLibrary_RunSOTS_GSM_DebugSample_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_GlobalStealthDebugLibrary_RunSOTS_GSM_DebugSample_Statics::SOTS_GlobalStealthDebugLibrary_eventRunSOTS_GSM_DebugSample_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_GlobalStealthDebugLibrary_RunSOTS_GSM_DebugSample()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_GlobalStealthDebugLibrary_RunSOTS_GSM_DebugSample_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_GlobalStealthDebugLibrary::execRunSOTS_GSM_DebugSample)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(AActor,Z_Param_PlayerActor);
	P_GET_OBJECT(UClass,Z_Param_EnemyClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	USOTS_GlobalStealthDebugLibrary::RunSOTS_GSM_DebugSample(Z_Param_WorldContextObject,Z_Param_PlayerActor,Z_Param_EnemyClass);
	P_NATIVE_END;
}
// ********** End Class USOTS_GlobalStealthDebugLibrary Function RunSOTS_GSM_DebugSample ***********

// ********** Begin Class USOTS_GlobalStealthDebugLibrary ******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_GlobalStealthDebugLibrary;
UClass* USOTS_GlobalStealthDebugLibrary::GetPrivateStaticClass()
{
	using TClass = USOTS_GlobalStealthDebugLibrary;
	if (!Z_Registration_Info_UClass_USOTS_GlobalStealthDebugLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_GlobalStealthDebugLibrary"),
			Z_Registration_Info_UClass_USOTS_GlobalStealthDebugLibrary.InnerSingleton,
			StaticRegisterNativesUSOTS_GlobalStealthDebugLibrary,
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
	return Z_Registration_Info_UClass_USOTS_GlobalStealthDebugLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_GlobalStealthDebugLibrary_NoRegister()
{
	return USOTS_GlobalStealthDebugLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_GlobalStealthDebugLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Debug helpers for quickly verifying Global Stealth Manager behavior\n * using real in-world data (player velocity, crouch state, nearest enemy).\n */" },
#endif
		{ "IncludePath", "SOTS_GlobalStealthDebugLibrary.h" },
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthDebugLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Debug helpers for quickly verifying Global Stealth Manager behavior\nusing real in-world data (player velocity, crouch state, nearest enemy)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_GlobalStealthDebugLibrary constinit property declarations **********
// ********** End Class USOTS_GlobalStealthDebugLibrary constinit property declarations ************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("RunSOTS_GSM_DebugSample"), .Pointer = &USOTS_GlobalStealthDebugLibrary::execRunSOTS_GSM_DebugSample },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USOTS_GlobalStealthDebugLibrary_RunSOTS_GSM_DebugSample, "RunSOTS_GSM_DebugSample" }, // 4179378034
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_GlobalStealthDebugLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_GlobalStealthDebugLibrary_Statics
UObject* (*const Z_Construct_UClass_USOTS_GlobalStealthDebugLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_GlobalStealthManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_GlobalStealthDebugLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_GlobalStealthDebugLibrary_Statics::ClassParams = {
	&USOTS_GlobalStealthDebugLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_GlobalStealthDebugLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_GlobalStealthDebugLibrary_Statics::Class_MetaDataParams)
};
void USOTS_GlobalStealthDebugLibrary::StaticRegisterNativesUSOTS_GlobalStealthDebugLibrary()
{
	UClass* Class = USOTS_GlobalStealthDebugLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USOTS_GlobalStealthDebugLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_USOTS_GlobalStealthDebugLibrary()
{
	if (!Z_Registration_Info_UClass_USOTS_GlobalStealthDebugLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_GlobalStealthDebugLibrary.OuterSingleton, Z_Construct_UClass_USOTS_GlobalStealthDebugLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_GlobalStealthDebugLibrary.OuterSingleton;
}
USOTS_GlobalStealthDebugLibrary::USOTS_GlobalStealthDebugLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_GlobalStealthDebugLibrary);
USOTS_GlobalStealthDebugLibrary::~USOTS_GlobalStealthDebugLibrary() {}
// ********** End Class USOTS_GlobalStealthDebugLibrary ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_GlobalStealthDebugLibrary_h__Script_SOTS_GlobalStealthManager_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_GlobalStealthDebugLibrary, USOTS_GlobalStealthDebugLibrary::StaticClass, TEXT("USOTS_GlobalStealthDebugLibrary"), &Z_Registration_Info_UClass_USOTS_GlobalStealthDebugLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_GlobalStealthDebugLibrary), 3266464235U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_GlobalStealthDebugLibrary_h__Script_SOTS_GlobalStealthManager_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_GlobalStealthDebugLibrary_h__Script_SOTS_GlobalStealthManager_1419420376{
	TEXT("/Script/SOTS_GlobalStealthManager"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_GlobalStealthDebugLibrary_h__Script_SOTS_GlobalStealthManager_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_GlobalStealthDebugLibrary_h__Script_SOTS_GlobalStealthManager_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
