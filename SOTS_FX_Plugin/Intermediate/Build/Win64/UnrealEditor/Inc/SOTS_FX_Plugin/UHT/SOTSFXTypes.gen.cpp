// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SOTSFXTypes.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTSFXTypes() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
SOTS_FX_PLUGIN_API UEnum* Z_Construct_UEnum_SOTS_FX_Plugin_ESOTS_FXSpawnSpace();
SOTS_FX_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SOTS_FX_Plugin_SOTS_OnFXTriggered__DelegateSignature();
SOTS_FX_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_FXActiveCounts();
SOTS_FX_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_FXContext();
SOTS_FX_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_FXDefinition();
SOTS_FX_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_FXHandle();
SOTS_FX_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_FXResolvedRequest();
UPackage* Z_Construct_UPackage__Script_SOTS_FX_Plugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ESOTS_FXSpawnSpace ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESOTS_FXSpawnSpace;
static UEnum* ESOTS_FXSpawnSpace_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESOTS_FXSpawnSpace.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESOTS_FXSpawnSpace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SOTS_FX_Plugin_ESOTS_FXSpawnSpace, (UObject*)Z_Construct_UPackage__Script_SOTS_FX_Plugin(), TEXT("ESOTS_FXSpawnSpace"));
	}
	return Z_Registration_Info_UEnum_ESOTS_FXSpawnSpace.OuterSingleton;
}
template<> SOTS_FX_PLUGIN_NON_ATTRIBUTED_API UEnum* StaticEnum<ESOTS_FXSpawnSpace>()
{
	return ESOTS_FXSpawnSpace_StaticEnum();
}
struct Z_Construct_UEnum_SOTS_FX_Plugin_ESOTS_FXSpawnSpace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AttachToActor.DisplayName", "Attach To Actor" },
		{ "AttachToActor.Name", "ESOTS_FXSpawnSpace::AttachToActor" },
		{ "AttachToComponent.DisplayName", "Attach To Component" },
		{ "AttachToComponent.Name", "ESOTS_FXSpawnSpace::AttachToComponent" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Where an FX job expects to be applied.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTSFXTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Where an FX job expects to be applied." },
#endif
		{ "World.DisplayName", "World" },
		{ "World.Name", "ESOTS_FXSpawnSpace::World" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESOTS_FXSpawnSpace::World", (int64)ESOTS_FXSpawnSpace::World },
		{ "ESOTS_FXSpawnSpace::AttachToActor", (int64)ESOTS_FXSpawnSpace::AttachToActor },
		{ "ESOTS_FXSpawnSpace::AttachToComponent", (int64)ESOTS_FXSpawnSpace::AttachToComponent },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SOTS_FX_Plugin_ESOTS_FXSpawnSpace_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SOTS_FX_Plugin_ESOTS_FXSpawnSpace_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SOTS_FX_Plugin,
	nullptr,
	"ESOTS_FXSpawnSpace",
	"ESOTS_FXSpawnSpace",
	Z_Construct_UEnum_SOTS_FX_Plugin_ESOTS_FXSpawnSpace_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SOTS_FX_Plugin_ESOTS_FXSpawnSpace_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SOTS_FX_Plugin_ESOTS_FXSpawnSpace_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SOTS_FX_Plugin_ESOTS_FXSpawnSpace_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SOTS_FX_Plugin_ESOTS_FXSpawnSpace()
{
	if (!Z_Registration_Info_UEnum_ESOTS_FXSpawnSpace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESOTS_FXSpawnSpace.InnerSingleton, Z_Construct_UEnum_SOTS_FX_Plugin_ESOTS_FXSpawnSpace_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESOTS_FXSpawnSpace.InnerSingleton;
}
// ********** End Enum ESOTS_FXSpawnSpace **********************************************************

// ********** Begin ScriptStruct FSOTS_FXDefinition ************************************************
struct Z_Construct_UScriptStruct_FSOTS_FXDefinition_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_FXDefinition); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_FXDefinition); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Authored FX definition used by lightweight libraries to map\n * GameplayTags to Niagara / Sound assets.\n */" },
#endif
		{ "ModuleRelativePath", "Public/SOTSFXTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Authored FX definition used by lightweight libraries to map\nGameplayTags to Niagara / Sound assets." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FXTag_MetaData[] = {
		{ "Category", "SOTS|FX" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tag that identifies this FX (e.g. FX.Stealth.Tier.1, FX.Mission.Start).\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTSFXTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tag that identifies this FX (e.g. FX.Stealth.Tier.1, FX.Mission.Start)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[] = {
		{ "Category", "SOTS|FX" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional Niagara and sound assets (soft refs so we do not force-load).\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTSFXTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional Niagara and sound assets (soft refs so we do not force-load)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[] = {
		{ "Category", "SOTS|FX" },
		{ "ModuleRelativePath", "Public/SOTSFXTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSpace_MetaData[] = {
		{ "Category", "SOTS|FX" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Default spawn space and scale.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTSFXTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default spawn space and scale." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultScale_MetaData[] = {
		{ "Category", "SOTS|FX" },
		{ "ModuleRelativePath", "Public/SOTSFXTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_FXDefinition constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_FXTag;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_NiagaraSystem;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Sound;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultSpace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultSpace;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_FXDefinition constinit property declarations ******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_FXDefinition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_FXDefinition_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_FXDefinition;
class UScriptStruct* FSOTS_FXDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_FXDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_FXDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_FXDefinition, (UObject*)Z_Construct_UPackage__Script_SOTS_FX_Plugin(), TEXT("SOTS_FXDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_FXDefinition.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_FXDefinition Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_FXDefinition_Statics::NewProp_FXTag = { "FXTag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_FXDefinition, FXTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FXTag_MetaData), NewProp_FXTag_MetaData) }; // 517357616
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSOTS_FXDefinition_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_FXDefinition, NiagaraSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraSystem_MetaData), NewProp_NiagaraSystem_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSOTS_FXDefinition_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_FXDefinition, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sound_MetaData), NewProp_Sound_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSOTS_FXDefinition_Statics::NewProp_DefaultSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSOTS_FXDefinition_Statics::NewProp_DefaultSpace = { "DefaultSpace", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_FXDefinition, DefaultSpace), Z_Construct_UEnum_SOTS_FX_Plugin_ESOTS_FXSpawnSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSpace_MetaData), NewProp_DefaultSpace_MetaData) }; // 58292107
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_FXDefinition_Statics::NewProp_DefaultScale = { "DefaultScale", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_FXDefinition, DefaultScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultScale_MetaData), NewProp_DefaultScale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_FXDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_FXDefinition_Statics::NewProp_FXTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_FXDefinition_Statics::NewProp_NiagaraSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_FXDefinition_Statics::NewProp_Sound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_FXDefinition_Statics::NewProp_DefaultSpace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_FXDefinition_Statics::NewProp_DefaultSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_FXDefinition_Statics::NewProp_DefaultScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_FXDefinition_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_FXDefinition Property Definitions *****************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_FXDefinition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_FX_Plugin,
	nullptr,
	&NewStructOps,
	"SOTS_FXDefinition",
	Z_Construct_UScriptStruct_FSOTS_FXDefinition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_FXDefinition_Statics::PropPointers),
	sizeof(FSOTS_FXDefinition),
	alignof(FSOTS_FXDefinition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_FXDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_FXDefinition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_FXDefinition()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_FXDefinition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_FXDefinition.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_FXDefinition_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_FXDefinition.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_FXDefinition **************************************************

// ********** Begin ScriptStruct FSOTS_FXContext ***************************************************
struct Z_Construct_UScriptStruct_FSOTS_FXContext_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_FXContext); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_FXContext); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Context used when requesting an FX cue for the older pooled\n * FX manager path. This stays for backward compatibility.\n */" },
#endif
		{ "ModuleRelativePath", "Public/SOTSFXTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Context used when requesting an FX cue for the older pooled\nFX manager path. This stays for backward compatibility." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "FX" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Where to spawn if not attaching\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTSFXTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Where to spawn if not attaching" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "FX" },
		{ "ModuleRelativePath", "Public/SOTSFXTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "FX" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Uniform scale for spawned FX\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTSFXTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Uniform scale for spawned FX" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachComponent_MetaData[] = {
		{ "Category", "FX" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional attachment\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SOTSFXTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional attachment" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachSocketName_MetaData[] = {
		{ "Category", "FX" },
		{ "ModuleRelativePath", "Public/SOTSFXTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAttach_MetaData[] = {
		{ "Category", "FX" },
		{ "ModuleRelativePath", "Public/SOTSFXTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFollowRotation_MetaData[] = {
		{ "Category", "FX" },
		{ "ModuleRelativePath", "Public/SOTSFXTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[] = {
		{ "Category", "FX" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gameplay context \xe2\x80\x93 plain actors, nothing GAS-specific\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTSFXTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gameplay context \xe2\x80\x93 plain actors, nothing GAS-specific" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "Category", "FX" },
		{ "ModuleRelativePath", "Public/SOTSFXTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtraTags_MetaData[] = {
		{ "Category", "FX" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Extra semantic info (surface, damage type, etc) for future expansion\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTSFXTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Extra semantic info (surface, damage type, etc) for future expansion" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_FXContext constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachComponent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AttachSocketName;
	static void NewProp_bAttach_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttach;
	static void NewProp_bFollowRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFollowRotation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExtraTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_FXContext constinit property declarations *********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_FXContext>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_FXContext_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_FXContext;
class UScriptStruct* FSOTS_FXContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_FXContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_FXContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_FXContext, (UObject*)Z_Construct_UPackage__Script_SOTS_FX_Plugin(), TEXT("SOTS_FXContext"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_FXContext.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_FXContext Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_FXContext_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_FXContext, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_FXContext_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_FXContext, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_FXContext_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_FXContext, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSOTS_FXContext_Statics::NewProp_AttachComponent = { "AttachComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_FXContext, AttachComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachComponent_MetaData), NewProp_AttachComponent_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSOTS_FXContext_Statics::NewProp_AttachSocketName = { "AttachSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_FXContext, AttachSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachSocketName_MetaData), NewProp_AttachSocketName_MetaData) };
void Z_Construct_UScriptStruct_FSOTS_FXContext_Statics::NewProp_bAttach_SetBit(void* Obj)
{
	((FSOTS_FXContext*)Obj)->bAttach = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSOTS_FXContext_Statics::NewProp_bAttach = { "bAttach", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSOTS_FXContext), &Z_Construct_UScriptStruct_FSOTS_FXContext_Statics::NewProp_bAttach_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAttach_MetaData), NewProp_bAttach_MetaData) };
void Z_Construct_UScriptStruct_FSOTS_FXContext_Statics::NewProp_bFollowRotation_SetBit(void* Obj)
{
	((FSOTS_FXContext*)Obj)->bFollowRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSOTS_FXContext_Statics::NewProp_bFollowRotation = { "bFollowRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSOTS_FXContext), &Z_Construct_UScriptStruct_FSOTS_FXContext_Statics::NewProp_bFollowRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFollowRotation_MetaData), NewProp_bFollowRotation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSOTS_FXContext_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_FXContext, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instigator_MetaData), NewProp_Instigator_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSOTS_FXContext_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_FXContext, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_FXContext_Statics::NewProp_ExtraTags = { "ExtraTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_FXContext, ExtraTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtraTags_MetaData), NewProp_ExtraTags_MetaData) }; // 3438578166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_FXContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_FXContext_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_FXContext_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_FXContext_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_FXContext_Statics::NewProp_AttachComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_FXContext_Statics::NewProp_AttachSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_FXContext_Statics::NewProp_bAttach,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_FXContext_Statics::NewProp_bFollowRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_FXContext_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_FXContext_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_FXContext_Statics::NewProp_ExtraTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_FXContext_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_FXContext Property Definitions ********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_FXContext_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_FX_Plugin,
	nullptr,
	&NewStructOps,
	"SOTS_FXContext",
	Z_Construct_UScriptStruct_FSOTS_FXContext_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_FXContext_Statics::PropPointers),
	sizeof(FSOTS_FXContext),
	alignof(FSOTS_FXContext),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_FXContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_FXContext_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_FXContext()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_FXContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_FXContext.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_FXContext_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_FXContext.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_FXContext *****************************************************

// ********** Begin ScriptStruct FSOTS_FXHandle ****************************************************
struct Z_Construct_UScriptStruct_FSOTS_FXHandle_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_FXHandle); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_FXHandle); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Handle to spawned FX so you can stop / fade / debug later.\n */" },
#endif
		{ "ModuleRelativePath", "Public/SOTSFXTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handle to spawned FX so you can stop / fade / debug later." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraComponent_MetaData[] = {
		{ "Category", "FX" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SOTSFXTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[] = {
		{ "Category", "FX" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SOTSFXTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CueTag_MetaData[] = {
		{ "Category", "FX" },
		{ "ModuleRelativePath", "Public/SOTSFXTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_FXHandle constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CueTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_FXHandle constinit property declarations **********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_FXHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_FXHandle_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_FXHandle;
class UScriptStruct* FSOTS_FXHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_FXHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_FXHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_FXHandle, (UObject*)Z_Construct_UPackage__Script_SOTS_FX_Plugin(), TEXT("SOTS_FXHandle"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_FXHandle.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_FXHandle Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSOTS_FXHandle_Statics::NewProp_NiagaraComponent = { "NiagaraComponent", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_FXHandle, NiagaraComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraComponent_MetaData), NewProp_NiagaraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSOTS_FXHandle_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_FXHandle, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioComponent_MetaData), NewProp_AudioComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_FXHandle_Statics::NewProp_CueTag = { "CueTag", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_FXHandle, CueTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CueTag_MetaData), NewProp_CueTag_MetaData) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_FXHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_FXHandle_Statics::NewProp_NiagaraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_FXHandle_Statics::NewProp_AudioComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_FXHandle_Statics::NewProp_CueTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_FXHandle_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_FXHandle Property Definitions *********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_FXHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_FX_Plugin,
	nullptr,
	&NewStructOps,
	"SOTS_FXHandle",
	Z_Construct_UScriptStruct_FSOTS_FXHandle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_FXHandle_Statics::PropPointers),
	sizeof(FSOTS_FXHandle),
	alignof(FSOTS_FXHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_FXHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_FXHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_FXHandle()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_FXHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_FXHandle.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_FXHandle_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_FXHandle.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_FXHandle ******************************************************

// ********** Begin ScriptStruct FSOTS_FXActiveCounts **********************************************
struct Z_Construct_UScriptStruct_FSOTS_FXActiveCounts_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_FXActiveCounts); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_FXActiveCounts); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Debug info about how many FX components are currently active.\n */" },
#endif
		{ "ModuleRelativePath", "Public/SOTSFXTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Debug info about how many FX components are currently active." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveNiagara_MetaData[] = {
		{ "Category", "FX|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Number of Niagara components currently active\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTSFXTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of Niagara components currently active" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveAudio_MetaData[] = {
		{ "Category", "FX|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Number of Audio components currently playing\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTSFXTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of Audio components currently playing" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_FXActiveCounts constinit property declarations **************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActiveNiagara;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActiveAudio;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_FXActiveCounts constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_FXActiveCounts>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_FXActiveCounts_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_FXActiveCounts;
class UScriptStruct* FSOTS_FXActiveCounts::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_FXActiveCounts.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_FXActiveCounts.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_FXActiveCounts, (UObject*)Z_Construct_UPackage__Script_SOTS_FX_Plugin(), TEXT("SOTS_FXActiveCounts"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_FXActiveCounts.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_FXActiveCounts Property Definitions *************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSOTS_FXActiveCounts_Statics::NewProp_ActiveNiagara = { "ActiveNiagara", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_FXActiveCounts, ActiveNiagara), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveNiagara_MetaData), NewProp_ActiveNiagara_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSOTS_FXActiveCounts_Statics::NewProp_ActiveAudio = { "ActiveAudio", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_FXActiveCounts, ActiveAudio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveAudio_MetaData), NewProp_ActiveAudio_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_FXActiveCounts_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_FXActiveCounts_Statics::NewProp_ActiveNiagara,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_FXActiveCounts_Statics::NewProp_ActiveAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_FXActiveCounts_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_FXActiveCounts Property Definitions ***************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_FXActiveCounts_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_FX_Plugin,
	nullptr,
	&NewStructOps,
	"SOTS_FXActiveCounts",
	Z_Construct_UScriptStruct_FSOTS_FXActiveCounts_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_FXActiveCounts_Statics::PropPointers),
	sizeof(FSOTS_FXActiveCounts),
	alignof(FSOTS_FXActiveCounts),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_FXActiveCounts_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_FXActiveCounts_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_FXActiveCounts()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_FXActiveCounts.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_FXActiveCounts.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_FXActiveCounts_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_FXActiveCounts.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_FXActiveCounts ************************************************

// ********** Begin ScriptStruct FSOTS_FXResolvedRequest *******************************************
struct Z_Construct_UScriptStruct_FSOTS_FXResolvedRequest_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_FXResolvedRequest); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_FXResolvedRequest); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Resolved runtime FX job payload broadcast by the global FX manager.\n * Blueprint listeners can spawn Niagara / play audio in response.\n */" },
#endif
		{ "ModuleRelativePath", "Public/SOTSFXTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resolved runtime FX job payload broadcast by the global FX manager.\nBlueprint listeners can spawn Niagara / play audio in response." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FXTag_MetaData[] = {
		{ "Category", "SOTS|FX" },
		{ "ModuleRelativePath", "Public/SOTSFXTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "SOTS|FX" },
		{ "ModuleRelativePath", "Public/SOTSFXTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "SOTS|FX" },
		{ "ModuleRelativePath", "Public/SOTSFXTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnSpace_MetaData[] = {
		{ "Category", "SOTS|FX" },
		{ "ModuleRelativePath", "Public/SOTSFXTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[] = {
		{ "Category", "SOTS|FX" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Who triggered it & who it targets (optional)\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTSFXTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Who triggered it & who it targets (optional)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "Category", "SOTS|FX" },
		{ "ModuleRelativePath", "Public/SOTSFXTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachComponent_MetaData[] = {
		{ "Category", "SOTS|FX" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional attach target.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTSFXTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional attach target." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachSocketName_MetaData[] = {
		{ "Category", "SOTS|FX" },
		{ "ModuleRelativePath", "Public/SOTSFXTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "SOTS|FX" },
		{ "ModuleRelativePath", "Public/SOTSFXTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[] = {
		{ "Category", "SOTS|FX" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Resolved assets (can be null).\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTSFXTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resolved assets (can be null)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[] = {
		{ "Category", "SOTS|FX" },
		{ "ModuleRelativePath", "Public/SOTSFXTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_FXResolvedRequest constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_FXTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SpawnSpace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SpawnSpace;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_AttachComponent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AttachSocketName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_NiagaraSystem;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Sound;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_FXResolvedRequest constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_FXResolvedRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_FXResolvedRequest_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_FXResolvedRequest;
class UScriptStruct* FSOTS_FXResolvedRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_FXResolvedRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_FXResolvedRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_FXResolvedRequest, (UObject*)Z_Construct_UPackage__Script_SOTS_FX_Plugin(), TEXT("SOTS_FXResolvedRequest"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_FXResolvedRequest.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_FXResolvedRequest Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_FXResolvedRequest_Statics::NewProp_FXTag = { "FXTag", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_FXResolvedRequest, FXTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FXTag_MetaData), NewProp_FXTag_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_FXResolvedRequest_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_FXResolvedRequest, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_FXResolvedRequest_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_FXResolvedRequest, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSOTS_FXResolvedRequest_Statics::NewProp_SpawnSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSOTS_FXResolvedRequest_Statics::NewProp_SpawnSpace = { "SpawnSpace", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_FXResolvedRequest, SpawnSpace), Z_Construct_UEnum_SOTS_FX_Plugin_ESOTS_FXSpawnSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnSpace_MetaData), NewProp_SpawnSpace_MetaData) }; // 58292107
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FSOTS_FXResolvedRequest_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_FXResolvedRequest, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instigator_MetaData), NewProp_Instigator_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FSOTS_FXResolvedRequest_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_FXResolvedRequest, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FSOTS_FXResolvedRequest_Statics::NewProp_AttachComponent = { "AttachComponent", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_FXResolvedRequest, AttachComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachComponent_MetaData), NewProp_AttachComponent_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSOTS_FXResolvedRequest_Statics::NewProp_AttachSocketName = { "AttachSocketName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_FXResolvedRequest, AttachSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachSocketName_MetaData), NewProp_AttachSocketName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_FXResolvedRequest_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_FXResolvedRequest, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSOTS_FXResolvedRequest_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_FXResolvedRequest, NiagaraSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraSystem_MetaData), NewProp_NiagaraSystem_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSOTS_FXResolvedRequest_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_FXResolvedRequest, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sound_MetaData), NewProp_Sound_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_FXResolvedRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_FXResolvedRequest_Statics::NewProp_FXTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_FXResolvedRequest_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_FXResolvedRequest_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_FXResolvedRequest_Statics::NewProp_SpawnSpace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_FXResolvedRequest_Statics::NewProp_SpawnSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_FXResolvedRequest_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_FXResolvedRequest_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_FXResolvedRequest_Statics::NewProp_AttachComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_FXResolvedRequest_Statics::NewProp_AttachSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_FXResolvedRequest_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_FXResolvedRequest_Statics::NewProp_NiagaraSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_FXResolvedRequest_Statics::NewProp_Sound,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_FXResolvedRequest_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_FXResolvedRequest Property Definitions ************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_FXResolvedRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_FX_Plugin,
	nullptr,
	&NewStructOps,
	"SOTS_FXResolvedRequest",
	Z_Construct_UScriptStruct_FSOTS_FXResolvedRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_FXResolvedRequest_Statics::PropPointers),
	sizeof(FSOTS_FXResolvedRequest),
	alignof(FSOTS_FXResolvedRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_FXResolvedRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_FXResolvedRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_FXResolvedRequest()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_FXResolvedRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_FXResolvedRequest.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_FXResolvedRequest_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_FXResolvedRequest.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_FXResolvedRequest *********************************************

// ********** Begin Delegate FSOTS_OnFXTriggered ***************************************************
struct Z_Construct_UDelegateFunction_SOTS_FX_Plugin_SOTS_OnFXTriggered__DelegateSignature_Statics
{
	struct _Script_SOTS_FX_Plugin_eventSOTS_OnFXTriggered_Parms
	{
		FSOTS_FXResolvedRequest FXRequest;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SOTSFXTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FXRequest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FSOTS_OnFXTriggered constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_FXRequest;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FSOTS_OnFXTriggered constinit property declarations *********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FSOTS_OnFXTriggered Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SOTS_FX_Plugin_SOTS_OnFXTriggered__DelegateSignature_Statics::NewProp_FXRequest = { "FXRequest", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SOTS_FX_Plugin_eventSOTS_OnFXTriggered_Parms, FXRequest), Z_Construct_UScriptStruct_FSOTS_FXResolvedRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FXRequest_MetaData), NewProp_FXRequest_MetaData) }; // 2501912412
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SOTS_FX_Plugin_SOTS_OnFXTriggered__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SOTS_FX_Plugin_SOTS_OnFXTriggered__DelegateSignature_Statics::NewProp_FXRequest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_FX_Plugin_SOTS_OnFXTriggered__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FSOTS_OnFXTriggered Property Definitions ********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SOTS_FX_Plugin_SOTS_OnFXTriggered__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SOTS_FX_Plugin, nullptr, "SOTS_OnFXTriggered__DelegateSignature", 	Z_Construct_UDelegateFunction_SOTS_FX_Plugin_SOTS_OnFXTriggered__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_FX_Plugin_SOTS_OnFXTriggered__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SOTS_FX_Plugin_SOTS_OnFXTriggered__DelegateSignature_Statics::_Script_SOTS_FX_Plugin_eventSOTS_OnFXTriggered_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_FX_Plugin_SOTS_OnFXTriggered__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SOTS_FX_Plugin_SOTS_OnFXTriggered__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SOTS_FX_Plugin_SOTS_OnFXTriggered__DelegateSignature_Statics::_Script_SOTS_FX_Plugin_eventSOTS_OnFXTriggered_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SOTS_FX_Plugin_SOTS_OnFXTriggered__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SOTS_FX_Plugin_SOTS_OnFXTriggered__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSOTS_OnFXTriggered_DelegateWrapper(const FMulticastScriptDelegate& SOTS_OnFXTriggered, FSOTS_FXResolvedRequest const& FXRequest)
{
	struct _Script_SOTS_FX_Plugin_eventSOTS_OnFXTriggered_Parms
	{
		FSOTS_FXResolvedRequest FXRequest;
	};
	_Script_SOTS_FX_Plugin_eventSOTS_OnFXTriggered_Parms Parms;
	Parms.FXRequest=FXRequest;
	SOTS_OnFXTriggered.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FSOTS_OnFXTriggered *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTSFXTypes_h__Script_SOTS_FX_Plugin_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESOTS_FXSpawnSpace_StaticEnum, TEXT("ESOTS_FXSpawnSpace"), &Z_Registration_Info_UEnum_ESOTS_FXSpawnSpace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 58292107U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSOTS_FXDefinition::StaticStruct, Z_Construct_UScriptStruct_FSOTS_FXDefinition_Statics::NewStructOps, TEXT("SOTS_FXDefinition"),&Z_Registration_Info_UScriptStruct_FSOTS_FXDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_FXDefinition), 1227001547U) },
		{ FSOTS_FXContext::StaticStruct, Z_Construct_UScriptStruct_FSOTS_FXContext_Statics::NewStructOps, TEXT("SOTS_FXContext"),&Z_Registration_Info_UScriptStruct_FSOTS_FXContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_FXContext), 2146476462U) },
		{ FSOTS_FXHandle::StaticStruct, Z_Construct_UScriptStruct_FSOTS_FXHandle_Statics::NewStructOps, TEXT("SOTS_FXHandle"),&Z_Registration_Info_UScriptStruct_FSOTS_FXHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_FXHandle), 890763606U) },
		{ FSOTS_FXActiveCounts::StaticStruct, Z_Construct_UScriptStruct_FSOTS_FXActiveCounts_Statics::NewStructOps, TEXT("SOTS_FXActiveCounts"),&Z_Registration_Info_UScriptStruct_FSOTS_FXActiveCounts, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_FXActiveCounts), 3336076587U) },
		{ FSOTS_FXResolvedRequest::StaticStruct, Z_Construct_UScriptStruct_FSOTS_FXResolvedRequest_Statics::NewStructOps, TEXT("SOTS_FXResolvedRequest"),&Z_Registration_Info_UScriptStruct_FSOTS_FXResolvedRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_FXResolvedRequest), 2501912412U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTSFXTypes_h__Script_SOTS_FX_Plugin_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTSFXTypes_h__Script_SOTS_FX_Plugin_46758033{
	TEXT("/Script/SOTS_FX_Plugin"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTSFXTypes_h__Script_SOTS_FX_Plugin_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTSFXTypes_h__Script_SOTS_FX_Plugin_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTSFXTypes_h__Script_SOTS_FX_Plugin_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTSFXTypes_h__Script_SOTS_FX_Plugin_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
