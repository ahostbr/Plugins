// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SOTS_KEM_TagSelectionCriterion.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_KEM_TagSelectionCriterion() {}

// ********** Begin Cross Module References ********************************************************
CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimSelectionCriterion();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
SOTS_KILLEXECUTIONMANAGER_API UClass* Z_Construct_UClass_USOTS_KEM_TagSelectionCriterion();
SOTS_KILLEXECUTIONMANAGER_API UClass* Z_Construct_UClass_USOTS_KEM_TagSelectionCriterion_NoRegister();
SOTS_KILLEXECUTIONMANAGER_API UEnum* Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_TagMatchType();
UPackage* Z_Construct_UPackage__Script_SOTS_KillExecutionManager();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ESOTS_KEM_TagMatchType ****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESOTS_KEM_TagMatchType;
static UEnum* ESOTS_KEM_TagMatchType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESOTS_KEM_TagMatchType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESOTS_KEM_TagMatchType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_TagMatchType, (UObject*)Z_Construct_UPackage__Script_SOTS_KillExecutionManager(), TEXT("ESOTS_KEM_TagMatchType"));
	}
	return Z_Registration_Info_UEnum_ESOTS_KEM_TagMatchType.OuterSingleton;
}
template<> SOTS_KILLEXECUTIONMANAGER_NON_ATTRIBUTED_API UEnum* StaticEnum<ESOTS_KEM_TagMatchType>()
{
	return ESOTS_KEM_TagMatchType_StaticEnum();
}
struct Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_TagMatchType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "All.DisplayName", "All" },
		{ "All.Name", "ESOTS_KEM_TagMatchType::All" },
		{ "Any.DisplayName", "Any (at least one)" },
		{ "Any.Name", "ESOTS_KEM_TagMatchType::Any" },
		{ "BlueprintType", "true" },
		{ "Exact.DisplayName", "Exact (containers must match)" },
		{ "Exact.Name", "ESOTS_KEM_TagMatchType::Exact" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_TagSelectionCriterion.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESOTS_KEM_TagMatchType::Any", (int64)ESOTS_KEM_TagMatchType::Any },
		{ "ESOTS_KEM_TagMatchType::All", (int64)ESOTS_KEM_TagMatchType::All },
		{ "ESOTS_KEM_TagMatchType::Exact", (int64)ESOTS_KEM_TagMatchType::Exact },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_TagMatchType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_TagMatchType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SOTS_KillExecutionManager,
	nullptr,
	"ESOTS_KEM_TagMatchType",
	"ESOTS_KEM_TagMatchType",
	Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_TagMatchType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_TagMatchType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_TagMatchType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_TagMatchType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_TagMatchType()
{
	if (!Z_Registration_Info_UEnum_ESOTS_KEM_TagMatchType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESOTS_KEM_TagMatchType.InnerSingleton, Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_TagMatchType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESOTS_KEM_TagMatchType.InnerSingleton;
}
// ********** End Enum ESOTS_KEM_TagMatchType ******************************************************

// ********** Begin Class USOTS_KEM_TagSelectionCriterion ******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_KEM_TagSelectionCriterion;
UClass* USOTS_KEM_TagSelectionCriterion::GetPrivateStaticClass()
{
	using TClass = USOTS_KEM_TagSelectionCriterion;
	if (!Z_Registration_Info_UClass_USOTS_KEM_TagSelectionCriterion.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_KEM_TagSelectionCriterion"),
			Z_Registration_Info_UClass_USOTS_KEM_TagSelectionCriterion.InnerSingleton,
			StaticRegisterNativesUSOTS_KEM_TagSelectionCriterion,
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
	return Z_Registration_Info_UClass_USOTS_KEM_TagSelectionCriterion.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_KEM_TagSelectionCriterion_NoRegister()
{
	return USOTS_KEM_TagSelectionCriterion::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_KEM_TagSelectionCriterion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Tag-based selection criterion for CAS variants used by KEM.\n * Evaluates gameplay tags on the Primary and Querier binding contexts.\n */" },
#endif
		{ "DisplayName", "SOTS Gameplay Tag Criterion" },
		{ "IncludePath", "SOTS_KEM_TagSelectionCriterion.h" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_TagSelectionCriterion.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tag-based selection criterion for CAS variants used by KEM.\nEvaluates gameplay tags on the Primary and Querier binding contexts." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredPrimaryTags_MetaData[] = {
		{ "Category", "Primary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Tags the Primary binding (victim) must satisfy. */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_TagSelectionCriterion.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tags the Primary binding (victim) must satisfy." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryMatchType_MetaData[] = {
		{ "Category", "Primary" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_TagSelectionCriterion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredQuerierTags_MetaData[] = {
		{ "Category", "Querier" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Tags the Querier binding (instigator / player) must satisfy. */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_TagSelectionCriterion.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tags the Querier binding (instigator / player) must satisfy." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuerierMatchType_MetaData[] = {
		{ "Category", "Querier" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_TagSelectionCriterion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredContextTags_MetaData[] = {
		{ "Category", "Context" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Tags that must be present in the binding's gameplay tags (eg. KEM execution context tags). */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_TagSelectionCriterion.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tags that must be present in the binding's gameplay tags (eg. KEM execution context tags)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextMatchType_MetaData[] = {
		{ "Category", "Context" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_TagSelectionCriterion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionalSingleRequiredTag_MetaData[] = {
		{ "Category", "Context" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional single tag that must appear on at least one of Primary / Querier / Context. */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_TagSelectionCriterion.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional single tag that must appear on at least one of Primary / Querier / Context." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_KEM_TagSelectionCriterion constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredPrimaryTags;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PrimaryMatchType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PrimaryMatchType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredQuerierTags;
	static const UECodeGen_Private::FBytePropertyParams NewProp_QuerierMatchType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_QuerierMatchType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredContextTags;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ContextMatchType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ContextMatchType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OptionalSingleRequiredTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USOTS_KEM_TagSelectionCriterion constinit property declarations ************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_KEM_TagSelectionCriterion>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_KEM_TagSelectionCriterion_Statics

// ********** Begin Class USOTS_KEM_TagSelectionCriterion Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_KEM_TagSelectionCriterion_Statics::NewProp_RequiredPrimaryTags = { "RequiredPrimaryTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEM_TagSelectionCriterion, RequiredPrimaryTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredPrimaryTags_MetaData), NewProp_RequiredPrimaryTags_MetaData) }; // 3438578166
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USOTS_KEM_TagSelectionCriterion_Statics::NewProp_PrimaryMatchType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USOTS_KEM_TagSelectionCriterion_Statics::NewProp_PrimaryMatchType = { "PrimaryMatchType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEM_TagSelectionCriterion, PrimaryMatchType), Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_TagMatchType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryMatchType_MetaData), NewProp_PrimaryMatchType_MetaData) }; // 803761098
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_KEM_TagSelectionCriterion_Statics::NewProp_RequiredQuerierTags = { "RequiredQuerierTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEM_TagSelectionCriterion, RequiredQuerierTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredQuerierTags_MetaData), NewProp_RequiredQuerierTags_MetaData) }; // 3438578166
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USOTS_KEM_TagSelectionCriterion_Statics::NewProp_QuerierMatchType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USOTS_KEM_TagSelectionCriterion_Statics::NewProp_QuerierMatchType = { "QuerierMatchType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEM_TagSelectionCriterion, QuerierMatchType), Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_TagMatchType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuerierMatchType_MetaData), NewProp_QuerierMatchType_MetaData) }; // 803761098
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_KEM_TagSelectionCriterion_Statics::NewProp_RequiredContextTags = { "RequiredContextTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEM_TagSelectionCriterion, RequiredContextTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredContextTags_MetaData), NewProp_RequiredContextTags_MetaData) }; // 3438578166
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USOTS_KEM_TagSelectionCriterion_Statics::NewProp_ContextMatchType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USOTS_KEM_TagSelectionCriterion_Statics::NewProp_ContextMatchType = { "ContextMatchType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEM_TagSelectionCriterion, ContextMatchType), Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_TagMatchType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextMatchType_MetaData), NewProp_ContextMatchType_MetaData) }; // 803761098
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_KEM_TagSelectionCriterion_Statics::NewProp_OptionalSingleRequiredTag = { "OptionalSingleRequiredTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEM_TagSelectionCriterion, OptionalSingleRequiredTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionalSingleRequiredTag_MetaData), NewProp_OptionalSingleRequiredTag_MetaData) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USOTS_KEM_TagSelectionCriterion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEM_TagSelectionCriterion_Statics::NewProp_RequiredPrimaryTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEM_TagSelectionCriterion_Statics::NewProp_PrimaryMatchType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEM_TagSelectionCriterion_Statics::NewProp_PrimaryMatchType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEM_TagSelectionCriterion_Statics::NewProp_RequiredQuerierTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEM_TagSelectionCriterion_Statics::NewProp_QuerierMatchType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEM_TagSelectionCriterion_Statics::NewProp_QuerierMatchType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEM_TagSelectionCriterion_Statics::NewProp_RequiredContextTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEM_TagSelectionCriterion_Statics::NewProp_ContextMatchType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEM_TagSelectionCriterion_Statics::NewProp_ContextMatchType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEM_TagSelectionCriterion_Statics::NewProp_OptionalSingleRequiredTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_KEM_TagSelectionCriterion_Statics::PropPointers) < 2048);
// ********** End Class USOTS_KEM_TagSelectionCriterion Property Definitions ***********************
UObject* (*const Z_Construct_UClass_USOTS_KEM_TagSelectionCriterion_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UContextualAnimSelectionCriterion,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_KillExecutionManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_KEM_TagSelectionCriterion_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_KEM_TagSelectionCriterion_Statics::ClassParams = {
	&USOTS_KEM_TagSelectionCriterion::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USOTS_KEM_TagSelectionCriterion_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_KEM_TagSelectionCriterion_Statics::PropPointers),
	0,
	0x001030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_KEM_TagSelectionCriterion_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_KEM_TagSelectionCriterion_Statics::Class_MetaDataParams)
};
void USOTS_KEM_TagSelectionCriterion::StaticRegisterNativesUSOTS_KEM_TagSelectionCriterion()
{
}
UClass* Z_Construct_UClass_USOTS_KEM_TagSelectionCriterion()
{
	if (!Z_Registration_Info_UClass_USOTS_KEM_TagSelectionCriterion.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_KEM_TagSelectionCriterion.OuterSingleton, Z_Construct_UClass_USOTS_KEM_TagSelectionCriterion_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_KEM_TagSelectionCriterion.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_KEM_TagSelectionCriterion);
USOTS_KEM_TagSelectionCriterion::~USOTS_KEM_TagSelectionCriterion() {}
// ********** End Class USOTS_KEM_TagSelectionCriterion ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEM_TagSelectionCriterion_h__Script_SOTS_KillExecutionManager_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESOTS_KEM_TagMatchType_StaticEnum, TEXT("ESOTS_KEM_TagMatchType"), &Z_Registration_Info_UEnum_ESOTS_KEM_TagMatchType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 803761098U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_KEM_TagSelectionCriterion, USOTS_KEM_TagSelectionCriterion::StaticClass, TEXT("USOTS_KEM_TagSelectionCriterion"), &Z_Registration_Info_UClass_USOTS_KEM_TagSelectionCriterion, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_KEM_TagSelectionCriterion), 932646404U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEM_TagSelectionCriterion_h__Script_SOTS_KillExecutionManager_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEM_TagSelectionCriterion_h__Script_SOTS_KillExecutionManager_1341503176{
	TEXT("/Script/SOTS_KillExecutionManager"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEM_TagSelectionCriterion_h__Script_SOTS_KillExecutionManager_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEM_TagSelectionCriterion_h__Script_SOTS_KillExecutionManager_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEM_TagSelectionCriterion_h__Script_SOTS_KillExecutionManager_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEM_TagSelectionCriterion_h__Script_SOTS_KillExecutionManager_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
