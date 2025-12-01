// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SOTS_WaypointSubsystem.h"
#include "Engine/GameInstance.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_WaypointSubsystem() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
SOTS_UI_API UClass* Z_Construct_UClass_USOTS_WaypointSubsystem();
SOTS_UI_API UClass* Z_Construct_UClass_USOTS_WaypointSubsystem_NoRegister();
SOTS_UI_API UFunction* Z_Construct_UDelegateFunction_USOTS_WaypointSubsystem_SOTS_OnWaypointsChanged__DelegateSignature();
SOTS_UI_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_WaypointEntry();
UPackage* Z_Construct_UPackage__Script_SOTS_UI();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FSOTS_WaypointEntry ***********************************************
struct Z_Construct_UScriptStruct_FSOTS_WaypointEntry_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_WaypointEntry); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_WaypointEntry); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SOTS_WaypointSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Category", "SOTS|Waypoints" },
		{ "ModuleRelativePath", "Public/SOTS_WaypointSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[] = {
		{ "Category", "SOTS|Waypoints" },
		{ "ModuleRelativePath", "Public/SOTS_WaypointSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[] = {
		{ "Category", "SOTS|Waypoints" },
		{ "ModuleRelativePath", "Public/SOTS_WaypointSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryTag_MetaData[] = {
		{ "Category", "SOTS|Waypoints" },
		{ "ModuleRelativePath", "Public/SOTS_WaypointSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClampToScreenEdges_MetaData[] = {
		{ "Category", "SOTS|Waypoints" },
		{ "ModuleRelativePath", "Public/SOTS_WaypointSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_WaypointEntry constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Id;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CategoryTag;
	static void NewProp_bClampToScreenEdges_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClampToScreenEdges;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_WaypointEntry constinit property declarations *****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_WaypointEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_WaypointEntry_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_WaypointEntry;
class UScriptStruct* FSOTS_WaypointEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_WaypointEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_WaypointEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_WaypointEntry, (UObject*)Z_Construct_UPackage__Script_SOTS_UI(), TEXT("SOTS_WaypointEntry"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_WaypointEntry.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_WaypointEntry Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_WaypointEntry_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_WaypointEntry, Id), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FSOTS_WaypointEntry_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_WaypointEntry, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActor_MetaData), NewProp_TargetActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_WaypointEntry_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_WaypointEntry, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldLocation_MetaData), NewProp_WorldLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_WaypointEntry_Statics::NewProp_CategoryTag = { "CategoryTag", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_WaypointEntry, CategoryTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryTag_MetaData), NewProp_CategoryTag_MetaData) }; // 517357616
void Z_Construct_UScriptStruct_FSOTS_WaypointEntry_Statics::NewProp_bClampToScreenEdges_SetBit(void* Obj)
{
	((FSOTS_WaypointEntry*)Obj)->bClampToScreenEdges = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSOTS_WaypointEntry_Statics::NewProp_bClampToScreenEdges = { "bClampToScreenEdges", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSOTS_WaypointEntry), &Z_Construct_UScriptStruct_FSOTS_WaypointEntry_Statics::NewProp_bClampToScreenEdges_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClampToScreenEdges_MetaData), NewProp_bClampToScreenEdges_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_WaypointEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_WaypointEntry_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_WaypointEntry_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_WaypointEntry_Statics::NewProp_WorldLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_WaypointEntry_Statics::NewProp_CategoryTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_WaypointEntry_Statics::NewProp_bClampToScreenEdges,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_WaypointEntry_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_WaypointEntry Property Definitions ****************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_WaypointEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_UI,
	nullptr,
	&NewStructOps,
	"SOTS_WaypointEntry",
	Z_Construct_UScriptStruct_FSOTS_WaypointEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_WaypointEntry_Statics::PropPointers),
	sizeof(FSOTS_WaypointEntry),
	alignof(FSOTS_WaypointEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_WaypointEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_WaypointEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_WaypointEntry()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_WaypointEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_WaypointEntry.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_WaypointEntry_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_WaypointEntry.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_WaypointEntry *************************************************

// ********** Begin Delegate FSOTS_OnWaypointsChanged **********************************************
struct Z_Construct_UDelegateFunction_USOTS_WaypointSubsystem_SOTS_OnWaypointsChanged__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SOTS_WaypointSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FSOTS_OnWaypointsChanged constinit property declarations **************
// ********** End Delegate FSOTS_OnWaypointsChanged constinit property declarations ****************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_USOTS_WaypointSubsystem_SOTS_OnWaypointsChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_WaypointSubsystem, nullptr, "SOTS_OnWaypointsChanged__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USOTS_WaypointSubsystem_SOTS_OnWaypointsChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_USOTS_WaypointSubsystem_SOTS_OnWaypointsChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_USOTS_WaypointSubsystem_SOTS_OnWaypointsChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USOTS_WaypointSubsystem_SOTS_OnWaypointsChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void USOTS_WaypointSubsystem::FSOTS_OnWaypointsChanged_DelegateWrapper(const FMulticastScriptDelegate& SOTS_OnWaypointsChanged)
{
	SOTS_OnWaypointsChanged.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FSOTS_OnWaypointsChanged ************************************************

// ********** Begin Class USOTS_WaypointSubsystem Function AddActorWaypoint ************************
struct Z_Construct_UFunction_USOTS_WaypointSubsystem_AddActorWaypoint_Statics
{
	struct SOTS_WaypointSubsystem_eventAddActorWaypoint_Parms
	{
		AActor* Target;
		FGameplayTag CategoryTag;
		bool bClampToEdges;
		FSOTS_WaypointEntry ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Waypoints" },
		{ "ModuleRelativePath", "Public/SOTS_WaypointSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddActorWaypoint constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CategoryTag;
	static void NewProp_bClampToEdges_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClampToEdges;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddActorWaypoint constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddActorWaypoint Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_WaypointSubsystem_AddActorWaypoint_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_WaypointSubsystem_eventAddActorWaypoint_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_WaypointSubsystem_AddActorWaypoint_Statics::NewProp_CategoryTag = { "CategoryTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_WaypointSubsystem_eventAddActorWaypoint_Parms, CategoryTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
void Z_Construct_UFunction_USOTS_WaypointSubsystem_AddActorWaypoint_Statics::NewProp_bClampToEdges_SetBit(void* Obj)
{
	((SOTS_WaypointSubsystem_eventAddActorWaypoint_Parms*)Obj)->bClampToEdges = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_WaypointSubsystem_AddActorWaypoint_Statics::NewProp_bClampToEdges = { "bClampToEdges", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_WaypointSubsystem_eventAddActorWaypoint_Parms), &Z_Construct_UFunction_USOTS_WaypointSubsystem_AddActorWaypoint_Statics::NewProp_bClampToEdges_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_WaypointSubsystem_AddActorWaypoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_WaypointSubsystem_eventAddActorWaypoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FSOTS_WaypointEntry, METADATA_PARAMS(0, nullptr) }; // 3475316902
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_WaypointSubsystem_AddActorWaypoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_WaypointSubsystem_AddActorWaypoint_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_WaypointSubsystem_AddActorWaypoint_Statics::NewProp_CategoryTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_WaypointSubsystem_AddActorWaypoint_Statics::NewProp_bClampToEdges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_WaypointSubsystem_AddActorWaypoint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_WaypointSubsystem_AddActorWaypoint_Statics::PropPointers) < 2048);
// ********** End Function AddActorWaypoint Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_WaypointSubsystem_AddActorWaypoint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_WaypointSubsystem, nullptr, "AddActorWaypoint", 	Z_Construct_UFunction_USOTS_WaypointSubsystem_AddActorWaypoint_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_WaypointSubsystem_AddActorWaypoint_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_WaypointSubsystem_AddActorWaypoint_Statics::SOTS_WaypointSubsystem_eventAddActorWaypoint_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_WaypointSubsystem_AddActorWaypoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_WaypointSubsystem_AddActorWaypoint_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_WaypointSubsystem_AddActorWaypoint_Statics::SOTS_WaypointSubsystem_eventAddActorWaypoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_WaypointSubsystem_AddActorWaypoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_WaypointSubsystem_AddActorWaypoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_WaypointSubsystem::execAddActorWaypoint)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_STRUCT(FGameplayTag,Z_Param_CategoryTag);
	P_GET_UBOOL(Z_Param_bClampToEdges);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSOTS_WaypointEntry*)Z_Param__Result=P_THIS->AddActorWaypoint(Z_Param_Target,Z_Param_CategoryTag,Z_Param_bClampToEdges);
	P_NATIVE_END;
}
// ********** End Class USOTS_WaypointSubsystem Function AddActorWaypoint **************************

// ********** Begin Class USOTS_WaypointSubsystem Function AddLocationWaypoint *********************
struct Z_Construct_UFunction_USOTS_WaypointSubsystem_AddLocationWaypoint_Statics
{
	struct SOTS_WaypointSubsystem_eventAddLocationWaypoint_Parms
	{
		FVector Location;
		FGameplayTag CategoryTag;
		bool bClampToEdges;
		FSOTS_WaypointEntry ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Waypoints" },
		{ "ModuleRelativePath", "Public/SOTS_WaypointSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddLocationWaypoint constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CategoryTag;
	static void NewProp_bClampToEdges_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClampToEdges;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddLocationWaypoint constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddLocationWaypoint Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_WaypointSubsystem_AddLocationWaypoint_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_WaypointSubsystem_eventAddLocationWaypoint_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_WaypointSubsystem_AddLocationWaypoint_Statics::NewProp_CategoryTag = { "CategoryTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_WaypointSubsystem_eventAddLocationWaypoint_Parms, CategoryTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
void Z_Construct_UFunction_USOTS_WaypointSubsystem_AddLocationWaypoint_Statics::NewProp_bClampToEdges_SetBit(void* Obj)
{
	((SOTS_WaypointSubsystem_eventAddLocationWaypoint_Parms*)Obj)->bClampToEdges = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_WaypointSubsystem_AddLocationWaypoint_Statics::NewProp_bClampToEdges = { "bClampToEdges", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_WaypointSubsystem_eventAddLocationWaypoint_Parms), &Z_Construct_UFunction_USOTS_WaypointSubsystem_AddLocationWaypoint_Statics::NewProp_bClampToEdges_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_WaypointSubsystem_AddLocationWaypoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_WaypointSubsystem_eventAddLocationWaypoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FSOTS_WaypointEntry, METADATA_PARAMS(0, nullptr) }; // 3475316902
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_WaypointSubsystem_AddLocationWaypoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_WaypointSubsystem_AddLocationWaypoint_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_WaypointSubsystem_AddLocationWaypoint_Statics::NewProp_CategoryTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_WaypointSubsystem_AddLocationWaypoint_Statics::NewProp_bClampToEdges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_WaypointSubsystem_AddLocationWaypoint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_WaypointSubsystem_AddLocationWaypoint_Statics::PropPointers) < 2048);
// ********** End Function AddLocationWaypoint Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_WaypointSubsystem_AddLocationWaypoint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_WaypointSubsystem, nullptr, "AddLocationWaypoint", 	Z_Construct_UFunction_USOTS_WaypointSubsystem_AddLocationWaypoint_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_WaypointSubsystem_AddLocationWaypoint_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_WaypointSubsystem_AddLocationWaypoint_Statics::SOTS_WaypointSubsystem_eventAddLocationWaypoint_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_WaypointSubsystem_AddLocationWaypoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_WaypointSubsystem_AddLocationWaypoint_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_WaypointSubsystem_AddLocationWaypoint_Statics::SOTS_WaypointSubsystem_eventAddLocationWaypoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_WaypointSubsystem_AddLocationWaypoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_WaypointSubsystem_AddLocationWaypoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_WaypointSubsystem::execAddLocationWaypoint)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
	P_GET_STRUCT(FGameplayTag,Z_Param_CategoryTag);
	P_GET_UBOOL(Z_Param_bClampToEdges);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSOTS_WaypointEntry*)Z_Param__Result=P_THIS->AddLocationWaypoint(Z_Param_Out_Location,Z_Param_CategoryTag,Z_Param_bClampToEdges);
	P_NATIVE_END;
}
// ********** End Class USOTS_WaypointSubsystem Function AddLocationWaypoint ***********************

// ********** Begin Class USOTS_WaypointSubsystem Function GetWaypoints ****************************
struct Z_Construct_UFunction_USOTS_WaypointSubsystem_GetWaypoints_Statics
{
	struct SOTS_WaypointSubsystem_eventGetWaypoints_Parms
	{
		TArray<FSOTS_WaypointEntry> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Waypoints" },
		{ "ModuleRelativePath", "Public/SOTS_WaypointSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetWaypoints constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetWaypoints constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetWaypoints Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_WaypointSubsystem_GetWaypoints_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSOTS_WaypointEntry, METADATA_PARAMS(0, nullptr) }; // 3475316902
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USOTS_WaypointSubsystem_GetWaypoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_WaypointSubsystem_eventGetWaypoints_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3475316902
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_WaypointSubsystem_GetWaypoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_WaypointSubsystem_GetWaypoints_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_WaypointSubsystem_GetWaypoints_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_WaypointSubsystem_GetWaypoints_Statics::PropPointers) < 2048);
// ********** End Function GetWaypoints Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_WaypointSubsystem_GetWaypoints_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_WaypointSubsystem, nullptr, "GetWaypoints", 	Z_Construct_UFunction_USOTS_WaypointSubsystem_GetWaypoints_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_WaypointSubsystem_GetWaypoints_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_WaypointSubsystem_GetWaypoints_Statics::SOTS_WaypointSubsystem_eventGetWaypoints_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_WaypointSubsystem_GetWaypoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_WaypointSubsystem_GetWaypoints_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_WaypointSubsystem_GetWaypoints_Statics::SOTS_WaypointSubsystem_eventGetWaypoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_WaypointSubsystem_GetWaypoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_WaypointSubsystem_GetWaypoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_WaypointSubsystem::execGetWaypoints)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FSOTS_WaypointEntry>*)Z_Param__Result=P_THIS->GetWaypoints();
	P_NATIVE_END;
}
// ********** End Class USOTS_WaypointSubsystem Function GetWaypoints ******************************

// ********** Begin Class USOTS_WaypointSubsystem Function RemoveWaypoint **************************
struct Z_Construct_UFunction_USOTS_WaypointSubsystem_RemoveWaypoint_Statics
{
	struct SOTS_WaypointSubsystem_eventRemoveWaypoint_Parms
	{
		FGuid Id;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Waypoints" },
		{ "ModuleRelativePath", "Public/SOTS_WaypointSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveWaypoint constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Id;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveWaypoint constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveWaypoint Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_WaypointSubsystem_RemoveWaypoint_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_WaypointSubsystem_eventRemoveWaypoint_Parms, Id), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_WaypointSubsystem_RemoveWaypoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_WaypointSubsystem_RemoveWaypoint_Statics::NewProp_Id,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_WaypointSubsystem_RemoveWaypoint_Statics::PropPointers) < 2048);
// ********** End Function RemoveWaypoint Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_WaypointSubsystem_RemoveWaypoint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_WaypointSubsystem, nullptr, "RemoveWaypoint", 	Z_Construct_UFunction_USOTS_WaypointSubsystem_RemoveWaypoint_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_WaypointSubsystem_RemoveWaypoint_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_WaypointSubsystem_RemoveWaypoint_Statics::SOTS_WaypointSubsystem_eventRemoveWaypoint_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_WaypointSubsystem_RemoveWaypoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_WaypointSubsystem_RemoveWaypoint_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_WaypointSubsystem_RemoveWaypoint_Statics::SOTS_WaypointSubsystem_eventRemoveWaypoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_WaypointSubsystem_RemoveWaypoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_WaypointSubsystem_RemoveWaypoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_WaypointSubsystem::execRemoveWaypoint)
{
	P_GET_STRUCT(FGuid,Z_Param_Id);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveWaypoint(Z_Param_Id);
	P_NATIVE_END;
}
// ********** End Class USOTS_WaypointSubsystem Function RemoveWaypoint ****************************

// ********** Begin Class USOTS_WaypointSubsystem **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_WaypointSubsystem;
UClass* USOTS_WaypointSubsystem::GetPrivateStaticClass()
{
	using TClass = USOTS_WaypointSubsystem;
	if (!Z_Registration_Info_UClass_USOTS_WaypointSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_WaypointSubsystem"),
			Z_Registration_Info_UClass_USOTS_WaypointSubsystem.InnerSingleton,
			StaticRegisterNativesUSOTS_WaypointSubsystem,
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
	return Z_Registration_Info_UClass_USOTS_WaypointSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_WaypointSubsystem_NoRegister()
{
	return USOTS_WaypointSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_WaypointSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SOTS_WaypointSubsystem.h" },
		{ "ModuleRelativePath", "Public/SOTS_WaypointSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnWaypointsChanged_MetaData[] = {
		{ "Category", "SOTS|Waypoints" },
		{ "ModuleRelativePath", "Public/SOTS_WaypointSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Waypoints_MetaData[] = {
		{ "ModuleRelativePath", "Public/SOTS_WaypointSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_WaypointSubsystem constinit property declarations ******************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWaypointsChanged;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Waypoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Waypoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USOTS_WaypointSubsystem constinit property declarations ********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddActorWaypoint"), .Pointer = &USOTS_WaypointSubsystem::execAddActorWaypoint },
		{ .NameUTF8 = UTF8TEXT("AddLocationWaypoint"), .Pointer = &USOTS_WaypointSubsystem::execAddLocationWaypoint },
		{ .NameUTF8 = UTF8TEXT("GetWaypoints"), .Pointer = &USOTS_WaypointSubsystem::execGetWaypoints },
		{ .NameUTF8 = UTF8TEXT("RemoveWaypoint"), .Pointer = &USOTS_WaypointSubsystem::execRemoveWaypoint },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USOTS_WaypointSubsystem_AddActorWaypoint, "AddActorWaypoint" }, // 4280522614
		{ &Z_Construct_UFunction_USOTS_WaypointSubsystem_AddLocationWaypoint, "AddLocationWaypoint" }, // 8404737
		{ &Z_Construct_UFunction_USOTS_WaypointSubsystem_GetWaypoints, "GetWaypoints" }, // 4036460757
		{ &Z_Construct_UFunction_USOTS_WaypointSubsystem_RemoveWaypoint, "RemoveWaypoint" }, // 2425190405
		{ &Z_Construct_UDelegateFunction_USOTS_WaypointSubsystem_SOTS_OnWaypointsChanged__DelegateSignature, "SOTS_OnWaypointsChanged__DelegateSignature" }, // 737511801
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_WaypointSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_WaypointSubsystem_Statics

// ********** Begin Class USOTS_WaypointSubsystem Property Definitions *****************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USOTS_WaypointSubsystem_Statics::NewProp_OnWaypointsChanged = { "OnWaypointsChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_WaypointSubsystem, OnWaypointsChanged), Z_Construct_UDelegateFunction_USOTS_WaypointSubsystem_SOTS_OnWaypointsChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnWaypointsChanged_MetaData), NewProp_OnWaypointsChanged_MetaData) }; // 737511801
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_WaypointSubsystem_Statics::NewProp_Waypoints_Inner = { "Waypoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSOTS_WaypointEntry, METADATA_PARAMS(0, nullptr) }; // 3475316902
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USOTS_WaypointSubsystem_Statics::NewProp_Waypoints = { "Waypoints", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_WaypointSubsystem, Waypoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Waypoints_MetaData), NewProp_Waypoints_MetaData) }; // 3475316902
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USOTS_WaypointSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_WaypointSubsystem_Statics::NewProp_OnWaypointsChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_WaypointSubsystem_Statics::NewProp_Waypoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_WaypointSubsystem_Statics::NewProp_Waypoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_WaypointSubsystem_Statics::PropPointers) < 2048);
// ********** End Class USOTS_WaypointSubsystem Property Definitions *******************************
UObject* (*const Z_Construct_UClass_USOTS_WaypointSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_UI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_WaypointSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_WaypointSubsystem_Statics::ClassParams = {
	&USOTS_WaypointSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USOTS_WaypointSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_WaypointSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_WaypointSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_WaypointSubsystem_Statics::Class_MetaDataParams)
};
void USOTS_WaypointSubsystem::StaticRegisterNativesUSOTS_WaypointSubsystem()
{
	UClass* Class = USOTS_WaypointSubsystem::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USOTS_WaypointSubsystem_Statics::Funcs));
}
UClass* Z_Construct_UClass_USOTS_WaypointSubsystem()
{
	if (!Z_Registration_Info_UClass_USOTS_WaypointSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_WaypointSubsystem.OuterSingleton, Z_Construct_UClass_USOTS_WaypointSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_WaypointSubsystem.OuterSingleton;
}
USOTS_WaypointSubsystem::USOTS_WaypointSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_WaypointSubsystem);
USOTS_WaypointSubsystem::~USOTS_WaypointSubsystem() {}
// ********** End Class USOTS_WaypointSubsystem ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_WaypointSubsystem_h__Script_SOTS_UI_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSOTS_WaypointEntry::StaticStruct, Z_Construct_UScriptStruct_FSOTS_WaypointEntry_Statics::NewStructOps, TEXT("SOTS_WaypointEntry"),&Z_Registration_Info_UScriptStruct_FSOTS_WaypointEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_WaypointEntry), 3475316902U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_WaypointSubsystem, USOTS_WaypointSubsystem::StaticClass, TEXT("USOTS_WaypointSubsystem"), &Z_Registration_Info_UClass_USOTS_WaypointSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_WaypointSubsystem), 1263883413U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_WaypointSubsystem_h__Script_SOTS_UI_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_WaypointSubsystem_h__Script_SOTS_UI_222502652{
	TEXT("/Script/SOTS_UI"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_WaypointSubsystem_h__Script_SOTS_UI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_WaypointSubsystem_h__Script_SOTS_UI_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_WaypointSubsystem_h__Script_SOTS_UI_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_WaypointSubsystem_h__Script_SOTS_UI_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
