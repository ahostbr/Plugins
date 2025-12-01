// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SOTS_GameplayTagManagerSubsystem.h"
#include "Engine/GameInstance.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_GameplayTagManagerSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
SOTS_TAGMANAGER_API UClass* Z_Construct_UClass_USOTS_GameplayTagManagerSubsystem();
SOTS_TAGMANAGER_API UClass* Z_Construct_UClass_USOTS_GameplayTagManagerSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_SOTS_TagManager();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USOTS_GameplayTagManagerSubsystem Function ActorHasAllTags ***************
struct Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasAllTags_Statics
{
	struct SOTS_GameplayTagManagerSubsystem_eventActorHasAllTags_Parms
	{
		const AActor* Actor;
		FGameplayTagContainer Tags;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns true if the actor has all tags in the given container. */" },
#endif
		{ "ModuleRelativePath", "SOTS_TagManager/Public/SOTS_GameplayTagManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if the actor has all tags in the given container." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ActorHasAllTags constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tags;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ActorHasAllTags constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ActorHasAllTags Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasAllTags_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GameplayTagManagerSubsystem_eventActorHasAllTags_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasAllTags_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GameplayTagManagerSubsystem_eventActorHasAllTags_Parms, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) }; // 3438578166
void Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasAllTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SOTS_GameplayTagManagerSubsystem_eventActorHasAllTags_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasAllTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_GameplayTagManagerSubsystem_eventActorHasAllTags_Parms), &Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasAllTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasAllTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasAllTags_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasAllTags_Statics::NewProp_Tags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasAllTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasAllTags_Statics::PropPointers) < 2048);
// ********** End Function ActorHasAllTags Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasAllTags_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_GameplayTagManagerSubsystem, nullptr, "ActorHasAllTags", 	Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasAllTags_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasAllTags_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasAllTags_Statics::SOTS_GameplayTagManagerSubsystem_eventActorHasAllTags_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasAllTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasAllTags_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasAllTags_Statics::SOTS_GameplayTagManagerSubsystem_eventActorHasAllTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasAllTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasAllTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_GameplayTagManagerSubsystem::execActorHasAllTags)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_Tags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ActorHasAllTags(Z_Param_Actor,Z_Param_Out_Tags);
	P_NATIVE_END;
}
// ********** End Class USOTS_GameplayTagManagerSubsystem Function ActorHasAllTags *****************

// ********** Begin Class USOTS_GameplayTagManagerSubsystem Function ActorHasAnyTags ***************
struct Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasAnyTags_Statics
{
	struct SOTS_GameplayTagManagerSubsystem_eventActorHasAnyTags_Parms
	{
		const AActor* Actor;
		FGameplayTagContainer Tags;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns true if the actor has any tag in the given container. */" },
#endif
		{ "ModuleRelativePath", "SOTS_TagManager/Public/SOTS_GameplayTagManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if the actor has any tag in the given container." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ActorHasAnyTags constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tags;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ActorHasAnyTags constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ActorHasAnyTags Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasAnyTags_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GameplayTagManagerSubsystem_eventActorHasAnyTags_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasAnyTags_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GameplayTagManagerSubsystem_eventActorHasAnyTags_Parms, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) }; // 3438578166
void Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasAnyTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SOTS_GameplayTagManagerSubsystem_eventActorHasAnyTags_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasAnyTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_GameplayTagManagerSubsystem_eventActorHasAnyTags_Parms), &Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasAnyTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasAnyTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasAnyTags_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasAnyTags_Statics::NewProp_Tags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasAnyTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasAnyTags_Statics::PropPointers) < 2048);
// ********** End Function ActorHasAnyTags Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasAnyTags_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_GameplayTagManagerSubsystem, nullptr, "ActorHasAnyTags", 	Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasAnyTags_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasAnyTags_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasAnyTags_Statics::SOTS_GameplayTagManagerSubsystem_eventActorHasAnyTags_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasAnyTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasAnyTags_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasAnyTags_Statics::SOTS_GameplayTagManagerSubsystem_eventActorHasAnyTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasAnyTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasAnyTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_GameplayTagManagerSubsystem::execActorHasAnyTags)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_Tags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ActorHasAnyTags(Z_Param_Actor,Z_Param_Out_Tags);
	P_NATIVE_END;
}
// ********** End Class USOTS_GameplayTagManagerSubsystem Function ActorHasAnyTags *****************

