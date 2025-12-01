// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/SOTS_EnemyPerceptionDebugWidget.h"
#include "SOTS_AIPerceptionTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_EnemyPerceptionDebugWidget() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
SOTS_AIPERCEPTION_API UEnum* Z_Construct_UEnum_SOTS_AIPerception_ESOTS_PerceptionState();
SOTS_AIPERCEPTION_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_PerceivedTargetState();
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_USOTS_EnemyPerceptionDebugWidget();
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_USOTS_EnemyPerceptionDebugWidget_NoRegister();
SOTS_GAS_PLUGIN_API UEnum* Z_Construct_UEnum_SOTS_GAS_Plugin_ESOTSStealthDebugMode();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_SOTS_GAS_Plugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USOTS_EnemyPerceptionDebugWidget Function OnPerceptionDebugDataUpdated ***
static FName NAME_USOTS_EnemyPerceptionDebugWidget_OnPerceptionDebugDataUpdated = FName(TEXT("OnPerceptionDebugDataUpdated"));
void USOTS_EnemyPerceptionDebugWidget::OnPerceptionDebugDataUpdated()
{
	UFunction* Func = FindFunctionChecked(NAME_USOTS_EnemyPerceptionDebugWidget_OnPerceptionDebugDataUpdated);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_USOTS_EnemyPerceptionDebugWidget_OnPerceptionDebugDataUpdated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Perception" },
		{ "ModuleRelativePath", "Public/UI/SOTS_EnemyPerceptionDebugWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnPerceptionDebugDataUpdated constinit property declarations **********
// ********** End Function OnPerceptionDebugDataUpdated constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_EnemyPerceptionDebugWidget_OnPerceptionDebugDataUpdated_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_EnemyPerceptionDebugWidget, nullptr, "OnPerceptionDebugDataUpdated", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_EnemyPerceptionDebugWidget_OnPerceptionDebugDataUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_EnemyPerceptionDebugWidget_OnPerceptionDebugDataUpdated_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USOTS_EnemyPerceptionDebugWidget_OnPerceptionDebugDataUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_EnemyPerceptionDebugWidget_OnPerceptionDebugDataUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class USOTS_EnemyPerceptionDebugWidget Function OnPerceptionDebugDataUpdated *****

// ********** Begin Class USOTS_EnemyPerceptionDebugWidget *****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_EnemyPerceptionDebugWidget;
UClass* USOTS_EnemyPerceptionDebugWidget::GetPrivateStaticClass()
{
	using TClass = USOTS_EnemyPerceptionDebugWidget;
	if (!Z_Registration_Info_UClass_USOTS_EnemyPerceptionDebugWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_EnemyPerceptionDebugWidget"),
			Z_Registration_Info_UClass_USOTS_EnemyPerceptionDebugWidget.InnerSingleton,
			StaticRegisterNativesUSOTS_EnemyPerceptionDebugWidget,
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
	return Z_Registration_Info_UClass_USOTS_EnemyPerceptionDebugWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_EnemyPerceptionDebugWidget_NoRegister()
{
	return USOTS_EnemyPerceptionDebugWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_EnemyPerceptionDebugWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Base widget for per-enemy perception debug. WBP_SOTS_EnemyPerceptionDebug\n * should subclass this and render the cached values.\n */" },
#endif
		{ "IncludePath", "UI/SOTS_EnemyPerceptionDebugWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/SOTS_EnemyPerceptionDebugWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base widget for per-enemy perception debug. WBP_SOTS_EnemyPerceptionDebug\nshould subclass this and render the cached values." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObservedActor_MetaData[] = {
		{ "Category", "Perception" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Actor this widget should inspect for perception state. Typically set\n// from owning pawn or a helper component in Blueprint.\n" },
#endif
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/UI/SOTS_EnemyPerceptionDebugWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actor this widget should inspect for perception state. Typically set\nfrom owning pawn or a helper component in Blueprint." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedPerceptionState_MetaData[] = {
		{ "Category", "Perception" },
		{ "ModuleRelativePath", "Public/UI/SOTS_EnemyPerceptionDebugWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedSuspicion01_MetaData[] = {
		{ "Category", "Perception" },
		{ "ModuleRelativePath", "Public/UI/SOTS_EnemyPerceptionDebugWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedTargetState_MetaData[] = {
		{ "Category", "Perception" },
		{ "ModuleRelativePath", "Public/UI/SOTS_EnemyPerceptionDebugWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedDistanceToPlayer_MetaData[] = {
		{ "Category", "Perception" },
		{ "ModuleRelativePath", "Public/UI/SOTS_EnemyPerceptionDebugWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCachedHasLineOfSight_MetaData[] = {
		{ "Category", "Perception" },
		{ "ModuleRelativePath", "Public/UI/SOTS_EnemyPerceptionDebugWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentDebugMode_MetaData[] = {
		{ "Category", "Perception" },
		{ "ModuleRelativePath", "Public/UI/SOTS_EnemyPerceptionDebugWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_EnemyPerceptionDebugWidget constinit property declarations *********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObservedActor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CachedPerceptionState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CachedPerceptionState;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CachedSuspicion01;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedTargetState;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CachedDistanceToPlayer;
	static void NewProp_bCachedHasLineOfSight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCachedHasLineOfSight;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentDebugMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentDebugMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USOTS_EnemyPerceptionDebugWidget constinit property declarations ***********
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USOTS_EnemyPerceptionDebugWidget_OnPerceptionDebugDataUpdated, "OnPerceptionDebugDataUpdated" }, // 3484556690
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_EnemyPerceptionDebugWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_EnemyPerceptionDebugWidget_Statics

// ********** Begin Class USOTS_EnemyPerceptionDebugWidget Property Definitions ********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USOTS_EnemyPerceptionDebugWidget_Statics::NewProp_ObservedActor = { "ObservedActor", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_EnemyPerceptionDebugWidget, ObservedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObservedActor_MetaData), NewProp_ObservedActor_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USOTS_EnemyPerceptionDebugWidget_Statics::NewProp_CachedPerceptionState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USOTS_EnemyPerceptionDebugWidget_Statics::NewProp_CachedPerceptionState = { "CachedPerceptionState", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_EnemyPerceptionDebugWidget, CachedPerceptionState), Z_Construct_UEnum_SOTS_AIPerception_ESOTS_PerceptionState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedPerceptionState_MetaData), NewProp_CachedPerceptionState_MetaData) }; // 238031394
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USOTS_EnemyPerceptionDebugWidget_Statics::NewProp_CachedSuspicion01 = { "CachedSuspicion01", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_EnemyPerceptionDebugWidget, CachedSuspicion01), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedSuspicion01_MetaData), NewProp_CachedSuspicion01_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_EnemyPerceptionDebugWidget_Statics::NewProp_CachedTargetState = { "CachedTargetState", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_EnemyPerceptionDebugWidget, CachedTargetState), Z_Construct_UScriptStruct_FSOTS_PerceivedTargetState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedTargetState_MetaData), NewProp_CachedTargetState_MetaData) }; // 3791564001
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USOTS_EnemyPerceptionDebugWidget_Statics::NewProp_CachedDistanceToPlayer = { "CachedDistanceToPlayer", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_EnemyPerceptionDebugWidget, CachedDistanceToPlayer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedDistanceToPlayer_MetaData), NewProp_CachedDistanceToPlayer_MetaData) };
void Z_Construct_UClass_USOTS_EnemyPerceptionDebugWidget_Statics::NewProp_bCachedHasLineOfSight_SetBit(void* Obj)
{
	((USOTS_EnemyPerceptionDebugWidget*)Obj)->bCachedHasLineOfSight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USOTS_EnemyPerceptionDebugWidget_Statics::NewProp_bCachedHasLineOfSight = { "bCachedHasLineOfSight", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USOTS_EnemyPerceptionDebugWidget), &Z_Construct_UClass_USOTS_EnemyPerceptionDebugWidget_Statics::NewProp_bCachedHasLineOfSight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCachedHasLineOfSight_MetaData), NewProp_bCachedHasLineOfSight_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USOTS_EnemyPerceptionDebugWidget_Statics::NewProp_CurrentDebugMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USOTS_EnemyPerceptionDebugWidget_Statics::NewProp_CurrentDebugMode = { "CurrentDebugMode", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_EnemyPerceptionDebugWidget, CurrentDebugMode), Z_Construct_UEnum_SOTS_GAS_Plugin_ESOTSStealthDebugMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentDebugMode_MetaData), NewProp_CurrentDebugMode_MetaData) }; // 4255647318
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USOTS_EnemyPerceptionDebugWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_EnemyPerceptionDebugWidget_Statics::NewProp_ObservedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_EnemyPerceptionDebugWidget_Statics::NewProp_CachedPerceptionState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_EnemyPerceptionDebugWidget_Statics::NewProp_CachedPerceptionState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_EnemyPerceptionDebugWidget_Statics::NewProp_CachedSuspicion01,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_EnemyPerceptionDebugWidget_Statics::NewProp_CachedTargetState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_EnemyPerceptionDebugWidget_Statics::NewProp_CachedDistanceToPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_EnemyPerceptionDebugWidget_Statics::NewProp_bCachedHasLineOfSight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_EnemyPerceptionDebugWidget_Statics::NewProp_CurrentDebugMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_EnemyPerceptionDebugWidget_Statics::NewProp_CurrentDebugMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_EnemyPerceptionDebugWidget_Statics::PropPointers) < 2048);
// ********** End Class USOTS_EnemyPerceptionDebugWidget Property Definitions **********************
UObject* (*const Z_Construct_UClass_USOTS_EnemyPerceptionDebugWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_GAS_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_EnemyPerceptionDebugWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_EnemyPerceptionDebugWidget_Statics::ClassParams = {
	&USOTS_EnemyPerceptionDebugWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USOTS_EnemyPerceptionDebugWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_EnemyPerceptionDebugWidget_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_EnemyPerceptionDebugWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_EnemyPerceptionDebugWidget_Statics::Class_MetaDataParams)
};
void USOTS_EnemyPerceptionDebugWidget::StaticRegisterNativesUSOTS_EnemyPerceptionDebugWidget()
{
}
UClass* Z_Construct_UClass_USOTS_EnemyPerceptionDebugWidget()
{
	if (!Z_Registration_Info_UClass_USOTS_EnemyPerceptionDebugWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_EnemyPerceptionDebugWidget.OuterSingleton, Z_Construct_UClass_USOTS_EnemyPerceptionDebugWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_EnemyPerceptionDebugWidget.OuterSingleton;
}
USOTS_EnemyPerceptionDebugWidget::USOTS_EnemyPerceptionDebugWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_EnemyPerceptionDebugWidget);
USOTS_EnemyPerceptionDebugWidget::~USOTS_EnemyPerceptionDebugWidget() {}
// ********** End Class USOTS_EnemyPerceptionDebugWidget *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_UI_SOTS_EnemyPerceptionDebugWidget_h__Script_SOTS_GAS_Plugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_EnemyPerceptionDebugWidget, USOTS_EnemyPerceptionDebugWidget::StaticClass, TEXT("USOTS_EnemyPerceptionDebugWidget"), &Z_Registration_Info_UClass_USOTS_EnemyPerceptionDebugWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_EnemyPerceptionDebugWidget), 229749423U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_UI_SOTS_EnemyPerceptionDebugWidget_h__Script_SOTS_GAS_Plugin_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_UI_SOTS_EnemyPerceptionDebugWidget_h__Script_SOTS_GAS_Plugin_1418318017{
	TEXT("/Script/SOTS_GAS_Plugin"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_UI_SOTS_EnemyPerceptionDebugWidget_h__Script_SOTS_GAS_Plugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_UI_SOTS_EnemyPerceptionDebugWidget_h__Script_SOTS_GAS_Plugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
