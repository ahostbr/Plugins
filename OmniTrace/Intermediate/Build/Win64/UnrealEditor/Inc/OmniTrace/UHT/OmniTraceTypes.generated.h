// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OmniTraceTypes.h"

#ifdef OMNITRACE_OmniTraceTypes_generated_h
#error "OmniTraceTypes.generated.h already included, missing '#pragma once' in OmniTraceTypes.h"
#endif
#define OMNITRACE_OmniTraceTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FOmniTraceHitResult ***********************************************
struct Z_Construct_UScriptStruct_FOmniTraceHitResult_Statics;
#define FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceTypes_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOmniTraceHitResult_Statics; \
	OMNITRACE_API static class UScriptStruct* StaticStruct();


struct FOmniTraceHitResult;
// ********** End ScriptStruct FOmniTraceHitResult *************************************************

// ********** Begin ScriptStruct FOmniTraceDebugOptions ********************************************
struct Z_Construct_UScriptStruct_FOmniTraceDebugOptions_Statics;
#define FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceTypes_h_93_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOmniTraceDebugOptions_Statics; \
	OMNITRACE_API static class UScriptStruct* StaticStruct();


struct FOmniTraceDebugOptions;
// ********** End ScriptStruct FOmniTraceDebugOptions **********************************************

// ********** Begin ScriptStruct FOmniTraceSingleRayResult *****************************************
struct Z_Construct_UScriptStruct_FOmniTraceSingleRayResult_Statics;
#define FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceTypes_h_118_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOmniTraceSingleRayResult_Statics; \
	OMNITRACE_API static class UScriptStruct* StaticStruct();


struct FOmniTraceSingleRayResult;
// ********** End ScriptStruct FOmniTraceSingleRayResult *******************************************

// ********** Begin ScriptStruct FOmniTracePatternResult *******************************************
struct Z_Construct_UScriptStruct_FOmniTracePatternResult_Statics;
#define FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceTypes_h_148_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOmniTracePatternResult_Statics; \
	OMNITRACE_API static class UScriptStruct* StaticStruct();


struct FOmniTracePatternResult;
// ********** End ScriptStruct FOmniTracePatternResult *********************************************

// ********** Begin ScriptStruct FOmniTraceRequest *************************************************
struct Z_Construct_UScriptStruct_FOmniTraceRequest_Statics;
#define FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceTypes_h_178_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOmniTraceRequest_Statics; \
	OMNITRACE_API static class UScriptStruct* StaticStruct();


struct FOmniTraceRequest;
// ********** End ScriptStruct FOmniTraceRequest ***************************************************

// ********** Begin ScriptStruct FOmniTracePresetInfo **********************************************
struct Z_Construct_UScriptStruct_FOmniTracePresetInfo_Statics;
#define FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceTypes_h_263_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOmniTracePresetInfo_Statics; \
	OMNITRACE_API static class UScriptStruct* StaticStruct();


struct FOmniTracePresetInfo;
// ********** End ScriptStruct FOmniTracePresetInfo ************************************************

// ********** Begin ScriptStruct FOmniTraceBuiltinPresetKey ****************************************
struct Z_Construct_UScriptStruct_FOmniTraceBuiltinPresetKey_Statics;
#define FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceTypes_h_344_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOmniTraceBuiltinPresetKey_Statics; \
	OMNITRACE_API static class UScriptStruct* StaticStruct();


struct FOmniTraceBuiltinPresetKey;
// ********** End ScriptStruct FOmniTraceBuiltinPresetKey ******************************************

// ********** Begin ScriptStruct FOmniTracePatternConfig *******************************************
struct Z_Construct_UScriptStruct_FOmniTracePatternConfig_Statics;
#define FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceTypes_h_508_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOmniTracePatternConfig_Statics; \
	OMNITRACE_API static class UScriptStruct* StaticStruct();