// ********** Begin Class USOTS_GameplayTagManagerSubsystem Function ActorHasTag *******************
struct Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasTag_Statics
{
	struct SOTS_GameplayTagManagerSubsystem_eventActorHasTag_Parms
	{
		const AActor* Actor;
		FGameplayTag Tag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns true if the actor has the given tag. */" },
#endif
		{ "ModuleRelativePath", "SOTS_TagManager/Public/SOTS_GameplayTagManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if the actor has the given tag." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ActorHasTag constinit property declarations ***************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ActorHasTag constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ActorHasTag Property Definitions **************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasTag_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GameplayTagManagerSubsystem_eventActorHasTag_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GameplayTagManagerSubsystem_eventActorHasTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
void Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SOTS_GameplayTagManagerSubsystem_eventActorHasTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_GameplayTagManagerSubsystem_eventActorHasTag_Parms), &Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasTag_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasTag_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasTag_Statics::PropPointers) < 2048);
// ********** End Function ActorHasTag Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_GameplayTagManagerSubsystem, nullptr, "ActorHasTag", 	Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasTag_Statics::SOTS_GameplayTagManagerSubsystem_eventActorHasTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasTag_Statics::SOTS_GameplayTagManagerSubsystem_eventActorHasTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_GameplayTagManagerSubsystem::execActorHasTag)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ActorHasTag(Z_Param_Actor,Z_Param_Tag);
	P_NATIVE_END;
}
// ********** End Class USOTS_GameplayTagManagerSubsystem Function ActorHasTag *********************

