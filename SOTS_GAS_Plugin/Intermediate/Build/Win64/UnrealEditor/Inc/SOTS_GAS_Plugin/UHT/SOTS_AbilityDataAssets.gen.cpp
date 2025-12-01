// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/SOTS_AbilityDataAssets.h"
#include "Data/SOTS_AbilityTypes.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_AbilityDataAssets() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_USOTS_AbilityCueDA();
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_USOTS_AbilityCueDA_NoRegister();
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_USOTS_AbilityDefinitionDA();
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_USOTS_AbilityDefinitionDA_NoRegister();
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_USOTS_AbilityDefinitionLibrary();
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_USOTS_AbilityDefinitionLibrary_NoRegister();
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_USOTS_AbilityMetadataDA();
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_USOTS_AbilityMetadataDA_NoRegister();
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_USOTS_AbilitySetDA();
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_USOTS_AbilitySetDA_NoRegister();
SOTS_GAS_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition();
SOTS_GAS_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_F_SOTS_AbilityGrantOptions();
SOTS_GAS_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_F_SOTS_AbilitySetEntry();
UPackage* Z_Construct_UPackage__Script_SOTS_GAS_Plugin();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct F_SOTS_AbilitySetEntry ********************************************
struct Z_Construct_UScriptStruct_F_SOTS_AbilitySetEntry_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(F_SOTS_AbilitySetEntry); }
	static inline consteval int16 GetStructAlignment() { return alignof(F_SOTS_AbilitySetEntry); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityDataAssets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityTag_MetaData[] = {
		{ "Category", "_SOTS_AbilitySetEntry" },
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityDataAssets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrantOptions_MetaData[] = {
		{ "Category", "_SOTS_AbilitySetEntry" },
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityDataAssets.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct F_SOTS_AbilitySetEntry constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrantOptions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct F_SOTS_AbilitySetEntry constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<F_SOTS_AbilitySetEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_F_SOTS_AbilitySetEntry_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_F_SOTS_AbilitySetEntry;
class UScriptStruct* F_SOTS_AbilitySetEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_F_SOTS_AbilitySetEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_F_SOTS_AbilitySetEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_F_SOTS_AbilitySetEntry, (UObject*)Z_Construct_UPackage__Script_SOTS_GAS_Plugin(), TEXT("_SOTS_AbilitySetEntry"));
	}
	return Z_Registration_Info_UScriptStruct_F_SOTS_AbilitySetEntry.OuterSingleton;
	}