struct FOmniTracePatternConfig;
// ********** End ScriptStruct FOmniTracePatternConfig *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceTypes_h

// ********** Begin Enum EOmniTraceShape ***********************************************************
#define FOREACH_ENUM_EOMNITRACESHAPE(op) \
	op(EOmniTraceShape::Line) \
	op(EOmniTraceShape::SphereSweep) \
	op(EOmniTraceShape::BoxSweep) 

enum class EOmniTraceShape : uint8;
template<> struct TIsUEnumClass<EOmniTraceShape> { enum { Value = true }; };
template<> OMNITRACE_NON_ATTRIBUTED_API UEnum* StaticEnum<EOmniTraceShape>();
// ********** End Enum EOmniTraceShape *************************************************************

// ********** Begin Enum EOmniTraceTraceFamily *****************************************************
#define FOREACH_ENUM_EOMNITRACETRACEFAMILY(op) \
	op(EOmniTraceTraceFamily::Forward) \
	op(EOmniTraceTraceFamily::Target) \
	op(EOmniTraceTraceFamily::Orbit) \
	op(EOmniTraceTraceFamily::Radial3D) 

enum class EOmniTraceTraceFamily : uint8;
template<> struct TIsUEnumClass<EOmniTraceTraceFamily> { enum { Value = true }; };
template<> OMNITRACE_NON_ATTRIBUTED_API UEnum* StaticEnum<EOmniTraceTraceFamily>();
// ********** End Enum EOmniTraceTraceFamily *******************************************************

// ********** Begin Enum EOmniTraceForwardPattern **************************************************
#define FOREACH_ENUM_EOMNITRACEFORWARDPATTERN(op) \
	op(EOmniTraceForwardPattern::SingleRay) \
	op(EOmniTraceForwardPattern::MultiSpread) 

enum class EOmniTraceForwardPattern : uint8;
template<> struct TIsUEnumClass<EOmniTraceForwardPattern> { enum { Value = true }; };
template<> OMNITRACE_NON_ATTRIBUTED_API UEnum* StaticEnum<EOmniTraceForwardPattern>();
// ********** End Enum EOmniTraceForwardPattern ****************************************************

// ********** Begin Enum EOmniTraceBuiltinPresetCategory *******************************************
#define FOREACH_ENUM_EOMNITRACEBUILTINPRESETCATEGORY(op) \
	op(EOmniTraceBuiltinPresetCategory::Vision) \
	op(EOmniTraceBuiltinPresetCategory::Coverage) \
	op(EOmniTraceBuiltinPresetCategory::Orbit) \
	op(EOmniTraceBuiltinPresetCategory::Debug) 

enum class EOmniTraceBuiltinPresetCategory : uint8;
template<> struct TIsUEnumClass<EOmniTraceBuiltinPresetCategory> { enum { Value = true }; };
template<> OMNITRACE_NON_ATTRIBUTED_API UEnum* StaticEnum<EOmniTraceBuiltinPresetCategory>();
// ********** End Enum EOmniTraceBuiltinPresetCategory *********************************************

// ********** Begin Enum EOmniTraceVisionBuiltinPreset *********************************************
#define FOREACH_ENUM_EOMNITRACEVISIONBUILTINPRESET(op) \
	op(EOmniTraceVisionBuiltinPreset::Fwd_Cone_Close_5R) \
	op(EOmniTraceVisionBuiltinPreset::Fwd_Cone_Medium_11R) \
	op(EOmniTraceVisionBuiltinPreset::Fwd_Cone_Long_21R) \
	op(EOmniTraceVisionBuiltinPreset::Target_Arc_Short_9R) \
	op(EOmniTraceVisionBuiltinPreset::Target_Fan_Wide_21R) 