// ********** Begin Class USOTS_GameplayTagManagerSubsystem Function ActorHasTagByName *************
struct Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasTagByName_Statics
{
	struct SOTS_GameplayTagManagerSubsystem_eventActorHasTagByName_Parms
	{
		const AActor* Actor;
		FName TagName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Convenience: returns true if the actor has the tag identified by TagName. */" },
#endif
		{ "ModuleRelativePath", "SOTS_TagManager/Public/SOTS_GameplayTagManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convenience: returns true if the actor has the tag identified by TagName." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ActorHasTagByName constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TagName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ActorHasTagByName constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ActorHasTagByName Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasTagByName_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GameplayTagManagerSubsystem_eventActorHasTagByName_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasTagByName_Statics::NewProp_TagName = { "TagName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GameplayTagManagerSubsystem_eventActorHasTagByName_Parms, TagName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasTagByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SOTS_GameplayTagManagerSubsystem_eventActorHasTagByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasTagByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_GameplayTagManagerSubsystem_eventActorHasTagByName_Parms), &Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasTagByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasTagByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasTagByName_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasTagByName_Statics::NewProp_TagName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasTagByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasTagByName_Statics::PropPointers) < 2048);
// ********** End Function ActorHasTagByName Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasTagByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_GameplayTagManagerSubsystem, nullptr, "ActorHasTagByName", 	Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasTagByName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasTagByName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasTagByName_Statics::SOTS_GameplayTagManagerSubsystem_eventActorHasTagByName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasTagByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasTagByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasTagByName_Statics::SOTS_GameplayTagManagerSubsystem_eventActorHasTagByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasTagByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasTagByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_GameplayTagManagerSubsystem::execActorHasTagByName)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_PROPERTY(FNameProperty,Z_Param_TagName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ActorHasTagByName(Z_Param_Actor,Z_Param_TagName);
	P_NATIVE_END;
}
// ********** End Class USOTS_GameplayTagManagerSubsystem Function ActorHasTagByName ***************

// ********** Begin Class USOTS_GameplayTagManagerSubsystem Function AddTagToActor *****************
struct Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_AddTagToActor_Statics
{
	struct SOTS_GameplayTagManagerSubsystem_eventAddTagToActor_Parms
	{
		AActor* Actor;
		FGameplayTag Tag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Adds a loose gameplay tag to the given actor for SOTS-global state. */" },
#endif
		{ "ModuleRelativePath", "SOTS_TagManager/Public/SOTS_GameplayTagManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a loose gameplay tag to the given actor for SOTS-global state." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function AddTagToActor constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddTagToActor constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddTagToActor Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_AddTagToActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GameplayTagManagerSubsystem_eventAddTagToActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_AddTagToActor_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GameplayTagManagerSubsystem_eventAddTagToActor_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_AddTagToActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_AddTagToActor_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_AddTagToActor_Statics::NewProp_Tag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_AddTagToActor_Statics::PropPointers) < 2048);
// ********** End Function AddTagToActor Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_AddTagToActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_GameplayTagManagerSubsystem, nullptr, "AddTagToActor", 	Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_AddTagToActor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_AddTagToActor_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_AddTagToActor_Statics::SOTS_GameplayTagManagerSubsystem_eventAddTagToActor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_AddTagToActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_AddTagToActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_AddTagToActor_Statics::SOTS_GameplayTagManagerSubsystem_eventAddTagToActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_AddTagToActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_AddTagToActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_GameplayTagManagerSubsystem::execAddTagToActor)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddTagToActor(Z_Param_Actor,Z_Param_Tag);
	P_NATIVE_END;
}
// ********** End Class USOTS_GameplayTagManagerSubsystem Function AddTagToActor *******************

// ********** Begin Class USOTS_GameplayTagManagerSubsystem Function AddTagToActorByName ***********
struct Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_AddTagToActorByName_Statics
{
	struct SOTS_GameplayTagManagerSubsystem_eventAddTagToActorByName_Parms
	{
		AActor* Actor;
		FName TagName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Convenience helpers that resolve the tag by name before adding/removing. */" },
#endif
		{ "ModuleRelativePath", "SOTS_TagManager/Public/SOTS_GameplayTagManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convenience helpers that resolve the tag by name before adding/removing." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function AddTagToActorByName constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TagName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddTagToActorByName constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddTagToActorByName Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_AddTagToActorByName_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GameplayTagManagerSubsystem_eventAddTagToActorByName_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_AddTagToActorByName_Statics::NewProp_TagName = { "TagName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GameplayTagManagerSubsystem_eventAddTagToActorByName_Parms, TagName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_AddTagToActorByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_AddTagToActorByName_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_AddTagToActorByName_Statics::NewProp_TagName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_AddTagToActorByName_Statics::PropPointers) < 2048);
// ********** End Function AddTagToActorByName Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_AddTagToActorByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_GameplayTagManagerSubsystem, nullptr, "AddTagToActorByName", 	Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_AddTagToActorByName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_AddTagToActorByName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_AddTagToActorByName_Statics::SOTS_GameplayTagManagerSubsystem_eventAddTagToActorByName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_AddTagToActorByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_AddTagToActorByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_AddTagToActorByName_Statics::SOTS_GameplayTagManagerSubsystem_eventAddTagToActorByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_AddTagToActorByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_AddTagToActorByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_GameplayTagManagerSubsystem::execAddTagToActorByName)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_PROPERTY(FNameProperty,Z_Param_TagName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddTagToActorByName(Z_Param_Actor,Z_Param_TagName);
	P_NATIVE_END;
}
// ********** End Class USOTS_GameplayTagManagerSubsystem Function AddTagToActorByName *************

// ********** Begin Class USOTS_GameplayTagManagerSubsystem Function GetTagByName ******************
struct Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_GetTagByName_Statics
{
	struct SOTS_GameplayTagManagerSubsystem_eventGetTagByName_Parms
	{
		FName TagName;
		FGameplayTag ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Lazily resolves a tag by name, e.g. \"Player.States.Aiming\". Never crashes; returns empty tag on failure. */" },
#endif
		{ "ModuleRelativePath", "SOTS_TagManager/Public/SOTS_GameplayTagManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lazily resolves a tag by name, e.g. \"Player.States.Aiming\". Never crashes; returns empty tag on failure." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetTagByName constinit property declarations **************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_TagName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetTagByName constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTagByName Property Definitions *************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_GetTagByName_Statics::NewProp_TagName = { "TagName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GameplayTagManagerSubsystem_eventGetTagByName_Parms, TagName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_GetTagByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GameplayTagManagerSubsystem_eventGetTagByName_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_GetTagByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_GetTagByName_Statics::NewProp_TagName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_GetTagByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_GetTagByName_Statics::PropPointers) < 2048);
// ********** End Function GetTagByName Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_GetTagByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_GameplayTagManagerSubsystem, nullptr, "GetTagByName", 	Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_GetTagByName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_GetTagByName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_GetTagByName_Statics::SOTS_GameplayTagManagerSubsystem_eventGetTagByName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_GetTagByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_GetTagByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_GetTagByName_Statics::SOTS_GameplayTagManagerSubsystem_eventGetTagByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_GetTagByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_GetTagByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_GameplayTagManagerSubsystem::execGetTagByName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_TagName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTag*)Z_Param__Result=P_THIS->GetTagByName(Z_Param_TagName);
	P_NATIVE_END;
}
// ********** End Class USOTS_GameplayTagManagerSubsystem Function GetTagByName ********************

// ********** Begin Class USOTS_GameplayTagManagerSubsystem Function GetTagChecked *****************
struct Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_GetTagChecked_Statics
{
	struct SOTS_GameplayTagManagerSubsystem_eventGetTagChecked_Parms
	{
		FName TagName;
		FGameplayTag ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Same as GetTagByName but logs an error if not found. Still returns an empty tag on failure. */" },
#endif
		{ "ModuleRelativePath", "SOTS_TagManager/Public/SOTS_GameplayTagManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Same as GetTagByName but logs an error if not found. Still returns an empty tag on failure." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetTagChecked constinit property declarations *************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_TagName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetTagChecked constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTagChecked Property Definitions ************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_GetTagChecked_Statics::NewProp_TagName = { "TagName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GameplayTagManagerSubsystem_eventGetTagChecked_Parms, TagName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_GetTagChecked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GameplayTagManagerSubsystem_eventGetTagChecked_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_GetTagChecked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_GetTagChecked_Statics::NewProp_TagName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_GetTagChecked_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_GetTagChecked_Statics::PropPointers) < 2048);
// ********** End Function GetTagChecked Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_GetTagChecked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_GameplayTagManagerSubsystem, nullptr, "GetTagChecked", 	Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_GetTagChecked_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_GetTagChecked_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_GetTagChecked_Statics::SOTS_GameplayTagManagerSubsystem_eventGetTagChecked_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_GetTagChecked_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_GetTagChecked_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_GetTagChecked_Statics::SOTS_GameplayTagManagerSubsystem_eventGetTagChecked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_GetTagChecked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_GetTagChecked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_GameplayTagManagerSubsystem::execGetTagChecked)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_TagName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTag*)Z_Param__Result=P_THIS->GetTagChecked(Z_Param_TagName);
	P_NATIVE_END;
}
// ********** End Class USOTS_GameplayTagManagerSubsystem Function GetTagChecked *******************

// ********** Begin Class USOTS_GameplayTagManagerSubsystem Function RemoveTagFromActor ************
struct Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_RemoveTagFromActor_Statics
{
	struct SOTS_GameplayTagManagerSubsystem_eventRemoveTagFromActor_Parms
	{
		AActor* Actor;
		FGameplayTag Tag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Removes a loose gameplay tag previously added to the given actor. */" },
#endif
		{ "ModuleRelativePath", "SOTS_TagManager/Public/SOTS_GameplayTagManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes a loose gameplay tag previously added to the given actor." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveTagFromActor constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveTagFromActor constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveTagFromActor Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_RemoveTagFromActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GameplayTagManagerSubsystem_eventRemoveTagFromActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_RemoveTagFromActor_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GameplayTagManagerSubsystem_eventRemoveTagFromActor_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_RemoveTagFromActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_RemoveTagFromActor_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_RemoveTagFromActor_Statics::NewProp_Tag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_RemoveTagFromActor_Statics::PropPointers) < 2048);
// ********** End Function RemoveTagFromActor Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_RemoveTagFromActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_GameplayTagManagerSubsystem, nullptr, "RemoveTagFromActor", 	Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_RemoveTagFromActor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_RemoveTagFromActor_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_RemoveTagFromActor_Statics::SOTS_GameplayTagManagerSubsystem_eventRemoveTagFromActor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_RemoveTagFromActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_RemoveTagFromActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_RemoveTagFromActor_Statics::SOTS_GameplayTagManagerSubsystem_eventRemoveTagFromActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_RemoveTagFromActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_RemoveTagFromActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_GameplayTagManagerSubsystem::execRemoveTagFromActor)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveTagFromActor(Z_Param_Actor,Z_Param_Tag);
	P_NATIVE_END;
}
// ********** End Class USOTS_GameplayTagManagerSubsystem Function RemoveTagFromActor **************

// ********** Begin Class USOTS_GameplayTagManagerSubsystem Function RemoveTagFromActorByName ******
struct Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_RemoveTagFromActorByName_Statics
{
	struct SOTS_GameplayTagManagerSubsystem_eventRemoveTagFromActorByName_Parms
	{
		AActor* Actor;
		FName TagName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Tags" },
		{ "ModuleRelativePath", "SOTS_TagManager/Public/SOTS_GameplayTagManagerSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveTagFromActorByName constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TagName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveTagFromActorByName constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveTagFromActorByName Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_RemoveTagFromActorByName_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GameplayTagManagerSubsystem_eventRemoveTagFromActorByName_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_RemoveTagFromActorByName_Statics::NewProp_TagName = { "TagName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GameplayTagManagerSubsystem_eventRemoveTagFromActorByName_Parms, TagName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_RemoveTagFromActorByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_RemoveTagFromActorByName_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_RemoveTagFromActorByName_Statics::NewProp_TagName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_RemoveTagFromActorByName_Statics::PropPointers) < 2048);
// ********** End Function RemoveTagFromActorByName Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_RemoveTagFromActorByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_GameplayTagManagerSubsystem, nullptr, "RemoveTagFromActorByName", 	Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_RemoveTagFromActorByName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_RemoveTagFromActorByName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_RemoveTagFromActorByName_Statics::SOTS_GameplayTagManagerSubsystem_eventRemoveTagFromActorByName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_RemoveTagFromActorByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_RemoveTagFromActorByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_RemoveTagFromActorByName_Statics::SOTS_GameplayTagManagerSubsystem_eventRemoveTagFromActorByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_RemoveTagFromActorByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_RemoveTagFromActorByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_GameplayTagManagerSubsystem::execRemoveTagFromActorByName)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_PROPERTY(FNameProperty,Z_Param_TagName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveTagFromActorByName(Z_Param_Actor,Z_Param_TagName);
	P_NATIVE_END;
}
// ********** End Class USOTS_GameplayTagManagerSubsystem Function RemoveTagFromActorByName ********

// ********** Begin Class USOTS_GameplayTagManagerSubsystem Function RemoveTagsFromActor ***********
struct Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_RemoveTagsFromActor_Statics
{
	struct SOTS_GameplayTagManagerSubsystem_eventRemoveTagsFromActor_Parms
	{
		AActor* Actor;
		TArray<FGameplayTag> Tags;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Removes a set of loose gameplay tags previously added to the given actor. */" },
#endif
		{ "ModuleRelativePath", "SOTS_TagManager/Public/SOTS_GameplayTagManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes a set of loose gameplay tags previously added to the given actor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveTagsFromActor constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveTagsFromActor constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveTagsFromActor Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_RemoveTagsFromActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GameplayTagManagerSubsystem_eventRemoveTagsFromActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_RemoveTagsFromActor_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_RemoveTagsFromActor_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GameplayTagManagerSubsystem_eventRemoveTagsFromActor_Parms, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_RemoveTagsFromActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_RemoveTagsFromActor_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_RemoveTagsFromActor_Statics::NewProp_Tags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_RemoveTagsFromActor_Statics::NewProp_Tags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_RemoveTagsFromActor_Statics::PropPointers) < 2048);
// ********** End Function RemoveTagsFromActor Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_RemoveTagsFromActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_GameplayTagManagerSubsystem, nullptr, "RemoveTagsFromActor", 	Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_RemoveTagsFromActor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_RemoveTagsFromActor_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_RemoveTagsFromActor_Statics::SOTS_GameplayTagManagerSubsystem_eventRemoveTagsFromActor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_RemoveTagsFromActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_RemoveTagsFromActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_RemoveTagsFromActor_Statics::SOTS_GameplayTagManagerSubsystem_eventRemoveTagsFromActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_RemoveTagsFromActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_RemoveTagsFromActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_GameplayTagManagerSubsystem::execRemoveTagsFromActor)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_TARRAY_REF(FGameplayTag,Z_Param_Out_Tags);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveTagsFromActor(Z_Param_Actor,Z_Param_Out_Tags);
	P_NATIVE_END;
}
// ********** End Class USOTS_GameplayTagManagerSubsystem Function RemoveTagsFromActor *************

// ********** Begin Class USOTS_GameplayTagManagerSubsystem ****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_GameplayTagManagerSubsystem;
UClass* USOTS_GameplayTagManagerSubsystem::GetPrivateStaticClass()
{
	using TClass = USOTS_GameplayTagManagerSubsystem;
	if (!Z_Registration_Info_UClass_USOTS_GameplayTagManagerSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_GameplayTagManagerSubsystem"),
			Z_Registration_Info_UClass_USOTS_GameplayTagManagerSubsystem.InnerSingleton,
			StaticRegisterNativesUSOTS_GameplayTagManagerSubsystem,
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
	return Z_Registration_Info_UClass_USOTS_GameplayTagManagerSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_GameplayTagManagerSubsystem_NoRegister()
{
	return USOTS_GameplayTagManagerSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_GameplayTagManagerSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Central gameplay tag helper used by SOTS plugins.\n *\n * SOTS TAG SPINE (V2): The single authoritative surface for shared loose actor\n * gameplay tags. Prefer routing writes and queries through this subsystem\n * or the `USOTS_TagLibrary` blueprint helpers.\n * Provides cached tag lookup by name and convenience\n * helpers for querying tags on actors.\n */" },
#endif
		{ "IncludePath", "SOTS_TagManager/Public/SOTS_GameplayTagManagerSubsystem.h" },
		{ "ModuleRelativePath", "SOTS_TagManager/Public/SOTS_GameplayTagManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Central gameplay tag helper used by SOTS plugins.\n\nSOTS TAG SPINE (V2): The single authoritative surface for shared loose actor\ngameplay tags. Prefer routing writes and queries through this subsystem\nor the `USOTS_TagLibrary` blueprint helpers.\nProvides cached tag lookup by name and convenience\nhelpers for querying tags on actors." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedTags_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Simple cache from FName to tag for faster repeated lookups. */" },
#endif
		{ "ModuleRelativePath", "SOTS_TagManager/Public/SOTS_GameplayTagManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple cache from FName to tag for faster repeated lookups." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorLooseTags_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Lightweight loose tag storage keyed by actor. */" },
#endif
		{ "ModuleRelativePath", "SOTS_TagManager/Public/SOTS_GameplayTagManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lightweight loose tag storage keyed by actor." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_GameplayTagManagerSubsystem constinit property declarations ********
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedTags_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CachedTags_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CachedTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActorLooseTags_ValueProp;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ActorLooseTags_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ActorLooseTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USOTS_GameplayTagManagerSubsystem constinit property declarations **********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ActorHasAllTags"), .Pointer = &USOTS_GameplayTagManagerSubsystem::execActorHasAllTags },
		{ .NameUTF8 = UTF8TEXT("ActorHasAnyTags"), .Pointer = &USOTS_GameplayTagManagerSubsystem::execActorHasAnyTags },
		{ .NameUTF8 = UTF8TEXT("ActorHasTag"), .Pointer = &USOTS_GameplayTagManagerSubsystem::execActorHasTag },
		{ .NameUTF8 = UTF8TEXT("ActorHasTagByName"), .Pointer = &USOTS_GameplayTagManagerSubsystem::execActorHasTagByName },
		{ .NameUTF8 = UTF8TEXT("AddTagToActor"), .Pointer = &USOTS_GameplayTagManagerSubsystem::execAddTagToActor },
		{ .NameUTF8 = UTF8TEXT("AddTagToActorByName"), .Pointer = &USOTS_GameplayTagManagerSubsystem::execAddTagToActorByName },
		{ .NameUTF8 = UTF8TEXT("GetTagByName"), .Pointer = &USOTS_GameplayTagManagerSubsystem::execGetTagByName },
		{ .NameUTF8 = UTF8TEXT("GetTagChecked"), .Pointer = &USOTS_GameplayTagManagerSubsystem::execGetTagChecked },
		{ .NameUTF8 = UTF8TEXT("RemoveTagFromActor"), .Pointer = &USOTS_GameplayTagManagerSubsystem::execRemoveTagFromActor },
		{ .NameUTF8 = UTF8TEXT("RemoveTagFromActorByName"), .Pointer = &USOTS_GameplayTagManagerSubsystem::execRemoveTagFromActorByName },
		{ .NameUTF8 = UTF8TEXT("RemoveTagsFromActor"), .Pointer = &USOTS_GameplayTagManagerSubsystem::execRemoveTagsFromActor },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasAllTags, "ActorHasAllTags" }, // 2602062515
		{ &Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasAnyTags, "ActorHasAnyTags" }, // 2602049206
		{ &Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasTag, "ActorHasTag" }, // 1661778405
		{ &Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_ActorHasTagByName, "ActorHasTagByName" }, // 177816228
		{ &Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_AddTagToActor, "AddTagToActor" }, // 166200372
		{ &Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_AddTagToActorByName, "AddTagToActorByName" }, // 2629860093
		{ &Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_GetTagByName, "GetTagByName" }, // 2771210696
		{ &Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_GetTagChecked, "GetTagChecked" }, // 612061415
		{ &Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_RemoveTagFromActor, "RemoveTagFromActor" }, // 822024717
		{ &Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_RemoveTagFromActorByName, "RemoveTagFromActorByName" }, // 3182474970
		{ &Z_Construct_UFunction_USOTS_GameplayTagManagerSubsystem_RemoveTagsFromActor, "RemoveTagsFromActor" }, // 1306126930
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_GameplayTagManagerSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_GameplayTagManagerSubsystem_Statics

// ********** Begin Class USOTS_GameplayTagManagerSubsystem Property Definitions *******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_GameplayTagManagerSubsystem_Statics::NewProp_CachedTags_ValueProp = { "CachedTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USOTS_GameplayTagManagerSubsystem_Statics::NewProp_CachedTags_Key_KeyProp = { "CachedTags_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USOTS_GameplayTagManagerSubsystem_Statics::NewProp_CachedTags = { "CachedTags", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_GameplayTagManagerSubsystem, CachedTags), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedTags_MetaData), NewProp_CachedTags_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_GameplayTagManagerSubsystem_Statics::NewProp_ActorLooseTags_ValueProp = { "ActorLooseTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3438578166
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_USOTS_GameplayTagManagerSubsystem_Statics::NewProp_ActorLooseTags_Key_KeyProp = { "ActorLooseTags_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USOTS_GameplayTagManagerSubsystem_Statics::NewProp_ActorLooseTags = { "ActorLooseTags", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_GameplayTagManagerSubsystem, ActorLooseTags), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorLooseTags_MetaData), NewProp_ActorLooseTags_MetaData) }; // 3438578166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USOTS_GameplayTagManagerSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_GameplayTagManagerSubsystem_Statics::NewProp_CachedTags_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_GameplayTagManagerSubsystem_Statics::NewProp_CachedTags_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_GameplayTagManagerSubsystem_Statics::NewProp_CachedTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_GameplayTagManagerSubsystem_Statics::NewProp_ActorLooseTags_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_GameplayTagManagerSubsystem_Statics::NewProp_ActorLooseTags_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_GameplayTagManagerSubsystem_Statics::NewProp_ActorLooseTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_GameplayTagManagerSubsystem_Statics::PropPointers) < 2048);
// ********** End Class USOTS_GameplayTagManagerSubsystem Property Definitions *********************
UObject* (*const Z_Construct_UClass_USOTS_GameplayTagManagerSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_TagManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_GameplayTagManagerSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_GameplayTagManagerSubsystem_Statics::ClassParams = {
	&USOTS_GameplayTagManagerSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USOTS_GameplayTagManagerSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_GameplayTagManagerSubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_GameplayTagManagerSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_GameplayTagManagerSubsystem_Statics::Class_MetaDataParams)
};
void USOTS_GameplayTagManagerSubsystem::StaticRegisterNativesUSOTS_GameplayTagManagerSubsystem()
{
	UClass* Class = USOTS_GameplayTagManagerSubsystem::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USOTS_GameplayTagManagerSubsystem_Statics::Funcs));
}
UClass* Z_Construct_UClass_USOTS_GameplayTagManagerSubsystem()
{
	if (!Z_Registration_Info_UClass_USOTS_GameplayTagManagerSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_GameplayTagManagerSubsystem.OuterSingleton, Z_Construct_UClass_USOTS_GameplayTagManagerSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_GameplayTagManagerSubsystem.OuterSingleton;
}
USOTS_GameplayTagManagerSubsystem::USOTS_GameplayTagManagerSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_GameplayTagManagerSubsystem);
USOTS_GameplayTagManagerSubsystem::~USOTS_GameplayTagManagerSubsystem() {}
// ********** End Class USOTS_GameplayTagManagerSubsystem ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_TagManager_Source_SOTS_TagManager_Public_SOTS_GameplayTagManagerSubsystem_h__Script_SOTS_TagManager_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_GameplayTagManagerSubsystem, USOTS_GameplayTagManagerSubsystem::StaticClass, TEXT("USOTS_GameplayTagManagerSubsystem"), &Z_Registration_Info_UClass_USOTS_GameplayTagManagerSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_GameplayTagManagerSubsystem), 1733759941U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_TagManager_Source_SOTS_TagManager_Public_SOTS_GameplayTagManagerSubsystem_h__Script_SOTS_TagManager_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_TagManager_Source_SOTS_TagManager_Public_SOTS_GameplayTagManagerSubsystem_h__Script_SOTS_TagManager_3274599528{
	TEXT("/Script/SOTS_TagManager"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_TagManager_Source_SOTS_TagManager_Public_SOTS_GameplayTagManagerSubsystem_h__Script_SOTS_TagManager_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_TagManager_Source_SOTS_TagManager_Public_SOTS_GameplayTagManagerSubsystem_h__Script_SOTS_TagManager_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
