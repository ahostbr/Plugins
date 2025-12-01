// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordMessengerBPLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeDiscordMessengerBPLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
DISCORDMESSENGER_API UClass* Z_Construct_UClass_UDiscordMessengerBPLibrary();
DISCORDMESSENGER_API UClass* Z_Construct_UClass_UDiscordMessengerBPLibrary_NoRegister();
DISCORDMESSENGER_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordAuthor();
DISCORDMESSENGER_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordEmbed();
DISCORDMESSENGER_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordField();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_DiscordMessenger();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FDiscordAuthor ****************************************************
struct Z_Construct_UScriptStruct_FDiscordAuthor_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FDiscordAuthor); }
	static inline consteval int16 GetStructAlignment() { return alignof(FDiscordAuthor); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "DiscordMessenger" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Define the author of the message\n" },
#endif
		{ "ModuleRelativePath", "Public/DiscordMessengerBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Define the author of the message" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Discord" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Name of the author\n" },
#endif
		{ "ModuleRelativePath", "Public/DiscordMessengerBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the author" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[] = {
		{ "Category", "Discord" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// URL that will be embedded in the authors title\n" },
#endif
		{ "ModuleRelativePath", "Public/DiscordMessengerBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "URL that will be embedded in the authors title" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconUrl_MetaData[] = {
		{ "Category", "Discord" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// URL to grab the icon of the author from\n" },
#endif
		{ "ModuleRelativePath", "Public/DiscordMessengerBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "URL to grab the icon of the author from" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FDiscordAuthor constinit property declarations ********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IconUrl;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FDiscordAuthor constinit property declarations **********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDiscordAuthor>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FDiscordAuthor_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDiscordAuthor;
class UScriptStruct* FDiscordAuthor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FDiscordAuthor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FDiscordAuthor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDiscordAuthor, (UObject*)Z_Construct_UPackage__Script_DiscordMessenger(), TEXT("DiscordAuthor"));
	}
	return Z_Registration_Info_UScriptStruct_FDiscordAuthor.OuterSingleton;
	}

// ********** Begin ScriptStruct FDiscordAuthor Property Definitions *******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordAuthor_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDiscordAuthor, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordAuthor_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDiscordAuthor, Url), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Url_MetaData), NewProp_Url_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordAuthor_Statics::NewProp_IconUrl = { "IconUrl", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDiscordAuthor, IconUrl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconUrl_MetaData), NewProp_IconUrl_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDiscordAuthor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordAuthor_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordAuthor_Statics::NewProp_Url,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordAuthor_Statics::NewProp_IconUrl,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordAuthor_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FDiscordAuthor Property Definitions *********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDiscordAuthor_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DiscordMessenger,
	nullptr,
	&NewStructOps,
	"DiscordAuthor",
	Z_Construct_UScriptStruct_FDiscordAuthor_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordAuthor_Statics::PropPointers),
	sizeof(FDiscordAuthor),
	alignof(FDiscordAuthor),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordAuthor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDiscordAuthor_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDiscordAuthor()
{
	if (!Z_Registration_Info_UScriptStruct_FDiscordAuthor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDiscordAuthor.InnerSingleton, Z_Construct_UScriptStruct_FDiscordAuthor_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FDiscordAuthor.InnerSingleton);
}
// ********** End ScriptStruct FDiscordAuthor ******************************************************

// ********** Begin ScriptStruct FDiscordField *****************************************************
struct Z_Construct_UScriptStruct_FDiscordField_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FDiscordField); }
	static inline consteval int16 GetStructAlignment() { return alignof(FDiscordField); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "DiscordMessenger" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Define fields to include with the embed\n" },
#endif
		{ "ModuleRelativePath", "Public/DiscordMessengerBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Define fields to include with the embed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Discord" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Name of the field\n" },
#endif
		{ "ModuleRelativePath", "Public/DiscordMessengerBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the field" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Discord" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Text of the field\n" },
#endif
		{ "ModuleRelativePath", "Public/DiscordMessengerBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Text of the field" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsInline_MetaData[] = {
		{ "Category", "Discord" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Should the field be inline in the embed?\n" },
#endif
		{ "ModuleRelativePath", "Public/DiscordMessengerBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should the field be inline in the embed?" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FDiscordField constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static void NewProp_IsInline_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsInline;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FDiscordField constinit property declarations ***********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDiscordField>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FDiscordField_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDiscordField;
class UScriptStruct* FDiscordField::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FDiscordField.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FDiscordField.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDiscordField, (UObject*)Z_Construct_UPackage__Script_DiscordMessenger(), TEXT("DiscordField"));
	}
	return Z_Registration_Info_UScriptStruct_FDiscordField.OuterSingleton;
	}

// ********** Begin ScriptStruct FDiscordField Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordField_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDiscordField, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordField_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDiscordField, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
void Z_Construct_UScriptStruct_FDiscordField_Statics::NewProp_IsInline_SetBit(void* Obj)
{
	((FDiscordField*)Obj)->IsInline = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDiscordField_Statics::NewProp_IsInline = { "IsInline", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDiscordField), &Z_Construct_UScriptStruct_FDiscordField_Statics::NewProp_IsInline_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsInline_MetaData), NewProp_IsInline_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDiscordField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordField_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordField_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordField_Statics::NewProp_IsInline,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordField_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FDiscordField Property Definitions **********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDiscordField_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DiscordMessenger,
	nullptr,
	&NewStructOps,
	"DiscordField",
	Z_Construct_UScriptStruct_FDiscordField_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordField_Statics::PropPointers),
	sizeof(FDiscordField),
	alignof(FDiscordField),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordField_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDiscordField_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDiscordField()
{
	if (!Z_Registration_Info_UScriptStruct_FDiscordField.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDiscordField.InnerSingleton, Z_Construct_UScriptStruct_FDiscordField_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FDiscordField.InnerSingleton);
}
// ********** End ScriptStruct FDiscordField *******************************************************

// ********** Begin ScriptStruct FDiscordEmbed *****************************************************
struct Z_Construct_UScriptStruct_FDiscordEmbed_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FDiscordEmbed); }
	static inline consteval int16 GetStructAlignment() { return alignof(FDiscordEmbed); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "DiscordMessenger" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Include an embed with the message\n" },
#endif
		{ "ModuleRelativePath", "Public/DiscordMessengerBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Include an embed with the message" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[] = {
		{ "Category", "Discord" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Title of the embed\n" },
#endif
		{ "ModuleRelativePath", "Public/DiscordMessengerBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Title of the embed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Discord" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Description of the embed\n" },
#endif
		{ "ModuleRelativePath", "Public/DiscordMessengerBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Description of the embed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Discord" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Color of the embed\n" },
#endif
		{ "ModuleRelativePath", "Public/DiscordMessengerBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Color of the embed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[] = {
		{ "Category", "Discord" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// URL that will embedded in the title of the embed\n" },
#endif
		{ "ModuleRelativePath", "Public/DiscordMessengerBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "URL that will embedded in the title of the embed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Author_MetaData[] = {
		{ "Category", "Discord" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Include the author of the message\n" },
#endif
		{ "ModuleRelativePath", "Public/DiscordMessengerBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Include the author of the message" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fields_MetaData[] = {
		{ "Category", "Discord" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Include fields in the embed\n" },
#endif
		{ "ModuleRelativePath", "Public/DiscordMessengerBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Include fields in the embed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[] = {
		{ "Category", "Discord" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Embed an image in the embed (only requires the name of one of the files that is included with the message)\n" },
#endif
		{ "ModuleRelativePath", "Public/DiscordMessengerBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Embed an image in the embed (only requires the name of one of the files that is included with the message)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Footer_MetaData[] = {
		{ "Category", "Discord" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Include a footer in the embed\n" },
#endif
		{ "ModuleRelativePath", "Public/DiscordMessengerBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Include a footer in the embed" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FDiscordEmbed constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Author;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Fields_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Fields;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Image;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Footer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FDiscordEmbed constinit property declarations ***********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDiscordEmbed>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FDiscordEmbed_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDiscordEmbed;
class UScriptStruct* FDiscordEmbed::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FDiscordEmbed.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FDiscordEmbed.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDiscordEmbed, (UObject*)Z_Construct_UPackage__Script_DiscordMessenger(), TEXT("DiscordEmbed"));
	}
	return Z_Registration_Info_UScriptStruct_FDiscordEmbed.OuterSingleton;
	}

// ********** Begin ScriptStruct FDiscordEmbed Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordEmbed_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDiscordEmbed, Title), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Title_MetaData), NewProp_Title_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordEmbed_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDiscordEmbed, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDiscordEmbed_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDiscordEmbed, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordEmbed_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDiscordEmbed, Url), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Url_MetaData), NewProp_Url_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDiscordEmbed_Statics::NewProp_Author = { "Author", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDiscordEmbed, Author), Z_Construct_UScriptStruct_FDiscordAuthor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Author_MetaData), NewProp_Author_MetaData) }; // 1470336479
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDiscordEmbed_Statics::NewProp_Fields_Inner = { "Fields", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDiscordField, METADATA_PARAMS(0, nullptr) }; // 3337451854
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDiscordEmbed_Statics::NewProp_Fields = { "Fields", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDiscordEmbed, Fields), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fields_MetaData), NewProp_Fields_MetaData) }; // 3337451854
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordEmbed_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDiscordEmbed, Image), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_MetaData), NewProp_Image_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordEmbed_Statics::NewProp_Footer = { "Footer", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDiscordEmbed, Footer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Footer_MetaData), NewProp_Footer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDiscordEmbed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordEmbed_Statics::NewProp_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordEmbed_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordEmbed_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordEmbed_Statics::NewProp_Url,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordEmbed_Statics::NewProp_Author,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordEmbed_Statics::NewProp_Fields_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordEmbed_Statics::NewProp_Fields,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordEmbed_Statics::NewProp_Image,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordEmbed_Statics::NewProp_Footer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordEmbed_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FDiscordEmbed Property Definitions **********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDiscordEmbed_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DiscordMessenger,
	nullptr,
	&NewStructOps,
	"DiscordEmbed",
	Z_Construct_UScriptStruct_FDiscordEmbed_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordEmbed_Statics::PropPointers),
	sizeof(FDiscordEmbed),
	alignof(FDiscordEmbed),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordEmbed_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDiscordEmbed_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDiscordEmbed()
{
	if (!Z_Registration_Info_UScriptStruct_FDiscordEmbed.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDiscordEmbed.InnerSingleton, Z_Construct_UScriptStruct_FDiscordEmbed_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FDiscordEmbed.InnerSingleton);
}
// ********** End ScriptStruct FDiscordEmbed *******************************************************

// ********** Begin Class UDiscordMessengerBPLibrary Function SendDiscordMessage *******************
struct Z_Construct_UFunction_UDiscordMessengerBPLibrary_SendDiscordMessage_Statics
{
	struct DiscordMessengerBPLibrary_eventSendDiscordMessage_Parms
	{
		FString Webhook;
		FString Content;
		FDiscordEmbed Embed;
		TArray<FString> Files;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Embed, Files" },
		{ "Category", "DiscordMessenger" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Send a message to a Discord webhook\n\x09 * @param Webhook The URL of the Discord webhook to send the message to\n\x09 * @param Content The message to include (optional as long as an embed or atleast one file is included with the message)\n\x09 * @param Embed Include an embed with the message (optional)\n\x09 * @param Files Include files with the message (optional, max limit of files is 10, max file size is 8MB)\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/DiscordMessengerBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Send a message to a Discord webhook\n@param Webhook The URL of the Discord webhook to send the message to\n@param Content The message to include (optional as long as an embed or atleast one file is included with the message)\n@param Embed Include an embed with the message (optional)\n@param Files Include files with the message (optional, max limit of files is 10, max file size is 8MB)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Webhook_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Embed_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Files_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SendDiscordMessage constinit property declarations ********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Webhook;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Content;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Embed;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Files_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Files;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SendDiscordMessage constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SendDiscordMessage Property Definitions *******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDiscordMessengerBPLibrary_SendDiscordMessage_Statics::NewProp_Webhook = { "Webhook", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DiscordMessengerBPLibrary_eventSendDiscordMessage_Parms, Webhook), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Webhook_MetaData), NewProp_Webhook_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDiscordMessengerBPLibrary_SendDiscordMessage_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DiscordMessengerBPLibrary_eventSendDiscordMessage_Parms, Content), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Content_MetaData), NewProp_Content_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordMessengerBPLibrary_SendDiscordMessage_Statics::NewProp_Embed = { "Embed", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DiscordMessengerBPLibrary_eventSendDiscordMessage_Parms, Embed), Z_Construct_UScriptStruct_FDiscordEmbed, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Embed_MetaData), NewProp_Embed_MetaData) }; // 958190321
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDiscordMessengerBPLibrary_SendDiscordMessage_Statics::NewProp_Files_Inner = { "Files", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDiscordMessengerBPLibrary_SendDiscordMessage_Statics::NewProp_Files = { "Files", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DiscordMessengerBPLibrary_eventSendDiscordMessage_Parms, Files), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Files_MetaData), NewProp_Files_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordMessengerBPLibrary_SendDiscordMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordMessengerBPLibrary_SendDiscordMessage_Statics::NewProp_Webhook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordMessengerBPLibrary_SendDiscordMessage_Statics::NewProp_Content,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordMessengerBPLibrary_SendDiscordMessage_Statics::NewProp_Embed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordMessengerBPLibrary_SendDiscordMessage_Statics::NewProp_Files_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordMessengerBPLibrary_SendDiscordMessage_Statics::NewProp_Files,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordMessengerBPLibrary_SendDiscordMessage_Statics::PropPointers) < 2048);
// ********** End Function SendDiscordMessage Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordMessengerBPLibrary_SendDiscordMessage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDiscordMessengerBPLibrary, nullptr, "SendDiscordMessage", 	Z_Construct_UFunction_UDiscordMessengerBPLibrary_SendDiscordMessage_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordMessengerBPLibrary_SendDiscordMessage_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UDiscordMessengerBPLibrary_SendDiscordMessage_Statics::DiscordMessengerBPLibrary_eventSendDiscordMessage_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordMessengerBPLibrary_SendDiscordMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDiscordMessengerBPLibrary_SendDiscordMessage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDiscordMessengerBPLibrary_SendDiscordMessage_Statics::DiscordMessengerBPLibrary_eventSendDiscordMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDiscordMessengerBPLibrary_SendDiscordMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDiscordMessengerBPLibrary_SendDiscordMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDiscordMessengerBPLibrary::execSendDiscordMessage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Webhook);
	P_GET_PROPERTY(FStrProperty,Z_Param_Content);
	P_GET_STRUCT_REF(FDiscordEmbed,Z_Param_Out_Embed);
	P_GET_TARRAY_REF(FString,Z_Param_Out_Files);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDiscordMessengerBPLibrary::SendDiscordMessage(Z_Param_Webhook,Z_Param_Content,Z_Param_Out_Embed,Z_Param_Out_Files);
	P_NATIVE_END;
}
// ********** End Class UDiscordMessengerBPLibrary Function SendDiscordMessage *********************

// ********** Begin Class UDiscordMessengerBPLibrary ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UDiscordMessengerBPLibrary;
UClass* UDiscordMessengerBPLibrary::GetPrivateStaticClass()
{
	using TClass = UDiscordMessengerBPLibrary;
	if (!Z_Registration_Info_UClass_UDiscordMessengerBPLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("DiscordMessengerBPLibrary"),
			Z_Registration_Info_UClass_UDiscordMessengerBPLibrary.InnerSingleton,
			StaticRegisterNativesUDiscordMessengerBPLibrary,
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
	return Z_Registration_Info_UClass_UDiscordMessengerBPLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UDiscordMessengerBPLibrary_NoRegister()
{
	return UDiscordMessengerBPLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDiscordMessengerBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DiscordMessengerBPLibrary.h" },
		{ "ModuleRelativePath", "Public/DiscordMessengerBPLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDiscordMessengerBPLibrary constinit property declarations ***************
// ********** End Class UDiscordMessengerBPLibrary constinit property declarations *****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("SendDiscordMessage"), .Pointer = &UDiscordMessengerBPLibrary::execSendDiscordMessage },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDiscordMessengerBPLibrary_SendDiscordMessage, "SendDiscordMessage" }, // 2995551994
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDiscordMessengerBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UDiscordMessengerBPLibrary_Statics
UObject* (*const Z_Construct_UClass_UDiscordMessengerBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_DiscordMessenger,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordMessengerBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDiscordMessengerBPLibrary_Statics::ClassParams = {
	&UDiscordMessengerBPLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordMessengerBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UDiscordMessengerBPLibrary_Statics::Class_MetaDataParams)
};
void UDiscordMessengerBPLibrary::StaticRegisterNativesUDiscordMessengerBPLibrary()
{
	UClass* Class = UDiscordMessengerBPLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UDiscordMessengerBPLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_UDiscordMessengerBPLibrary()
{
	if (!Z_Registration_Info_UClass_UDiscordMessengerBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDiscordMessengerBPLibrary.OuterSingleton, Z_Construct_UClass_UDiscordMessengerBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDiscordMessengerBPLibrary.OuterSingleton;
}
UDiscordMessengerBPLibrary::UDiscordMessengerBPLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDiscordMessengerBPLibrary);
UDiscordMessengerBPLibrary::~UDiscordMessengerBPLibrary() {}
// ********** End Class UDiscordMessengerBPLibrary *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_DiscordMessenger_Source_DiscordMessenger_Public_DiscordMessengerBPLibrary_h__Script_DiscordMessenger_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDiscordAuthor::StaticStruct, Z_Construct_UScriptStruct_FDiscordAuthor_Statics::NewStructOps, TEXT("DiscordAuthor"),&Z_Registration_Info_UScriptStruct_FDiscordAuthor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDiscordAuthor), 1470336479U) },
		{ FDiscordField::StaticStruct, Z_Construct_UScriptStruct_FDiscordField_Statics::NewStructOps, TEXT("DiscordField"),&Z_Registration_Info_UScriptStruct_FDiscordField, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDiscordField), 3337451854U) },
		{ FDiscordEmbed::StaticStruct, Z_Construct_UScriptStruct_FDiscordEmbed_Statics::NewStructOps, TEXT("DiscordEmbed"),&Z_Registration_Info_UScriptStruct_FDiscordEmbed, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDiscordEmbed), 958190321U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDiscordMessengerBPLibrary, UDiscordMessengerBPLibrary::StaticClass, TEXT("UDiscordMessengerBPLibrary"), &Z_Registration_Info_UClass_UDiscordMessengerBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDiscordMessengerBPLibrary), 3420532921U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_DiscordMessenger_Source_DiscordMessenger_Public_DiscordMessengerBPLibrary_h__Script_DiscordMessenger_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_DiscordMessenger_Source_DiscordMessenger_Public_DiscordMessengerBPLibrary_h__Script_DiscordMessenger_2489988673{
	TEXT("/Script/DiscordMessenger"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_DiscordMessenger_Source_DiscordMessenger_Public_DiscordMessengerBPLibrary_h__Script_DiscordMessenger_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_DiscordMessenger_Source_DiscordMessenger_Public_DiscordMessengerBPLibrary_h__Script_DiscordMessenger_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_DiscordMessenger_Source_DiscordMessenger_Public_DiscordMessengerBPLibrary_h__Script_DiscordMessenger_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_DiscordMessenger_Source_DiscordMessenger_Public_DiscordMessengerBPLibrary_h__Script_DiscordMessenger_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