enum class EOmniTraceVisionBuiltinPreset : uint8;
template<> struct TIsUEnumClass<EOmniTraceVisionBuiltinPreset> { enum { Value = true }; };
template<> OMNITRACE_NON_ATTRIBUTED_API UEnum* StaticEnum<EOmniTraceVisionBuiltinPreset>();
// ********** End Enum EOmniTraceVisionBuiltinPreset ***********************************************

// ********** Begin Enum EOmniTraceCoverageBuiltinPreset *******************************************
#define FOREACH_ENUM_EOMNITRACECOVERAGEBUILTINPRESET(op) \
	op(EOmniTraceCoverageBuiltinPreset::Radial_Sparse_64R) \
	op(EOmniTraceCoverageBuiltinPreset::Radial_Dense_128R) \
	op(EOmniTraceCoverageBuiltinPreset::Radial_VeryDense_256R) 

enum class EOmniTraceCoverageBuiltinPreset : uint8;
template<> struct TIsUEnumClass<EOmniTraceCoverageBuiltinPreset> { enum { Value = true }; };
template<> OMNITRACE_NON_ATTRIBUTED_API UEnum* StaticEnum<EOmniTraceCoverageBuiltinPreset>();
// ********** End Enum EOmniTraceCoverageBuiltinPreset *********************************************

// ********** Begin Enum EOmniTraceOrbitBuiltinPreset **********************************************
#define FOREACH_ENUM_EOMNITRACEORBITBUILTINPRESET(op) \
	op(EOmniTraceOrbitBuiltinPreset::Orbit_SingleRing_24R) \
	op(EOmniTraceOrbitBuiltinPreset::Orbit_SingleRing_48R) \
	op(EOmniTraceOrbitBuiltinPreset::Orbit_MultiRing_3x24R) 

enum class EOmniTraceOrbitBuiltinPreset : uint8;
template<> struct TIsUEnumClass<EOmniTraceOrbitBuiltinPreset> { enum { Value = true }; };
template<> OMNITRACE_NON_ATTRIBUTED_API UEnum* StaticEnum<EOmniTraceOrbitBuiltinPreset>();
// ********** End Enum EOmniTraceOrbitBuiltinPreset ************************************************

// ********** Begin Enum EOmniTraceDebugBuiltinPreset **********************************************
#define FOREACH_ENUM_EOMNITRACEDEBUGBUILTINPRESET(op) \
	op(EOmniTraceDebugBuiltinPreset::Debug_Fwd_LongRay) \
	op(EOmniTraceDebugBuiltinPreset::Debug_Fwd_WideCone_9R) 

enum class EOmniTraceDebugBuiltinPreset : uint8;
template<> struct TIsUEnumClass<EOmniTraceDebugBuiltinPreset> { enum { Value = true }; };
template<> OMNITRACE_NON_ATTRIBUTED_API UEnum* StaticEnum<EOmniTraceDebugBuiltinPreset>();
// ********** End Enum EOmniTraceDebugBuiltinPreset ************************************************

// ********** Begin Enum EOmniTracePatternFamily ***************************************************
#define FOREACH_ENUM_EOMNITRACEPATTERNFAMILY(op) \
	op(EOmniTracePatternFamily::Line) \
	op(EOmniTracePatternFamily::Arc) \
	op(EOmniTracePatternFamily::Orbit) \
	op(EOmniTracePatternFamily::Grid) \
	op(EOmniTracePatternFamily::NoiseWalk) \
	op(EOmniTracePatternFamily::Radial) \
	op(EOmniTracePatternFamily::Scatter) \
	op(EOmniTracePatternFamily::Spline) \
	op(EOmniTracePatternFamily::Volume) 

enum class EOmniTracePatternFamily : uint8;
template<> struct TIsUEnumClass<EOmniTracePatternFamily> { enum { Value = true }; };
template<> OMNITRACE_NON_ATTRIBUTED_API UEnum* StaticEnum<EOmniTracePatternFamily>();
// ********** End Enum EOmniTracePatternFamily *****************************************************

