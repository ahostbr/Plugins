// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/SOTS_StealthSummaryHUDWidget.h"
#include "SOTS_GlobalStealthTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_StealthSummaryHUDWidget() {}

// ********** Begin Cross Module References ********************************************************
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_USOTS_StealthSummaryHUDWidget();
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_USOTS_StealthSummaryHUDWidget_NoRegister();
SOTS_GAS_PLUGIN_API UEnum* Z_Construct_UEnum_SOTS_GAS_Plugin_ESOTSStealthDebugMode();
SOTS_GLOBALSTEALTHMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_StealthScoreBreakdown();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_SOTS_GAS_Plugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USOTS_StealthSummaryHUDWidget Function OnStealthSummaryUpdated ***********
static FName NAME_USOTS_StealthSummaryHUDWidget_OnStealthSummaryUpdated = FName(TEXT("OnStealthSummaryUpdated"));
void USOTS_StealthSummaryHUDWidget::OnStealthSummaryUpdated()
{
	UFunction* Func = FindFunctionChecked(NAME_USOTS_StealthSummaryHUDWidget_OnStealthSummaryUpdated);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_USOTS_StealthSummaryHUDWidget_OnStealthSummaryUpdated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stealth" },
		{ "ModuleRelativePath", "Public/UI/SOTS_StealthSummaryHUDWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnStealthSummaryUpdated constinit property declarations ***************
// ********** End Function OnStealthSummaryUpdated constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_StealthSummaryHUDWidget_OnStealthSummaryUpdated_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_StealthSummaryHUDWidget, nullptr, "OnStealthSummaryUpdated", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_StealthSummaryHUDWidget_OnStealthSummaryUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_StealthSummaryHUDWidget_OnStealthSummaryUpdated_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USOTS_StealthSummaryHUDWidget_OnStealthSummaryUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_StealthSummaryHUDWidget_OnStealthSummaryUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class USOTS_StealthSummaryHUDWidget Function OnStealthSummaryUpdated *************

// ********** Begin Class USOTS_StealthSummaryHUDWidget ********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_StealthSummaryHUDWidget;
UClass* USOTS_StealthSummaryHUDWidget::GetPrivateStaticClass()
{
	using TClass = USOTS_StealthSummaryHUDWidget;
	if (!Z_Registration_Info_UClass_USOTS_StealthSummaryHUDWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_StealthSummaryHUDWidget"),
			Z_Registration_Info_UClass_USOTS_StealthSummaryHUDWidget.InnerSingleton,
			StaticRegisterNativesUSOTS_StealthSummaryHUDWidget,
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
	return Z_Registration_Info_UClass_USOTS_StealthSummaryHUDWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_StealthSummaryHUDWidget_NoRegister()
{
	return USOTS_StealthSummaryHUDWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_StealthSummaryHUDWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Screen-space summary HUD widget for global stealth state and\n * high-level enemy perception counts. Blueprint widgets such as\n * WBP_SOTS_StealthSummaryHUD should subclass this and bind to the\n * cached fields.\n */" },
#endif
		{ "IncludePath", "UI/SOTS_StealthSummaryHUDWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/SOTS_StealthSummaryHUDWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Screen-space summary HUD widget for global stealth state and\nhigh-level enemy perception counts. Blueprint widgets such as\nWBP_SOTS_StealthSummaryHUD should subclass this and bind to the\ncached fields." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedBreakdown_MetaData[] = {
		{ "Category", "Stealth" },
		{ "ModuleRelativePath", "Public/UI/SOTS_StealthSummaryHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumEnemiesUnaware_MetaData[] = {
		{ "Category", "Stealth" },
		{ "ModuleRelativePath", "Public/UI/SOTS_StealthSummaryHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumEnemiesSuspicious_MetaData[] = {
		{ "Category", "Stealth" },
		{ "ModuleRelativePath", "Public/UI/SOTS_StealthSummaryHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumEnemiesAlerted_MetaData[] = {
		{ "Category", "Stealth" },
		{ "ModuleRelativePath", "Public/UI/SOTS_StealthSummaryHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentDebugMode_MetaData[] = {
		{ "Category", "Stealth" },
		{ "ModuleRelativePath", "Public/UI/SOTS_StealthSummaryHUDWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_StealthSummaryHUDWidget constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedBreakdown;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumEnemiesUnaware;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumEnemiesSuspicious;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumEnemiesAlerted;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentDebugMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentDebugMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USOTS_StealthSummaryHUDWidget constinit property declarations **************
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USOTS_StealthSummaryHUDWidget_OnStealthSummaryUpdated, "OnStealthSummaryUpdated" }, // 1273107818
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_StealthSummaryHUDWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_StealthSummaryHUDWidget_Statics

// ********** Begin Class USOTS_StealthSummaryHUDWidget Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_StealthSummaryHUDWidget_Statics::NewProp_CachedBreakdown = { "CachedBreakdown", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_StealthSummaryHUDWidget, CachedBreakdown), Z_Construct_UScriptStruct_FSOTS_StealthScoreBreakdown, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedBreakdown_MetaData), NewProp_CachedBreakdown_MetaData) }; // 587956614
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USOTS_StealthSummaryHUDWidget_Statics::NewProp_NumEnemiesUnaware = { "NumEnemiesUnaware", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_StealthSummaryHUDWidget, NumEnemiesUnaware), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumEnemiesUnaware_MetaData), NewProp_NumEnemiesUnaware_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USOTS_StealthSummaryHUDWidget_Statics::NewProp_NumEnemiesSuspicious = { "NumEnemiesSuspicious", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_StealthSummaryHUDWidget, NumEnemiesSuspicious), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumEnemiesSuspicious_MetaData), NewProp_NumEnemiesSuspicious_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USOTS_StealthSummaryHUDWidget_Statics::NewProp_NumEnemiesAlerted = { "NumEnemiesAlerted", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_StealthSummaryHUDWidget, NumEnemiesAlerted), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumEnemiesAlerted_MetaData), NewProp_NumEnemiesAlerted_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USOTS_StealthSummaryHUDWidget_Statics::NewProp_CurrentDebugMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USOTS_StealthSummaryHUDWidget_Statics::NewProp_CurrentDebugMode = { "CurrentDebugMode", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_StealthSummaryHUDWidget, CurrentDebugMode), Z_Construct_UEnum_SOTS_GAS_Plugin_ESOTSStealthDebugMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentDebugMode_MetaData), NewProp_CurrentDebugMode_MetaData) }; // 4255647318
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USOTS_StealthSummaryHUDWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_StealthSummaryHUDWidget_Statics::NewProp_CachedBreakdown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_StealthSummaryHUDWidget_Statics::NewProp_NumEnemiesUnaware,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_StealthSummaryHUDWidget_Statics::NewProp_NumEnemiesSuspicious,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_StealthSummaryHUDWidget_Statics::NewProp_NumEnemiesAlerted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_StealthSummaryHUDWidget_Statics::NewProp_CurrentDebugMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_StealthSummaryHUDWidget_Statics::NewProp_CurrentDebugMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_StealthSummaryHUDWidget_Statics::PropPointers) < 2048);
// ********** End Class USOTS_StealthSummaryHUDWidget Property Definitions *************************
UObject* (*const Z_Construct_UClass_USOTS_StealthSummaryHUDWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_GAS_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_StealthSummaryHUDWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_StealthSummaryHUDWidget_Statics::ClassParams = {
	&USOTS_StealthSummaryHUDWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USOTS_StealthSummaryHUDWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_StealthSummaryHUDWidget_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_StealthSummaryHUDWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_StealthSummaryHUDWidget_Statics::Class_MetaDataParams)
};
void USOTS_StealthSummaryHUDWidget::StaticRegisterNativesUSOTS_StealthSummaryHUDWidget()
{
}
UClass* Z_Construct_UClass_USOTS_StealthSummaryHUDWidget()
{
	if (!Z_Registration_Info_UClass_USOTS_StealthSummaryHUDWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_StealthSummaryHUDWidget.OuterSingleton, Z_Construct_UClass_USOTS_StealthSummaryHUDWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_StealthSummaryHUDWidget.OuterSingleton;
}
USOTS_StealthSummaryHUDWidget::USOTS_StealthSummaryHUDWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_StealthSummaryHUDWidget);
USOTS_StealthSummaryHUDWidget::~USOTS_StealthSummaryHUDWidget() {}
// ********** End Class USOTS_StealthSummaryHUDWidget **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_UI_SOTS_StealthSummaryHUDWidget_h__Script_SOTS_GAS_Plugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_StealthSummaryHUDWidget, USOTS_StealthSummaryHUDWidget::StaticClass, TEXT("USOTS_StealthSummaryHUDWidget"), &Z_Registration_Info_UClass_USOTS_StealthSummaryHUDWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_StealthSummaryHUDWidget), 1860954515U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_UI_SOTS_StealthSummaryHUDWidget_h__Script_SOTS_GAS_Plugin_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_UI_SOTS_StealthSummaryHUDWidget_h__Script_SOTS_GAS_Plugin_1089120258{
	TEXT("/Script/SOTS_GAS_Plugin"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_UI_SOTS_StealthSummaryHUDWidget_h__Script_SOTS_GAS_Plugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_UI_SOTS_StealthSummaryHUDWidget_h__Script_SOTS_GAS_Plugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
