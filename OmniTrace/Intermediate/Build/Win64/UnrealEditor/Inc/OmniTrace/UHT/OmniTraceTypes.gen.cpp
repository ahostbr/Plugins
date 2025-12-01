// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OmniTraceTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeOmniTraceTypes() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
OMNITRACE_API UEnum* Z_Construct_UEnum_OmniTrace_EOmniTraceArcPattern();
OMNITRACE_API UEnum* Z_Construct_UEnum_OmniTrace_EOmniTraceBuiltinPresetCategory();
OMNITRACE_API UEnum* Z_Construct_UEnum_OmniTrace_EOmniTraceCoverageBuiltinPreset();
OMNITRACE_API UEnum* Z_Construct_UEnum_OmniTrace_EOmniTraceDebugBuiltinPreset();
OMNITRACE_API UEnum* Z_Construct_UEnum_OmniTrace_EOmniTraceForwardPattern();
OMNITRACE_API UEnum* Z_Construct_UEnum_OmniTrace_EOmniTraceGridPattern();
OMNITRACE_API UEnum* Z_Construct_UEnum_OmniTrace_EOmniTraceLinePattern();
OMNITRACE_API UEnum* Z_Construct_UEnum_OmniTrace_EOmniTraceNoiseWalkPattern();
OMNITRACE_API UEnum* Z_Construct_UEnum_OmniTrace_EOmniTraceOrbitBuiltinPreset();
OMNITRACE_API UEnum* Z_Construct_UEnum_OmniTrace_EOmniTraceOrbitPattern();
OMNITRACE_API UEnum* Z_Construct_UEnum_OmniTrace_EOmniTracePatternFamily();
OMNITRACE_API UEnum* Z_Construct_UEnum_OmniTrace_EOmniTraceRadialPattern();
OMNITRACE_API UEnum* Z_Construct_UEnum_OmniTrace_EOmniTraceScatterPattern();
OMNITRACE_API UEnum* Z_Construct_UEnum_OmniTrace_EOmniTraceShape();
OMNITRACE_API UEnum* Z_Construct_UEnum_OmniTrace_EOmniTraceSplinePattern();
OMNITRACE_API UEnum* Z_Construct_UEnum_OmniTrace_EOmniTraceTraceFamily();
OMNITRACE_API UEnum* Z_Construct_UEnum_OmniTrace_EOmniTraceVisionBuiltinPreset();
OMNITRACE_API UEnum* Z_Construct_UEnum_OmniTrace_EOmniTraceVolumePattern();
OMNITRACE_API UScriptStruct* Z_Construct_UScriptStruct_FOmniTraceBuiltinPresetKey();
OMNITRACE_API UScriptStruct* Z_Construct_UScriptStruct_FOmniTraceDebugOptions();
OMNITRACE_API UScriptStruct* Z_Construct_UScriptStruct_FOmniTraceHitResult();
OMNITRACE_API UScriptStruct* Z_Construct_UScriptStruct_FOmniTracePatternConfig();
OMNITRACE_API UScriptStruct* Z_Construct_UScriptStruct_FOmniTracePatternResult();
OMNITRACE_API UScriptStruct* Z_Construct_UScriptStruct_FOmniTracePresetInfo();
OMNITRACE_API UScriptStruct* Z_Construct_UScriptStruct_FOmniTraceRequest();
OMNITRACE_API UScriptStruct* Z_Construct_UScriptStruct_FOmniTraceSingleRayResult();
UPackage* Z_Construct_UPackage__Script_OmniTrace();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FOmniTraceHitResult ***********************************************
struct Z_Construct_UScriptStruct_FOmniTraceHitResult_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FOmniTraceHitResult); }
	static inline consteval int16 GetStructAlignment() { return alignof(FOmniTraceHitResult); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Public, Blueprint-facing hit result used by OmniTrace.\n * This intentionally does not expose FHitResult directly.\n */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Public, Blueprint-facing hit result used by OmniTrace.\nThis intentionally does not expose FHitResult directly." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBlockingHit_MetaData[] = {
		{ "Category", "OmniTrace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether this represents a blocking hit. */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether this represents a blocking hit." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "OmniTrace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** End location of the trace (equivalent to FHitResult.Location). */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "End location of the trace (equivalent to FHitResult.Location)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactPoint_MetaData[] = {
		{ "Category", "OmniTrace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Impact point if applicable (equivalent to FHitResult.ImpactPoint). */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Impact point if applicable (equivalent to FHitResult.ImpactPoint)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[] = {
		{ "Category", "OmniTrace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Impact normal. */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Impact normal." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitActor_MetaData[] = {
		{ "Category", "OmniTrace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Actor hit (can be null). */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actor hit (can be null)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[] = {
		{ "Category", "OmniTrace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Component hit (can be null). */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Component hit (can be null)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[] = {
		{ "Category", "OmniTrace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Distance along the trace. */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distance along the trace." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FOmniTraceHitResult constinit property declarations ***************
	static void NewProp_bBlockingHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlockingHit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_HitActor;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_HitComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FOmniTraceHitResult constinit property declarations *****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOmniTraceHitResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FOmniTraceHitResult_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOmniTraceHitResult;
class UScriptStruct* FOmniTraceHitResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FOmniTraceHitResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FOmniTraceHitResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOmniTraceHitResult, (UObject*)Z_Construct_UPackage__Script_OmniTrace(), TEXT("OmniTraceHitResult"));
	}
	return Z_Registration_Info_UScriptStruct_FOmniTraceHitResult.OuterSingleton;
	}

// ********** Begin ScriptStruct FOmniTraceHitResult Property Definitions **************************
void Z_Construct_UScriptStruct_FOmniTraceHitResult_Statics::NewProp_bBlockingHit_SetBit(void* Obj)
{
	((FOmniTraceHitResult*)Obj)->bBlockingHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOmniTraceHitResult_Statics::NewProp_bBlockingHit = { "bBlockingHit", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOmniTraceHitResult), &Z_Construct_UScriptStruct_FOmniTraceHitResult_Statics::NewProp_bBlockingHit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBlockingHit_MetaData), NewProp_bBlockingHit_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOmniTraceHitResult_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOmniTraceHitResult, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOmniTraceHitResult_Statics::NewProp_ImpactPoint = { "ImpactPoint", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOmniTraceHitResult, ImpactPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactPoint_MetaData), NewProp_ImpactPoint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOmniTraceHitResult_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOmniTraceHitResult, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Normal_MetaData), NewProp_Normal_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FOmniTraceHitResult_Statics::NewProp_HitActor = { "HitActor", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOmniTraceHitResult, HitActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitActor_MetaData), NewProp_HitActor_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FOmniTraceHitResult_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOmniTraceHitResult, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitComponent_MetaData), NewProp_HitComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOmniTraceHitResult_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOmniTraceHitResult, Distance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Distance_MetaData), NewProp_Distance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOmniTraceHitResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTraceHitResult_Statics::NewProp_bBlockingHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTraceHitResult_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTraceHitResult_Statics::NewProp_ImpactPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTraceHitResult_Statics::NewProp_Normal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTraceHitResult_Statics::NewProp_HitActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTraceHitResult_Statics::NewProp_HitComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTraceHitResult_Statics::NewProp_Distance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOmniTraceHitResult_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FOmniTraceHitResult Property Definitions ****************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOmniTraceHitResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OmniTrace,
	nullptr,
	&NewStructOps,
	"OmniTraceHitResult",
	Z_Construct_UScriptStruct_FOmniTraceHitResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOmniTraceHitResult_Statics::PropPointers),
	sizeof(FOmniTraceHitResult),
	alignof(FOmniTraceHitResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOmniTraceHitResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOmniTraceHitResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOmniTraceHitResult()
{
	if (!Z_Registration_Info_UScriptStruct_FOmniTraceHitResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOmniTraceHitResult.InnerSingleton, Z_Construct_UScriptStruct_FOmniTraceHitResult_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FOmniTraceHitResult.InnerSingleton);
}
// ********** End ScriptStruct FOmniTraceHitResult *************************************************

// ********** Begin Enum EOmniTraceShape ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOmniTraceShape;
static UEnum* EOmniTraceShape_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOmniTraceShape.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOmniTraceShape.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OmniTrace_EOmniTraceShape, (UObject*)Z_Construct_UPackage__Script_OmniTrace(), TEXT("EOmniTraceShape"));
	}
	return Z_Registration_Info_UEnum_EOmniTraceShape.OuterSingleton;
}
template<> OMNITRACE_NON_ATTRIBUTED_API UEnum* StaticEnum<EOmniTraceShape>()
{
	return EOmniTraceShape_StaticEnum();
}
struct Z_Construct_UEnum_OmniTrace_EOmniTraceShape_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BoxSweep.DisplayName", "Box Sweep" },
		{ "BoxSweep.Name", "EOmniTraceShape::BoxSweep" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Trace shape used by OmniTrace.\n */" },
#endif
		{ "Line.DisplayName", "Line Trace" },
		{ "Line.Name", "EOmniTraceShape::Line" },
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
		{ "SphereSweep.DisplayName", "Sphere Sweep" },
		{ "SphereSweep.Name", "EOmniTraceShape::SphereSweep" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Trace shape used by OmniTrace." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOmniTraceShape::Line", (int64)EOmniTraceShape::Line },
		{ "EOmniTraceShape::SphereSweep", (int64)EOmniTraceShape::SphereSweep },
		{ "EOmniTraceShape::BoxSweep", (int64)EOmniTraceShape::BoxSweep },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_OmniTrace_EOmniTraceShape_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OmniTrace_EOmniTraceShape_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OmniTrace,
	nullptr,
	"EOmniTraceShape",
	"EOmniTraceShape",
	Z_Construct_UEnum_OmniTrace_EOmniTraceShape_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OmniTrace_EOmniTraceShape_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OmniTrace_EOmniTraceShape_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OmniTrace_EOmniTraceShape_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OmniTrace_EOmniTraceShape()
{
	if (!Z_Registration_Info_UEnum_EOmniTraceShape.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOmniTraceShape.InnerSingleton, Z_Construct_UEnum_OmniTrace_EOmniTraceShape_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOmniTraceShape.InnerSingleton;
}
// ********** End Enum EOmniTraceShape *************************************************************

// ********** Begin Enum EOmniTraceTraceFamily *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOmniTraceTraceFamily;
static UEnum* EOmniTraceTraceFamily_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOmniTraceTraceFamily.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOmniTraceTraceFamily.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OmniTrace_EOmniTraceTraceFamily, (UObject*)Z_Construct_UPackage__Script_OmniTrace(), TEXT("EOmniTraceTraceFamily"));
	}
	return Z_Registration_Info_UEnum_EOmniTraceTraceFamily.OuterSingleton;
}
template<> OMNITRACE_NON_ATTRIBUTED_API UEnum* StaticEnum<EOmniTraceTraceFamily>()
{
	return EOmniTraceTraceFamily_StaticEnum();
}
struct Z_Construct_UEnum_OmniTrace_EOmniTraceTraceFamily_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * High-level pattern family for ray generation.\n */" },
#endif
		{ "Forward.DisplayName", "Forward Fan / Cone" },
		{ "Forward.Name", "EOmniTraceTraceFamily::Forward" },
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
		{ "Orbit.DisplayName", "Orbit Around Target / Origin" },
		{ "Orbit.Name", "EOmniTraceTraceFamily::Orbit" },
		{ "Radial3D.DisplayName", "3D Radial Burst" },
		{ "Radial3D.Name", "EOmniTraceTraceFamily::Radial3D" },
		{ "Target.DisplayName", "Target Arc / Fan" },
		{ "Target.Name", "EOmniTraceTraceFamily::Target" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "High-level pattern family for ray generation." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOmniTraceTraceFamily::Forward", (int64)EOmniTraceTraceFamily::Forward },
		{ "EOmniTraceTraceFamily::Target", (int64)EOmniTraceTraceFamily::Target },
		{ "EOmniTraceTraceFamily::Orbit", (int64)EOmniTraceTraceFamily::Orbit },
		{ "EOmniTraceTraceFamily::Radial3D", (int64)EOmniTraceTraceFamily::Radial3D },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_OmniTrace_EOmniTraceTraceFamily_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OmniTrace_EOmniTraceTraceFamily_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OmniTrace,
	nullptr,
	"EOmniTraceTraceFamily",
	"EOmniTraceTraceFamily",
	Z_Construct_UEnum_OmniTrace_EOmniTraceTraceFamily_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OmniTrace_EOmniTraceTraceFamily_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OmniTrace_EOmniTraceTraceFamily_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OmniTrace_EOmniTraceTraceFamily_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OmniTrace_EOmniTraceTraceFamily()
{
	if (!Z_Registration_Info_UEnum_EOmniTraceTraceFamily.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOmniTraceTraceFamily.InnerSingleton, Z_Construct_UEnum_OmniTrace_EOmniTraceTraceFamily_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOmniTraceTraceFamily.InnerSingleton;
}
// ********** End Enum EOmniTraceTraceFamily *******************************************************

// ********** Begin Enum EOmniTraceForwardPattern **************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOmniTraceForwardPattern;
static UEnum* EOmniTraceForwardPattern_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOmniTraceForwardPattern.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOmniTraceForwardPattern.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OmniTrace_EOmniTraceForwardPattern, (UObject*)Z_Construct_UPackage__Script_OmniTrace(), TEXT("EOmniTraceForwardPattern"));
	}
	return Z_Registration_Info_UEnum_EOmniTraceForwardPattern.OuterSingleton;
}
template<> OMNITRACE_NON_ATTRIBUTED_API UEnum* StaticEnum<EOmniTraceForwardPattern>()
{
	return EOmniTraceForwardPattern_StaticEnum();
}
struct Z_Construct_UEnum_OmniTrace_EOmniTraceForwardPattern_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Forward pattern variants.\n */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
		{ "MultiSpread.DisplayName", "Multi Spread / Fan" },
		{ "MultiSpread.Name", "EOmniTraceForwardPattern::MultiSpread" },
		{ "SingleRay.DisplayName", "Single Ray" },
		{ "SingleRay.Name", "EOmniTraceForwardPattern::SingleRay" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Forward pattern variants." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOmniTraceForwardPattern::SingleRay", (int64)EOmniTraceForwardPattern::SingleRay },
		{ "EOmniTraceForwardPattern::MultiSpread", (int64)EOmniTraceForwardPattern::MultiSpread },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_OmniTrace_EOmniTraceForwardPattern_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OmniTrace_EOmniTraceForwardPattern_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OmniTrace,
	nullptr,
	"EOmniTraceForwardPattern",
	"EOmniTraceForwardPattern",
	Z_Construct_UEnum_OmniTrace_EOmniTraceForwardPattern_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OmniTrace_EOmniTraceForwardPattern_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OmniTrace_EOmniTraceForwardPattern_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OmniTrace_EOmniTraceForwardPattern_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OmniTrace_EOmniTraceForwardPattern()
{
	if (!Z_Registration_Info_UEnum_EOmniTraceForwardPattern.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOmniTraceForwardPattern.InnerSingleton, Z_Construct_UEnum_OmniTrace_EOmniTraceForwardPattern_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOmniTraceForwardPattern.InnerSingleton;
}
// ********** End Enum EOmniTraceForwardPattern ****************************************************

// ********** Begin ScriptStruct FOmniTraceDebugOptions ********************************************
struct Z_Construct_UScriptStruct_FOmniTraceDebugOptions_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FOmniTraceDebugOptions); }
	static inline consteval int16 GetStructAlignment() { return alignof(FOmniTraceDebugOptions); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Debug draw options for OmniTrace.\n */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Debug draw options for OmniTrace." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDebug_MetaData[] = {
		{ "Category", "OmniTrace|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enable/disable debug drawing for this trace request. */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable/disable debug drawing for this trace request." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "OmniTrace|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Debug color for rays / hits. */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Debug color for rays / hits." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Lifetime_MetaData[] = {
		{ "Category", "OmniTrace|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Lifetime for debug primitives. */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lifetime for debug primitives." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[] = {
		{ "Category", "OmniTrace|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Line thickness for debug rays. */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Line thickness for debug rays." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FOmniTraceDebugOptions constinit property declarations ************
	static void NewProp_bEnableDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDebug;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Lifetime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FOmniTraceDebugOptions constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOmniTraceDebugOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FOmniTraceDebugOptions_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOmniTraceDebugOptions;
class UScriptStruct* FOmniTraceDebugOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FOmniTraceDebugOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FOmniTraceDebugOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOmniTraceDebugOptions, (UObject*)Z_Construct_UPackage__Script_OmniTrace(), TEXT("OmniTraceDebugOptions"));
	}
	return Z_Registration_Info_UScriptStruct_FOmniTraceDebugOptions.OuterSingleton;
	}

// ********** Begin ScriptStruct FOmniTraceDebugOptions Property Definitions ***********************
void Z_Construct_UScriptStruct_FOmniTraceDebugOptions_Statics::NewProp_bEnableDebug_SetBit(void* Obj)
{
	((FOmniTraceDebugOptions*)Obj)->bEnableDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOmniTraceDebugOptions_Statics::NewProp_bEnableDebug = { "bEnableDebug", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOmniTraceDebugOptions), &Z_Construct_UScriptStruct_FOmniTraceDebugOptions_Statics::NewProp_bEnableDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDebug_MetaData), NewProp_bEnableDebug_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOmniTraceDebugOptions_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOmniTraceDebugOptions, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOmniTraceDebugOptions_Statics::NewProp_Lifetime = { "Lifetime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOmniTraceDebugOptions, Lifetime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Lifetime_MetaData), NewProp_Lifetime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOmniTraceDebugOptions_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOmniTraceDebugOptions, Thickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thickness_MetaData), NewProp_Thickness_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOmniTraceDebugOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTraceDebugOptions_Statics::NewProp_bEnableDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTraceDebugOptions_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTraceDebugOptions_Statics::NewProp_Lifetime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTraceDebugOptions_Statics::NewProp_Thickness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOmniTraceDebugOptions_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FOmniTraceDebugOptions Property Definitions *************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOmniTraceDebugOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OmniTrace,
	nullptr,
	&NewStructOps,
	"OmniTraceDebugOptions",
	Z_Construct_UScriptStruct_FOmniTraceDebugOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOmniTraceDebugOptions_Statics::PropPointers),
	sizeof(FOmniTraceDebugOptions),
	alignof(FOmniTraceDebugOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOmniTraceDebugOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOmniTraceDebugOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOmniTraceDebugOptions()
{
	if (!Z_Registration_Info_UScriptStruct_FOmniTraceDebugOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOmniTraceDebugOptions.InnerSingleton, Z_Construct_UScriptStruct_FOmniTraceDebugOptions_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FOmniTraceDebugOptions.InnerSingleton);
}
// ********** End ScriptStruct FOmniTraceDebugOptions **********************************************

// ********** Begin ScriptStruct FOmniTraceSingleRayResult *****************************************
struct Z_Construct_UScriptStruct_FOmniTraceSingleRayResult_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FOmniTraceSingleRayResult); }
	static inline consteval int16 GetStructAlignment() { return alignof(FOmniTraceSingleRayResult); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A single ray result used inside FOmniTracePatternResult.\n */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A single ray result used inside FOmniTracePatternResult." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RayIndex_MetaData[] = {
		{ "Category", "OmniTrace|Result" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Index of this ray in the pattern. */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Index of this ray in the pattern." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[] = {
		{ "Category", "OmniTrace|Result" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Ray start location. */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ray start location." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[] = {
		{ "Category", "OmniTrace|Result" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Ray end location (either hit location or max distance). */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ray end location (either hit location or max distance)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHit_MetaData[] = {
		{ "Category", "OmniTrace|Result" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether this ray hit something. */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether this ray hit something." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "Category", "OmniTrace|Result" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Hit result (only meaningful if bHit == true). */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hit result (only meaningful if bHit == true)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FOmniTraceSingleRayResult constinit property declarations *********
	static const UECodeGen_Private::FIntPropertyParams NewProp_RayIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
	static const UECodeGen_Private::FStructPropertyParams NewProp_End;
	static void NewProp_bHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FOmniTraceSingleRayResult constinit property declarations ***********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOmniTraceSingleRayResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FOmniTraceSingleRayResult_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOmniTraceSingleRayResult;
class UScriptStruct* FOmniTraceSingleRayResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FOmniTraceSingleRayResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FOmniTraceSingleRayResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOmniTraceSingleRayResult, (UObject*)Z_Construct_UPackage__Script_OmniTrace(), TEXT("OmniTraceSingleRayResult"));
	}
	return Z_Registration_Info_UScriptStruct_FOmniTraceSingleRayResult.OuterSingleton;
	}

// ********** Begin ScriptStruct FOmniTraceSingleRayResult Property Definitions ********************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOmniTraceSingleRayResult_Statics::NewProp_RayIndex = { "RayIndex", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOmniTraceSingleRayResult, RayIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RayIndex_MetaData), NewProp_RayIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOmniTraceSingleRayResult_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOmniTraceSingleRayResult, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Start_MetaData), NewProp_Start_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOmniTraceSingleRayResult_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOmniTraceSingleRayResult, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_End_MetaData), NewProp_End_MetaData) };
void Z_Construct_UScriptStruct_FOmniTraceSingleRayResult_Statics::NewProp_bHit_SetBit(void* Obj)
{
	((FOmniTraceSingleRayResult*)Obj)->bHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOmniTraceSingleRayResult_Statics::NewProp_bHit = { "bHit", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOmniTraceSingleRayResult), &Z_Construct_UScriptStruct_FOmniTraceSingleRayResult_Statics::NewProp_bHit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHit_MetaData), NewProp_bHit_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOmniTraceSingleRayResult_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOmniTraceSingleRayResult, Hit), Z_Construct_UScriptStruct_FOmniTraceHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 1971425108
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOmniTraceSingleRayResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTraceSingleRayResult_Statics::NewProp_RayIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTraceSingleRayResult_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTraceSingleRayResult_Statics::NewProp_End,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTraceSingleRayResult_Statics::NewProp_bHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTraceSingleRayResult_Statics::NewProp_Hit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOmniTraceSingleRayResult_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FOmniTraceSingleRayResult Property Definitions **********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOmniTraceSingleRayResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OmniTrace,
	nullptr,
	&NewStructOps,
	"OmniTraceSingleRayResult",
	Z_Construct_UScriptStruct_FOmniTraceSingleRayResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOmniTraceSingleRayResult_Statics::PropPointers),
	sizeof(FOmniTraceSingleRayResult),
	alignof(FOmniTraceSingleRayResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOmniTraceSingleRayResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOmniTraceSingleRayResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOmniTraceSingleRayResult()
{
	if (!Z_Registration_Info_UScriptStruct_FOmniTraceSingleRayResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOmniTraceSingleRayResult.InnerSingleton, Z_Construct_UScriptStruct_FOmniTraceSingleRayResult_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FOmniTraceSingleRayResult.InnerSingleton);
}
// ********** End ScriptStruct FOmniTraceSingleRayResult *******************************************

// ********** Begin ScriptStruct FOmniTracePatternResult *******************************************
struct Z_Construct_UScriptStruct_FOmniTracePatternResult_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FOmniTracePatternResult); }
	static inline consteval int16 GetStructAlignment() { return alignof(FOmniTracePatternResult); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Result container for an OmniTrace pattern call.\n * Mirrors what OmniTraceBlueprintLibrary::OmniTrace_Pattern fills in.\n */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Result container for an OmniTrace pattern call.\nMirrors what OmniTraceBlueprintLibrary::OmniTrace_Pattern fills in." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rays_MetaData[] = {
		{ "Category", "OmniTrace|Result" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** All rays that were fired for this pattern. */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "All rays that were fired for this pattern." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalRays_MetaData[] = {
		{ "Category", "OmniTrace|Result" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Total number of rays fired. */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Total number of rays fired." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAnyHit_MetaData[] = {
		{ "Category", "OmniTrace|Result" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether ANY ray hit something. */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether ANY ray hit something." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstBlockingHit_MetaData[] = {
		{ "Category", "OmniTrace|Result" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** First blocking hit encountered (if any). */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "First blocking hit encountered (if any)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NearestHit_MetaData[] = {
		{ "Category", "OmniTrace|Result" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Nearest hit to the origin (if any). */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Nearest hit to the origin (if any)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FOmniTracePatternResult constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rays_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Rays;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalRays;
	static void NewProp_bAnyHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAnyHit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FirstBlockingHit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NearestHit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FOmniTracePatternResult constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOmniTracePatternResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FOmniTracePatternResult_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOmniTracePatternResult;
class UScriptStruct* FOmniTracePatternResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FOmniTracePatternResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FOmniTracePatternResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOmniTracePatternResult, (UObject*)Z_Construct_UPackage__Script_OmniTrace(), TEXT("OmniTracePatternResult"));
	}
	return Z_Registration_Info_UScriptStruct_FOmniTracePatternResult.OuterSingleton;
	}

// ********** Begin ScriptStruct FOmniTracePatternResult Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOmniTracePatternResult_Statics::NewProp_Rays_Inner = { "Rays", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOmniTraceSingleRayResult, METADATA_PARAMS(0, nullptr) }; // 1512229182
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOmniTracePatternResult_Statics::NewProp_Rays = { "Rays", nullptr, (EPropertyFlags)0x0010008000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOmniTracePatternResult, Rays), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rays_MetaData), NewProp_Rays_MetaData) }; // 1512229182
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOmniTracePatternResult_Statics::NewProp_TotalRays = { "TotalRays", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOmniTracePatternResult, TotalRays), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalRays_MetaData), NewProp_TotalRays_MetaData) };
void Z_Construct_UScriptStruct_FOmniTracePatternResult_Statics::NewProp_bAnyHit_SetBit(void* Obj)
{
	((FOmniTracePatternResult*)Obj)->bAnyHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOmniTracePatternResult_Statics::NewProp_bAnyHit = { "bAnyHit", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOmniTracePatternResult), &Z_Construct_UScriptStruct_FOmniTracePatternResult_Statics::NewProp_bAnyHit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAnyHit_MetaData), NewProp_bAnyHit_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOmniTracePatternResult_Statics::NewProp_FirstBlockingHit = { "FirstBlockingHit", nullptr, (EPropertyFlags)0x0010008000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOmniTracePatternResult, FirstBlockingHit), Z_Construct_UScriptStruct_FOmniTraceHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstBlockingHit_MetaData), NewProp_FirstBlockingHit_MetaData) }; // 1971425108
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOmniTracePatternResult_Statics::NewProp_NearestHit = { "NearestHit", nullptr, (EPropertyFlags)0x0010008000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOmniTracePatternResult, NearestHit), Z_Construct_UScriptStruct_FOmniTraceHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NearestHit_MetaData), NewProp_NearestHit_MetaData) }; // 1971425108
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOmniTracePatternResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTracePatternResult_Statics::NewProp_Rays_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTracePatternResult_Statics::NewProp_Rays,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTracePatternResult_Statics::NewProp_TotalRays,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTracePatternResult_Statics::NewProp_bAnyHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTracePatternResult_Statics::NewProp_FirstBlockingHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTracePatternResult_Statics::NewProp_NearestHit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOmniTracePatternResult_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FOmniTracePatternResult Property Definitions ************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOmniTracePatternResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OmniTrace,
	nullptr,
	&NewStructOps,
	"OmniTracePatternResult",
	Z_Construct_UScriptStruct_FOmniTracePatternResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOmniTracePatternResult_Statics::PropPointers),
	sizeof(FOmniTracePatternResult),
	alignof(FOmniTracePatternResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOmniTracePatternResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOmniTracePatternResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOmniTracePatternResult()
{
	if (!Z_Registration_Info_UScriptStruct_FOmniTracePatternResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOmniTracePatternResult.InnerSingleton, Z_Construct_UScriptStruct_FOmniTracePatternResult_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FOmniTracePatternResult.InnerSingleton);
}
// ********** End ScriptStruct FOmniTracePatternResult *********************************************

// ********** Begin ScriptStruct FOmniTraceRequest *************************************************
struct Z_Construct_UScriptStruct_FOmniTraceRequest_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FOmniTraceRequest); }
	static inline consteval int16 GetStructAlignment() { return alignof(FOmniTraceRequest); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * High-level request describing a pattern generation job.\n * This struct matches the fields used in OmniTraceBlueprintLibrary.cpp.\n */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "High-level request describing a pattern generation job.\nThis struct matches the fields used in OmniTraceBlueprintLibrary.cpp." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatternFamily_MetaData[] = {
		{ "Category", "OmniTrace|Request" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pattern family to use when generating directions. */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pattern family to use when generating directions." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForwardPattern_MetaData[] = {
		{ "Category", "OmniTrace|Request" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Forward pattern variant (used when PatternFamily == Forward). */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Forward pattern variant (used when PatternFamily == Forward)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shape_MetaData[] = {
		{ "Category", "OmniTrace|Request" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** What trace shape to use when firing each ray. */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "What trace shape to use when firing each ray." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[] = {
		{ "Category", "OmniTrace|Request" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Collision channel used for all traces. */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Collision channel used for all traces." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTraceComplex_MetaData[] = {
		{ "Category", "OmniTrace|Request" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether to trace complex collision. */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to trace complex collision." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[] = {
		{ "Category", "OmniTrace|Request" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum distance for each ray. */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum distance for each ray." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RayCount_MetaData[] = {
		{ "Category", "OmniTrace|Request" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Number of rays to fire for this pattern. */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of rays to fire for this pattern." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpreadAngleDegrees_MetaData[] = {
		{ "Category", "OmniTrace|Request" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Spread angle in degrees for forward cone patterns. */" },
#endif
		{ "EditCondition", "PatternFamily == EOmniTraceTraceFamily::Forward" },
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spread angle in degrees for forward cone patterns." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArcAngleDegrees_MetaData[] = {
		{ "Category", "OmniTrace|Request" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Arc angle in degrees for target-centred patterns. */" },
#endif
		{ "EditCondition", "PatternFamily == EOmniTraceTraceFamily::Target" },
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Arc angle in degrees for target-centred patterns." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrbitRadius_MetaData[] = {
		{ "Category", "OmniTrace|Request" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Orbit radius used when PatternFamily == Orbit. */" },
#endif
		{ "EditCondition", "PatternFamily == EOmniTraceTraceFamily::Orbit" },
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Orbit radius used when PatternFamily == Orbit." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginActor_MetaData[] = {
		{ "Category", "OmniTrace|Request" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional origin actor (takes priority over location override). */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional origin actor (takes priority over location override)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginComponent_MetaData[] = {
		{ "Category", "OmniTrace|Request" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional origin component (highest priority for origin). */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional origin component (highest priority for origin)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[] = {
		{ "Category", "OmniTrace|Request" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional target actor. */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional target actor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginLocationOverride_MetaData[] = {
		{ "Category", "OmniTrace|Request" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Fallback origin location override (if no actor/component). */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fallback origin location override (if no actor/component)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginRotationOverride_MetaData[] = {
		{ "Category", "OmniTrace|Request" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Fallback origin rotation override (if no actor/component). */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fallback origin rotation override (if no actor/component)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocationOverride_MetaData[] = {
		{ "Category", "OmniTrace|Request" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Fallback target location override (if no target actor). */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fallback target location override (if no target actor)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[] = {
		{ "Category", "OmniTrace|Request" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Extra actors to ignore while tracing. */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Extra actors to ignore while tracing." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugOptions_MetaData[] = {
		{ "Category", "OmniTrace|Request" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Debug draw settings. */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Debug draw settings." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FOmniTraceRequest constinit property declarations *****************
	static const UECodeGen_Private::FBytePropertyParams NewProp_PatternFamily_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PatternFamily;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ForwardPattern_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ForwardPattern;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Shape_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Shape;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
	static void NewProp_bTraceComplex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RayCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpreadAngleDegrees;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ArcAngleDegrees;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OrbitRadius;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_OriginActor;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_OriginComponent;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OriginLocationOverride;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OriginRotationOverride;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocationOverride;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugOptions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FOmniTraceRequest constinit property declarations *******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOmniTraceRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FOmniTraceRequest_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOmniTraceRequest;
class UScriptStruct* FOmniTraceRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FOmniTraceRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FOmniTraceRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOmniTraceRequest, (UObject*)Z_Construct_UPackage__Script_OmniTrace(), TEXT("OmniTraceRequest"));
	}
	return Z_Registration_Info_UScriptStruct_FOmniTraceRequest.OuterSingleton;
	}

// ********** Begin ScriptStruct FOmniTraceRequest Property Definitions ****************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOmniTraceRequest_Statics::NewProp_PatternFamily_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOmniTraceRequest_Statics::NewProp_PatternFamily = { "PatternFamily", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOmniTraceRequest, PatternFamily), Z_Construct_UEnum_OmniTrace_EOmniTraceTraceFamily, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatternFamily_MetaData), NewProp_PatternFamily_MetaData) }; // 3980410589
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOmniTraceRequest_Statics::NewProp_ForwardPattern_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOmniTraceRequest_Statics::NewProp_ForwardPattern = { "ForwardPattern", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOmniTraceRequest, ForwardPattern), Z_Construct_UEnum_OmniTrace_EOmniTraceForwardPattern, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForwardPattern_MetaData), NewProp_ForwardPattern_MetaData) }; // 1858295091
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOmniTraceRequest_Statics::NewProp_Shape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOmniTraceRequest_Statics::NewProp_Shape = { "Shape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOmniTraceRequest, Shape), Z_Construct_UEnum_OmniTrace_EOmniTraceShape, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shape_MetaData), NewProp_Shape_MetaData) }; // 2809570516
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOmniTraceRequest_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOmniTraceRequest, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceChannel_MetaData), NewProp_TraceChannel_MetaData) }; // 838391399
void Z_Construct_UScriptStruct_FOmniTraceRequest_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
{
	((FOmniTraceRequest*)Obj)->bTraceComplex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOmniTraceRequest_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOmniTraceRequest), &Z_Construct_UScriptStruct_FOmniTraceRequest_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTraceComplex_MetaData), NewProp_bTraceComplex_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOmniTraceRequest_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOmniTraceRequest, MaxDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDistance_MetaData), NewProp_MaxDistance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOmniTraceRequest_Statics::NewProp_RayCount = { "RayCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOmniTraceRequest, RayCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RayCount_MetaData), NewProp_RayCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOmniTraceRequest_Statics::NewProp_SpreadAngleDegrees = { "SpreadAngleDegrees", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOmniTraceRequest, SpreadAngleDegrees), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpreadAngleDegrees_MetaData), NewProp_SpreadAngleDegrees_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOmniTraceRequest_Statics::NewProp_ArcAngleDegrees = { "ArcAngleDegrees", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOmniTraceRequest, ArcAngleDegrees), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArcAngleDegrees_MetaData), NewProp_ArcAngleDegrees_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOmniTraceRequest_Statics::NewProp_OrbitRadius = { "OrbitRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOmniTraceRequest, OrbitRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrbitRadius_MetaData), NewProp_OrbitRadius_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FOmniTraceRequest_Statics::NewProp_OriginActor = { "OriginActor", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOmniTraceRequest, OriginActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginActor_MetaData), NewProp_OriginActor_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FOmniTraceRequest_Statics::NewProp_OriginComponent = { "OriginComponent", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOmniTraceRequest, OriginComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginComponent_MetaData), NewProp_OriginComponent_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FOmniTraceRequest_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOmniTraceRequest, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActor_MetaData), NewProp_TargetActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOmniTraceRequest_Statics::NewProp_OriginLocationOverride = { "OriginLocationOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOmniTraceRequest, OriginLocationOverride), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginLocationOverride_MetaData), NewProp_OriginLocationOverride_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOmniTraceRequest_Statics::NewProp_OriginRotationOverride = { "OriginRotationOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOmniTraceRequest, OriginRotationOverride), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginRotationOverride_MetaData), NewProp_OriginRotationOverride_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOmniTraceRequest_Statics::NewProp_TargetLocationOverride = { "TargetLocationOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOmniTraceRequest, TargetLocationOverride), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLocationOverride_MetaData), NewProp_TargetLocationOverride_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOmniTraceRequest_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOmniTraceRequest_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOmniTraceRequest, ActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorsToIgnore_MetaData), NewProp_ActorsToIgnore_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOmniTraceRequest_Statics::NewProp_DebugOptions = { "DebugOptions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOmniTraceRequest, DebugOptions), Z_Construct_UScriptStruct_FOmniTraceDebugOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugOptions_MetaData), NewProp_DebugOptions_MetaData) }; // 1924562266
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOmniTraceRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTraceRequest_Statics::NewProp_PatternFamily_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTraceRequest_Statics::NewProp_PatternFamily,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTraceRequest_Statics::NewProp_ForwardPattern_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTraceRequest_Statics::NewProp_ForwardPattern,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTraceRequest_Statics::NewProp_Shape_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTraceRequest_Statics::NewProp_Shape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTraceRequest_Statics::NewProp_TraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTraceRequest_Statics::NewProp_bTraceComplex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTraceRequest_Statics::NewProp_MaxDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTraceRequest_Statics::NewProp_RayCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTraceRequest_Statics::NewProp_SpreadAngleDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTraceRequest_Statics::NewProp_ArcAngleDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTraceRequest_Statics::NewProp_OrbitRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTraceRequest_Statics::NewProp_OriginActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTraceRequest_Statics::NewProp_OriginComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTraceRequest_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTraceRequest_Statics::NewProp_OriginLocationOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTraceRequest_Statics::NewProp_OriginRotationOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTraceRequest_Statics::NewProp_TargetLocationOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTraceRequest_Statics::NewProp_ActorsToIgnore_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTraceRequest_Statics::NewProp_ActorsToIgnore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTraceRequest_Statics::NewProp_DebugOptions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOmniTraceRequest_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FOmniTraceRequest Property Definitions ******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOmniTraceRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OmniTrace,
	nullptr,
	&NewStructOps,
	"OmniTraceRequest",
	Z_Construct_UScriptStruct_FOmniTraceRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOmniTraceRequest_Statics::PropPointers),
	sizeof(FOmniTraceRequest),
	alignof(FOmniTraceRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOmniTraceRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOmniTraceRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOmniTraceRequest()
{
	if (!Z_Registration_Info_UScriptStruct_FOmniTraceRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOmniTraceRequest.InnerSingleton, Z_Construct_UScriptStruct_FOmniTraceRequest_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FOmniTraceRequest.InnerSingleton);
}
// ********** End ScriptStruct FOmniTraceRequest ***************************************************

// ********** Begin ScriptStruct FOmniTracePresetInfo **********************************************
struct Z_Construct_UScriptStruct_FOmniTracePresetInfo_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FOmniTracePresetInfo); }
	static inline consteval int16 GetStructAlignment() { return alignof(FOmniTracePresetInfo); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Lightweight info used to expose presets to Blueprints / UI.\n * This matches OmniTraceBlueprintLibrary::OmniTrace_GetLibraryPresetInfos.\n */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lightweight info used to expose presets to Blueprints / UI.\nThis matches OmniTraceBlueprintLibrary::OmniTrace_GetLibraryPresetInfos." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PresetId_MetaData[] = {
		{ "Category", "OmniTrace|Preset" },
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "OmniTrace|Preset" },
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "OmniTrace|Preset" },
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[] = {
		{ "Category", "OmniTrace|Preset" },
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FamilyColor_MetaData[] = {
		{ "Category", "OmniTrace|Preset" },
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FOmniTracePresetInfo constinit property declarations **************
	static const UECodeGen_Private::FNamePropertyParams NewProp_PresetId;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Category;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FamilyColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FOmniTracePresetInfo constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOmniTracePresetInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FOmniTracePresetInfo_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOmniTracePresetInfo;
class UScriptStruct* FOmniTracePresetInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FOmniTracePresetInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FOmniTracePresetInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOmniTracePresetInfo, (UObject*)Z_Construct_UPackage__Script_OmniTrace(), TEXT("OmniTracePresetInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FOmniTracePresetInfo.OuterSingleton;
	}

// ********** Begin ScriptStruct FOmniTracePresetInfo Property Definitions *************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOmniTracePresetInfo_Statics::NewProp_PresetId = { "PresetId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOmniTracePresetInfo, PresetId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PresetId_MetaData), NewProp_PresetId_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOmniTracePresetInfo_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOmniTracePresetInfo, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOmniTracePresetInfo_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOmniTracePresetInfo, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOmniTracePresetInfo_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOmniTracePresetInfo, Category), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Category_MetaData), NewProp_Category_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOmniTracePresetInfo_Statics::NewProp_FamilyColor = { "FamilyColor", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOmniTracePresetInfo, FamilyColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FamilyColor_MetaData), NewProp_FamilyColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOmniTracePresetInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTracePresetInfo_Statics::NewProp_PresetId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTracePresetInfo_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTracePresetInfo_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTracePresetInfo_Statics::NewProp_Category,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTracePresetInfo_Statics::NewProp_FamilyColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOmniTracePresetInfo_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FOmniTracePresetInfo Property Definitions ***************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOmniTracePresetInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OmniTrace,
	nullptr,
	&NewStructOps,
	"OmniTracePresetInfo",
	Z_Construct_UScriptStruct_FOmniTracePresetInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOmniTracePresetInfo_Statics::PropPointers),
	sizeof(FOmniTracePresetInfo),
	alignof(FOmniTracePresetInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOmniTracePresetInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOmniTracePresetInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOmniTracePresetInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FOmniTracePresetInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOmniTracePresetInfo.InnerSingleton, Z_Construct_UScriptStruct_FOmniTracePresetInfo_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FOmniTracePresetInfo.InnerSingleton);
}
// ********** End ScriptStruct FOmniTracePresetInfo ************************************************

// ********** Begin Enum EOmniTraceBuiltinPresetCategory *******************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOmniTraceBuiltinPresetCategory;
static UEnum* EOmniTraceBuiltinPresetCategory_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOmniTraceBuiltinPresetCategory.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOmniTraceBuiltinPresetCategory.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OmniTrace_EOmniTraceBuiltinPresetCategory, (UObject*)Z_Construct_UPackage__Script_OmniTrace(), TEXT("EOmniTraceBuiltinPresetCategory"));
	}
	return Z_Registration_Info_UEnum_EOmniTraceBuiltinPresetCategory.OuterSingleton;
}
template<> OMNITRACE_NON_ATTRIBUTED_API UEnum* StaticEnum<EOmniTraceBuiltinPresetCategory>()
{
	return EOmniTraceBuiltinPresetCategory_StaticEnum();
}
struct Z_Construct_UEnum_OmniTrace_EOmniTraceBuiltinPresetCategory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Built-in preset high level category.\n */" },
#endif
		{ "Coverage.DisplayName", "Coverage / Area Scan" },
		{ "Coverage.Name", "EOmniTraceBuiltinPresetCategory::Coverage" },
		{ "Debug.DisplayName", "Debug / Utility" },
		{ "Debug.Name", "EOmniTraceBuiltinPresetCategory::Debug" },
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
		{ "Orbit.DisplayName", "Orbit / Perimeter" },
		{ "Orbit.Name", "EOmniTraceBuiltinPresetCategory::Orbit" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Built-in preset high level category." },
#endif
		{ "Vision.DisplayName", "Vision / FOV" },
		{ "Vision.Name", "EOmniTraceBuiltinPresetCategory::Vision" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOmniTraceBuiltinPresetCategory::Vision", (int64)EOmniTraceBuiltinPresetCategory::Vision },
		{ "EOmniTraceBuiltinPresetCategory::Coverage", (int64)EOmniTraceBuiltinPresetCategory::Coverage },
		{ "EOmniTraceBuiltinPresetCategory::Orbit", (int64)EOmniTraceBuiltinPresetCategory::Orbit },
		{ "EOmniTraceBuiltinPresetCategory::Debug", (int64)EOmniTraceBuiltinPresetCategory::Debug },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_OmniTrace_EOmniTraceBuiltinPresetCategory_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OmniTrace_EOmniTraceBuiltinPresetCategory_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OmniTrace,
	nullptr,
	"EOmniTraceBuiltinPresetCategory",
	"EOmniTraceBuiltinPresetCategory",
	Z_Construct_UEnum_OmniTrace_EOmniTraceBuiltinPresetCategory_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OmniTrace_EOmniTraceBuiltinPresetCategory_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OmniTrace_EOmniTraceBuiltinPresetCategory_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OmniTrace_EOmniTraceBuiltinPresetCategory_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OmniTrace_EOmniTraceBuiltinPresetCategory()
{
	if (!Z_Registration_Info_UEnum_EOmniTraceBuiltinPresetCategory.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOmniTraceBuiltinPresetCategory.InnerSingleton, Z_Construct_UEnum_OmniTrace_EOmniTraceBuiltinPresetCategory_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOmniTraceBuiltinPresetCategory.InnerSingleton;
}
// ********** End Enum EOmniTraceBuiltinPresetCategory *********************************************

// ********** Begin Enum EOmniTraceVisionBuiltinPreset *********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOmniTraceVisionBuiltinPreset;
static UEnum* EOmniTraceVisionBuiltinPreset_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOmniTraceVisionBuiltinPreset.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOmniTraceVisionBuiltinPreset.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OmniTrace_EOmniTraceVisionBuiltinPreset, (UObject*)Z_Construct_UPackage__Script_OmniTrace(), TEXT("EOmniTraceVisionBuiltinPreset"));
	}
	return Z_Registration_Info_UEnum_EOmniTraceVisionBuiltinPreset.OuterSingleton;
}
template<> OMNITRACE_NON_ATTRIBUTED_API UEnum* StaticEnum<EOmniTraceVisionBuiltinPreset>()
{
	return EOmniTraceVisionBuiltinPreset_StaticEnum();
}
struct Z_Construct_UEnum_OmniTrace_EOmniTraceVisionBuiltinPreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Built-in vision presets (forward cones, target arcs, etc).\n */" },
#endif
		{ "Fwd_Cone_Close_5R.DisplayName", "Forward Cone \xe2\x80\x93 Close (5R)" },
		{ "Fwd_Cone_Close_5R.Name", "EOmniTraceVisionBuiltinPreset::Fwd_Cone_Close_5R" },
		{ "Fwd_Cone_Long_21R.DisplayName", "Forward Cone \xe2\x80\x93 Long (21R)" },
		{ "Fwd_Cone_Long_21R.Name", "EOmniTraceVisionBuiltinPreset::Fwd_Cone_Long_21R" },
		{ "Fwd_Cone_Medium_11R.DisplayName", "Forward Cone \xe2\x80\x93 Medium (11R)" },
		{ "Fwd_Cone_Medium_11R.Name", "EOmniTraceVisionBuiltinPreset::Fwd_Cone_Medium_11R" },
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
		{ "Target_Arc_Short_9R.DisplayName", "Target Arc \xe2\x80\x93 Short (9R)" },
		{ "Target_Arc_Short_9R.Name", "EOmniTraceVisionBuiltinPreset::Target_Arc_Short_9R" },
		{ "Target_Fan_Wide_21R.DisplayName", "Target Fan \xe2\x80\x93 Wide (21R)" },
		{ "Target_Fan_Wide_21R.Name", "EOmniTraceVisionBuiltinPreset::Target_Fan_Wide_21R" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Built-in vision presets (forward cones, target arcs, etc)." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOmniTraceVisionBuiltinPreset::Fwd_Cone_Close_5R", (int64)EOmniTraceVisionBuiltinPreset::Fwd_Cone_Close_5R },
		{ "EOmniTraceVisionBuiltinPreset::Fwd_Cone_Medium_11R", (int64)EOmniTraceVisionBuiltinPreset::Fwd_Cone_Medium_11R },
		{ "EOmniTraceVisionBuiltinPreset::Fwd_Cone_Long_21R", (int64)EOmniTraceVisionBuiltinPreset::Fwd_Cone_Long_21R },
		{ "EOmniTraceVisionBuiltinPreset::Target_Arc_Short_9R", (int64)EOmniTraceVisionBuiltinPreset::Target_Arc_Short_9R },
		{ "EOmniTraceVisionBuiltinPreset::Target_Fan_Wide_21R", (int64)EOmniTraceVisionBuiltinPreset::Target_Fan_Wide_21R },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_OmniTrace_EOmniTraceVisionBuiltinPreset_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OmniTrace_EOmniTraceVisionBuiltinPreset_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OmniTrace,
	nullptr,
	"EOmniTraceVisionBuiltinPreset",
	"EOmniTraceVisionBuiltinPreset",
	Z_Construct_UEnum_OmniTrace_EOmniTraceVisionBuiltinPreset_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OmniTrace_EOmniTraceVisionBuiltinPreset_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OmniTrace_EOmniTraceVisionBuiltinPreset_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OmniTrace_EOmniTraceVisionBuiltinPreset_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OmniTrace_EOmniTraceVisionBuiltinPreset()
{
	if (!Z_Registration_Info_UEnum_EOmniTraceVisionBuiltinPreset.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOmniTraceVisionBuiltinPreset.InnerSingleton, Z_Construct_UEnum_OmniTrace_EOmniTraceVisionBuiltinPreset_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOmniTraceVisionBuiltinPreset.InnerSingleton;
}
// ********** End Enum EOmniTraceVisionBuiltinPreset ***********************************************

// ********** Begin Enum EOmniTraceCoverageBuiltinPreset *******************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOmniTraceCoverageBuiltinPreset;
static UEnum* EOmniTraceCoverageBuiltinPreset_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOmniTraceCoverageBuiltinPreset.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOmniTraceCoverageBuiltinPreset.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OmniTrace_EOmniTraceCoverageBuiltinPreset, (UObject*)Z_Construct_UPackage__Script_OmniTrace(), TEXT("EOmniTraceCoverageBuiltinPreset"));
	}
	return Z_Registration_Info_UEnum_EOmniTraceCoverageBuiltinPreset.OuterSingleton;
}
template<> OMNITRACE_NON_ATTRIBUTED_API UEnum* StaticEnum<EOmniTraceCoverageBuiltinPreset>()
{
	return EOmniTraceCoverageBuiltinPreset_StaticEnum();
}
struct Z_Construct_UEnum_OmniTrace_EOmniTraceCoverageBuiltinPreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Built-in coverage presets (radial bursts, etc).\n */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
		{ "Radial_Dense_128R.DisplayName", "Radial Burst \xe2\x80\x93 Dense (128R)" },
		{ "Radial_Dense_128R.Name", "EOmniTraceCoverageBuiltinPreset::Radial_Dense_128R" },
		{ "Radial_Sparse_64R.DisplayName", "Radial Burst \xe2\x80\x93 Sparse (64R)" },
		{ "Radial_Sparse_64R.Name", "EOmniTraceCoverageBuiltinPreset::Radial_Sparse_64R" },
		{ "Radial_VeryDense_256R.DisplayName", "Radial Burst \xe2\x80\x93 Very Dense (256R)" },
		{ "Radial_VeryDense_256R.Name", "EOmniTraceCoverageBuiltinPreset::Radial_VeryDense_256R" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Built-in coverage presets (radial bursts, etc)." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOmniTraceCoverageBuiltinPreset::Radial_Sparse_64R", (int64)EOmniTraceCoverageBuiltinPreset::Radial_Sparse_64R },
		{ "EOmniTraceCoverageBuiltinPreset::Radial_Dense_128R", (int64)EOmniTraceCoverageBuiltinPreset::Radial_Dense_128R },
		{ "EOmniTraceCoverageBuiltinPreset::Radial_VeryDense_256R", (int64)EOmniTraceCoverageBuiltinPreset::Radial_VeryDense_256R },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_OmniTrace_EOmniTraceCoverageBuiltinPreset_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OmniTrace_EOmniTraceCoverageBuiltinPreset_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OmniTrace,
	nullptr,
	"EOmniTraceCoverageBuiltinPreset",
	"EOmniTraceCoverageBuiltinPreset",
	Z_Construct_UEnum_OmniTrace_EOmniTraceCoverageBuiltinPreset_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OmniTrace_EOmniTraceCoverageBuiltinPreset_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OmniTrace_EOmniTraceCoverageBuiltinPreset_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OmniTrace_EOmniTraceCoverageBuiltinPreset_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OmniTrace_EOmniTraceCoverageBuiltinPreset()
{
	if (!Z_Registration_Info_UEnum_EOmniTraceCoverageBuiltinPreset.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOmniTraceCoverageBuiltinPreset.InnerSingleton, Z_Construct_UEnum_OmniTrace_EOmniTraceCoverageBuiltinPreset_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOmniTraceCoverageBuiltinPreset.InnerSingleton;
}
// ********** End Enum EOmniTraceCoverageBuiltinPreset *********************************************

// ********** Begin Enum EOmniTraceOrbitBuiltinPreset **********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOmniTraceOrbitBuiltinPreset;
static UEnum* EOmniTraceOrbitBuiltinPreset_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOmniTraceOrbitBuiltinPreset.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOmniTraceOrbitBuiltinPreset.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OmniTrace_EOmniTraceOrbitBuiltinPreset, (UObject*)Z_Construct_UPackage__Script_OmniTrace(), TEXT("EOmniTraceOrbitBuiltinPreset"));
	}
	return Z_Registration_Info_UEnum_EOmniTraceOrbitBuiltinPreset.OuterSingleton;
}
template<> OMNITRACE_NON_ATTRIBUTED_API UEnum* StaticEnum<EOmniTraceOrbitBuiltinPreset>()
{
	return EOmniTraceOrbitBuiltinPreset_StaticEnum();
}
struct Z_Construct_UEnum_OmniTrace_EOmniTraceOrbitBuiltinPreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Built-in orbit presets (rings around a point).\n */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
		{ "Orbit_MultiRing_3x24R.DisplayName", "Orbit \xe2\x80\x93 Multi Ring (3 x 24R)" },
		{ "Orbit_MultiRing_3x24R.Name", "EOmniTraceOrbitBuiltinPreset::Orbit_MultiRing_3x24R" },
		{ "Orbit_SingleRing_24R.DisplayName", "Orbit \xe2\x80\x93 Single Ring (24R)" },
		{ "Orbit_SingleRing_24R.Name", "EOmniTraceOrbitBuiltinPreset::Orbit_SingleRing_24R" },
		{ "Orbit_SingleRing_48R.DisplayName", "Orbit \xe2\x80\x93 Single Ring (48R)" },
		{ "Orbit_SingleRing_48R.Name", "EOmniTraceOrbitBuiltinPreset::Orbit_SingleRing_48R" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Built-in orbit presets (rings around a point)." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOmniTraceOrbitBuiltinPreset::Orbit_SingleRing_24R", (int64)EOmniTraceOrbitBuiltinPreset::Orbit_SingleRing_24R },
		{ "EOmniTraceOrbitBuiltinPreset::Orbit_SingleRing_48R", (int64)EOmniTraceOrbitBuiltinPreset::Orbit_SingleRing_48R },
		{ "EOmniTraceOrbitBuiltinPreset::Orbit_MultiRing_3x24R", (int64)EOmniTraceOrbitBuiltinPreset::Orbit_MultiRing_3x24R },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_OmniTrace_EOmniTraceOrbitBuiltinPreset_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OmniTrace_EOmniTraceOrbitBuiltinPreset_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OmniTrace,
	nullptr,
	"EOmniTraceOrbitBuiltinPreset",
	"EOmniTraceOrbitBuiltinPreset",
	Z_Construct_UEnum_OmniTrace_EOmniTraceOrbitBuiltinPreset_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OmniTrace_EOmniTraceOrbitBuiltinPreset_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OmniTrace_EOmniTraceOrbitBuiltinPreset_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OmniTrace_EOmniTraceOrbitBuiltinPreset_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OmniTrace_EOmniTraceOrbitBuiltinPreset()
{
	if (!Z_Registration_Info_UEnum_EOmniTraceOrbitBuiltinPreset.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOmniTraceOrbitBuiltinPreset.InnerSingleton, Z_Construct_UEnum_OmniTrace_EOmniTraceOrbitBuiltinPreset_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOmniTraceOrbitBuiltinPreset.InnerSingleton;
}
// ********** End Enum EOmniTraceOrbitBuiltinPreset ************************************************

// ********** Begin Enum EOmniTraceDebugBuiltinPreset **********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOmniTraceDebugBuiltinPreset;
static UEnum* EOmniTraceDebugBuiltinPreset_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOmniTraceDebugBuiltinPreset.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOmniTraceDebugBuiltinPreset.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OmniTrace_EOmniTraceDebugBuiltinPreset, (UObject*)Z_Construct_UPackage__Script_OmniTrace(), TEXT("EOmniTraceDebugBuiltinPreset"));
	}
	return Z_Registration_Info_UEnum_EOmniTraceDebugBuiltinPreset.OuterSingleton;
}
template<> OMNITRACE_NON_ATTRIBUTED_API UEnum* StaticEnum<EOmniTraceDebugBuiltinPreset>()
{
	return EOmniTraceDebugBuiltinPreset_StaticEnum();
}
struct Z_Construct_UEnum_OmniTrace_EOmniTraceDebugBuiltinPreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Built-in debug / utility presets (simple forward rays, etc).\n */" },
#endif
		{ "Debug_Fwd_LongRay.DisplayName", "Debug \xe2\x80\x93 Forward Long Ray" },
		{ "Debug_Fwd_LongRay.Name", "EOmniTraceDebugBuiltinPreset::Debug_Fwd_LongRay" },
		{ "Debug_Fwd_WideCone_9R.DisplayName", "Debug \xe2\x80\x93 Wide Cone (9R)" },
		{ "Debug_Fwd_WideCone_9R.Name", "EOmniTraceDebugBuiltinPreset::Debug_Fwd_WideCone_9R" },
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Built-in debug / utility presets (simple forward rays, etc)." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOmniTraceDebugBuiltinPreset::Debug_Fwd_LongRay", (int64)EOmniTraceDebugBuiltinPreset::Debug_Fwd_LongRay },
		{ "EOmniTraceDebugBuiltinPreset::Debug_Fwd_WideCone_9R", (int64)EOmniTraceDebugBuiltinPreset::Debug_Fwd_WideCone_9R },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_OmniTrace_EOmniTraceDebugBuiltinPreset_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OmniTrace_EOmniTraceDebugBuiltinPreset_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OmniTrace,
	nullptr,
	"EOmniTraceDebugBuiltinPreset",
	"EOmniTraceDebugBuiltinPreset",
	Z_Construct_UEnum_OmniTrace_EOmniTraceDebugBuiltinPreset_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OmniTrace_EOmniTraceDebugBuiltinPreset_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OmniTrace_EOmniTraceDebugBuiltinPreset_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OmniTrace_EOmniTraceDebugBuiltinPreset_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OmniTrace_EOmniTraceDebugBuiltinPreset()
{
	if (!Z_Registration_Info_UEnum_EOmniTraceDebugBuiltinPreset.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOmniTraceDebugBuiltinPreset.InnerSingleton, Z_Construct_UEnum_OmniTrace_EOmniTraceDebugBuiltinPreset_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOmniTraceDebugBuiltinPreset.InnerSingleton;
}
// ********** End Enum EOmniTraceDebugBuiltinPreset ************************************************

// ********** Begin ScriptStruct FOmniTraceBuiltinPresetKey ****************************************
struct Z_Construct_UScriptStruct_FOmniTraceBuiltinPresetKey_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FOmniTraceBuiltinPresetKey); }
	static inline consteval int16 GetStructAlignment() { return alignof(FOmniTraceBuiltinPresetKey); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Structured handle for selecting a built-in preset in Blueprints.\n * Only the enum matching Category will be editable (via EditCondition).\n */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Structured handle for selecting a built-in preset in Blueprints.\nOnly the enum matching Category will be editable (via EditCondition)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[] = {
		{ "Category", "OmniTrace|Presets" },
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisionPreset_MetaData[] = {
		{ "Category", "OmniTrace|Presets" },
		{ "EditCondition", "Category == EOmniTraceBuiltinPresetCategory::Vision" },
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CoveragePreset_MetaData[] = {
		{ "Category", "OmniTrace|Presets" },
		{ "EditCondition", "Category == EOmniTraceBuiltinPresetCategory::Coverage" },
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrbitPreset_MetaData[] = {
		{ "Category", "OmniTrace|Presets" },
		{ "EditCondition", "Category == EOmniTraceBuiltinPresetCategory::Orbit" },
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugPreset_MetaData[] = {
		{ "Category", "OmniTrace|Presets" },
		{ "EditCondition", "Category == EOmniTraceBuiltinPresetCategory::Debug" },
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FOmniTraceBuiltinPresetKey constinit property declarations ********
	static const UECodeGen_Private::FBytePropertyParams NewProp_Category_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Category;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VisionPreset_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_VisionPreset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CoveragePreset_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CoveragePreset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OrbitPreset_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OrbitPreset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DebugPreset_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DebugPreset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FOmniTraceBuiltinPresetKey constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOmniTraceBuiltinPresetKey>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FOmniTraceBuiltinPresetKey_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOmniTraceBuiltinPresetKey;
class UScriptStruct* FOmniTraceBuiltinPresetKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FOmniTraceBuiltinPresetKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FOmniTraceBuiltinPresetKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOmniTraceBuiltinPresetKey, (UObject*)Z_Construct_UPackage__Script_OmniTrace(), TEXT("OmniTraceBuiltinPresetKey"));
	}
	return Z_Registration_Info_UScriptStruct_FOmniTraceBuiltinPresetKey.OuterSingleton;
	}

// ********** Begin ScriptStruct FOmniTraceBuiltinPresetKey Property Definitions *******************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOmniTraceBuiltinPresetKey_Statics::NewProp_Category_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOmniTraceBuiltinPresetKey_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOmniTraceBuiltinPresetKey, Category), Z_Construct_UEnum_OmniTrace_EOmniTraceBuiltinPresetCategory, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Category_MetaData), NewProp_Category_MetaData) }; // 363984836
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOmniTraceBuiltinPresetKey_Statics::NewProp_VisionPreset_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOmniTraceBuiltinPresetKey_Statics::NewProp_VisionPreset = { "VisionPreset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOmniTraceBuiltinPresetKey, VisionPreset), Z_Construct_UEnum_OmniTrace_EOmniTraceVisionBuiltinPreset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisionPreset_MetaData), NewProp_VisionPreset_MetaData) }; // 3500572819
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOmniTraceBuiltinPresetKey_Statics::NewProp_CoveragePreset_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOmniTraceBuiltinPresetKey_Statics::NewProp_CoveragePreset = { "CoveragePreset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOmniTraceBuiltinPresetKey, CoveragePreset), Z_Construct_UEnum_OmniTrace_EOmniTraceCoverageBuiltinPreset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CoveragePreset_MetaData), NewProp_CoveragePreset_MetaData) }; // 2686431412
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOmniTraceBuiltinPresetKey_Statics::NewProp_OrbitPreset_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOmniTraceBuiltinPresetKey_Statics::NewProp_OrbitPreset = { "OrbitPreset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOmniTraceBuiltinPresetKey, OrbitPreset), Z_Construct_UEnum_OmniTrace_EOmniTraceOrbitBuiltinPreset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrbitPreset_MetaData), NewProp_OrbitPreset_MetaData) }; // 264630654
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOmniTraceBuiltinPresetKey_Statics::NewProp_DebugPreset_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOmniTraceBuiltinPresetKey_Statics::NewProp_DebugPreset = { "DebugPreset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOmniTraceBuiltinPresetKey, DebugPreset), Z_Construct_UEnum_OmniTrace_EOmniTraceDebugBuiltinPreset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugPreset_MetaData), NewProp_DebugPreset_MetaData) }; // 3691769697
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOmniTraceBuiltinPresetKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTraceBuiltinPresetKey_Statics::NewProp_Category_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTraceBuiltinPresetKey_Statics::NewProp_Category,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTraceBuiltinPresetKey_Statics::NewProp_VisionPreset_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTraceBuiltinPresetKey_Statics::NewProp_VisionPreset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTraceBuiltinPresetKey_Statics::NewProp_CoveragePreset_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTraceBuiltinPresetKey_Statics::NewProp_CoveragePreset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTraceBuiltinPresetKey_Statics::NewProp_OrbitPreset_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTraceBuiltinPresetKey_Statics::NewProp_OrbitPreset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTraceBuiltinPresetKey_Statics::NewProp_DebugPreset_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTraceBuiltinPresetKey_Statics::NewProp_DebugPreset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOmniTraceBuiltinPresetKey_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FOmniTraceBuiltinPresetKey Property Definitions *********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOmniTraceBuiltinPresetKey_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OmniTrace,
	nullptr,
	&NewStructOps,
	"OmniTraceBuiltinPresetKey",
	Z_Construct_UScriptStruct_FOmniTraceBuiltinPresetKey_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOmniTraceBuiltinPresetKey_Statics::PropPointers),
	sizeof(FOmniTraceBuiltinPresetKey),
	alignof(FOmniTraceBuiltinPresetKey),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOmniTraceBuiltinPresetKey_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOmniTraceBuiltinPresetKey_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOmniTraceBuiltinPresetKey()
{
	if (!Z_Registration_Info_UScriptStruct_FOmniTraceBuiltinPresetKey.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOmniTraceBuiltinPresetKey.InnerSingleton, Z_Construct_UScriptStruct_FOmniTraceBuiltinPresetKey_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FOmniTraceBuiltinPresetKey.InnerSingleton);
}
// ********** End ScriptStruct FOmniTraceBuiltinPresetKey ******************************************

// ********** Begin Enum EOmniTracePatternFamily ***************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOmniTracePatternFamily;
static UEnum* EOmniTracePatternFamily_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOmniTracePatternFamily.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOmniTracePatternFamily.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OmniTrace_EOmniTracePatternFamily, (UObject*)Z_Construct_UPackage__Script_OmniTrace(), TEXT("EOmniTracePatternFamily"));
	}
	return Z_Registration_Info_UEnum_EOmniTracePatternFamily.OuterSingleton;
}
template<> OMNITRACE_NON_ATTRIBUTED_API UEnum* StaticEnum<EOmniTracePatternFamily>()
{
	return EOmniTracePatternFamily_StaticEnum();
}
struct Z_Construct_UEnum_OmniTrace_EOmniTracePatternFamily_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Arc.DisplayName", "Arc / Circular" },
		{ "Arc.Name", "EOmniTracePatternFamily::Arc" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * High-level grouping used for UI, switches, and validation.\n * This should stay STABLE \xe2\x80\x93 add new families at the end only.\n */" },
#endif
		{ "Grid.DisplayName", "Grid / Lattice" },
		{ "Grid.Name", "EOmniTracePatternFamily::Grid" },
		{ "Line.DisplayName", "Line / Segment" },
		{ "Line.Name", "EOmniTracePatternFamily::Line" },
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
		{ "NoiseWalk.DisplayName", "Noise Walk / Random Path" },
		{ "NoiseWalk.Name", "EOmniTracePatternFamily::NoiseWalk" },
		{ "Orbit.DisplayName", "Orbit / Spiral" },
		{ "Orbit.Name", "EOmniTracePatternFamily::Orbit" },
		{ "Radial.DisplayName", "Radial / Starburst" },
		{ "Radial.Name", "EOmniTracePatternFamily::Radial" },
		{ "Scatter.DisplayName", "Scatter / Sampling" },
		{ "Scatter.Name", "EOmniTracePatternFamily::Scatter" },
		{ "Spline.DisplayName", "Spline Conform" },
		{ "Spline.Name", "EOmniTracePatternFamily::Spline" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "High-level grouping used for UI, switches, and validation.\nThis should stay STABLE \xe2\x80\x93 add new families at the end only." },
#endif
		{ "Volume.DisplayName", "Volume Fill" },
		{ "Volume.Name", "EOmniTracePatternFamily::Volume" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOmniTracePatternFamily::Line", (int64)EOmniTracePatternFamily::Line },
		{ "EOmniTracePatternFamily::Arc", (int64)EOmniTracePatternFamily::Arc },
		{ "EOmniTracePatternFamily::Orbit", (int64)EOmniTracePatternFamily::Orbit },
		{ "EOmniTracePatternFamily::Grid", (int64)EOmniTracePatternFamily::Grid },
		{ "EOmniTracePatternFamily::NoiseWalk", (int64)EOmniTracePatternFamily::NoiseWalk },
		{ "EOmniTracePatternFamily::Radial", (int64)EOmniTracePatternFamily::Radial },
		{ "EOmniTracePatternFamily::Scatter", (int64)EOmniTracePatternFamily::Scatter },
		{ "EOmniTracePatternFamily::Spline", (int64)EOmniTracePatternFamily::Spline },
		{ "EOmniTracePatternFamily::Volume", (int64)EOmniTracePatternFamily::Volume },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_OmniTrace_EOmniTracePatternFamily_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OmniTrace_EOmniTracePatternFamily_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OmniTrace,
	nullptr,
	"EOmniTracePatternFamily",
	"EOmniTracePatternFamily",
	Z_Construct_UEnum_OmniTrace_EOmniTracePatternFamily_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OmniTrace_EOmniTracePatternFamily_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OmniTrace_EOmniTracePatternFamily_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OmniTrace_EOmniTracePatternFamily_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OmniTrace_EOmniTracePatternFamily()
{
	if (!Z_Registration_Info_UEnum_EOmniTracePatternFamily.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOmniTracePatternFamily.InnerSingleton, Z_Construct_UEnum_OmniTrace_EOmniTracePatternFamily_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOmniTracePatternFamily.InnerSingleton;
}
// ********** End Enum EOmniTracePatternFamily *****************************************************

// ********** Begin Enum EOmniTraceLinePattern *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOmniTraceLinePattern;
static UEnum* EOmniTraceLinePattern_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOmniTraceLinePattern.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOmniTraceLinePattern.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OmniTrace_EOmniTraceLinePattern, (UObject*)Z_Construct_UPackage__Script_OmniTrace(), TEXT("EOmniTraceLinePattern"));
	}
	return Z_Registration_Info_UEnum_EOmniTraceLinePattern.OuterSingleton;
}
template<> OMNITRACE_NON_ATTRIBUTED_API UEnum* StaticEnum<EOmniTraceLinePattern>()
{
	return EOmniTraceLinePattern_StaticEnum();
}
struct Z_Construct_UEnum_OmniTrace_EOmniTraceLinePattern_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BezierLike.DisplayName", "Bezier-like Curve" },
		{ "BezierLike.Name", "EOmniTraceLinePattern::BezierLike" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Line / segment patterns \xe2\x80\x93 everything that feels \"linear\".\n */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
		{ "MultiSegment.DisplayName", "Multi Segment Line" },
		{ "MultiSegment.Name", "EOmniTraceLinePattern::MultiSegment" },
		{ "PingPong.DisplayName", "Ping-Pong (Back & Forth)" },
		{ "PingPong.Name", "EOmniTraceLinePattern::PingPong" },
		{ "SimpleLine.DisplayName", "Simple Line" },
		{ "SimpleLine.Name", "EOmniTraceLinePattern::SimpleLine" },
		{ "StairStep.DisplayName", "Stair-Step / Manhattan" },
		{ "StairStep.Name", "EOmniTraceLinePattern::StairStep" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Line / segment patterns \xe2\x80\x93 everything that feels \"linear\"." },
#endif
		{ "ZigZag.DisplayName", "Zig-Zag" },
		{ "ZigZag.Name", "EOmniTraceLinePattern::ZigZag" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOmniTraceLinePattern::SimpleLine", (int64)EOmniTraceLinePattern::SimpleLine },
		{ "EOmniTraceLinePattern::MultiSegment", (int64)EOmniTraceLinePattern::MultiSegment },
		{ "EOmniTraceLinePattern::ZigZag", (int64)EOmniTraceLinePattern::ZigZag },
		{ "EOmniTraceLinePattern::PingPong", (int64)EOmniTraceLinePattern::PingPong },
		{ "EOmniTraceLinePattern::BezierLike", (int64)EOmniTraceLinePattern::BezierLike },
		{ "EOmniTraceLinePattern::StairStep", (int64)EOmniTraceLinePattern::StairStep },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_OmniTrace_EOmniTraceLinePattern_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OmniTrace_EOmniTraceLinePattern_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OmniTrace,
	nullptr,
	"EOmniTraceLinePattern",
	"EOmniTraceLinePattern",
	Z_Construct_UEnum_OmniTrace_EOmniTraceLinePattern_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OmniTrace_EOmniTraceLinePattern_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OmniTrace_EOmniTraceLinePattern_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OmniTrace_EOmniTraceLinePattern_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OmniTrace_EOmniTraceLinePattern()
{
	if (!Z_Registration_Info_UEnum_EOmniTraceLinePattern.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOmniTraceLinePattern.InnerSingleton, Z_Construct_UEnum_OmniTrace_EOmniTraceLinePattern_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOmniTraceLinePattern.InnerSingleton;
}
// ********** End Enum EOmniTraceLinePattern *******************************************************

// ********** Begin Enum EOmniTraceArcPattern ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOmniTraceArcPattern;
static UEnum* EOmniTraceArcPattern_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOmniTraceArcPattern.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOmniTraceArcPattern.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OmniTrace_EOmniTraceArcPattern, (UObject*)Z_Construct_UPackage__Script_OmniTrace(), TEXT("EOmniTraceArcPattern"));
	}
	return Z_Registration_Info_UEnum_EOmniTraceArcPattern.OuterSingleton;
}
template<> OMNITRACE_NON_ATTRIBUTED_API UEnum* StaticEnum<EOmniTraceArcPattern>()
{
	return EOmniTraceArcPattern_StaticEnum();
}
struct Z_Construct_UEnum_OmniTrace_EOmniTraceArcPattern_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ArcFan.DisplayName", "Arc Fan (Radial Fan)" },
		{ "ArcFan.Name", "EOmniTraceArcPattern::ArcFan" },
		{ "Bidirectional.DisplayName", "Bidirectional Arc" },
		{ "Bidirectional.Name", "EOmniTraceArcPattern::Bidirectional" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Arc patterns \xe2\x80\x93 short circular segments, fans, and the F-set arcs.\n */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
		{ "OrbitArc.DisplayName", "Orbit Arc" },
		{ "OrbitArc.Name", "EOmniTraceArcPattern::OrbitArc" },
		{ "SingleArc.DisplayName", "Single Arc" },
		{ "SingleArc.Name", "EOmniTraceArcPattern::SingleArc" },
		{ "TargetMultiArc.DisplayName", "Target Multi-Arc" },
		{ "TargetMultiArc.Name", "EOmniTraceArcPattern::TargetMultiArc" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Arc patterns \xe2\x80\x93 short circular segments, fans, and the F-set arcs." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOmniTraceArcPattern::SingleArc", (int64)EOmniTraceArcPattern::SingleArc },
		{ "EOmniTraceArcPattern::TargetMultiArc", (int64)EOmniTraceArcPattern::TargetMultiArc },
		{ "EOmniTraceArcPattern::OrbitArc", (int64)EOmniTraceArcPattern::OrbitArc },
		{ "EOmniTraceArcPattern::Bidirectional", (int64)EOmniTraceArcPattern::Bidirectional },
		{ "EOmniTraceArcPattern::ArcFan", (int64)EOmniTraceArcPattern::ArcFan },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_OmniTrace_EOmniTraceArcPattern_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OmniTrace_EOmniTraceArcPattern_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OmniTrace,
	nullptr,
	"EOmniTraceArcPattern",
	"EOmniTraceArcPattern",
	Z_Construct_UEnum_OmniTrace_EOmniTraceArcPattern_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OmniTrace_EOmniTraceArcPattern_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OmniTrace_EOmniTraceArcPattern_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OmniTrace_EOmniTraceArcPattern_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OmniTrace_EOmniTraceArcPattern()
{
	if (!Z_Registration_Info_UEnum_EOmniTraceArcPattern.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOmniTraceArcPattern.InnerSingleton, Z_Construct_UEnum_OmniTrace_EOmniTraceArcPattern_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOmniTraceArcPattern.InnerSingleton;
}
// ********** End Enum EOmniTraceArcPattern ********************************************************

// ********** Begin Enum EOmniTraceOrbitPattern ****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOmniTraceOrbitPattern;
static UEnum* EOmniTraceOrbitPattern_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOmniTraceOrbitPattern.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOmniTraceOrbitPattern.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OmniTrace_EOmniTraceOrbitPattern, (UObject*)Z_Construct_UPackage__Script_OmniTrace(), TEXT("EOmniTraceOrbitPattern"));
	}
	return Z_Registration_Info_UEnum_EOmniTraceOrbitPattern.OuterSingleton;
}
template<> OMNITRACE_NON_ATTRIBUTED_API UEnum* StaticEnum<EOmniTraceOrbitPattern>()
{
	return EOmniTraceOrbitPattern_StaticEnum();
}
struct Z_Construct_UEnum_OmniTrace_EOmniTraceOrbitPattern_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CircularOrbit.DisplayName", "Circular Orbit" },
		{ "CircularOrbit.Name", "EOmniTraceOrbitPattern::CircularOrbit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Orbit patterns \xe2\x80\x93 continuous orbital motion / long-span spirals.\n */" },
#endif
		{ "EllipticalOrbit.DisplayName", "Elliptical Orbit" },
		{ "EllipticalOrbit.Name", "EOmniTraceOrbitPattern::EllipticalOrbit" },
		{ "FigureEight.DisplayName", "Figure Eight / Lissajous" },
		{ "FigureEight.Name", "EOmniTraceOrbitPattern::FigureEight" },
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
		{ "SpiralIn.DisplayName", "Spiral In" },
		{ "SpiralIn.Name", "EOmniTraceOrbitPattern::SpiralIn" },
		{ "SpiralOut.DisplayName", "Spiral Out" },
		{ "SpiralOut.Name", "EOmniTraceOrbitPattern::SpiralOut" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Orbit patterns \xe2\x80\x93 continuous orbital motion / long-span spirals." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOmniTraceOrbitPattern::CircularOrbit", (int64)EOmniTraceOrbitPattern::CircularOrbit },
		{ "EOmniTraceOrbitPattern::EllipticalOrbit", (int64)EOmniTraceOrbitPattern::EllipticalOrbit },
		{ "EOmniTraceOrbitPattern::SpiralIn", (int64)EOmniTraceOrbitPattern::SpiralIn },
		{ "EOmniTraceOrbitPattern::SpiralOut", (int64)EOmniTraceOrbitPattern::SpiralOut },
		{ "EOmniTraceOrbitPattern::FigureEight", (int64)EOmniTraceOrbitPattern::FigureEight },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_OmniTrace_EOmniTraceOrbitPattern_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OmniTrace_EOmniTraceOrbitPattern_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OmniTrace,
	nullptr,
	"EOmniTraceOrbitPattern",
	"EOmniTraceOrbitPattern",
	Z_Construct_UEnum_OmniTrace_EOmniTraceOrbitPattern_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OmniTrace_EOmniTraceOrbitPattern_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OmniTrace_EOmniTraceOrbitPattern_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OmniTrace_EOmniTraceOrbitPattern_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OmniTrace_EOmniTraceOrbitPattern()
{
	if (!Z_Registration_Info_UEnum_EOmniTraceOrbitPattern.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOmniTraceOrbitPattern.InnerSingleton, Z_Construct_UEnum_OmniTrace_EOmniTraceOrbitPattern_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOmniTraceOrbitPattern.InnerSingleton;
}
// ********** End Enum EOmniTraceOrbitPattern ******************************************************

// ********** Begin Enum EOmniTraceGridPattern *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOmniTraceGridPattern;
static UEnum* EOmniTraceGridPattern_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOmniTraceGridPattern.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOmniTraceGridPattern.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OmniTrace_EOmniTraceGridPattern, (UObject*)Z_Construct_UPackage__Script_OmniTrace(), TEXT("EOmniTraceGridPattern"));
	}
	return Z_Registration_Info_UEnum_EOmniTraceGridPattern.OuterSingleton;
}
template<> OMNITRACE_NON_ATTRIBUTED_API UEnum* StaticEnum<EOmniTraceGridPattern>()
{
	return EOmniTraceGridPattern_StaticEnum();
}
struct Z_Construct_UEnum_OmniTrace_EOmniTraceGridPattern_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Checkerboard.DisplayName", "Checkerboard Cells" },
		{ "Checkerboard.Name", "EOmniTraceGridPattern::Checkerboard" },
		{ "ColumnScan.DisplayName", "Column Scan (Bottom-to-Top)" },
		{ "ColumnScan.Name", "EOmniTraceGridPattern::ColumnScan" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Grid / lattice sweeps \xe2\x80\x93 perfect for waypoints, patrols, coverage.\n */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
		{ "RandomCells.DisplayName", "Random Cells" },
		{ "RandomCells.Name", "EOmniTraceGridPattern::RandomCells" },
		{ "RowScan.DisplayName", "Row Scan (Left-to-Right)" },
		{ "RowScan.Name", "EOmniTraceGridPattern::RowScan" },
		{ "SnakeColumns.DisplayName", "Snake Columns" },
		{ "SnakeColumns.Name", "EOmniTraceGridPattern::SnakeColumns" },
		{ "SnakeRows.DisplayName", "Snake Rows (Boustrophedon)" },
		{ "SnakeRows.Name", "EOmniTraceGridPattern::SnakeRows" },
		{ "SpiralOut.DisplayName", "Grid Spiral Out" },
		{ "SpiralOut.Name", "EOmniTraceGridPattern::SpiralOut" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Grid / lattice sweeps \xe2\x80\x93 perfect for waypoints, patrols, coverage." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOmniTraceGridPattern::RowScan", (int64)EOmniTraceGridPattern::RowScan },
		{ "EOmniTraceGridPattern::ColumnScan", (int64)EOmniTraceGridPattern::ColumnScan },
		{ "EOmniTraceGridPattern::SnakeRows", (int64)EOmniTraceGridPattern::SnakeRows },
		{ "EOmniTraceGridPattern::SnakeColumns", (int64)EOmniTraceGridPattern::SnakeColumns },
		{ "EOmniTraceGridPattern::SpiralOut", (int64)EOmniTraceGridPattern::SpiralOut },
		{ "EOmniTraceGridPattern::Checkerboard", (int64)EOmniTraceGridPattern::Checkerboard },
		{ "EOmniTraceGridPattern::RandomCells", (int64)EOmniTraceGridPattern::RandomCells },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_OmniTrace_EOmniTraceGridPattern_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OmniTrace_EOmniTraceGridPattern_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OmniTrace,
	nullptr,
	"EOmniTraceGridPattern",
	"EOmniTraceGridPattern",
	Z_Construct_UEnum_OmniTrace_EOmniTraceGridPattern_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OmniTrace_EOmniTraceGridPattern_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OmniTrace_EOmniTraceGridPattern_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OmniTrace_EOmniTraceGridPattern_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OmniTrace_EOmniTraceGridPattern()
{
	if (!Z_Registration_Info_UEnum_EOmniTraceGridPattern.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOmniTraceGridPattern.InnerSingleton, Z_Construct_UEnum_OmniTrace_EOmniTraceGridPattern_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOmniTraceGridPattern.InnerSingleton;
}
// ********** End Enum EOmniTraceGridPattern *******************************************************

// ********** Begin Enum EOmniTraceNoiseWalkPattern ************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOmniTraceNoiseWalkPattern;
static UEnum* EOmniTraceNoiseWalkPattern_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOmniTraceNoiseWalkPattern.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOmniTraceNoiseWalkPattern.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OmniTrace_EOmniTraceNoiseWalkPattern, (UObject*)Z_Construct_UPackage__Script_OmniTrace(), TEXT("EOmniTraceNoiseWalkPattern"));
	}
	return Z_Registration_Info_UEnum_EOmniTraceNoiseWalkPattern.OuterSingleton;
}
template<> OMNITRACE_NON_ATTRIBUTED_API UEnum* StaticEnum<EOmniTraceNoiseWalkPattern>()
{
	return EOmniTraceNoiseWalkPattern_StaticEnum();
}
struct Z_Construct_UEnum_OmniTrace_EOmniTraceNoiseWalkPattern_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BranchingWalk.DisplayName", "Branching Walk" },
		{ "BranchingWalk.Name", "EOmniTraceNoiseWalkPattern::BranchingWalk" },
		{ "BrownianLoop.DisplayName", "Brownian Loop / Return-To-Start" },
		{ "BrownianLoop.Name", "EOmniTraceNoiseWalkPattern::BrownianLoop" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Noise-driven \"walks\" \xe2\x80\x93 for natural-looking wandering paths.\n */" },
