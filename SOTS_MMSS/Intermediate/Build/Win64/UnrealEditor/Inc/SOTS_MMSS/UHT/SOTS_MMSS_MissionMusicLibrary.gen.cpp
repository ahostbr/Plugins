// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SOTS_MMSS_MissionMusicLibrary.h"
#include "SOTS_MMSS_Types.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_MMSS_MissionMusicLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
SOTS_MMSS_API UClass* Z_Construct_UClass_USOTS_MissionMusicLibrary();
SOTS_MMSS_API UClass* Z_Construct_UClass_USOTS_MissionMusicLibrary_NoRegister();
SOTS_MMSS_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_MissionMusicSet();
UPackage* Z_Construct_UPackage__Script_SOTS_MMSS();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USOTS_MissionMusicLibrary ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_MissionMusicLibrary;
UClass* USOTS_MissionMusicLibrary::GetPrivateStaticClass()
{
	using TClass = USOTS_MissionMusicLibrary;
	if (!Z_Registration_Info_UClass_USOTS_MissionMusicLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_MissionMusicLibrary"),
			Z_Registration_Info_UClass_USOTS_MissionMusicLibrary.InnerSingleton,
			StaticRegisterNativesUSOTS_MissionMusicLibrary,
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
	return Z_Registration_Info_UClass_USOTS_MissionMusicLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_MissionMusicLibrary_NoRegister()
{
	return USOTS_MissionMusicLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_MissionMusicLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Mission-scoped music library that maps mission ids to music sets.\n * Tracks are keyed by gameplay tags so other systems can refer to them\n * without hard dependencies on concrete assets.\n */" },
#endif
		{ "IncludePath", "SOTS_MMSS_MissionMusicLibrary.h" },
		{ "ModuleRelativePath", "Public/SOTS_MMSS_MissionMusicLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mission-scoped music library that maps mission ids to music sets.\nTracks are keyed by gameplay tags so other systems can refer to them\nwithout hard dependencies on concrete assets." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MissionMusic_MetaData[] = {
		{ "Category", "SOTS|Music" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// MissionId -> FSOTS_MissionMusicSet\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MMSS_MissionMusicLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MissionId -> FSOTS_MissionMusicSet" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMusicSet_MetaData[] = {
		{ "Category", "SOTS|Music" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Fallback if a mission key is not found.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MMSS_MissionMusicLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fallback if a mission key is not found." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_MissionMusicLibrary constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_MissionMusic_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MissionMusic_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MissionMusic;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultMusicSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USOTS_MissionMusicLibrary constinit property declarations ******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_MissionMusicLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_MissionMusicLibrary_Statics

// ********** Begin Class USOTS_MissionMusicLibrary Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_MissionMusicLibrary_Statics::NewProp_MissionMusic_ValueProp = { "MissionMusic", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSOTS_MissionMusicSet, METADATA_PARAMS(0, nullptr) }; // 818525697
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USOTS_MissionMusicLibrary_Statics::NewProp_MissionMusic_Key_KeyProp = { "MissionMusic_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USOTS_MissionMusicLibrary_Statics::NewProp_MissionMusic = { "MissionMusic", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_MissionMusicLibrary, MissionMusic), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MissionMusic_MetaData), NewProp_MissionMusic_MetaData) }; // 818525697
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_MissionMusicLibrary_Statics::NewProp_DefaultMusicSet = { "DefaultMusicSet", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_MissionMusicLibrary, DefaultMusicSet), Z_Construct_UScriptStruct_FSOTS_MissionMusicSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMusicSet_MetaData), NewProp_DefaultMusicSet_MetaData) }; // 818525697
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USOTS_MissionMusicLibrary_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MissionMusicLibrary_Statics::NewProp_MissionMusic_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MissionMusicLibrary_Statics::NewProp_MissionMusic_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MissionMusicLibrary_Statics::NewProp_MissionMusic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MissionMusicLibrary_Statics::NewProp_DefaultMusicSet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_MissionMusicLibrary_Statics::PropPointers) < 2048);
// ********** End Class USOTS_MissionMusicLibrary Property Definitions *****************************
UObject* (*const Z_Construct_UClass_USOTS_MissionMusicLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_MMSS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_MissionMusicLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_MissionMusicLibrary_Statics::ClassParams = {
	&USOTS_MissionMusicLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USOTS_MissionMusicLibrary_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_MissionMusicLibrary_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_MissionMusicLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_MissionMusicLibrary_Statics::Class_MetaDataParams)
};
void USOTS_MissionMusicLibrary::StaticRegisterNativesUSOTS_MissionMusicLibrary()
{
}
UClass* Z_Construct_UClass_USOTS_MissionMusicLibrary()
{
	if (!Z_Registration_Info_UClass_USOTS_MissionMusicLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_MissionMusicLibrary.OuterSingleton, Z_Construct_UClass_USOTS_MissionMusicLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_MissionMusicLibrary.OuterSingleton;
}
USOTS_MissionMusicLibrary::USOTS_MissionMusicLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_MissionMusicLibrary);
USOTS_MissionMusicLibrary::~USOTS_MissionMusicLibrary() {}
// ********** End Class USOTS_MissionMusicLibrary **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MMSS_Source_SOTS_MMSS_Public_SOTS_MMSS_MissionMusicLibrary_h__Script_SOTS_MMSS_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_MissionMusicLibrary, USOTS_MissionMusicLibrary::StaticClass, TEXT("USOTS_MissionMusicLibrary"), &Z_Registration_Info_UClass_USOTS_MissionMusicLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_MissionMusicLibrary), 3099432212U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MMSS_Source_SOTS_MMSS_Public_SOTS_MMSS_MissionMusicLibrary_h__Script_SOTS_MMSS_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MMSS_Source_SOTS_MMSS_Public_SOTS_MMSS_MissionMusicLibrary_h__Script_SOTS_MMSS_1458309044{
	TEXT("/Script/SOTS_MMSS"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MMSS_Source_SOTS_MMSS_Public_SOTS_MMSS_MissionMusicLibrary_h__Script_SOTS_MMSS_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MMSS_Source_SOTS_MMSS_Public_SOTS_MMSS_MissionMusicLibrary_h__Script_SOTS_MMSS_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
