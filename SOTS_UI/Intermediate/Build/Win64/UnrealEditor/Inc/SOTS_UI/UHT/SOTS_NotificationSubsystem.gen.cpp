// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SOTS_NotificationSubsystem.h"
#include "Engine/GameInstance.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_NotificationSubsystem() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
SOTS_UI_API UClass* Z_Construct_UClass_USOTS_NotificationSubsystem();
SOTS_UI_API UClass* Z_Construct_UClass_USOTS_NotificationSubsystem_NoRegister();
SOTS_UI_API UFunction* Z_Construct_UDelegateFunction_USOTS_NotificationSubsystem_SOTS_OnNotificationsChanged__DelegateSignature();
SOTS_UI_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_NotificationEntry();
UPackage* Z_Construct_UPackage__Script_SOTS_UI();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FSOTS_NotificationEntry *******************************************
struct Z_Construct_UScriptStruct_FSOTS_NotificationEntry_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_NotificationEntry); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_NotificationEntry); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SOTS_NotificationSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Category", "SOTS|Notifications" },
		{ "ModuleRelativePath", "Public/SOTS_NotificationSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "Category", "SOTS|Notifications" },
		{ "ModuleRelativePath", "Public/SOTS_NotificationSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DurationSeconds_MetaData[] = {
		{ "Category", "SOTS|Notifications" },
		{ "ModuleRelativePath", "Public/SOTS_NotificationSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryTag_MetaData[] = {
		{ "Category", "SOTS|Notifications" },
		{ "ModuleRelativePath", "Public/SOTS_NotificationSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_NotificationEntry constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Id;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DurationSeconds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CategoryTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_NotificationEntry constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_NotificationEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_NotificationEntry_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_NotificationEntry;
class UScriptStruct* FSOTS_NotificationEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_NotificationEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_NotificationEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_NotificationEntry, (UObject*)Z_Construct_UPackage__Script_SOTS_UI(), TEXT("SOTS_NotificationEntry"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_NotificationEntry.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_NotificationEntry Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_NotificationEntry_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_NotificationEntry, Id), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSOTS_NotificationEntry_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_NotificationEntry, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_NotificationEntry_Statics::NewProp_DurationSeconds = { "DurationSeconds", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_NotificationEntry, DurationSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DurationSeconds_MetaData), NewProp_DurationSeconds_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_NotificationEntry_Statics::NewProp_CategoryTag = { "CategoryTag", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_NotificationEntry, CategoryTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryTag_MetaData), NewProp_CategoryTag_MetaData) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_NotificationEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_NotificationEntry_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_NotificationEntry_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_NotificationEntry_Statics::NewProp_DurationSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_NotificationEntry_Statics::NewProp_CategoryTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_NotificationEntry_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_NotificationEntry Property Definitions ************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_NotificationEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_UI,
	nullptr,
	&NewStructOps,
	"SOTS_NotificationEntry",
	Z_Construct_UScriptStruct_FSOTS_NotificationEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_NotificationEntry_Statics::PropPointers),
	sizeof(FSOTS_NotificationEntry),
	alignof(FSOTS_NotificationEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_NotificationEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_NotificationEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_NotificationEntry()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_NotificationEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_NotificationEntry.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_NotificationEntry_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_NotificationEntry.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_NotificationEntry *********************************************

// ********** Begin Delegate FSOTS_OnNotificationsChanged ******************************************
struct Z_Construct_UDelegateFunction_USOTS_NotificationSubsystem_SOTS_OnNotificationsChanged__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SOTS_NotificationSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FSOTS_OnNotificationsChanged constinit property declarations **********
// ********** End Delegate FSOTS_OnNotificationsChanged constinit property declarations ************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_USOTS_NotificationSubsystem_SOTS_OnNotificationsChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_NotificationSubsystem, nullptr, "SOTS_OnNotificationsChanged__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USOTS_NotificationSubsystem_SOTS_OnNotificationsChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_USOTS_NotificationSubsystem_SOTS_OnNotificationsChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_USOTS_NotificationSubsystem_SOTS_OnNotificationsChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USOTS_NotificationSubsystem_SOTS_OnNotificationsChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void USOTS_NotificationSubsystem::FSOTS_OnNotificationsChanged_DelegateWrapper(const FMulticastScriptDelegate& SOTS_OnNotificationsChanged)
{
	SOTS_OnNotificationsChanged.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FSOTS_OnNotificationsChanged ********************************************

// ********** Begin Class USOTS_NotificationSubsystem Function GetNotifications ********************
struct Z_Construct_UFunction_USOTS_NotificationSubsystem_GetNotifications_Statics
{
	struct SOTS_NotificationSubsystem_eventGetNotifications_Parms
	{
		TArray<FSOTS_NotificationEntry> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Notifications" },
		{ "ModuleRelativePath", "Public/SOTS_NotificationSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNotifications constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNotifications constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNotifications Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_NotificationSubsystem_GetNotifications_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSOTS_NotificationEntry, METADATA_PARAMS(0, nullptr) }; // 2354390317
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USOTS_NotificationSubsystem_GetNotifications_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_NotificationSubsystem_eventGetNotifications_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2354390317
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_NotificationSubsystem_GetNotifications_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_NotificationSubsystem_GetNotifications_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_NotificationSubsystem_GetNotifications_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_NotificationSubsystem_GetNotifications_Statics::PropPointers) < 2048);
// ********** End Function GetNotifications Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_NotificationSubsystem_GetNotifications_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_NotificationSubsystem, nullptr, "GetNotifications", 	Z_Construct_UFunction_USOTS_NotificationSubsystem_GetNotifications_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_NotificationSubsystem_GetNotifications_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_NotificationSubsystem_GetNotifications_Statics::SOTS_NotificationSubsystem_eventGetNotifications_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_NotificationSubsystem_GetNotifications_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_NotificationSubsystem_GetNotifications_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_NotificationSubsystem_GetNotifications_Statics::SOTS_NotificationSubsystem_eventGetNotifications_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_NotificationSubsystem_GetNotifications()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_NotificationSubsystem_GetNotifications_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_NotificationSubsystem::execGetNotifications)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FSOTS_NotificationEntry>*)Z_Param__Result=P_THIS->GetNotifications();
	P_NATIVE_END;
}
// ********** End Class USOTS_NotificationSubsystem Function GetNotifications **********************

// ********** Begin Class USOTS_NotificationSubsystem Function PushNotification ********************
struct Z_Construct_UFunction_USOTS_NotificationSubsystem_PushNotification_Statics
{
	struct SOTS_NotificationSubsystem_eventPushNotification_Parms
	{
		FString Message;
		float DurationSeconds;
		FGameplayTag CategoryTag;
		FSOTS_NotificationEntry ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Notifications" },
		{ "ModuleRelativePath", "Public/SOTS_NotificationSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function PushNotification constinit property declarations **********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DurationSeconds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CategoryTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PushNotification constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PushNotification Property Definitions *********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USOTS_NotificationSubsystem_PushNotification_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_NotificationSubsystem_eventPushNotification_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USOTS_NotificationSubsystem_PushNotification_Statics::NewProp_DurationSeconds = { "DurationSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_NotificationSubsystem_eventPushNotification_Parms, DurationSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_NotificationSubsystem_PushNotification_Statics::NewProp_CategoryTag = { "CategoryTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_NotificationSubsystem_eventPushNotification_Parms, CategoryTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_NotificationSubsystem_PushNotification_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_NotificationSubsystem_eventPushNotification_Parms, ReturnValue), Z_Construct_UScriptStruct_FSOTS_NotificationEntry, METADATA_PARAMS(0, nullptr) }; // 2354390317
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_NotificationSubsystem_PushNotification_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_NotificationSubsystem_PushNotification_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_NotificationSubsystem_PushNotification_Statics::NewProp_DurationSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_NotificationSubsystem_PushNotification_Statics::NewProp_CategoryTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_NotificationSubsystem_PushNotification_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_NotificationSubsystem_PushNotification_Statics::PropPointers) < 2048);
// ********** End Function PushNotification Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_NotificationSubsystem_PushNotification_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_NotificationSubsystem, nullptr, "PushNotification", 	Z_Construct_UFunction_USOTS_NotificationSubsystem_PushNotification_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_NotificationSubsystem_PushNotification_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_NotificationSubsystem_PushNotification_Statics::SOTS_NotificationSubsystem_eventPushNotification_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_NotificationSubsystem_PushNotification_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_NotificationSubsystem_PushNotification_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_NotificationSubsystem_PushNotification_Statics::SOTS_NotificationSubsystem_eventPushNotification_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_NotificationSubsystem_PushNotification()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_NotificationSubsystem_PushNotification_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_NotificationSubsystem::execPushNotification)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DurationSeconds);
	P_GET_STRUCT(FGameplayTag,Z_Param_CategoryTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSOTS_NotificationEntry*)Z_Param__Result=P_THIS->PushNotification(Z_Param_Message,Z_Param_DurationSeconds,Z_Param_CategoryTag);
	P_NATIVE_END;
}
// ********** End Class USOTS_NotificationSubsystem Function PushNotification **********************

// ********** Begin Class USOTS_NotificationSubsystem Function RemoveNotification ******************
struct Z_Construct_UFunction_USOTS_NotificationSubsystem_RemoveNotification_Statics
{
	struct SOTS_NotificationSubsystem_eventRemoveNotification_Parms
	{
		FGuid Id;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Notifications" },
		{ "ModuleRelativePath", "Public/SOTS_NotificationSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveNotification constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Id;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveNotification constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveNotification Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_NotificationSubsystem_RemoveNotification_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_NotificationSubsystem_eventRemoveNotification_Parms, Id), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_NotificationSubsystem_RemoveNotification_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_NotificationSubsystem_RemoveNotification_Statics::NewProp_Id,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_NotificationSubsystem_RemoveNotification_Statics::PropPointers) < 2048);
// ********** End Function RemoveNotification Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_NotificationSubsystem_RemoveNotification_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_NotificationSubsystem, nullptr, "RemoveNotification", 	Z_Construct_UFunction_USOTS_NotificationSubsystem_RemoveNotification_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_NotificationSubsystem_RemoveNotification_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_NotificationSubsystem_RemoveNotification_Statics::SOTS_NotificationSubsystem_eventRemoveNotification_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_NotificationSubsystem_RemoveNotification_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_NotificationSubsystem_RemoveNotification_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_NotificationSubsystem_RemoveNotification_Statics::SOTS_NotificationSubsystem_eventRemoveNotification_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_NotificationSubsystem_RemoveNotification()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_NotificationSubsystem_RemoveNotification_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_NotificationSubsystem::execRemoveNotification)
{
	P_GET_STRUCT(FGuid,Z_Param_Id);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveNotification(Z_Param_Id);
	P_NATIVE_END;
}
// ********** End Class USOTS_NotificationSubsystem Function RemoveNotification ********************

// ********** Begin Class USOTS_NotificationSubsystem **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_NotificationSubsystem;
UClass* USOTS_NotificationSubsystem::GetPrivateStaticClass()
{
	using TClass = USOTS_NotificationSubsystem;
	if (!Z_Registration_Info_UClass_USOTS_NotificationSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_NotificationSubsystem"),
			Z_Registration_Info_UClass_USOTS_NotificationSubsystem.InnerSingleton,
			StaticRegisterNativesUSOTS_NotificationSubsystem,
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
	return Z_Registration_Info_UClass_USOTS_NotificationSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_NotificationSubsystem_NoRegister()
{
	return USOTS_NotificationSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_NotificationSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SOTS_NotificationSubsystem.h" },
		{ "ModuleRelativePath", "Public/SOTS_NotificationSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnNotificationsChanged_MetaData[] = {
		{ "Category", "SOTS|Notifications" },
		{ "ModuleRelativePath", "Public/SOTS_NotificationSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveNotifications_MetaData[] = {
		{ "ModuleRelativePath", "Public/SOTS_NotificationSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_NotificationSubsystem constinit property declarations **************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNotificationsChanged;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveNotifications_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveNotifications;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USOTS_NotificationSubsystem constinit property declarations ****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetNotifications"), .Pointer = &USOTS_NotificationSubsystem::execGetNotifications },
		{ .NameUTF8 = UTF8TEXT("PushNotification"), .Pointer = &USOTS_NotificationSubsystem::execPushNotification },
		{ .NameUTF8 = UTF8TEXT("RemoveNotification"), .Pointer = &USOTS_NotificationSubsystem::execRemoveNotification },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USOTS_NotificationSubsystem_GetNotifications, "GetNotifications" }, // 2062641881
		{ &Z_Construct_UFunction_USOTS_NotificationSubsystem_PushNotification, "PushNotification" }, // 797124725
		{ &Z_Construct_UFunction_USOTS_NotificationSubsystem_RemoveNotification, "RemoveNotification" }, // 505466433
		{ &Z_Construct_UDelegateFunction_USOTS_NotificationSubsystem_SOTS_OnNotificationsChanged__DelegateSignature, "SOTS_OnNotificationsChanged__DelegateSignature" }, // 136267224
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_NotificationSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_NotificationSubsystem_Statics

// ********** Begin Class USOTS_NotificationSubsystem Property Definitions *************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USOTS_NotificationSubsystem_Statics::NewProp_OnNotificationsChanged = { "OnNotificationsChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_NotificationSubsystem, OnNotificationsChanged), Z_Construct_UDelegateFunction_USOTS_NotificationSubsystem_SOTS_OnNotificationsChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnNotificationsChanged_MetaData), NewProp_OnNotificationsChanged_MetaData) }; // 136267224
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_NotificationSubsystem_Statics::NewProp_ActiveNotifications_Inner = { "ActiveNotifications", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSOTS_NotificationEntry, METADATA_PARAMS(0, nullptr) }; // 2354390317
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USOTS_NotificationSubsystem_Statics::NewProp_ActiveNotifications = { "ActiveNotifications", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_NotificationSubsystem, ActiveNotifications), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveNotifications_MetaData), NewProp_ActiveNotifications_MetaData) }; // 2354390317
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USOTS_NotificationSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_NotificationSubsystem_Statics::NewProp_OnNotificationsChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_NotificationSubsystem_Statics::NewProp_ActiveNotifications_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_NotificationSubsystem_Statics::NewProp_ActiveNotifications,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_NotificationSubsystem_Statics::PropPointers) < 2048);
// ********** End Class USOTS_NotificationSubsystem Property Definitions ***************************
UObject* (*const Z_Construct_UClass_USOTS_NotificationSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_UI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_NotificationSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_NotificationSubsystem_Statics::ClassParams = {
	&USOTS_NotificationSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USOTS_NotificationSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_NotificationSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_NotificationSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_NotificationSubsystem_Statics::Class_MetaDataParams)
};
void USOTS_NotificationSubsystem::StaticRegisterNativesUSOTS_NotificationSubsystem()
{
	UClass* Class = USOTS_NotificationSubsystem::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USOTS_NotificationSubsystem_Statics::Funcs));
}
UClass* Z_Construct_UClass_USOTS_NotificationSubsystem()
{
	if (!Z_Registration_Info_UClass_USOTS_NotificationSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_NotificationSubsystem.OuterSingleton, Z_Construct_UClass_USOTS_NotificationSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_NotificationSubsystem.OuterSingleton;
}
USOTS_NotificationSubsystem::USOTS_NotificationSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_NotificationSubsystem);
USOTS_NotificationSubsystem::~USOTS_NotificationSubsystem() {}
// ********** End Class USOTS_NotificationSubsystem ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_NotificationSubsystem_h__Script_SOTS_UI_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSOTS_NotificationEntry::StaticStruct, Z_Construct_UScriptStruct_FSOTS_NotificationEntry_Statics::NewStructOps, TEXT("SOTS_NotificationEntry"),&Z_Registration_Info_UScriptStruct_FSOTS_NotificationEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_NotificationEntry), 2354390317U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_NotificationSubsystem, USOTS_NotificationSubsystem::StaticClass, TEXT("USOTS_NotificationSubsystem"), &Z_Registration_Info_UClass_USOTS_NotificationSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_NotificationSubsystem), 4233944359U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_NotificationSubsystem_h__Script_SOTS_UI_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_NotificationSubsystem_h__Script_SOTS_UI_1035486730{
	TEXT("/Script/SOTS_UI"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_NotificationSubsystem_h__Script_SOTS_UI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_NotificationSubsystem_h__Script_SOTS_UI_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_NotificationSubsystem_h__Script_SOTS_UI_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_NotificationSubsystem_h__Script_SOTS_UI_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