#endif
		{ "JitteredLine.DisplayName", "Jittered Line" },
		{ "JitteredLine.Name", "EOmniTraceNoiseWalkPattern::JitteredLine" },
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
		{ "PerlinDrift.DisplayName", "Perlin Drift Walk" },
		{ "PerlinDrift.Name", "EOmniTraceNoiseWalkPattern::PerlinDrift" },
		{ "RandomWalk.DisplayName", "Pure Random Walk" },
		{ "RandomWalk.Name", "EOmniTraceNoiseWalkPattern::RandomWalk" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Noise-driven \"walks\" \xe2\x80\x93 for natural-looking wandering paths." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOmniTraceNoiseWalkPattern::RandomWalk", (int64)EOmniTraceNoiseWalkPattern::RandomWalk },
		{ "EOmniTraceNoiseWalkPattern::PerlinDrift", (int64)EOmniTraceNoiseWalkPattern::PerlinDrift },
		{ "EOmniTraceNoiseWalkPattern::JitteredLine", (int64)EOmniTraceNoiseWalkPattern::JitteredLine },
		{ "EOmniTraceNoiseWalkPattern::BrownianLoop", (int64)EOmniTraceNoiseWalkPattern::BrownianLoop },
		{ "EOmniTraceNoiseWalkPattern::BranchingWalk", (int64)EOmniTraceNoiseWalkPattern::BranchingWalk },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_OmniTrace_EOmniTraceNoiseWalkPattern_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OmniTrace_EOmniTraceNoiseWalkPattern_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OmniTrace,
	nullptr,
	"EOmniTraceNoiseWalkPattern",
	"EOmniTraceNoiseWalkPattern",
	Z_Construct_UEnum_OmniTrace_EOmniTraceNoiseWalkPattern_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OmniTrace_EOmniTraceNoiseWalkPattern_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OmniTrace_EOmniTraceNoiseWalkPattern_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OmniTrace_EOmniTraceNoiseWalkPattern_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OmniTrace_EOmniTraceNoiseWalkPattern()
{
	if (!Z_Registration_Info_UEnum_EOmniTraceNoiseWalkPattern.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOmniTraceNoiseWalkPattern.InnerSingleton, Z_Construct_UEnum_OmniTrace_EOmniTraceNoiseWalkPattern_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOmniTraceNoiseWalkPattern.InnerSingleton;
}
// ********** End Enum EOmniTraceNoiseWalkPattern **************************************************

// ********** Begin Enum EOmniTraceRadialPattern ***************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOmniTraceRadialPattern;
static UEnum* EOmniTraceRadialPattern_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOmniTraceRadialPattern.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOmniTraceRadialPattern.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OmniTrace_EOmniTraceRadialPattern, (UObject*)Z_Construct_UPackage__Script_OmniTrace(), TEXT("EOmniTraceRadialPattern"));
	}
	return Z_Registration_Info_UEnum_EOmniTraceRadialPattern.OuterSingleton;
}
template<> OMNITRACE_NON_ATTRIBUTED_API UEnum* StaticEnum<EOmniTraceRadialPattern>()
{
	return EOmniTraceRadialPattern_StaticEnum();
}
struct Z_Construct_UEnum_OmniTrace_EOmniTraceRadialPattern_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Radial / starburst motifs \xe2\x80\x93 great for hubs, AOEs, and layouts.\n */" },
#endif
		{ "GoldenAngleSpiral.DisplayName", "Golden-Angle Spiral" },
		{ "GoldenAngleSpiral.Name", "EOmniTraceRadialPattern::GoldenAngleSpiral" },
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
		{ "RadialRings.DisplayName", "Radial Rings" },
		{ "RadialRings.Name", "EOmniTraceRadialPattern::RadialRings" },
		{ "RadialSpokes.DisplayName", "Radial Spokes" },
		{ "RadialSpokes.Name", "EOmniTraceRadialPattern::RadialSpokes" },
		{ "Starburst.DisplayName", "Starburst" },
		{ "Starburst.Name", "EOmniTraceRadialPattern::Starburst" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Radial / starburst motifs \xe2\x80\x93 great for hubs, AOEs, and layouts." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOmniTraceRadialPattern::Starburst", (int64)EOmniTraceRadialPattern::Starburst },
		{ "EOmniTraceRadialPattern::RadialSpokes", (int64)EOmniTraceRadialPattern::RadialSpokes },
		{ "EOmniTraceRadialPattern::RadialRings", (int64)EOmniTraceRadialPattern::RadialRings },
		{ "EOmniTraceRadialPattern::GoldenAngleSpiral", (int64)EOmniTraceRadialPattern::GoldenAngleSpiral },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_OmniTrace_EOmniTraceRadialPattern_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OmniTrace_EOmniTraceRadialPattern_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OmniTrace,
	nullptr,
	"EOmniTraceRadialPattern",
	"EOmniTraceRadialPattern",
	Z_Construct_UEnum_OmniTrace_EOmniTraceRadialPattern_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OmniTrace_EOmniTraceRadialPattern_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OmniTrace_EOmniTraceRadialPattern_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OmniTrace_EOmniTraceRadialPattern_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OmniTrace_EOmniTraceRadialPattern()
{
	if (!Z_Registration_Info_UEnum_EOmniTraceRadialPattern.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOmniTraceRadialPattern.InnerSingleton, Z_Construct_UEnum_OmniTrace_EOmniTraceRadialPattern_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOmniTraceRadialPattern.InnerSingleton;
}
// ********** End Enum EOmniTraceRadialPattern *****************************************************

// ********** Begin Enum EOmniTraceScatterPattern **************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOmniTraceScatterPattern;
static UEnum* EOmniTraceScatterPattern_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOmniTraceScatterPattern.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOmniTraceScatterPattern.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OmniTrace_EOmniTraceScatterPattern, (UObject*)Z_Construct_UPackage__Script_OmniTrace(), TEXT("EOmniTraceScatterPattern"));
	}
	return Z_Registration_Info_UEnum_EOmniTraceScatterPattern.OuterSingleton;
}
template<> OMNITRACE_NON_ATTRIBUTED_API UEnum* StaticEnum<EOmniTraceScatterPattern>()
{
	return EOmniTraceScatterPattern_StaticEnum();
}
struct Z_Construct_UEnum_OmniTrace_EOmniTraceScatterPattern_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Clustered.DisplayName", "Clustered Scatter" },
		{ "Clustered.Name", "EOmniTraceScatterPattern::Clustered" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Scatter / sampling \xe2\x80\x93 point clouds on surfaces / planes.\n */" },
#endif
		{ "JitteredGrid.DisplayName", "Jittered Grid" },
		{ "JitteredGrid.Name", "EOmniTraceScatterPattern::JitteredGrid" },
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
		{ "PoissonDisk.DisplayName", "Poisson Disk" },
		{ "PoissonDisk.Name", "EOmniTraceScatterPattern::PoissonDisk" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scatter / sampling \xe2\x80\x93 point clouds on surfaces / planes." },
#endif
		{ "UniformRandom.DisplayName", "Uniform Random" },
		{ "UniformRandom.Name", "EOmniTraceScatterPattern::UniformRandom" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOmniTraceScatterPattern::UniformRandom", (int64)EOmniTraceScatterPattern::UniformRandom },
		{ "EOmniTraceScatterPattern::PoissonDisk", (int64)EOmniTraceScatterPattern::PoissonDisk },
		{ "EOmniTraceScatterPattern::JitteredGrid", (int64)EOmniTraceScatterPattern::JitteredGrid },
		{ "EOmniTraceScatterPattern::Clustered", (int64)EOmniTraceScatterPattern::Clustered },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_OmniTrace_EOmniTraceScatterPattern_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OmniTrace_EOmniTraceScatterPattern_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OmniTrace,
	nullptr,
	"EOmniTraceScatterPattern",
	"EOmniTraceScatterPattern",
	Z_Construct_UEnum_OmniTrace_EOmniTraceScatterPattern_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OmniTrace_EOmniTraceScatterPattern_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OmniTrace_EOmniTraceScatterPattern_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OmniTrace_EOmniTraceScatterPattern_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OmniTrace_EOmniTraceScatterPattern()
{
	if (!Z_Registration_Info_UEnum_EOmniTraceScatterPattern.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOmniTraceScatterPattern.InnerSingleton, Z_Construct_UEnum_OmniTrace_EOmniTraceScatterPattern_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOmniTraceScatterPattern.InnerSingleton;
}
// ********** End Enum EOmniTraceScatterPattern ****************************************************

// ********** Begin Enum EOmniTraceSplinePattern ***************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOmniTraceSplinePattern;
static UEnum* EOmniTraceSplinePattern_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOmniTraceSplinePattern.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOmniTraceSplinePattern.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OmniTrace_EOmniTraceSplinePattern, (UObject*)Z_Construct_UPackage__Script_OmniTrace(), TEXT("EOmniTraceSplinePattern"));
	}
	return Z_Registration_Info_UEnum_EOmniTraceSplinePattern.OuterSingleton;
}
template<> OMNITRACE_NON_ATTRIBUTED_API UEnum* StaticEnum<EOmniTraceSplinePattern>()
{
	return EOmniTraceSplinePattern_StaticEnum();
}
struct Z_Construct_UEnum_OmniTrace_EOmniTraceSplinePattern_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Spline-conforming patterns \xe2\x80\x93 all variants of \"follow this curve\".\n */" },
#endif
		{ "EvenDistance.DisplayName", "Even Distance Along Spline" },
		{ "EvenDistance.Name", "EOmniTraceSplinePattern::EvenDistance" },
		{ "FixedSegmentCount.DisplayName", "Fixed Segment Count" },
		{ "FixedSegmentCount.Name", "EOmniTraceSplinePattern::FixedSegmentCount" },
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
		{ "RandomOnSpline.DisplayName", "Random Positions On Spline" },
		{ "RandomOnSpline.Name", "EOmniTraceSplinePattern::RandomOnSpline" },
		{ "SplineKnots.DisplayName", "At Spline Knots / Points" },
		{ "SplineKnots.Name", "EOmniTraceSplinePattern::SplineKnots" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spline-conforming patterns \xe2\x80\x93 all variants of \"follow this curve\"." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOmniTraceSplinePattern::EvenDistance", (int64)EOmniTraceSplinePattern::EvenDistance },
		{ "EOmniTraceSplinePattern::FixedSegmentCount", (int64)EOmniTraceSplinePattern::FixedSegmentCount },
		{ "EOmniTraceSplinePattern::SplineKnots", (int64)EOmniTraceSplinePattern::SplineKnots },
		{ "EOmniTraceSplinePattern::RandomOnSpline", (int64)EOmniTraceSplinePattern::RandomOnSpline },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_OmniTrace_EOmniTraceSplinePattern_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OmniTrace_EOmniTraceSplinePattern_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OmniTrace,
	nullptr,
	"EOmniTraceSplinePattern",
	"EOmniTraceSplinePattern",
	Z_Construct_UEnum_OmniTrace_EOmniTraceSplinePattern_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OmniTrace_EOmniTraceSplinePattern_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OmniTrace_EOmniTraceSplinePattern_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OmniTrace_EOmniTraceSplinePattern_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OmniTrace_EOmniTraceSplinePattern()
{
	if (!Z_Registration_Info_UEnum_EOmniTraceSplinePattern.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOmniTraceSplinePattern.InnerSingleton, Z_Construct_UEnum_OmniTrace_EOmniTraceSplinePattern_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOmniTraceSplinePattern.InnerSingleton;
}
// ********** End Enum EOmniTraceSplinePattern *****************************************************

// ********** Begin Enum EOmniTraceVolumePattern ***************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOmniTraceVolumePattern;
static UEnum* EOmniTraceVolumePattern_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOmniTraceVolumePattern.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOmniTraceVolumePattern.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OmniTrace_EOmniTraceVolumePattern, (UObject*)Z_Construct_UPackage__Script_OmniTrace(), TEXT("EOmniTraceVolumePattern"));
	}
	return Z_Registration_Info_UEnum_EOmniTraceVolumePattern.OuterSingleton;
}
template<> OMNITRACE_NON_ATTRIBUTED_API UEnum* StaticEnum<EOmniTraceVolumePattern>()
{
	return EOmniTraceVolumePattern_StaticEnum();
}
struct Z_Construct_UEnum_OmniTrace_EOmniTraceVolumePattern_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BoxGrid.DisplayName", "Box Grid" },
		{ "BoxGrid.Name", "EOmniTraceVolumePattern::BoxGrid" },
		{ "BoxSpiral.DisplayName", "Box Spiral" },
		{ "BoxSpiral.Name", "EOmniTraceVolumePattern::BoxSpiral" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Volume fill patterns \xe2\x80\x93 3D waypoint/voxel volumes.\n */" },
#endif
		{ "CylinderShell.DisplayName", "Cylinder Shell" },
		{ "CylinderShell.Name", "EOmniTraceVolumePattern::CylinderShell" },
		{ "CylinderVolume.DisplayName", "Cylinder Volume" },
		{ "CylinderVolume.Name", "EOmniTraceVolumePattern::CylinderVolume" },
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
		{ "SphereShell.DisplayName", "Sphere Shell" },
		{ "SphereShell.Name", "EOmniTraceVolumePattern::SphereShell" },
		{ "SphereVolume.DisplayName", "Sphere Volume" },
		{ "SphereVolume.Name", "EOmniTraceVolumePattern::SphereVolume" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Volume fill patterns \xe2\x80\x93 3D waypoint/voxel volumes." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOmniTraceVolumePattern::BoxGrid", (int64)EOmniTraceVolumePattern::BoxGrid },
		{ "EOmniTraceVolumePattern::BoxSpiral", (int64)EOmniTraceVolumePattern::BoxSpiral },
		{ "EOmniTraceVolumePattern::SphereShell", (int64)EOmniTraceVolumePattern::SphereShell },
		{ "EOmniTraceVolumePattern::SphereVolume", (int64)EOmniTraceVolumePattern::SphereVolume },
		{ "EOmniTraceVolumePattern::CylinderShell", (int64)EOmniTraceVolumePattern::CylinderShell },
		{ "EOmniTraceVolumePattern::CylinderVolume", (int64)EOmniTraceVolumePattern::CylinderVolume },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_OmniTrace_EOmniTraceVolumePattern_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OmniTrace_EOmniTraceVolumePattern_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OmniTrace,
	nullptr,
	"EOmniTraceVolumePattern",
	"EOmniTraceVolumePattern",
	Z_Construct_UEnum_OmniTrace_EOmniTraceVolumePattern_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OmniTrace_EOmniTraceVolumePattern_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OmniTrace_EOmniTraceVolumePattern_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OmniTrace_EOmniTraceVolumePattern_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OmniTrace_EOmniTraceVolumePattern()
{
	if (!Z_Registration_Info_UEnum_EOmniTraceVolumePattern.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOmniTraceVolumePattern.InnerSingleton, Z_Construct_UEnum_OmniTrace_EOmniTraceVolumePattern_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOmniTraceVolumePattern.InnerSingleton;
}
// ********** End Enum EOmniTraceVolumePattern *****************************************************

// ********** Begin ScriptStruct FOmniTracePatternConfig *******************************************
struct Z_Construct_UScriptStruct_FOmniTracePatternConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FOmniTracePatternConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FOmniTracePatternConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Configurable pattern selector for higher-level path / layout helpers.\n */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Configurable pattern selector for higher-level path / layout helpers." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatternFamily_MetaData[] = {
		{ "Category", "OmniTrace|Pattern" },
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinePattern_MetaData[] = {
		{ "Category", "OmniTrace|Pattern" },
		{ "EditCondition", "PatternFamily == EOmniTracePatternFamily::Line" },
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArcPattern_MetaData[] = {
		{ "Category", "OmniTrace|Pattern" },
		{ "EditCondition", "PatternFamily == EOmniTracePatternFamily::Arc" },
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrbitPattern_MetaData[] = {
		{ "Category", "OmniTrace|Pattern" },
		{ "EditCondition", "PatternFamily == EOmniTracePatternFamily::Orbit" },
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridPattern_MetaData[] = {
		{ "Category", "OmniTrace|Pattern" },
		{ "EditCondition", "PatternFamily == EOmniTracePatternFamily::Grid" },
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseWalkPattern_MetaData[] = {
		{ "Category", "OmniTrace|Pattern" },
		{ "EditCondition", "PatternFamily == EOmniTracePatternFamily::NoiseWalk" },
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadialPattern_MetaData[] = {
		{ "Category", "OmniTrace|Pattern" },
		{ "EditCondition", "PatternFamily == EOmniTracePatternFamily::Radial" },
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScatterPattern_MetaData[] = {
		{ "Category", "OmniTrace|Pattern" },
		{ "EditCondition", "PatternFamily == EOmniTracePatternFamily::Scatter" },
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplinePattern_MetaData[] = {
		{ "Category", "OmniTrace|Pattern" },
		{ "EditCondition", "PatternFamily == EOmniTracePatternFamily::Spline" },
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumePattern_MetaData[] = {
		{ "Category", "OmniTrace|Pattern" },
		{ "EditCondition", "PatternFamily == EOmniTracePatternFamily::Volume" },
		{ "ModuleRelativePath", "Public/OmniTraceTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FOmniTracePatternConfig constinit property declarations ***********
	static const UECodeGen_Private::FBytePropertyParams NewProp_PatternFamily_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PatternFamily;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LinePattern_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LinePattern;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ArcPattern_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ArcPattern;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OrbitPattern_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OrbitPattern;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GridPattern_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GridPattern;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NoiseWalkPattern_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NoiseWalkPattern;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RadialPattern_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RadialPattern;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ScatterPattern_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ScatterPattern;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SplinePattern_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SplinePattern;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VolumePattern_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_VolumePattern;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FOmniTracePatternConfig constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOmniTracePatternConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FOmniTracePatternConfig_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOmniTracePatternConfig;
class UScriptStruct* FOmniTracePatternConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FOmniTracePatternConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FOmniTracePatternConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOmniTracePatternConfig, (UObject*)Z_Construct_UPackage__Script_OmniTrace(), TEXT("OmniTracePatternConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FOmniTracePatternConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FOmniTracePatternConfig Property Definitions **********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOmniTracePatternConfig_Statics::NewProp_PatternFamily_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOmniTracePatternConfig_Statics::NewProp_PatternFamily = { "PatternFamily", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOmniTracePatternConfig, PatternFamily), Z_Construct_UEnum_OmniTrace_EOmniTracePatternFamily, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatternFamily_MetaData), NewProp_PatternFamily_MetaData) }; // 119794998
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOmniTracePatternConfig_Statics::NewProp_LinePattern_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOmniTracePatternConfig_Statics::NewProp_LinePattern = { "LinePattern", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOmniTracePatternConfig, LinePattern), Z_Construct_UEnum_OmniTrace_EOmniTraceLinePattern, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinePattern_MetaData), NewProp_LinePattern_MetaData) }; // 3441679131
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOmniTracePatternConfig_Statics::NewProp_ArcPattern_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOmniTracePatternConfig_Statics::NewProp_ArcPattern = { "ArcPattern", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOmniTracePatternConfig, ArcPattern), Z_Construct_UEnum_OmniTrace_EOmniTraceArcPattern, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArcPattern_MetaData), NewProp_ArcPattern_MetaData) }; // 3153438840
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOmniTracePatternConfig_Statics::NewProp_OrbitPattern_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOmniTracePatternConfig_Statics::NewProp_OrbitPattern = { "OrbitPattern", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOmniTracePatternConfig, OrbitPattern), Z_Construct_UEnum_OmniTrace_EOmniTraceOrbitPattern, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrbitPattern_MetaData), NewProp_OrbitPattern_MetaData) }; // 1922994041
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOmniTracePatternConfig_Statics::NewProp_GridPattern_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOmniTracePatternConfig_Statics::NewProp_GridPattern = { "GridPattern", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOmniTracePatternConfig, GridPattern), Z_Construct_UEnum_OmniTrace_EOmniTraceGridPattern, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridPattern_MetaData), NewProp_GridPattern_MetaData) }; // 1783312787
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOmniTracePatternConfig_Statics::NewProp_NoiseWalkPattern_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOmniTracePatternConfig_Statics::NewProp_NoiseWalkPattern = { "NoiseWalkPattern", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOmniTracePatternConfig, NoiseWalkPattern), Z_Construct_UEnum_OmniTrace_EOmniTraceNoiseWalkPattern, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseWalkPattern_MetaData), NewProp_NoiseWalkPattern_MetaData) }; // 1694019926
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOmniTracePatternConfig_Statics::NewProp_RadialPattern_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOmniTracePatternConfig_Statics::NewProp_RadialPattern = { "RadialPattern", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOmniTracePatternConfig, RadialPattern), Z_Construct_UEnum_OmniTrace_EOmniTraceRadialPattern, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadialPattern_MetaData), NewProp_RadialPattern_MetaData) }; // 1213655737
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOmniTracePatternConfig_Statics::NewProp_ScatterPattern_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOmniTracePatternConfig_Statics::NewProp_ScatterPattern = { "ScatterPattern", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOmniTracePatternConfig, ScatterPattern), Z_Construct_UEnum_OmniTrace_EOmniTraceScatterPattern, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScatterPattern_MetaData), NewProp_ScatterPattern_MetaData) }; // 2012831910
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOmniTracePatternConfig_Statics::NewProp_SplinePattern_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOmniTracePatternConfig_Statics::NewProp_SplinePattern = { "SplinePattern", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOmniTracePatternConfig, SplinePattern), Z_Construct_UEnum_OmniTrace_EOmniTraceSplinePattern, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplinePattern_MetaData), NewProp_SplinePattern_MetaData) }; // 1402432014
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOmniTracePatternConfig_Statics::NewProp_VolumePattern_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOmniTracePatternConfig_Statics::NewProp_VolumePattern = { "VolumePattern", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOmniTracePatternConfig, VolumePattern), Z_Construct_UEnum_OmniTrace_EOmniTraceVolumePattern, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumePattern_MetaData), NewProp_VolumePattern_MetaData) }; // 662489479
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOmniTracePatternConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTracePatternConfig_Statics::NewProp_PatternFamily_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTracePatternConfig_Statics::NewProp_PatternFamily,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTracePatternConfig_Statics::NewProp_LinePattern_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTracePatternConfig_Statics::NewProp_LinePattern,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTracePatternConfig_Statics::NewProp_ArcPattern_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTracePatternConfig_Statics::NewProp_ArcPattern,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTracePatternConfig_Statics::NewProp_OrbitPattern_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTracePatternConfig_Statics::NewProp_OrbitPattern,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTracePatternConfig_Statics::NewProp_GridPattern_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTracePatternConfig_Statics::NewProp_GridPattern,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTracePatternConfig_Statics::NewProp_NoiseWalkPattern_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTracePatternConfig_Statics::NewProp_NoiseWalkPattern,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTracePatternConfig_Statics::NewProp_RadialPattern_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTracePatternConfig_Statics::NewProp_RadialPattern,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTracePatternConfig_Statics::NewProp_ScatterPattern_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTracePatternConfig_Statics::NewProp_ScatterPattern,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTracePatternConfig_Statics::NewProp_SplinePattern_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTracePatternConfig_Statics::NewProp_SplinePattern,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTracePatternConfig_Statics::NewProp_VolumePattern_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTracePatternConfig_Statics::NewProp_VolumePattern,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOmniTracePatternConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FOmniTracePatternConfig Property Definitions ************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOmniTracePatternConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OmniTrace,
	nullptr,
	&NewStructOps,
	"OmniTracePatternConfig",
	Z_Construct_UScriptStruct_FOmniTracePatternConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOmniTracePatternConfig_Statics::PropPointers),
	sizeof(FOmniTracePatternConfig),
	alignof(FOmniTracePatternConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOmniTracePatternConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOmniTracePatternConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOmniTracePatternConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FOmniTracePatternConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOmniTracePatternConfig.InnerSingleton, Z_Construct_UScriptStruct_FOmniTracePatternConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FOmniTracePatternConfig.InnerSingleton);
}
// ********** End ScriptStruct FOmniTracePatternConfig *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceTypes_h__Script_OmniTrace_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOmniTraceShape_StaticEnum, TEXT("EOmniTraceShape"), &Z_Registration_Info_UEnum_EOmniTraceShape, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2809570516U) },
		{ EOmniTraceTraceFamily_StaticEnum, TEXT("EOmniTraceTraceFamily"), &Z_Registration_Info_UEnum_EOmniTraceTraceFamily, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3980410589U) },
		{ EOmniTraceForwardPattern_StaticEnum, TEXT("EOmniTraceForwardPattern"), &Z_Registration_Info_UEnum_EOmniTraceForwardPattern, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1858295091U) },
		{ EOmniTraceBuiltinPresetCategory_StaticEnum, TEXT("EOmniTraceBuiltinPresetCategory"), &Z_Registration_Info_UEnum_EOmniTraceBuiltinPresetCategory, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 363984836U) },
		{ EOmniTraceVisionBuiltinPreset_StaticEnum, TEXT("EOmniTraceVisionBuiltinPreset"), &Z_Registration_Info_UEnum_EOmniTraceVisionBuiltinPreset, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3500572819U) },
		{ EOmniTraceCoverageBuiltinPreset_StaticEnum, TEXT("EOmniTraceCoverageBuiltinPreset"), &Z_Registration_Info_UEnum_EOmniTraceCoverageBuiltinPreset, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2686431412U) },
		{ EOmniTraceOrbitBuiltinPreset_StaticEnum, TEXT("EOmniTraceOrbitBuiltinPreset"), &Z_Registration_Info_UEnum_EOmniTraceOrbitBuiltinPreset, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 264630654U) },
		{ EOmniTraceDebugBuiltinPreset_StaticEnum, TEXT("EOmniTraceDebugBuiltinPreset"), &Z_Registration_Info_UEnum_EOmniTraceDebugBuiltinPreset, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3691769697U) },
		{ EOmniTracePatternFamily_StaticEnum, TEXT("EOmniTracePatternFamily"), &Z_Registration_Info_UEnum_EOmniTracePatternFamily, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 119794998U) },
		{ EOmniTraceLinePattern_StaticEnum, TEXT("EOmniTraceLinePattern"), &Z_Registration_Info_UEnum_EOmniTraceLinePattern, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3441679131U) },
		{ EOmniTraceArcPattern_StaticEnum, TEXT("EOmniTraceArcPattern"), &Z_Registration_Info_UEnum_EOmniTraceArcPattern, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3153438840U) },
		{ EOmniTraceOrbitPattern_StaticEnum, TEXT("EOmniTraceOrbitPattern"), &Z_Registration_Info_UEnum_EOmniTraceOrbitPattern, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1922994041U) },
		{ EOmniTraceGridPattern_StaticEnum, TEXT("EOmniTraceGridPattern"), &Z_Registration_Info_UEnum_EOmniTraceGridPattern, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1783312787U) },
		{ EOmniTraceNoiseWalkPattern_StaticEnum, TEXT("EOmniTraceNoiseWalkPattern"), &Z_Registration_Info_UEnum_EOmniTraceNoiseWalkPattern, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1694019926U) },
		{ EOmniTraceRadialPattern_StaticEnum, TEXT("EOmniTraceRadialPattern"), &Z_Registration_Info_UEnum_EOmniTraceRadialPattern, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1213655737U) },
		{ EOmniTraceScatterPattern_StaticEnum, TEXT("EOmniTraceScatterPattern"), &Z_Registration_Info_UEnum_EOmniTraceScatterPattern, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2012831910U) },
		{ EOmniTraceSplinePattern_StaticEnum, TEXT("EOmniTraceSplinePattern"), &Z_Registration_Info_UEnum_EOmniTraceSplinePattern, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1402432014U) },
		{ EOmniTraceVolumePattern_StaticEnum, TEXT("EOmniTraceVolumePattern"), &Z_Registration_Info_UEnum_EOmniTraceVolumePattern, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 662489479U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOmniTraceHitResult::StaticStruct, Z_Construct_UScriptStruct_FOmniTraceHitResult_Statics::NewStructOps, TEXT("OmniTraceHitResult"),&Z_Registration_Info_UScriptStruct_FOmniTraceHitResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOmniTraceHitResult), 1971425108U) },
		{ FOmniTraceDebugOptions::StaticStruct, Z_Construct_UScriptStruct_FOmniTraceDebugOptions_Statics::NewStructOps, TEXT("OmniTraceDebugOptions"),&Z_Registration_Info_UScriptStruct_FOmniTraceDebugOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOmniTraceDebugOptions), 1924562266U) },
		{ FOmniTraceSingleRayResult::StaticStruct, Z_Construct_UScriptStruct_FOmniTraceSingleRayResult_Statics::NewStructOps, TEXT("OmniTraceSingleRayResult"),&Z_Registration_Info_UScriptStruct_FOmniTraceSingleRayResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOmniTraceSingleRayResult), 1512229182U) },
		{ FOmniTracePatternResult::StaticStruct, Z_Construct_UScriptStruct_FOmniTracePatternResult_Statics::NewStructOps, TEXT("OmniTracePatternResult"),&Z_Registration_Info_UScriptStruct_FOmniTracePatternResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOmniTracePatternResult), 1001062659U) },
		{ FOmniTraceRequest::StaticStruct, Z_Construct_UScriptStruct_FOmniTraceRequest_Statics::NewStructOps, TEXT("OmniTraceRequest"),&Z_Registration_Info_UScriptStruct_FOmniTraceRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOmniTraceRequest), 979700793U) },
		{ FOmniTracePresetInfo::StaticStruct, Z_Construct_UScriptStruct_FOmniTracePresetInfo_Statics::NewStructOps, TEXT("OmniTracePresetInfo"),&Z_Registration_Info_UScriptStruct_FOmniTracePresetInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOmniTracePresetInfo), 3233791113U) },
		{ FOmniTraceBuiltinPresetKey::StaticStruct, Z_Construct_UScriptStruct_FOmniTraceBuiltinPresetKey_Statics::NewStructOps, TEXT("OmniTraceBuiltinPresetKey"),&Z_Registration_Info_UScriptStruct_FOmniTraceBuiltinPresetKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOmniTraceBuiltinPresetKey), 3018221562U) },
		{ FOmniTracePatternConfig::StaticStruct, Z_Construct_UScriptStruct_FOmniTracePatternConfig_Statics::NewStructOps, TEXT("OmniTracePatternConfig"),&Z_Registration_Info_UScriptStruct_FOmniTracePatternConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOmniTracePatternConfig), 3842959987U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceTypes_h__Script_OmniTrace_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceTypes_h__Script_OmniTrace_1425921621{
	TEXT("/Script/OmniTrace"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceTypes_h__Script_OmniTrace_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceTypes_h__Script_OmniTrace_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceTypes_h__Script_OmniTrace_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceTypes_h__Script_OmniTrace_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
