// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintCommentLinksTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBlueprintCommentLinksTypes() {}

// ********** Begin Cross Module References ********************************************************
BLUEPRINTCOMMENTLINKSEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintCommentLink();
BLUEPRINTCOMMENTLINKSEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintCommentLinkCommentStyle();
BLUEPRINTCOMMENTLINKSEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintCommentLinkGraphData();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
UPackage* Z_Construct_UPackage__Script_BlueprintCommentLinksEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FBlueprintCommentLink *********************************************
struct Z_Construct_UScriptStruct_FBlueprintCommentLink_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FBlueprintCommentLink); }
	static inline consteval int16 GetStructAlignment() { return alignof(FBlueprintCommentLink); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Represents a single visual link between two Blueprint comment boxes.\n */" },
#endif
		{ "ModuleRelativePath", "Public/BlueprintCommentLinksTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents a single visual link between two Blueprint comment boxes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinkGuid_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Unique identifier for this link. */" },
#endif
		{ "ModuleRelativePath", "Public/BlueprintCommentLinksTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unique identifier for this link." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceCommentGuid_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Source comment node (UEdGraphNode_Comment::NodeGuid). */" },
#endif
		{ "ModuleRelativePath", "Public/BlueprintCommentLinksTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Source comment node (UEdGraphNode_Comment::NodeGuid)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetCommentGuid_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Target comment node (UEdGraphNode_Comment::NodeGuid). */" },
#endif
		{ "ModuleRelativePath", "Public/BlueprintCommentLinksTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Target comment node (UEdGraphNode_Comment::NodeGuid)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinkTag_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional label/tag for this link. */" },
#endif
		{ "ModuleRelativePath", "Public/BlueprintCommentLinksTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional label/tag for this link." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinkColor_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional color override for the link wire. */" },
#endif
		{ "ModuleRelativePath", "Public/BlueprintCommentLinksTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional color override for the link wire." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDirectional_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether this link is directional (Source -> Target). */" },
#endif
		{ "ModuleRelativePath", "Public/BlueprintCommentLinksTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether this link is directional (Source -> Target)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FBlueprintCommentLink constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_LinkGuid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceCommentGuid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetCommentGuid;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LinkTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LinkColor;
	static void NewProp_bIsDirectional_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDirectional;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FBlueprintCommentLink constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintCommentLink>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FBlueprintCommentLink_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FBlueprintCommentLink;
class UScriptStruct* FBlueprintCommentLink::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FBlueprintCommentLink.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FBlueprintCommentLink.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintCommentLink, (UObject*)Z_Construct_UPackage__Script_BlueprintCommentLinksEditor(), TEXT("BlueprintCommentLink"));
	}
	return Z_Registration_Info_UScriptStruct_FBlueprintCommentLink.OuterSingleton;
	}

// ********** Begin ScriptStruct FBlueprintCommentLink Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBlueprintCommentLink_Statics::NewProp_LinkGuid = { "LinkGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintCommentLink, LinkGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinkGuid_MetaData), NewProp_LinkGuid_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBlueprintCommentLink_Statics::NewProp_SourceCommentGuid = { "SourceCommentGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintCommentLink, SourceCommentGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceCommentGuid_MetaData), NewProp_SourceCommentGuid_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBlueprintCommentLink_Statics::NewProp_TargetCommentGuid = { "TargetCommentGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintCommentLink, TargetCommentGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetCommentGuid_MetaData), NewProp_TargetCommentGuid_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBlueprintCommentLink_Statics::NewProp_LinkTag = { "LinkTag", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintCommentLink, LinkTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinkTag_MetaData), NewProp_LinkTag_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBlueprintCommentLink_Statics::NewProp_LinkColor = { "LinkColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintCommentLink, LinkColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinkColor_MetaData), NewProp_LinkColor_MetaData) };
void Z_Construct_UScriptStruct_FBlueprintCommentLink_Statics::NewProp_bIsDirectional_SetBit(void* Obj)
{
	((FBlueprintCommentLink*)Obj)->bIsDirectional = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBlueprintCommentLink_Statics::NewProp_bIsDirectional = { "bIsDirectional", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBlueprintCommentLink), &Z_Construct_UScriptStruct_FBlueprintCommentLink_Statics::NewProp_bIsDirectional_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDirectional_MetaData), NewProp_bIsDirectional_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlueprintCommentLink_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintCommentLink_Statics::NewProp_LinkGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintCommentLink_Statics::NewProp_SourceCommentGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintCommentLink_Statics::NewProp_TargetCommentGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintCommentLink_Statics::NewProp_LinkTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintCommentLink_Statics::NewProp_LinkColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintCommentLink_Statics::NewProp_bIsDirectional,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintCommentLink_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FBlueprintCommentLink Property Definitions **************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintCommentLink_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BlueprintCommentLinksEditor,
	nullptr,
	&NewStructOps,
	"BlueprintCommentLink",
	Z_Construct_UScriptStruct_FBlueprintCommentLink_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintCommentLink_Statics::PropPointers),
	sizeof(FBlueprintCommentLink),
	alignof(FBlueprintCommentLink),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintCommentLink_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBlueprintCommentLink_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBlueprintCommentLink()
{
	if (!Z_Registration_Info_UScriptStruct_FBlueprintCommentLink.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FBlueprintCommentLink.InnerSingleton, Z_Construct_UScriptStruct_FBlueprintCommentLink_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FBlueprintCommentLink.InnerSingleton);
}
// ********** End ScriptStruct FBlueprintCommentLink ***********************************************

// ********** Begin ScriptStruct FBlueprintCommentLinkCommentStyle *********************************
struct Z_Construct_UScriptStruct_FBlueprintCommentLinkCommentStyle_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FBlueprintCommentLinkCommentStyle); }
	static inline consteval int16 GetStructAlignment() { return alignof(FBlueprintCommentLinkCommentStyle); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Per-comment visual style for comment links.\n */" },
#endif
		{ "ModuleRelativePath", "Public/BlueprintCommentLinksTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Per-comment visual style for comment links." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommentGuid_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The NodeGuid of the comment that owns this style. */" },
#endif
		{ "ModuleRelativePath", "Public/BlueprintCommentLinksTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The NodeGuid of the comment that owns this style." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandleColor_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Color of the little square handle rendered on the comment edge. */" },
#endif
		{ "ModuleRelativePath", "Public/BlueprintCommentLinksTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Color of the little square handle rendered on the comment edge." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WireColor_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Color of the link spline, arrow, and tag text for links sourced from this comment. */" },
#endif
		{ "ModuleRelativePath", "Public/BlueprintCommentLinksTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Color of the link spline, arrow, and tag text for links sourced from this comment." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrowSize_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Size of the arrow head for links sourced from this comment (graph-space units). */" },
#endif
		{ "ModuleRelativePath", "Public/BlueprintCommentLinksTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Size of the arrow head for links sourced from this comment (graph-space units)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FBlueprintCommentLinkCommentStyle constinit property declarations *
	static const UECodeGen_Private::FStructPropertyParams NewProp_CommentGuid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HandleColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WireColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ArrowSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FBlueprintCommentLinkCommentStyle constinit property declarations ***
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintCommentLinkCommentStyle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FBlueprintCommentLinkCommentStyle_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FBlueprintCommentLinkCommentStyle;
class UScriptStruct* FBlueprintCommentLinkCommentStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FBlueprintCommentLinkCommentStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FBlueprintCommentLinkCommentStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintCommentLinkCommentStyle, (UObject*)Z_Construct_UPackage__Script_BlueprintCommentLinksEditor(), TEXT("BlueprintCommentLinkCommentStyle"));
	}
	return Z_Registration_Info_UScriptStruct_FBlueprintCommentLinkCommentStyle.OuterSingleton;
	}

// ********** Begin ScriptStruct FBlueprintCommentLinkCommentStyle Property Definitions ************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBlueprintCommentLinkCommentStyle_Statics::NewProp_CommentGuid = { "CommentGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintCommentLinkCommentStyle, CommentGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommentGuid_MetaData), NewProp_CommentGuid_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBlueprintCommentLinkCommentStyle_Statics::NewProp_HandleColor = { "HandleColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintCommentLinkCommentStyle, HandleColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandleColor_MetaData), NewProp_HandleColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBlueprintCommentLinkCommentStyle_Statics::NewProp_WireColor = { "WireColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintCommentLinkCommentStyle, WireColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WireColor_MetaData), NewProp_WireColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBlueprintCommentLinkCommentStyle_Statics::NewProp_ArrowSize = { "ArrowSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintCommentLinkCommentStyle, ArrowSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrowSize_MetaData), NewProp_ArrowSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlueprintCommentLinkCommentStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintCommentLinkCommentStyle_Statics::NewProp_CommentGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintCommentLinkCommentStyle_Statics::NewProp_HandleColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintCommentLinkCommentStyle_Statics::NewProp_WireColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintCommentLinkCommentStyle_Statics::NewProp_ArrowSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintCommentLinkCommentStyle_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FBlueprintCommentLinkCommentStyle Property Definitions **************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintCommentLinkCommentStyle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BlueprintCommentLinksEditor,
	nullptr,
	&NewStructOps,
	"BlueprintCommentLinkCommentStyle",
	Z_Construct_UScriptStruct_FBlueprintCommentLinkCommentStyle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintCommentLinkCommentStyle_Statics::PropPointers),
	sizeof(FBlueprintCommentLinkCommentStyle),
	alignof(FBlueprintCommentLinkCommentStyle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintCommentLinkCommentStyle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBlueprintCommentLinkCommentStyle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBlueprintCommentLinkCommentStyle()
{
	if (!Z_Registration_Info_UScriptStruct_FBlueprintCommentLinkCommentStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FBlueprintCommentLinkCommentStyle.InnerSingleton, Z_Construct_UScriptStruct_FBlueprintCommentLinkCommentStyle_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FBlueprintCommentLinkCommentStyle.InnerSingleton);
}
// ********** End ScriptStruct FBlueprintCommentLinkCommentStyle ***********************************

// ********** Begin ScriptStruct FBlueprintCommentLinkGraphData ************************************
struct Z_Construct_UScriptStruct_FBlueprintCommentLinkGraphData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FBlueprintCommentLinkGraphData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FBlueprintCommentLinkGraphData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * All comment links associated with a single graph.\n */" },
#endif
		{ "ModuleRelativePath", "Public/BlueprintCommentLinksTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "All comment links associated with a single graph." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Links_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** All links defined for this graph. */" },
#endif
		{ "ModuleRelativePath", "Public/BlueprintCommentLinksTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "All links defined for this graph." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommentStyles_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Per-comment style data (independent of comment color). */" },
#endif
		{ "ModuleRelativePath", "Public/BlueprintCommentLinksTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Per-comment style data (independent of comment color)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FBlueprintCommentLinkGraphData constinit property declarations ****
	static const UECodeGen_Private::FStructPropertyParams NewProp_Links_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Links;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CommentStyles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CommentStyles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FBlueprintCommentLinkGraphData constinit property declarations ******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintCommentLinkGraphData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FBlueprintCommentLinkGraphData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FBlueprintCommentLinkGraphData;
class UScriptStruct* FBlueprintCommentLinkGraphData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FBlueprintCommentLinkGraphData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FBlueprintCommentLinkGraphData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintCommentLinkGraphData, (UObject*)Z_Construct_UPackage__Script_BlueprintCommentLinksEditor(), TEXT("BlueprintCommentLinkGraphData"));
	}
	return Z_Registration_Info_UScriptStruct_FBlueprintCommentLinkGraphData.OuterSingleton;
	}

// ********** Begin ScriptStruct FBlueprintCommentLinkGraphData Property Definitions ***************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBlueprintCommentLinkGraphData_Statics::NewProp_Links_Inner = { "Links", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBlueprintCommentLink, METADATA_PARAMS(0, nullptr) }; // 1895934697
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBlueprintCommentLinkGraphData_Statics::NewProp_Links = { "Links", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintCommentLinkGraphData, Links), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Links_MetaData), NewProp_Links_MetaData) }; // 1895934697
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBlueprintCommentLinkGraphData_Statics::NewProp_CommentStyles_Inner = { "CommentStyles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBlueprintCommentLinkCommentStyle, METADATA_PARAMS(0, nullptr) }; // 4055356304
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBlueprintCommentLinkGraphData_Statics::NewProp_CommentStyles = { "CommentStyles", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlueprintCommentLinkGraphData, CommentStyles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommentStyles_MetaData), NewProp_CommentStyles_MetaData) }; // 4055356304
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlueprintCommentLinkGraphData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintCommentLinkGraphData_Statics::NewProp_Links_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintCommentLinkGraphData_Statics::NewProp_Links,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintCommentLinkGraphData_Statics::NewProp_CommentStyles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintCommentLinkGraphData_Statics::NewProp_CommentStyles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintCommentLinkGraphData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FBlueprintCommentLinkGraphData Property Definitions *****************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintCommentLinkGraphData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BlueprintCommentLinksEditor,
	nullptr,
	&NewStructOps,
	"BlueprintCommentLinkGraphData",
	Z_Construct_UScriptStruct_FBlueprintCommentLinkGraphData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintCommentLinkGraphData_Statics::PropPointers),
	sizeof(FBlueprintCommentLinkGraphData),
	alignof(FBlueprintCommentLinkGraphData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintCommentLinkGraphData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBlueprintCommentLinkGraphData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBlueprintCommentLinkGraphData()
{
	if (!Z_Registration_Info_UScriptStruct_FBlueprintCommentLinkGraphData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FBlueprintCommentLinkGraphData.InnerSingleton, Z_Construct_UScriptStruct_FBlueprintCommentLinkGraphData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FBlueprintCommentLinkGraphData.InnerSingleton);
}
// ********** End ScriptStruct FBlueprintCommentLinkGraphData **************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_BlueprintCommentLinks_Source_BlueprintCommentLinksEditor_Public_BlueprintCommentLinksTypes_h__Script_BlueprintCommentLinksEditor_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBlueprintCommentLink::StaticStruct, Z_Construct_UScriptStruct_FBlueprintCommentLink_Statics::NewStructOps, TEXT("BlueprintCommentLink"),&Z_Registration_Info_UScriptStruct_FBlueprintCommentLink, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlueprintCommentLink), 1895934697U) },
		{ FBlueprintCommentLinkCommentStyle::StaticStruct, Z_Construct_UScriptStruct_FBlueprintCommentLinkCommentStyle_Statics::NewStructOps, TEXT("BlueprintCommentLinkCommentStyle"),&Z_Registration_Info_UScriptStruct_FBlueprintCommentLinkCommentStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlueprintCommentLinkCommentStyle), 4055356304U) },
		{ FBlueprintCommentLinkGraphData::StaticStruct, Z_Construct_UScriptStruct_FBlueprintCommentLinkGraphData_Statics::NewStructOps, TEXT("BlueprintCommentLinkGraphData"),&Z_Registration_Info_UScriptStruct_FBlueprintCommentLinkGraphData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlueprintCommentLinkGraphData), 3635883753U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_BlueprintCommentLinks_Source_BlueprintCommentLinksEditor_Public_BlueprintCommentLinksTypes_h__Script_BlueprintCommentLinksEditor_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_BlueprintCommentLinks_Source_BlueprintCommentLinksEditor_Public_BlueprintCommentLinksTypes_h__Script_BlueprintCommentLinksEditor_1001762396{
	TEXT("/Script/BlueprintCommentLinksEditor"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_BlueprintCommentLinks_Source_BlueprintCommentLinksEditor_Public_BlueprintCommentLinksTypes_h__Script_BlueprintCommentLinksEditor_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_BlueprintCommentLinks_Source_BlueprintCommentLinksEditor_Public_BlueprintCommentLinksTypes_h__Script_BlueprintCommentLinksEditor_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