// ********** Begin ScriptStruct F_SOTS_AbilitySetEntry Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_F_SOTS_AbilitySetEntry_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(F_SOTS_AbilitySetEntry, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityTag_MetaData), NewProp_AbilityTag_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_F_SOTS_AbilitySetEntry_Statics::NewProp_GrantOptions = { "GrantOptions", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(F_SOTS_AbilitySetEntry, GrantOptions), Z_Construct_UScriptStruct_F_SOTS_AbilityGrantOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrantOptions_MetaData), NewProp_GrantOptions_MetaData) }; // 1070780000
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_F_SOTS_AbilitySetEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_F_SOTS_AbilitySetEntry_Statics::NewProp_AbilityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_F_SOTS_AbilitySetEntry_Statics::NewProp_GrantOptions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_F_SOTS_AbilitySetEntry_Statics::PropPointers) < 2048);
// ********** End ScriptStruct F_SOTS_AbilitySetEntry Property Definitions *************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_F_SOTS_AbilitySetEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_GAS_Plugin,
	nullptr,
	&NewStructOps,
	"_SOTS_AbilitySetEntry",
	Z_Construct_UScriptStruct_F_SOTS_AbilitySetEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_F_SOTS_AbilitySetEntry_Statics::PropPointers),
	sizeof(F_SOTS_AbilitySetEntry),
	alignof(F_SOTS_AbilitySetEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_F_SOTS_AbilitySetEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_F_SOTS_AbilitySetEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_F_SOTS_AbilitySetEntry()
{
	if (!Z_Registration_Info_UScriptStruct_F_SOTS_AbilitySetEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_F_SOTS_AbilitySetEntry.InnerSingleton, Z_Construct_UScriptStruct_F_SOTS_AbilitySetEntry_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_F_SOTS_AbilitySetEntry.InnerSingleton);
}
// ********** End ScriptStruct F_SOTS_AbilitySetEntry **********************************************

// ********** Begin Class USOTS_AbilityDefinitionDA ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_AbilityDefinitionDA;
UClass* USOTS_AbilityDefinitionDA::GetPrivateStaticClass()
{
	using TClass = USOTS_AbilityDefinitionDA;
	if (!Z_Registration_Info_UClass_USOTS_AbilityDefinitionDA.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_AbilityDefinitionDA"),
			Z_Registration_Info_UClass_USOTS_AbilityDefinitionDA.InnerSingleton,
			StaticRegisterNativesUSOTS_AbilityDefinitionDA,
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
	return Z_Registration_Info_UClass_USOTS_AbilityDefinitionDA.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_AbilityDefinitionDA_NoRegister()
{
	return USOTS_AbilityDefinitionDA::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_AbilityDefinitionDA_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Data/SOTS_AbilityDataAssets.h" },
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityDataAssets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ability_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityDataAssets.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_AbilityDefinitionDA constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ability;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USOTS_AbilityDefinitionDA constinit property declarations ******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_AbilityDefinitionDA>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_AbilityDefinitionDA_Statics

// ********** Begin Class USOTS_AbilityDefinitionDA Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_AbilityDefinitionDA_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_AbilityDefinitionDA, Ability), Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ability_MetaData), NewProp_Ability_MetaData) }; // 2812081814
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USOTS_AbilityDefinitionDA_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AbilityDefinitionDA_Statics::NewProp_Ability,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_AbilityDefinitionDA_Statics::PropPointers) < 2048);
// ********** End Class USOTS_AbilityDefinitionDA Property Definitions *****************************
UObject* (*const Z_Construct_UClass_USOTS_AbilityDefinitionDA_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_GAS_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_AbilityDefinitionDA_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_AbilityDefinitionDA_Statics::ClassParams = {
	&USOTS_AbilityDefinitionDA::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USOTS_AbilityDefinitionDA_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_AbilityDefinitionDA_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_AbilityDefinitionDA_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_AbilityDefinitionDA_Statics::Class_MetaDataParams)
};
void USOTS_AbilityDefinitionDA::StaticRegisterNativesUSOTS_AbilityDefinitionDA()
{
}
UClass* Z_Construct_UClass_USOTS_AbilityDefinitionDA()
{
	if (!Z_Registration_Info_UClass_USOTS_AbilityDefinitionDA.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_AbilityDefinitionDA.OuterSingleton, Z_Construct_UClass_USOTS_AbilityDefinitionDA_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_AbilityDefinitionDA.OuterSingleton;
}
USOTS_AbilityDefinitionDA::USOTS_AbilityDefinitionDA(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_AbilityDefinitionDA);
USOTS_AbilityDefinitionDA::~USOTS_AbilityDefinitionDA() {}
// ********** End Class USOTS_AbilityDefinitionDA **************************************************

// ********** Begin Class USOTS_AbilityDefinitionLibrary *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_AbilityDefinitionLibrary;
UClass* USOTS_AbilityDefinitionLibrary::GetPrivateStaticClass()
{
	using TClass = USOTS_AbilityDefinitionLibrary;
	if (!Z_Registration_Info_UClass_USOTS_AbilityDefinitionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_AbilityDefinitionLibrary"),
			Z_Registration_Info_UClass_USOTS_AbilityDefinitionLibrary.InnerSingleton,
			StaticRegisterNativesUSOTS_AbilityDefinitionLibrary,
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
	return Z_Registration_Info_UClass_USOTS_AbilityDefinitionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_AbilityDefinitionLibrary_NoRegister()
{
	return USOTS_AbilityDefinitionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_AbilityDefinitionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Simple container for registering a set of ability definition data assets in\n// one place (for example, from a GameInstance or project-level config asset).\n" },
#endif
		{ "IncludePath", "Data/SOTS_AbilityDataAssets.h" },
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityDataAssets.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple container for registering a set of ability definition data assets in\none place (for example, from a GameInstance or project-level config asset)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Definitions_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityDataAssets.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_AbilityDefinitionLibrary constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Definitions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Definitions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USOTS_AbilityDefinitionLibrary constinit property declarations *************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_AbilityDefinitionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_AbilityDefinitionLibrary_Statics

// ********** Begin Class USOTS_AbilityDefinitionLibrary Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USOTS_AbilityDefinitionLibrary_Statics::NewProp_Definitions_Inner = { "Definitions", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USOTS_AbilityDefinitionDA_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USOTS_AbilityDefinitionLibrary_Statics::NewProp_Definitions = { "Definitions", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_AbilityDefinitionLibrary, Definitions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Definitions_MetaData), NewProp_Definitions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USOTS_AbilityDefinitionLibrary_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AbilityDefinitionLibrary_Statics::NewProp_Definitions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AbilityDefinitionLibrary_Statics::NewProp_Definitions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_AbilityDefinitionLibrary_Statics::PropPointers) < 2048);
// ********** End Class USOTS_AbilityDefinitionLibrary Property Definitions ************************
UObject* (*const Z_Construct_UClass_USOTS_AbilityDefinitionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_GAS_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_AbilityDefinitionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_AbilityDefinitionLibrary_Statics::ClassParams = {
	&USOTS_AbilityDefinitionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USOTS_AbilityDefinitionLibrary_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_AbilityDefinitionLibrary_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_AbilityDefinitionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_AbilityDefinitionLibrary_Statics::Class_MetaDataParams)
};
void USOTS_AbilityDefinitionLibrary::StaticRegisterNativesUSOTS_AbilityDefinitionLibrary()
{
}
UClass* Z_Construct_UClass_USOTS_AbilityDefinitionLibrary()
{
	if (!Z_Registration_Info_UClass_USOTS_AbilityDefinitionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_AbilityDefinitionLibrary.OuterSingleton, Z_Construct_UClass_USOTS_AbilityDefinitionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_AbilityDefinitionLibrary.OuterSingleton;
}
USOTS_AbilityDefinitionLibrary::USOTS_AbilityDefinitionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_AbilityDefinitionLibrary);
USOTS_AbilityDefinitionLibrary::~USOTS_AbilityDefinitionLibrary() {}
// ********** End Class USOTS_AbilityDefinitionLibrary *********************************************

// ********** Begin Class USOTS_AbilitySetDA *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_AbilitySetDA;
UClass* USOTS_AbilitySetDA::GetPrivateStaticClass()
{
	using TClass = USOTS_AbilitySetDA;
	if (!Z_Registration_Info_UClass_USOTS_AbilitySetDA.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_AbilitySetDA"),
			Z_Registration_Info_UClass_USOTS_AbilitySetDA.InnerSingleton,
			StaticRegisterNativesUSOTS_AbilitySetDA,
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
	return Z_Registration_Info_UClass_USOTS_AbilitySetDA.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_AbilitySetDA_NoRegister()
{
	return USOTS_AbilitySetDA::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_AbilitySetDA_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Data/SOTS_AbilityDataAssets.h" },
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityDataAssets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SetTag_MetaData[] = {
		{ "Category", "Ability Set" },
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityDataAssets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Abilities_MetaData[] = {
		{ "Category", "Ability Set" },
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityDataAssets.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_AbilitySetDA constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SetTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Abilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Abilities;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USOTS_AbilitySetDA constinit property declarations *************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_AbilitySetDA>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_AbilitySetDA_Statics

// ********** Begin Class USOTS_AbilitySetDA Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_AbilitySetDA_Statics::NewProp_SetTag = { "SetTag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_AbilitySetDA, SetTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SetTag_MetaData), NewProp_SetTag_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_AbilitySetDA_Statics::NewProp_Abilities_Inner = { "Abilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_F_SOTS_AbilitySetEntry, METADATA_PARAMS(0, nullptr) }; // 1465120689
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USOTS_AbilitySetDA_Statics::NewProp_Abilities = { "Abilities", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_AbilitySetDA, Abilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Abilities_MetaData), NewProp_Abilities_MetaData) }; // 1465120689
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USOTS_AbilitySetDA_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AbilitySetDA_Statics::NewProp_SetTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AbilitySetDA_Statics::NewProp_Abilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AbilitySetDA_Statics::NewProp_Abilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_AbilitySetDA_Statics::PropPointers) < 2048);
// ********** End Class USOTS_AbilitySetDA Property Definitions ************************************
UObject* (*const Z_Construct_UClass_USOTS_AbilitySetDA_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_GAS_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_AbilitySetDA_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_AbilitySetDA_Statics::ClassParams = {
	&USOTS_AbilitySetDA::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USOTS_AbilitySetDA_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_AbilitySetDA_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_AbilitySetDA_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_AbilitySetDA_Statics::Class_MetaDataParams)
};
void USOTS_AbilitySetDA::StaticRegisterNativesUSOTS_AbilitySetDA()
{
}
UClass* Z_Construct_UClass_USOTS_AbilitySetDA()
{
	if (!Z_Registration_Info_UClass_USOTS_AbilitySetDA.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_AbilitySetDA.OuterSingleton, Z_Construct_UClass_USOTS_AbilitySetDA_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_AbilitySetDA.OuterSingleton;
}
USOTS_AbilitySetDA::USOTS_AbilitySetDA(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_AbilitySetDA);
USOTS_AbilitySetDA::~USOTS_AbilitySetDA() {}
// ********** End Class USOTS_AbilitySetDA *********************************************************

// ********** Begin Class USOTS_AbilityMetadataDA **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_AbilityMetadataDA;
UClass* USOTS_AbilityMetadataDA::GetPrivateStaticClass()
{
	using TClass = USOTS_AbilityMetadataDA;
	if (!Z_Registration_Info_UClass_USOTS_AbilityMetadataDA.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_AbilityMetadataDA"),
			Z_Registration_Info_UClass_USOTS_AbilityMetadataDA.InnerSingleton,
			StaticRegisterNativesUSOTS_AbilityMetadataDA,
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
	return Z_Registration_Info_UClass_USOTS_AbilityMetadataDA.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_AbilityMetadataDA_NoRegister()
{
	return USOTS_AbilityMetadataDA::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_AbilityMetadataDA_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Data/SOTS_AbilityDataAssets.h" },
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityDataAssets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "Metadata" },
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityDataAssets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShortDescription_MetaData[] = {
		{ "Category", "Metadata" },
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityDataAssets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LongDescription_MetaData[] = {
		{ "Category", "Metadata" },
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityDataAssets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "Category", "Metadata" },
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityDataAssets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryTag_MetaData[] = {
		{ "Category", "Metadata" },
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityDataAssets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortOrder_MetaData[] = {
		{ "Category", "Metadata" },
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityDataAssets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnlockHint_MetaData[] = {
		{ "Category", "Metadata" },
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityDataAssets.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_AbilityMetadataDA constinit property declarations ******************
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ShortDescription;
	static const UECodeGen_Private::FTextPropertyParams NewProp_LongDescription;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CategoryTag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SortOrder;
	static const UECodeGen_Private::FTextPropertyParams NewProp_UnlockHint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USOTS_AbilityMetadataDA constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_AbilityMetadataDA>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_AbilityMetadataDA_Statics

// ********** Begin Class USOTS_AbilityMetadataDA Property Definitions *****************************
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_USOTS_AbilityMetadataDA_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_AbilityMetadataDA, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_USOTS_AbilityMetadataDA_Statics::NewProp_ShortDescription = { "ShortDescription", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_AbilityMetadataDA, ShortDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShortDescription_MetaData), NewProp_ShortDescription_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_USOTS_AbilityMetadataDA_Statics::NewProp_LongDescription = { "LongDescription", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_AbilityMetadataDA, LongDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LongDescription_MetaData), NewProp_LongDescription_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USOTS_AbilityMetadataDA_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_AbilityMetadataDA, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_AbilityMetadataDA_Statics::NewProp_CategoryTag = { "CategoryTag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_AbilityMetadataDA, CategoryTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryTag_MetaData), NewProp_CategoryTag_MetaData) }; // 517357616
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USOTS_AbilityMetadataDA_Statics::NewProp_SortOrder = { "SortOrder", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_AbilityMetadataDA, SortOrder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortOrder_MetaData), NewProp_SortOrder_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_USOTS_AbilityMetadataDA_Statics::NewProp_UnlockHint = { "UnlockHint", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_AbilityMetadataDA, UnlockHint), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnlockHint_MetaData), NewProp_UnlockHint_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USOTS_AbilityMetadataDA_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AbilityMetadataDA_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AbilityMetadataDA_Statics::NewProp_ShortDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AbilityMetadataDA_Statics::NewProp_LongDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AbilityMetadataDA_Statics::NewProp_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AbilityMetadataDA_Statics::NewProp_CategoryTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AbilityMetadataDA_Statics::NewProp_SortOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AbilityMetadataDA_Statics::NewProp_UnlockHint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_AbilityMetadataDA_Statics::PropPointers) < 2048);
// ********** End Class USOTS_AbilityMetadataDA Property Definitions *******************************
UObject* (*const Z_Construct_UClass_USOTS_AbilityMetadataDA_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_GAS_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_AbilityMetadataDA_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_AbilityMetadataDA_Statics::ClassParams = {
	&USOTS_AbilityMetadataDA::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USOTS_AbilityMetadataDA_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_AbilityMetadataDA_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_AbilityMetadataDA_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_AbilityMetadataDA_Statics::Class_MetaDataParams)
};
void USOTS_AbilityMetadataDA::StaticRegisterNativesUSOTS_AbilityMetadataDA()
{
}
UClass* Z_Construct_UClass_USOTS_AbilityMetadataDA()
{
	if (!Z_Registration_Info_UClass_USOTS_AbilityMetadataDA.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_AbilityMetadataDA.OuterSingleton, Z_Construct_UClass_USOTS_AbilityMetadataDA_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_AbilityMetadataDA.OuterSingleton;
}
USOTS_AbilityMetadataDA::USOTS_AbilityMetadataDA(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_AbilityMetadataDA);
USOTS_AbilityMetadataDA::~USOTS_AbilityMetadataDA() {}
// ********** End Class USOTS_AbilityMetadataDA ****************************************************

// ********** Begin Class USOTS_AbilityCueDA *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_AbilityCueDA;
UClass* USOTS_AbilityCueDA::GetPrivateStaticClass()
{
	using TClass = USOTS_AbilityCueDA;
	if (!Z_Registration_Info_UClass_USOTS_AbilityCueDA.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_AbilityCueDA"),
			Z_Registration_Info_UClass_USOTS_AbilityCueDA.InnerSingleton,
			StaticRegisterNativesUSOTS_AbilityCueDA,
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
	return Z_Registration_Info_UClass_USOTS_AbilityCueDA.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_AbilityCueDA_NoRegister()
{
	return USOTS_AbilityCueDA::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_AbilityCueDA_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Data/SOTS_AbilityDataAssets.h" },
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityDataAssets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CueTag_MetaData[] = {
		{ "Category", "Cue" },
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityDataAssets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartVFX_MetaData[] = {
		{ "Category", "Cue" },
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityDataAssets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoopVFX_MetaData[] = {
		{ "Category", "Cue" },
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityDataAssets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndVFX_MetaData[] = {
		{ "Category", "Cue" },
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityDataAssets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartSFX_MetaData[] = {
		{ "Category", "Cue" },
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityDataAssets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoopSFX_MetaData[] = {
		{ "Category", "Cue" },
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityDataAssets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndSFX_MetaData[] = {
		{ "Category", "Cue" },
		{ "ModuleRelativePath", "Public/Data/SOTS_AbilityDataAssets.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_AbilityCueDA constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_CueTag;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_StartVFX;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LoopVFX;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_EndVFX;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_StartSFX;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LoopSFX;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_EndSFX;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USOTS_AbilityCueDA constinit property declarations *************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_AbilityCueDA>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_AbilityCueDA_Statics

// ********** Begin Class USOTS_AbilityCueDA Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_AbilityCueDA_Statics::NewProp_CueTag = { "CueTag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_AbilityCueDA, CueTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CueTag_MetaData), NewProp_CueTag_MetaData) }; // 517357616
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USOTS_AbilityCueDA_Statics::NewProp_StartVFX = { "StartVFX", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_AbilityCueDA, StartVFX), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartVFX_MetaData), NewProp_StartVFX_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USOTS_AbilityCueDA_Statics::NewProp_LoopVFX = { "LoopVFX", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_AbilityCueDA, LoopVFX), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoopVFX_MetaData), NewProp_LoopVFX_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USOTS_AbilityCueDA_Statics::NewProp_EndVFX = { "EndVFX", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_AbilityCueDA, EndVFX), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndVFX_MetaData), NewProp_EndVFX_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USOTS_AbilityCueDA_Statics::NewProp_StartSFX = { "StartSFX", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_AbilityCueDA, StartSFX), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartSFX_MetaData), NewProp_StartSFX_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USOTS_AbilityCueDA_Statics::NewProp_LoopSFX = { "LoopSFX", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_AbilityCueDA, LoopSFX), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoopSFX_MetaData), NewProp_LoopSFX_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USOTS_AbilityCueDA_Statics::NewProp_EndSFX = { "EndSFX", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_AbilityCueDA, EndSFX), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndSFX_MetaData), NewProp_EndSFX_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USOTS_AbilityCueDA_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AbilityCueDA_Statics::NewProp_CueTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AbilityCueDA_Statics::NewProp_StartVFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AbilityCueDA_Statics::NewProp_LoopVFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AbilityCueDA_Statics::NewProp_EndVFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AbilityCueDA_Statics::NewProp_StartSFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AbilityCueDA_Statics::NewProp_LoopSFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AbilityCueDA_Statics::NewProp_EndSFX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_AbilityCueDA_Statics::PropPointers) < 2048);
// ********** End Class USOTS_AbilityCueDA Property Definitions ************************************
UObject* (*const Z_Construct_UClass_USOTS_AbilityCueDA_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_GAS_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_AbilityCueDA_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_AbilityCueDA_Statics::ClassParams = {
	&USOTS_AbilityCueDA::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USOTS_AbilityCueDA_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_AbilityCueDA_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_AbilityCueDA_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_AbilityCueDA_Statics::Class_MetaDataParams)
};
void USOTS_AbilityCueDA::StaticRegisterNativesUSOTS_AbilityCueDA()
{
}
UClass* Z_Construct_UClass_USOTS_AbilityCueDA()
{
	if (!Z_Registration_Info_UClass_USOTS_AbilityCueDA.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_AbilityCueDA.OuterSingleton, Z_Construct_UClass_USOTS_AbilityCueDA_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_AbilityCueDA.OuterSingleton;
}
USOTS_AbilityCueDA::USOTS_AbilityCueDA(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_AbilityCueDA);
USOTS_AbilityCueDA::~USOTS_AbilityCueDA() {}
// ********** End Class USOTS_AbilityCueDA *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Data_SOTS_AbilityDataAssets_h__Script_SOTS_GAS_Plugin_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ F_SOTS_AbilitySetEntry::StaticStruct, Z_Construct_UScriptStruct_F_SOTS_AbilitySetEntry_Statics::NewStructOps, TEXT("_SOTS_AbilitySetEntry"),&Z_Registration_Info_UScriptStruct_F_SOTS_AbilitySetEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(F_SOTS_AbilitySetEntry), 1465120689U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_AbilityDefinitionDA, USOTS_AbilityDefinitionDA::StaticClass, TEXT("USOTS_AbilityDefinitionDA"), &Z_Registration_Info_UClass_USOTS_AbilityDefinitionDA, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_AbilityDefinitionDA), 2136283390U) },
		{ Z_Construct_UClass_USOTS_AbilityDefinitionLibrary, USOTS_AbilityDefinitionLibrary::StaticClass, TEXT("USOTS_AbilityDefinitionLibrary"), &Z_Registration_Info_UClass_USOTS_AbilityDefinitionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_AbilityDefinitionLibrary), 144052812U) },
		{ Z_Construct_UClass_USOTS_AbilitySetDA, USOTS_AbilitySetDA::StaticClass, TEXT("USOTS_AbilitySetDA"), &Z_Registration_Info_UClass_USOTS_AbilitySetDA, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_AbilitySetDA), 942641873U) },
		{ Z_Construct_UClass_USOTS_AbilityMetadataDA, USOTS_AbilityMetadataDA::StaticClass, TEXT("USOTS_AbilityMetadataDA"), &Z_Registration_Info_UClass_USOTS_AbilityMetadataDA, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_AbilityMetadataDA), 153284570U) },
		{ Z_Construct_UClass_USOTS_AbilityCueDA, USOTS_AbilityCueDA::StaticClass, TEXT("USOTS_AbilityCueDA"), &Z_Registration_Info_UClass_USOTS_AbilityCueDA, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_AbilityCueDA), 1818796020U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Data_SOTS_AbilityDataAssets_h__Script_SOTS_GAS_Plugin_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Data_SOTS_AbilityDataAssets_h__Script_SOTS_GAS_Plugin_1667745600{
	TEXT("/Script/SOTS_GAS_Plugin"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Data_SOTS_AbilityDataAssets_h__Script_SOTS_GAS_Plugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Data_SOTS_AbilityDataAssets_h__Script_SOTS_GAS_Plugin_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Data_SOTS_AbilityDataAssets_h__Script_SOTS_GAS_Plugin_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Data_SOTS_AbilityDataAssets_h__Script_SOTS_GAS_Plugin_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