// ********** Begin Enum EOmniTraceLinePattern *****************************************************
#define FOREACH_ENUM_EOMNITRACELINEPATTERN(op) \
	op(EOmniTraceLinePattern::SimpleLine) \
	op(EOmniTraceLinePattern::MultiSegment) \
	op(EOmniTraceLinePattern::ZigZag) \
	op(EOmniTraceLinePattern::PingPong) \
	op(EOmniTraceLinePattern::BezierLike) \
	op(EOmniTraceLinePattern::StairStep) 

enum class EOmniTraceLinePattern : uint8;
template<> struct TIsUEnumClass<EOmniTraceLinePattern> { enum { Value = true }; };
template<> OMNITRACE_NON_ATTRIBUTED_API UEnum* StaticEnum<EOmniTraceLinePattern>();
// ********** End Enum EOmniTraceLinePattern *******************************************************

// ********** Begin Enum EOmniTraceArcPattern ******************************************************
#define FOREACH_ENUM_EOMNITRACEARCPATTERN(op) \
	op(EOmniTraceArcPattern::SingleArc) \
	op(EOmniTraceArcPattern::TargetMultiArc) \
	op(EOmniTraceArcPattern::OrbitArc) \
	op(EOmniTraceArcPattern::Bidirectional) \
	op(EOmniTraceArcPattern::ArcFan) 

enum class EOmniTraceArcPattern : uint8;
template<> struct TIsUEnumClass<EOmniTraceArcPattern> { enum { Value = true }; };
template<> OMNITRACE_NON_ATTRIBUTED_API UEnum* StaticEnum<EOmniTraceArcPattern>();
// ********** End Enum EOmniTraceArcPattern ********************************************************

// ********** Begin Enum EOmniTraceOrbitPattern ****************************************************
#define FOREACH_ENUM_EOMNITRACEORBITPATTERN(op) \
	op(EOmniTraceOrbitPattern::CircularOrbit) \
	op(EOmniTraceOrbitPattern::EllipticalOrbit) \
	op(EOmniTraceOrbitPattern::SpiralIn) \
	op(EOmniTraceOrbitPattern::SpiralOut) \
	op(EOmniTraceOrbitPattern::FigureEight) 

enum class EOmniTraceOrbitPattern : uint8;
template<> struct TIsUEnumClass<EOmniTraceOrbitPattern> { enum { Value = true }; };
template<> OMNITRACE_NON_ATTRIBUTED_API UEnum* StaticEnum<EOmniTraceOrbitPattern>();
// ********** End Enum EOmniTraceOrbitPattern ******************************************************

// ********** Begin Enum EOmniTraceGridPattern *****************************************************
#define FOREACH_ENUM_EOMNITRACEGRIDPATTERN(op) \
	op(EOmniTraceGridPattern::RowScan) \
	op(EOmniTraceGridPattern::ColumnScan) \
	op(EOmniTraceGridPattern::SnakeRows) \
	op(EOmniTraceGridPattern::SnakeColumns) \
	op(EOmniTraceGridPattern::SpiralOut) \
	op(EOmniTraceGridPattern::Checkerboard) \
	op(EOmniTraceGridPattern::RandomCells) 

enum class EOmniTraceGridPattern : uint8;
template<> struct TIsUEnumClass<EOmniTraceGridPattern> { enum { Value = true }; };
template<> OMNITRACE_NON_ATTRIBUTED_API UEnum* StaticEnum<EOmniTraceGridPattern>();
// ********** End Enum EOmniTraceGridPattern *******************************************************

// ********** Begin Enum EOmniTraceNoiseWalkPattern ************************************************
#define FOREACH_ENUM_EOMNITRACENOISEWALKPATTERN(op) \
	op(EOmniTraceNoiseWalkPattern::RandomWalk) \
	op(EOmniTraceNoiseWalkPattern::PerlinDrift) \
	op(EOmniTraceNoiseWalkPattern::JitteredLine) \
	op(EOmniTraceNoiseWalkPattern::BrownianLoop) \
	op(EOmniTraceNoiseWalkPattern::BranchingWalk) 

