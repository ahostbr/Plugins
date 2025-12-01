// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SOTS_AIStealthBridgeComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_AIStealthBridgeComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
SOTS_GLOBALSTEALTHMANAGER_API UClass* Z_Construct_UClass_USOTS_AIStealthBridgeComponent();
SOTS_GLOBALSTEALTHMANAGER_API UClass* Z_Construct_UClass_USOTS_AIStealthBridgeComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_SOTS_GlobalStealthManager();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USOTS_AIStealthBridgeComponent Function SetSuspicion01 *******************
struct Z_Construct_UFunction_USOTS_AIStealthBridgeComponent_SetSuspicion01_Statics
{
	struct SOTS_AIStealthBridgeComponent_eventSetSuspicion01_Parms
	{
		float In01;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stealth" },
		{ "ModuleRelativePath", "Public/SOTS_AIStealthBridgeComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetSuspicion01 constinit property declarations ************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_In01;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetSuspicion01 constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetSuspicion01 Property Definitions ***********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USOTS_AIStealthBridgeComponent_SetSuspicion01_Statics::NewProp_In01 = { "In01", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AIStealthBridgeComponent_eventSetSuspicion01_Parms, In01), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_AIStealthBridgeComponent_SetSuspicion01_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AIStealthBridgeComponent_SetSuspicion01_Statics::NewProp_In01,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AIStealthBridgeComponent_SetSuspicion01_Statics::PropPointers) < 2048);
// ********** End Function SetSuspicion01 Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_AIStealthBridgeComponent_SetSuspicion01_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_AIStealthBridgeComponent, nullptr, "SetSuspicion01", 	Z_Construct_UFunction_USOTS_AIStealthBridgeComponent_SetSuspicion01_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AIStealthBridgeComponent_SetSuspicion01_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_AIStealthBridgeComponent_SetSuspicion01_Statics::SOTS_AIStealthBridgeComponent_eventSetSuspicion01_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AIStealthBridgeComponent_SetSuspicion01_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_AIStealthBridgeComponent_SetSuspicion01_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_AIStealthBridgeComponent_SetSuspicion01_Statics::SOTS_AIStealthBridgeComponent_eventSetSuspicion01_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_AIStealthBridgeComponent_SetSuspicion01()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_AIStealthBridgeComponent_SetSuspicion01_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_AIStealthBridgeComponent::execSetSuspicion01)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_In01);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSuspicion01(Z_Param_In01);
	P_NATIVE_END;
}
// ********** End Class USOTS_AIStealthBridgeComponent Function SetSuspicion01 *********************

// ********** Begin Class USOTS_AIStealthBridgeComponent *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_AIStealthBridgeComponent;
UClass* USOTS_AIStealthBridgeComponent::GetPrivateStaticClass()
{
	using TClass = USOTS_AIStealthBridgeComponent;
	if (!Z_Registration_Info_UClass_USOTS_AIStealthBridgeComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_AIStealthBridgeComponent"),
			Z_Registration_Info_UClass_USOTS_AIStealthBridgeComponent.InnerSingleton,
			StaticRegisterNativesUSOTS_AIStealthBridgeComponent,
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
	return Z_Registration_Info_UClass_USOTS_AIStealthBridgeComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_AIStealthBridgeComponent_NoRegister()
{
	return USOTS_AIStealthBridgeComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_AIStealthBridgeComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "SOTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Tiny bridge component intended to live on AI pawns or controllers.\n * It receives a normalized suspicion value from BAT/AIBT (or other AI logic)\n * and forwards it into the global stealth manager.\n */" },
#endif
		{ "IncludePath", "SOTS_AIStealthBridgeComponent.h" },
		{ "ModuleRelativePath", "Public/SOTS_AIStealthBridgeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tiny bridge component intended to live on AI pawns or controllers.\nIt receives a normalized suspicion value from BAT/AIBT (or other AI logic)\nand forwards it into the global stealth manager." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Suspicion01_MetaData[] = {
		{ "Category", "Stealth" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/SOTS_AIStealthBridgeComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_AIStealthBridgeComponent constinit property declarations ***********
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Suspicion01;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USOTS_AIStealthBridgeComponent constinit property declarations *************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("SetSuspicion01"), .Pointer = &USOTS_AIStealthBridgeComponent::execSetSuspicion01 },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USOTS_AIStealthBridgeComponent_SetSuspicion01, "SetSuspicion01" }, // 1072445362
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_AIStealthBridgeComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_AIStealthBridgeComponent_Statics

// ********** Begin Class USOTS_AIStealthBridgeComponent Property Definitions **********************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USOTS_AIStealthBridgeComponent_Statics::NewProp_Suspicion01 = { "Suspicion01", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_AIStealthBridgeComponent, Suspicion01), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Suspicion01_MetaData), NewProp_Suspicion01_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USOTS_AIStealthBridgeComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AIStealthBridgeComponent_Statics::NewProp_Suspicion01,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_AIStealthBridgeComponent_Statics::PropPointers) < 2048);
// ********** End Class USOTS_AIStealthBridgeComponent Property Definitions ************************
UObject* (*const Z_Construct_UClass_USOTS_AIStealthBridgeComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_GlobalStealthManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_AIStealthBridgeComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_AIStealthBridgeComponent_Statics::ClassParams = {
	&USOTS_AIStealthBridgeComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USOTS_AIStealthBridgeComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_AIStealthBridgeComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_AIStealthBridgeComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_AIStealthBridgeComponent_Statics::Class_MetaDataParams)
};
void USOTS_AIStealthBridgeComponent::StaticRegisterNativesUSOTS_AIStealthBridgeComponent()
{
	UClass* Class = USOTS_AIStealthBridgeComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USOTS_AIStealthBridgeComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_USOTS_AIStealthBridgeComponent()
{
	if (!Z_Registration_Info_UClass_USOTS_AIStealthBridgeComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_AIStealthBridgeComponent.OuterSingleton, Z_Construct_UClass_USOTS_AIStealthBridgeComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_AIStealthBridgeComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_AIStealthBridgeComponent);
USOTS_AIStealthBridgeComponent::~USOTS_AIStealthBridgeComponent() {}
// ********** End Class USOTS_AIStealthBridgeComponent *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_AIStealthBridgeComponent_h__Script_SOTS_GlobalStealthManager_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_AIStealthBridgeComponent, USOTS_AIStealthBridgeComponent::StaticClass, TEXT("USOTS_AIStealthBridgeComponent"), &Z_Registration_Info_UClass_USOTS_AIStealthBridgeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_AIStealthBridgeComponent), 2297190544U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_AIStealthBridgeComponent_h__Script_SOTS_GlobalStealthManager_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_AIStealthBridgeComponent_h__Script_SOTS_GlobalStealthManager_2505676526{
	TEXT("/Script/SOTS_GlobalStealthManager"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_AIStealthBridgeComponent_h__Script_SOTS_GlobalStealthManager_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_AIStealthBridgeComponent_h__Script_SOTS_GlobalStealthManager_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
