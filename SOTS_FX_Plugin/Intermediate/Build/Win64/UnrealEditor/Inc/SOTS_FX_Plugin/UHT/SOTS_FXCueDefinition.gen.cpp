// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SOTS_FXCueDefinition.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_FXCueDefinition() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
SOTS_FX_PLUGIN_API UClass* Z_Construct_UClass_USOTS_FXCueDefinition();
SOTS_FX_PLUGIN_API UClass* Z_Construct_UClass_USOTS_FXCueDefinition_NoRegister();
UPackage* Z_Construct_UPackage__Script_SOTS_FX_Plugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USOTS_FXCueDefinition ****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_FXCueDefinition;
UClass* USOTS_FXCueDefinition::GetPrivateStaticClass()
{
	using TClass = USOTS_FXCueDefinition;
	if (!Z_Registration_Info_UClass_USOTS_FXCueDefinition.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_FXCueDefinition"),
			Z_Registration_Info_UClass_USOTS_FXCueDefinition.InnerSingleton,
			StaticRegisterNativesUSOTS_FXCueDefinition,
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
	return Z_Registration_Info_UClass_USOTS_FXCueDefinition.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_FXCueDefinition_NoRegister()
{
	return USOTS_FXCueDefinition::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_FXCueDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A single FX cue = VFX + SFX (+ optional camera shake) bound to a GameplayTag.\n */" },
#endif
		{ "IncludePath", "SOTS_FXCueDefinition.h" },
		{ "ModuleRelativePath", "Public/SOTS_FXCueDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A single FX cue = VFX + SFX (+ optional camera shake) bound to a GameplayTag." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CueTag_MetaData[] = {
		{ "Category", "FX" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tag used to request this cue (FX.Cue.Whatever)\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_FXCueDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tag used to request this cue (FX.Cue.Whatever)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[] = {
		{ "Category", "FX|Assets" },
		{ "ModuleRelativePath", "Public/SOTS_FXCueDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CascadeSystem_MetaData[] = {
		{ "Category", "FX|Assets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional legacy particle system support if you ever need it\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_FXCueDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional legacy particle system support if you ever need it" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[] = {
		{ "Category", "FX|Assets" },
		{ "ModuleRelativePath", "Public/SOTS_FXCueDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraShakeClass_MetaData[] = {
		{ "Category", "FX|Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional camera shake\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_FXCueDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional camera shake" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraShakeScale_MetaData[] = {
		{ "Category", "FX|Camera" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "CameraShakeClass != nullptr" },
		{ "ModuleRelativePath", "Public/SOTS_FXCueDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[] = {
		{ "Category", "FX|Behavior" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether this cue is looping (so systems know not to auto-destroy)\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_FXCueDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether this cue is looping (so systems know not to auto-destroy)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoDestroy_MetaData[] = {
		{ "Category", "FX|Behavior" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Auto-destroy spawned components when FX finishes (for non-looping)\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_FXCueDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Auto-destroy spawned components when FX finishes (for non-looping)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_FXCueDefinition constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_CueTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CascadeSystem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CameraShakeClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraShakeScale;
	static void NewProp_bLooping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
	static void NewProp_bAutoDestroy_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USOTS_FXCueDefinition constinit property declarations **********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_FXCueDefinition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_FXCueDefinition_Statics

// ********** Begin Class USOTS_FXCueDefinition Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_FXCueDefinition_Statics::NewProp_CueTag = { "CueTag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_FXCueDefinition, CueTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CueTag_MetaData), NewProp_CueTag_MetaData) }; // 517357616
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USOTS_FXCueDefinition_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_FXCueDefinition, NiagaraSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraSystem_MetaData), NewProp_NiagaraSystem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USOTS_FXCueDefinition_Statics::NewProp_CascadeSystem = { "CascadeSystem", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_FXCueDefinition, CascadeSystem), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CascadeSystem_MetaData), NewProp_CascadeSystem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USOTS_FXCueDefinition_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_FXCueDefinition, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sound_MetaData), NewProp_Sound_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USOTS_FXCueDefinition_Statics::NewProp_CameraShakeClass = { "CameraShakeClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_FXCueDefinition, CameraShakeClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraShakeClass_MetaData), NewProp_CameraShakeClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USOTS_FXCueDefinition_Statics::NewProp_CameraShakeScale = { "CameraShakeScale", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_FXCueDefinition, CameraShakeScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraShakeScale_MetaData), NewProp_CameraShakeScale_MetaData) };
void Z_Construct_UClass_USOTS_FXCueDefinition_Statics::NewProp_bLooping_SetBit(void* Obj)
{
	((USOTS_FXCueDefinition*)Obj)->bLooping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USOTS_FXCueDefinition_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USOTS_FXCueDefinition), &Z_Construct_UClass_USOTS_FXCueDefinition_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLooping_MetaData), NewProp_bLooping_MetaData) };
void Z_Construct_UClass_USOTS_FXCueDefinition_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
{
	((USOTS_FXCueDefinition*)Obj)->bAutoDestroy = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USOTS_FXCueDefinition_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USOTS_FXCueDefinition), &Z_Construct_UClass_USOTS_FXCueDefinition_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoDestroy_MetaData), NewProp_bAutoDestroy_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USOTS_FXCueDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_FXCueDefinition_Statics::NewProp_CueTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_FXCueDefinition_Statics::NewProp_NiagaraSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_FXCueDefinition_Statics::NewProp_CascadeSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_FXCueDefinition_Statics::NewProp_Sound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_FXCueDefinition_Statics::NewProp_CameraShakeClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_FXCueDefinition_Statics::NewProp_CameraShakeScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_FXCueDefinition_Statics::NewProp_bLooping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_FXCueDefinition_Statics::NewProp_bAutoDestroy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_FXCueDefinition_Statics::PropPointers) < 2048);
// ********** End Class USOTS_FXCueDefinition Property Definitions *********************************
UObject* (*const Z_Construct_UClass_USOTS_FXCueDefinition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_FX_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_FXCueDefinition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_FXCueDefinition_Statics::ClassParams = {
	&USOTS_FXCueDefinition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USOTS_FXCueDefinition_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_FXCueDefinition_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_FXCueDefinition_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_FXCueDefinition_Statics::Class_MetaDataParams)
};
void USOTS_FXCueDefinition::StaticRegisterNativesUSOTS_FXCueDefinition()
{
}
UClass* Z_Construct_UClass_USOTS_FXCueDefinition()
{
	if (!Z_Registration_Info_UClass_USOTS_FXCueDefinition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_FXCueDefinition.OuterSingleton, Z_Construct_UClass_USOTS_FXCueDefinition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_FXCueDefinition.OuterSingleton;
}
USOTS_FXCueDefinition::USOTS_FXCueDefinition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_FXCueDefinition);
USOTS_FXCueDefinition::~USOTS_FXCueDefinition() {}
// ********** End Class USOTS_FXCueDefinition ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTS_FXCueDefinition_h__Script_SOTS_FX_Plugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_FXCueDefinition, USOTS_FXCueDefinition::StaticClass, TEXT("USOTS_FXCueDefinition"), &Z_Registration_Info_UClass_USOTS_FXCueDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_FXCueDefinition), 2089104318U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTS_FXCueDefinition_h__Script_SOTS_FX_Plugin_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTS_FXCueDefinition_h__Script_SOTS_FX_Plugin_3849153684{
	TEXT("/Script/SOTS_FX_Plugin"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTS_FXCueDefinition_h__Script_SOTS_FX_Plugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTS_FXCueDefinition_h__Script_SOTS_FX_Plugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
