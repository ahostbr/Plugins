// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/SOTS_KEM_CandidateListWidget.h"
#include "SOTS_KEM_Types.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_KEM_CandidateListWidget() {}

// ********** Begin Cross Module References ********************************************************
SOTS_GAS_PLUGIN_API UEnum* Z_Construct_UEnum_SOTS_GAS_Plugin_ESOTSStealthDebugMode();
SOTS_KILLEXECUTIONMANAGER_API UClass* Z_Construct_UClass_USOTS_KEM_CandidateListWidget();
SOTS_KILLEXECUTIONMANAGER_API UClass* Z_Construct_UClass_USOTS_KEM_CandidateListWidget_NoRegister();
SOTS_KILLEXECUTIONMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_KEMCandidateDebugRecord();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_SOTS_KillExecutionManager();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USOTS_KEM_CandidateListWidget Function OnCandidatesUpdated ***************
static FName NAME_USOTS_KEM_CandidateListWidget_OnCandidatesUpdated = FName(TEXT("OnCandidatesUpdated"));
void USOTS_KEM_CandidateListWidget::OnCandidatesUpdated()
{
	UFunction* Func = FindFunctionChecked(NAME_USOTS_KEM_CandidateListWidget_OnCandidatesUpdated);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_USOTS_KEM_CandidateListWidget_OnCandidatesUpdated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "KEM|Debug" },
		{ "ModuleRelativePath", "Public/UI/SOTS_KEM_CandidateListWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnCandidatesUpdated constinit property declarations *******************
// ********** End Function OnCandidatesUpdated constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_KEM_CandidateListWidget_OnCandidatesUpdated_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_KEM_CandidateListWidget, nullptr, "OnCandidatesUpdated", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEM_CandidateListWidget_OnCandidatesUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_KEM_CandidateListWidget_OnCandidatesUpdated_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USOTS_KEM_CandidateListWidget_OnCandidatesUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_KEM_CandidateListWidget_OnCandidatesUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class USOTS_KEM_CandidateListWidget Function OnCandidatesUpdated *****************

// ********** Begin Class USOTS_KEM_CandidateListWidget ********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_KEM_CandidateListWidget;
UClass* USOTS_KEM_CandidateListWidget::GetPrivateStaticClass()
{
	using TClass = USOTS_KEM_CandidateListWidget;
	if (!Z_Registration_Info_UClass_USOTS_KEM_CandidateListWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_KEM_CandidateListWidget"),
			Z_Registration_Info_UClass_USOTS_KEM_CandidateListWidget.InnerSingleton,
			StaticRegisterNativesUSOTS_KEM_CandidateListWidget,
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
	return Z_Registration_Info_UClass_USOTS_KEM_CandidateListWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_KEM_CandidateListWidget_NoRegister()
{
	return USOTS_KEM_CandidateListWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_KEM_CandidateListWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Screen-space widget that exposes the per-candidate scoring breakdown\n * for the most recent KEM selection. Blueprint widgets should subclass\n * this base and render CachedCandidates as a list/table.\n */" },
#endif
		{ "IncludePath", "UI/SOTS_KEM_CandidateListWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/SOTS_KEM_CandidateListWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Screen-space widget that exposes the per-candidate scoring breakdown\nfor the most recent KEM selection. Blueprint widgets should subclass\nthis base and render CachedCandidates as a list/table." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedCandidates_MetaData[] = {
		{ "Category", "KEM|Debug" },
		{ "ModuleRelativePath", "Public/UI/SOTS_KEM_CandidateListWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentDebugMode_MetaData[] = {
		{ "Category", "KEM|Debug" },
		{ "ModuleRelativePath", "Public/UI/SOTS_KEM_CandidateListWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_KEM_CandidateListWidget constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedCandidates_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedCandidates;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentDebugMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentDebugMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USOTS_KEM_CandidateListWidget constinit property declarations **************
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USOTS_KEM_CandidateListWidget_OnCandidatesUpdated, "OnCandidatesUpdated" }, // 1345011264
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_KEM_CandidateListWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_KEM_CandidateListWidget_Statics

// ********** Begin Class USOTS_KEM_CandidateListWidget Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_KEM_CandidateListWidget_Statics::NewProp_CachedCandidates_Inner = { "CachedCandidates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSOTS_KEMCandidateDebugRecord, METADATA_PARAMS(0, nullptr) }; // 259323273
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USOTS_KEM_CandidateListWidget_Statics::NewProp_CachedCandidates = { "CachedCandidates", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEM_CandidateListWidget, CachedCandidates), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedCandidates_MetaData), NewProp_CachedCandidates_MetaData) }; // 259323273
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USOTS_KEM_CandidateListWidget_Statics::NewProp_CurrentDebugMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USOTS_KEM_CandidateListWidget_Statics::NewProp_CurrentDebugMode = { "CurrentDebugMode", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEM_CandidateListWidget, CurrentDebugMode), Z_Construct_UEnum_SOTS_GAS_Plugin_ESOTSStealthDebugMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentDebugMode_MetaData), NewProp_CurrentDebugMode_MetaData) }; // 4255647318
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USOTS_KEM_CandidateListWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEM_CandidateListWidget_Statics::NewProp_CachedCandidates_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEM_CandidateListWidget_Statics::NewProp_CachedCandidates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEM_CandidateListWidget_Statics::NewProp_CurrentDebugMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEM_CandidateListWidget_Statics::NewProp_CurrentDebugMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_KEM_CandidateListWidget_Statics::PropPointers) < 2048);
// ********** End Class USOTS_KEM_CandidateListWidget Property Definitions *************************
UObject* (*const Z_Construct_UClass_USOTS_KEM_CandidateListWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_KillExecutionManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_KEM_CandidateListWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_KEM_CandidateListWidget_Statics::ClassParams = {
	&USOTS_KEM_CandidateListWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USOTS_KEM_CandidateListWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_KEM_CandidateListWidget_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_KEM_CandidateListWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_KEM_CandidateListWidget_Statics::Class_MetaDataParams)
};
void USOTS_KEM_CandidateListWidget::StaticRegisterNativesUSOTS_KEM_CandidateListWidget()
{
}
UClass* Z_Construct_UClass_USOTS_KEM_CandidateListWidget()
{
	if (!Z_Registration_Info_UClass_USOTS_KEM_CandidateListWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_KEM_CandidateListWidget.OuterSingleton, Z_Construct_UClass_USOTS_KEM_CandidateListWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_KEM_CandidateListWidget.OuterSingleton;
}
USOTS_KEM_CandidateListWidget::USOTS_KEM_CandidateListWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_KEM_CandidateListWidget);
USOTS_KEM_CandidateListWidget::~USOTS_KEM_CandidateListWidget() {}
// ********** End Class USOTS_KEM_CandidateListWidget **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_UI_SOTS_KEM_CandidateListWidget_h__Script_SOTS_KillExecutionManager_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_KEM_CandidateListWidget, USOTS_KEM_CandidateListWidget::StaticClass, TEXT("USOTS_KEM_CandidateListWidget"), &Z_Registration_Info_UClass_USOTS_KEM_CandidateListWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_KEM_CandidateListWidget), 4185279267U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_UI_SOTS_KEM_CandidateListWidget_h__Script_SOTS_KillExecutionManager_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_UI_SOTS_KEM_CandidateListWidget_h__Script_SOTS_KillExecutionManager_4260121977{
	TEXT("/Script/SOTS_KillExecutionManager"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_UI_SOTS_KEM_CandidateListWidget_h__Script_SOTS_KillExecutionManager_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_UI_SOTS_KEM_CandidateListWidget_h__Script_SOTS_KillExecutionManager_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
