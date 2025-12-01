// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/SOTS_DragonStealthDebugWidget.h"
#include "SOTS_GlobalStealthTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_DragonStealthDebugWidget() {}

// ********** Begin Cross Module References ********************************************************
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_USOTS_DragonStealthDebugWidget();
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_USOTS_DragonStealthDebugWidget_NoRegister();
SOTS_GAS_PLUGIN_API UEnum* Z_Construct_UEnum_SOTS_GAS_Plugin_ESOTSStealthDebugMode();
SOTS_GLOBALSTEALTHMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_PlayerStealthState();
SOTS_GLOBALSTEALTHMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_StealthScoreBreakdown();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_SOTS_GAS_Plugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USOTS_DragonStealthDebugWidget Function OnStealthDebugDataUpdated ********
static FName NAME_USOTS_DragonStealthDebugWidget_OnStealthDebugDataUpdated = FName(TEXT("OnStealthDebugDataUpdated"));
void USOTS_DragonStealthDebugWidget::OnStealthDebugDataUpdated()
{
	UFunction* Func = FindFunctionChecked(NAME_USOTS_DragonStealthDebugWidget_OnStealthDebugDataUpdated);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_USOTS_DragonStealthDebugWidget_OnStealthDebugDataUpdated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stealth" },
		{ "ModuleRelativePath", "Public/UI/SOTS_DragonStealthDebugWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnStealthDebugDataUpdated constinit property declarations *************
// ********** End Function OnStealthDebugDataUpdated constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_DragonStealthDebugWidget_OnStealthDebugDataUpdated_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_DragonStealthDebugWidget, nullptr, "OnStealthDebugDataUpdated", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_DragonStealthDebugWidget_OnStealthDebugDataUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_DragonStealthDebugWidget_OnStealthDebugDataUpdated_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USOTS_DragonStealthDebugWidget_OnStealthDebugDataUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_DragonStealthDebugWidget_OnStealthDebugDataUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class USOTS_DragonStealthDebugWidget Function OnStealthDebugDataUpdated **********

// ********** Begin Class USOTS_DragonStealthDebugWidget *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_DragonStealthDebugWidget;
UClass* USOTS_DragonStealthDebugWidget::GetPrivateStaticClass()
{
	using TClass = USOTS_DragonStealthDebugWidget;
	if (!Z_Registration_Info_UClass_USOTS_DragonStealthDebugWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_DragonStealthDebugWidget"),
			Z_Registration_Info_UClass_USOTS_DragonStealthDebugWidget.InnerSingleton,
			StaticRegisterNativesUSOTS_DragonStealthDebugWidget,
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
	return Z_Registration_Info_UClass_USOTS_DragonStealthDebugWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_DragonStealthDebugWidget_NoRegister()
{
	return USOTS_DragonStealthDebugWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_DragonStealthDebugWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Base C++ widget for dragon stealth debug. Blueprint widgets such as\n * WBP_SOTS_DragonStealthDebug should subclass this and use the cached\n * data to drive progress bars and labels.\n */" },
#endif
		{ "IncludePath", "UI/SOTS_DragonStealthDebugWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/SOTS_DragonStealthDebugWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base C++ widget for dragon stealth debug. Blueprint widgets such as\nWBP_SOTS_DragonStealthDebug should subclass this and use the cached\ndata to drive progress bars and labels." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedStealthState_MetaData[] = {
		{ "Category", "Stealth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// For now we share the same global player/dragon state until a separate\n// dragon state exists. Widgets can add dragon-specific data in Blueprint.\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/SOTS_DragonStealthDebugWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "For now we share the same global player/dragon state until a separate\ndragon state exists. Widgets can add dragon-specific data in Blueprint." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedBreakdown_MetaData[] = {
		{ "Category", "Stealth" },
		{ "ModuleRelativePath", "Public/UI/SOTS_DragonStealthDebugWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentDebugMode_MetaData[] = {
		{ "Category", "Stealth" },
		{ "ModuleRelativePath", "Public/UI/SOTS_DragonStealthDebugWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_DragonStealthDebugWidget constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedStealthState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedBreakdown;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentDebugMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentDebugMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USOTS_DragonStealthDebugWidget constinit property declarations *************
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USOTS_DragonStealthDebugWidget_OnStealthDebugDataUpdated, "OnStealthDebugDataUpdated" }, // 2037524944
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_DragonStealthDebugWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_DragonStealthDebugWidget_Statics

// ********** Begin Class USOTS_DragonStealthDebugWidget Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_DragonStealthDebugWidget_Statics::NewProp_CachedStealthState = { "CachedStealthState", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_DragonStealthDebugWidget, CachedStealthState), Z_Construct_UScriptStruct_FSOTS_PlayerStealthState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedStealthState_MetaData), NewProp_CachedStealthState_MetaData) }; // 2815183295
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_DragonStealthDebugWidget_Statics::NewProp_CachedBreakdown = { "CachedBreakdown", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_DragonStealthDebugWidget, CachedBreakdown), Z_Construct_UScriptStruct_FSOTS_StealthScoreBreakdown, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedBreakdown_MetaData), NewProp_CachedBreakdown_MetaData) }; // 587956614
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USOTS_DragonStealthDebugWidget_Statics::NewProp_CurrentDebugMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USOTS_DragonStealthDebugWidget_Statics::NewProp_CurrentDebugMode = { "CurrentDebugMode", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_DragonStealthDebugWidget, CurrentDebugMode), Z_Construct_UEnum_SOTS_GAS_Plugin_ESOTSStealthDebugMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentDebugMode_MetaData), NewProp_CurrentDebugMode_MetaData) }; // 4255647318
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USOTS_DragonStealthDebugWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_DragonStealthDebugWidget_Statics::NewProp_CachedStealthState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_DragonStealthDebugWidget_Statics::NewProp_CachedBreakdown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_DragonStealthDebugWidget_Statics::NewProp_CurrentDebugMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_DragonStealthDebugWidget_Statics::NewProp_CurrentDebugMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_DragonStealthDebugWidget_Statics::PropPointers) < 2048);
// ********** End Class USOTS_DragonStealthDebugWidget Property Definitions ************************
UObject* (*const Z_Construct_UClass_USOTS_DragonStealthDebugWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_GAS_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_DragonStealthDebugWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_DragonStealthDebugWidget_Statics::ClassParams = {
	&USOTS_DragonStealthDebugWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USOTS_DragonStealthDebugWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_DragonStealthDebugWidget_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_DragonStealthDebugWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_DragonStealthDebugWidget_Statics::Class_MetaDataParams)
};
void USOTS_DragonStealthDebugWidget::StaticRegisterNativesUSOTS_DragonStealthDebugWidget()
{
}
UClass* Z_Construct_UClass_USOTS_DragonStealthDebugWidget()
{
	if (!Z_Registration_Info_UClass_USOTS_DragonStealthDebugWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_DragonStealthDebugWidget.OuterSingleton, Z_Construct_UClass_USOTS_DragonStealthDebugWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_DragonStealthDebugWidget.OuterSingleton;
}
USOTS_DragonStealthDebugWidget::USOTS_DragonStealthDebugWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_DragonStealthDebugWidget);
USOTS_DragonStealthDebugWidget::~USOTS_DragonStealthDebugWidget() {}
// ********** End Class USOTS_DragonStealthDebugWidget *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_UI_SOTS_DragonStealthDebugWidget_h__Script_SOTS_GAS_Plugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_DragonStealthDebugWidget, USOTS_DragonStealthDebugWidget::StaticClass, TEXT("USOTS_DragonStealthDebugWidget"), &Z_Registration_Info_UClass_USOTS_DragonStealthDebugWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_DragonStealthDebugWidget), 2833322121U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_UI_SOTS_DragonStealthDebugWidget_h__Script_SOTS_GAS_Plugin_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_UI_SOTS_DragonStealthDebugWidget_h__Script_SOTS_GAS_Plugin_3101455304{
	TEXT("/Script/SOTS_GAS_Plugin"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_UI_SOTS_DragonStealthDebugWidget_h__Script_SOTS_GAS_Plugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_UI_SOTS_DragonStealthDebugWidget_h__Script_SOTS_GAS_Plugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