enum class EOmniTraceNoiseWalkPattern : uint8;
template<> struct TIsUEnumClass<EOmniTraceNoiseWalkPattern> { enum { Value = true }; };
template<> OMNITRACE_NON_ATTRIBUTED_API UEnum* StaticEnum<EOmniTraceNoiseWalkPattern>();
// ********** End Enum EOmniTraceNoiseWalkPattern **************************************************

// ********** Begin Enum EOmniTraceRadialPattern ***************************************************
#define FOREACH_ENUM_EOMNITRACERADIALPATTERN(op) \
	op(EOmniTraceRadialPattern::Starburst) \
	op(EOmniTraceRadialPattern::RadialSpokes) \
	op(EOmniTraceRadialPattern::RadialRings) \
	op(EOmniTraceRadialPattern::GoldenAngleSpiral) 

enum class EOmniTraceRadialPattern : uint8;
template<> struct TIsUEnumClass<EOmniTraceRadialPattern> { enum { Value = true }; };
template<> OMNITRACE_NON_ATTRIBUTED_API UEnum* StaticEnum<EOmniTraceRadialPattern>();
// ********** End Enum EOmniTraceRadialPattern *****************************************************

// ********** Begin Enum EOmniTraceScatterPattern **************************************************
#define FOREACH_ENUM_EOMNITRACESCATTERPATTERN(op) \
	op(EOmniTraceScatterPattern::UniformRandom) \
	op(EOmniTraceScatterPattern::PoissonDisk) \
	op(EOmniTraceScatterPattern::JitteredGrid) \
	op(EOmniTraceScatterPattern::Clustered) 

enum class EOmniTraceScatterPattern : uint8;
template<> struct TIsUEnumClass<EOmniTraceScatterPattern> { enum { Value = true }; };
template<> OMNITRACE_NON_ATTRIBUTED_API UEnum* StaticEnum<EOmniTraceScatterPattern>();
// ********** End Enum EOmniTraceScatterPattern ****************************************************

// ********** Begin Enum EOmniTraceSplinePattern ***************************************************
#define FOREACH_ENUM_EOMNITRACESPLINEPATTERN(op) \
	op(EOmniTraceSplinePattern::EvenDistance) \
	op(EOmniTraceSplinePattern::FixedSegmentCount) \
	op(EOmniTraceSplinePattern::SplineKnots) \
	op(EOmniTraceSplinePattern::RandomOnSpline) 

enum class EOmniTraceSplinePattern : uint8;
template<> struct TIsUEnumClass<EOmniTraceSplinePattern> { enum { Value = true }; };
template<> OMNITRACE_NON_ATTRIBUTED_API UEnum* StaticEnum<EOmniTraceSplinePattern>();
// ********** End Enum EOmniTraceSplinePattern *****************************************************

// ********** Begin Enum EOmniTraceVolumePattern ***************************************************
#define FOREACH_ENUM_EOMNITRACEVOLUMEPATTERN(op) \
	op(EOmniTraceVolumePattern::BoxGrid) \
	op(EOmniTraceVolumePattern::BoxSpiral) \
	op(EOmniTraceVolumePattern::SphereShell) \
	op(EOmniTraceVolumePattern::SphereVolume) \
	op(EOmniTraceVolumePattern::CylinderShell) \
	op(EOmniTraceVolumePattern::CylinderVolume) 

enum class EOmniTraceVolumePattern : uint8;
template<> struct TIsUEnumClass<EOmniTraceVolumePattern> { enum { Value = true }; };
template<> OMNITRACE_NON_ATTRIBUTED_API UEnum* StaticEnum<EOmniTraceVolumePattern>();
// ********** End Enum EOmniTraceVolumePattern *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
