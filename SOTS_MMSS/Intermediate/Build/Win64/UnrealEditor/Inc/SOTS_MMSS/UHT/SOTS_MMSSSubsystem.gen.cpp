// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SOTS_MMSSSubsystem.h"
#include "Engine/GameInstance.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_MMSSSubsystem() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
SOTS_MMSS_API UClass* Z_Construct_UClass_USOTS_MissionMusicLibrary_NoRegister();
SOTS_MMSS_API UClass* Z_Construct_UClass_USOTS_MMSSSubsystem();
SOTS_MMSS_API UClass* Z_Construct_UClass_USOTS_MMSSSubsystem_NoRegister();
SOTS_MMSS_API UEnum* Z_Construct_UEnum_SOTS_MMSS_ESOTS_MusicDebugMode();
UPackage* Z_Construct_UPackage__Script_SOTS_MMSS();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USOTS_MMSSSubsystem Function DebugPrintCurrentState **********************
struct Z_Construct_UFunction_USOTS_MMSSSubsystem_DebugPrintCurrentState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Music|Debug" },
		{ "ModuleRelativePath", "Public/SOTS_MMSSSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DebugPrintCurrentState constinit property declarations ****************
// ********** End Function DebugPrintCurrentState constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_MMSSSubsystem_DebugPrintCurrentState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_MMSSSubsystem, nullptr, "DebugPrintCurrentState", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MMSSSubsystem_DebugPrintCurrentState_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_MMSSSubsystem_DebugPrintCurrentState_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USOTS_MMSSSubsystem_DebugPrintCurrentState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_MMSSSubsystem_DebugPrintCurrentState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_MMSSSubsystem::execDebugPrintCurrentState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DebugPrintCurrentState();
	P_NATIVE_END;
}
// ********** End Class USOTS_MMSSSubsystem Function DebugPrintCurrentState ************************

// ********** Begin Class USOTS_MMSSSubsystem Function GetCurrentMissionId *************************
struct Z_Construct_UFunction_USOTS_MMSSSubsystem_GetCurrentMissionId_Statics
{
	struct SOTS_MMSSSubsystem_eventGetCurrentMissionId_Parms
	{
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Music" },
		{ "ModuleRelativePath", "Public/SOTS_MMSSSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentMissionId constinit property declarations *******************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentMissionId constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentMissionId Property Definitions ******************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USOTS_MMSSSubsystem_GetCurrentMissionId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MMSSSubsystem_eventGetCurrentMissionId_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_MMSSSubsystem_GetCurrentMissionId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MMSSSubsystem_GetCurrentMissionId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MMSSSubsystem_GetCurrentMissionId_Statics::PropPointers) < 2048);
// ********** End Function GetCurrentMissionId Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_MMSSSubsystem_GetCurrentMissionId_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_MMSSSubsystem, nullptr, "GetCurrentMissionId", 	Z_Construct_UFunction_USOTS_MMSSSubsystem_GetCurrentMissionId_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MMSSSubsystem_GetCurrentMissionId_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_MMSSSubsystem_GetCurrentMissionId_Statics::SOTS_MMSSSubsystem_eventGetCurrentMissionId_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MMSSSubsystem_GetCurrentMissionId_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_MMSSSubsystem_GetCurrentMissionId_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_MMSSSubsystem_GetCurrentMissionId_Statics::SOTS_MMSSSubsystem_eventGetCurrentMissionId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_MMSSSubsystem_GetCurrentMissionId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_MMSSSubsystem_GetCurrentMissionId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_MMSSSubsystem::execGetCurrentMissionId)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetCurrentMissionId();
	P_NATIVE_END;
}
// ********** End Class USOTS_MMSSSubsystem Function GetCurrentMissionId ***************************

// ********** Begin Class USOTS_MMSSSubsystem Function GetCurrentMusicRoleTag **********************
struct Z_Construct_UFunction_USOTS_MMSSSubsystem_GetCurrentMusicRoleTag_Statics
{
	struct SOTS_MMSSSubsystem_eventGetCurrentMusicRoleTag_Parms
	{
		FGameplayTag ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Music" },
		{ "ModuleRelativePath", "Public/SOTS_MMSSSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentMusicRoleTag constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentMusicRoleTag constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentMusicRoleTag Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_MMSSSubsystem_GetCurrentMusicRoleTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MMSSSubsystem_eventGetCurrentMusicRoleTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_MMSSSubsystem_GetCurrentMusicRoleTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MMSSSubsystem_GetCurrentMusicRoleTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MMSSSubsystem_GetCurrentMusicRoleTag_Statics::PropPointers) < 2048);
// ********** End Function GetCurrentMusicRoleTag Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_MMSSSubsystem_GetCurrentMusicRoleTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_MMSSSubsystem, nullptr, "GetCurrentMusicRoleTag", 	Z_Construct_UFunction_USOTS_MMSSSubsystem_GetCurrentMusicRoleTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MMSSSubsystem_GetCurrentMusicRoleTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_MMSSSubsystem_GetCurrentMusicRoleTag_Statics::SOTS_MMSSSubsystem_eventGetCurrentMusicRoleTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MMSSSubsystem_GetCurrentMusicRoleTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_MMSSSubsystem_GetCurrentMusicRoleTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_MMSSSubsystem_GetCurrentMusicRoleTag_Statics::SOTS_MMSSSubsystem_eventGetCurrentMusicRoleTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_MMSSSubsystem_GetCurrentMusicRoleTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_MMSSSubsystem_GetCurrentMusicRoleTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_MMSSSubsystem::execGetCurrentMusicRoleTag)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTag*)Z_Param__Result=P_THIS->GetCurrentMusicRoleTag();
	P_NATIVE_END;
}
// ********** End Class USOTS_MMSSSubsystem Function GetCurrentMusicRoleTag ************************

// ********** Begin Class USOTS_MMSSSubsystem Function GetCurrentPlaybackTime **********************
struct Z_Construct_UFunction_USOTS_MMSSSubsystem_GetCurrentPlaybackTime_Statics
{
	struct SOTS_MMSSSubsystem_eventGetCurrentPlaybackTime_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Music" },
		{ "ModuleRelativePath", "Public/SOTS_MMSSSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentPlaybackTime constinit property declarations ****************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentPlaybackTime constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentPlaybackTime Property Definitions ***************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USOTS_MMSSSubsystem_GetCurrentPlaybackTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MMSSSubsystem_eventGetCurrentPlaybackTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_MMSSSubsystem_GetCurrentPlaybackTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MMSSSubsystem_GetCurrentPlaybackTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MMSSSubsystem_GetCurrentPlaybackTime_Statics::PropPointers) < 2048);
// ********** End Function GetCurrentPlaybackTime Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_MMSSSubsystem_GetCurrentPlaybackTime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_MMSSSubsystem, nullptr, "GetCurrentPlaybackTime", 	Z_Construct_UFunction_USOTS_MMSSSubsystem_GetCurrentPlaybackTime_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MMSSSubsystem_GetCurrentPlaybackTime_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_MMSSSubsystem_GetCurrentPlaybackTime_Statics::SOTS_MMSSSubsystem_eventGetCurrentPlaybackTime_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MMSSSubsystem_GetCurrentPlaybackTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_MMSSSubsystem_GetCurrentPlaybackTime_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_MMSSSubsystem_GetCurrentPlaybackTime_Statics::SOTS_MMSSSubsystem_eventGetCurrentPlaybackTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_MMSSSubsystem_GetCurrentPlaybackTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_MMSSSubsystem_GetCurrentPlaybackTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_MMSSSubsystem::execGetCurrentPlaybackTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCurrentPlaybackTime();
	P_NATIVE_END;
}
// ********** End Class USOTS_MMSSSubsystem Function GetCurrentPlaybackTime ************************

// ********** Begin Class USOTS_MMSSSubsystem Function GetCurrentTrackId ***************************
struct Z_Construct_UFunction_USOTS_MMSSSubsystem_GetCurrentTrackId_Statics
{
	struct SOTS_MMSSSubsystem_eventGetCurrentTrackId_Parms
	{
		FGameplayTag ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Music" },
		{ "ModuleRelativePath", "Public/SOTS_MMSSSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentTrackId constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentTrackId constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentTrackId Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_MMSSSubsystem_GetCurrentTrackId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MMSSSubsystem_eventGetCurrentTrackId_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_MMSSSubsystem_GetCurrentTrackId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MMSSSubsystem_GetCurrentTrackId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MMSSSubsystem_GetCurrentTrackId_Statics::PropPointers) < 2048);
// ********** End Function GetCurrentTrackId Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_MMSSSubsystem_GetCurrentTrackId_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_MMSSSubsystem, nullptr, "GetCurrentTrackId", 	Z_Construct_UFunction_USOTS_MMSSSubsystem_GetCurrentTrackId_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MMSSSubsystem_GetCurrentTrackId_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_MMSSSubsystem_GetCurrentTrackId_Statics::SOTS_MMSSSubsystem_eventGetCurrentTrackId_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MMSSSubsystem_GetCurrentTrackId_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_MMSSSubsystem_GetCurrentTrackId_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_MMSSSubsystem_GetCurrentTrackId_Statics::SOTS_MMSSSubsystem_eventGetCurrentTrackId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_MMSSSubsystem_GetCurrentTrackId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_MMSSSubsystem_GetCurrentTrackId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_MMSSSubsystem::execGetCurrentTrackId)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTag*)Z_Param__Result=P_THIS->GetCurrentTrackId();
	P_NATIVE_END;
}
// ********** End Class USOTS_MMSSSubsystem Function GetCurrentTrackId *****************************

// ********** Begin Class USOTS_MMSSSubsystem Function RequestMusicByMissionAndTag *****************
struct Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestMusicByMissionAndTag_Statics
{
	struct SOTS_MMSSSubsystem_eventRequestMusicByMissionAndTag_Parms
	{
		FName MissionId;
		FGameplayTag TrackId;
		bool bForceRestart;
		float OverrideFadeOut;
		float OverrideFadeIn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Music" },
		{ "CPP_Default_bForceRestart", "false" },
		{ "CPP_Default_OverrideFadeIn", "-1.000000" },
		{ "CPP_Default_OverrideFadeOut", "-1.000000" },
		{ "ModuleRelativePath", "Public/SOTS_MMSSSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RequestMusicByMissionAndTag constinit property declarations ***********
	static const UECodeGen_Private::FNamePropertyParams NewProp_MissionId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrackId;
	static void NewProp_bForceRestart_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceRestart;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OverrideFadeOut;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OverrideFadeIn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestMusicByMissionAndTag constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestMusicByMissionAndTag Property Definitions **********************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestMusicByMissionAndTag_Statics::NewProp_MissionId = { "MissionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MMSSSubsystem_eventRequestMusicByMissionAndTag_Parms, MissionId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestMusicByMissionAndTag_Statics::NewProp_TrackId = { "TrackId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MMSSSubsystem_eventRequestMusicByMissionAndTag_Parms, TrackId), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackId_MetaData), NewProp_TrackId_MetaData) }; // 517357616
void Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestMusicByMissionAndTag_Statics::NewProp_bForceRestart_SetBit(void* Obj)
{
	((SOTS_MMSSSubsystem_eventRequestMusicByMissionAndTag_Parms*)Obj)->bForceRestart = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestMusicByMissionAndTag_Statics::NewProp_bForceRestart = { "bForceRestart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_MMSSSubsystem_eventRequestMusicByMissionAndTag_Parms), &Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestMusicByMissionAndTag_Statics::NewProp_bForceRestart_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestMusicByMissionAndTag_Statics::NewProp_OverrideFadeOut = { "OverrideFadeOut", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MMSSSubsystem_eventRequestMusicByMissionAndTag_Parms, OverrideFadeOut), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestMusicByMissionAndTag_Statics::NewProp_OverrideFadeIn = { "OverrideFadeIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MMSSSubsystem_eventRequestMusicByMissionAndTag_Parms, OverrideFadeIn), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestMusicByMissionAndTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestMusicByMissionAndTag_Statics::NewProp_MissionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestMusicByMissionAndTag_Statics::NewProp_TrackId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestMusicByMissionAndTag_Statics::NewProp_bForceRestart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestMusicByMissionAndTag_Statics::NewProp_OverrideFadeOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestMusicByMissionAndTag_Statics::NewProp_OverrideFadeIn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestMusicByMissionAndTag_Statics::PropPointers) < 2048);
// ********** End Function RequestMusicByMissionAndTag Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestMusicByMissionAndTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_MMSSSubsystem, nullptr, "RequestMusicByMissionAndTag", 	Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestMusicByMissionAndTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestMusicByMissionAndTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestMusicByMissionAndTag_Statics::SOTS_MMSSSubsystem_eventRequestMusicByMissionAndTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestMusicByMissionAndTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestMusicByMissionAndTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestMusicByMissionAndTag_Statics::SOTS_MMSSSubsystem_eventRequestMusicByMissionAndTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestMusicByMissionAndTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestMusicByMissionAndTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_MMSSSubsystem::execRequestMusicByMissionAndTag)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_MissionId);
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_TrackId);
	P_GET_UBOOL(Z_Param_bForceRestart);
	P_GET_PROPERTY(FFloatProperty,Z_Param_OverrideFadeOut);
	P_GET_PROPERTY(FFloatProperty,Z_Param_OverrideFadeIn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestMusicByMissionAndTag(Z_Param_MissionId,Z_Param_Out_TrackId,Z_Param_bForceRestart,Z_Param_OverrideFadeOut,Z_Param_OverrideFadeIn);
	P_NATIVE_END;
}
// ********** End Class USOTS_MMSSSubsystem Function RequestMusicByMissionAndTag *******************

// ********** Begin Class USOTS_MMSSSubsystem Function RequestMusicByTag ***************************
struct Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestMusicByTag_Statics
{
	struct SOTS_MMSSSubsystem_eventRequestMusicByTag_Parms
	{
		const UObject* WorldContextObject;
		FGameplayTag TrackId;
		bool bForceRestart;
		float OverrideFadeOut;
		float OverrideFadeIn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Music" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ----- Core API: switch music -----\n" },
#endif
		{ "CPP_Default_bForceRestart", "false" },
		{ "CPP_Default_OverrideFadeIn", "-1.000000" },
		{ "CPP_Default_OverrideFadeOut", "-1.000000" },
		{ "ModuleRelativePath", "Public/SOTS_MMSSSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "----- Core API: switch music -----" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RequestMusicByTag constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrackId;
	static void NewProp_bForceRestart_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceRestart;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OverrideFadeOut;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OverrideFadeIn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestMusicByTag constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestMusicByTag Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestMusicByTag_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MMSSSubsystem_eventRequestMusicByTag_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestMusicByTag_Statics::NewProp_TrackId = { "TrackId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MMSSSubsystem_eventRequestMusicByTag_Parms, TrackId), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackId_MetaData), NewProp_TrackId_MetaData) }; // 517357616
void Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestMusicByTag_Statics::NewProp_bForceRestart_SetBit(void* Obj)
{
	((SOTS_MMSSSubsystem_eventRequestMusicByTag_Parms*)Obj)->bForceRestart = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestMusicByTag_Statics::NewProp_bForceRestart = { "bForceRestart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_MMSSSubsystem_eventRequestMusicByTag_Parms), &Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestMusicByTag_Statics::NewProp_bForceRestart_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestMusicByTag_Statics::NewProp_OverrideFadeOut = { "OverrideFadeOut", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MMSSSubsystem_eventRequestMusicByTag_Parms, OverrideFadeOut), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestMusicByTag_Statics::NewProp_OverrideFadeIn = { "OverrideFadeIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MMSSSubsystem_eventRequestMusicByTag_Parms, OverrideFadeIn), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestMusicByTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestMusicByTag_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestMusicByTag_Statics::NewProp_TrackId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestMusicByTag_Statics::NewProp_bForceRestart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestMusicByTag_Statics::NewProp_OverrideFadeOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestMusicByTag_Statics::NewProp_OverrideFadeIn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestMusicByTag_Statics::PropPointers) < 2048);
// ********** End Function RequestMusicByTag Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestMusicByTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_MMSSSubsystem, nullptr, "RequestMusicByTag", 	Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestMusicByTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestMusicByTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestMusicByTag_Statics::SOTS_MMSSSubsystem_eventRequestMusicByTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestMusicByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestMusicByTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestMusicByTag_Statics::SOTS_MMSSSubsystem_eventRequestMusicByTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestMusicByTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestMusicByTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_MMSSSubsystem::execRequestMusicByTag)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_TrackId);
	P_GET_UBOOL(Z_Param_bForceRestart);
	P_GET_PROPERTY(FFloatProperty,Z_Param_OverrideFadeOut);
	P_GET_PROPERTY(FFloatProperty,Z_Param_OverrideFadeIn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestMusicByTag(Z_Param_WorldContextObject,Z_Param_Out_TrackId,Z_Param_bForceRestart,Z_Param_OverrideFadeOut,Z_Param_OverrideFadeIn);
	P_NATIVE_END;
}
// ********** End Class USOTS_MMSSSubsystem Function RequestMusicByTag *****************************

// ********** Begin Class USOTS_MMSSSubsystem Function RequestRoleTrack ****************************
struct Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestRoleTrack_Statics
{
	struct SOTS_MMSSSubsystem_eventRequestRoleTrack_Parms
	{
		FGameplayTag RoleTag;
		FName TrackIdName;
		float StartTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Music" },
		{ "CPP_Default_StartTime", "0.000000" },
		{ "CPP_Default_TrackIdName", "None" },
		{ "ModuleRelativePath", "Public/SOTS_MMSSSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RequestRoleTrack constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_RoleTag;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TrackIdName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestRoleTrack constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestRoleTrack Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestRoleTrack_Statics::NewProp_RoleTag = { "RoleTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MMSSSubsystem_eventRequestRoleTrack_Parms, RoleTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestRoleTrack_Statics::NewProp_TrackIdName = { "TrackIdName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MMSSSubsystem_eventRequestRoleTrack_Parms, TrackIdName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestRoleTrack_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MMSSSubsystem_eventRequestRoleTrack_Parms, StartTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestRoleTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestRoleTrack_Statics::NewProp_RoleTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestRoleTrack_Statics::NewProp_TrackIdName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestRoleTrack_Statics::NewProp_StartTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestRoleTrack_Statics::PropPointers) < 2048);
// ********** End Function RequestRoleTrack Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestRoleTrack_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_MMSSSubsystem, nullptr, "RequestRoleTrack", 	Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestRoleTrack_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestRoleTrack_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestRoleTrack_Statics::SOTS_MMSSSubsystem_eventRequestRoleTrack_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestRoleTrack_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestRoleTrack_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestRoleTrack_Statics::SOTS_MMSSSubsystem_eventRequestRoleTrack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestRoleTrack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestRoleTrack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_MMSSSubsystem::execRequestRoleTrack)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_RoleTag);
	P_GET_PROPERTY(FNameProperty,Z_Param_TrackIdName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestRoleTrack(Z_Param_RoleTag,Z_Param_TrackIdName,Z_Param_StartTime);
	P_NATIVE_END;
}
// ********** End Class USOTS_MMSSSubsystem Function RequestRoleTrack ******************************

// ********** Begin Class USOTS_MMSSSubsystem Function SetCurrentMissionId *************************
struct Z_Construct_UFunction_USOTS_MMSSSubsystem_SetCurrentMissionId_Statics
{
	struct SOTS_MMSSSubsystem_eventSetCurrentMissionId_Parms
	{
		FName NewMissionId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Music" },
		{ "ModuleRelativePath", "Public/SOTS_MMSSSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetCurrentMissionId constinit property declarations *******************
	static const UECodeGen_Private::FNamePropertyParams NewProp_NewMissionId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetCurrentMissionId constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetCurrentMissionId Property Definitions ******************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USOTS_MMSSSubsystem_SetCurrentMissionId_Statics::NewProp_NewMissionId = { "NewMissionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MMSSSubsystem_eventSetCurrentMissionId_Parms, NewMissionId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_MMSSSubsystem_SetCurrentMissionId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MMSSSubsystem_SetCurrentMissionId_Statics::NewProp_NewMissionId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MMSSSubsystem_SetCurrentMissionId_Statics::PropPointers) < 2048);
// ********** End Function SetCurrentMissionId Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_MMSSSubsystem_SetCurrentMissionId_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_MMSSSubsystem, nullptr, "SetCurrentMissionId", 	Z_Construct_UFunction_USOTS_MMSSSubsystem_SetCurrentMissionId_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MMSSSubsystem_SetCurrentMissionId_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_MMSSSubsystem_SetCurrentMissionId_Statics::SOTS_MMSSSubsystem_eventSetCurrentMissionId_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MMSSSubsystem_SetCurrentMissionId_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_MMSSSubsystem_SetCurrentMissionId_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_MMSSSubsystem_SetCurrentMissionId_Statics::SOTS_MMSSSubsystem_eventSetCurrentMissionId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_MMSSSubsystem_SetCurrentMissionId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_MMSSSubsystem_SetCurrentMissionId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_MMSSSubsystem::execSetCurrentMissionId)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_NewMissionId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCurrentMissionId(Z_Param_NewMissionId);
	P_NATIVE_END;
}
// ********** End Class USOTS_MMSSSubsystem Function SetCurrentMissionId ***************************

// ********** Begin Class USOTS_MMSSSubsystem Function SetDebugMode ********************************
struct Z_Construct_UFunction_USOTS_MMSSSubsystem_SetDebugMode_Statics
{
	struct SOTS_MMSSSubsystem_eventSetDebugMode_Parms
	{
		ESOTS_MusicDebugMode NewMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Music|Debug" },
		{ "ModuleRelativePath", "Public/SOTS_MMSSSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetDebugMode constinit property declarations **************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetDebugMode constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetDebugMode Property Definitions *************************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USOTS_MMSSSubsystem_SetDebugMode_Statics::NewProp_NewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USOTS_MMSSSubsystem_SetDebugMode_Statics::NewProp_NewMode = { "NewMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MMSSSubsystem_eventSetDebugMode_Parms, NewMode), Z_Construct_UEnum_SOTS_MMSS_ESOTS_MusicDebugMode, METADATA_PARAMS(0, nullptr) }; // 1242760997
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_MMSSSubsystem_SetDebugMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MMSSSubsystem_SetDebugMode_Statics::NewProp_NewMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MMSSSubsystem_SetDebugMode_Statics::NewProp_NewMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MMSSSubsystem_SetDebugMode_Statics::PropPointers) < 2048);
// ********** End Function SetDebugMode Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_MMSSSubsystem_SetDebugMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_MMSSSubsystem, nullptr, "SetDebugMode", 	Z_Construct_UFunction_USOTS_MMSSSubsystem_SetDebugMode_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MMSSSubsystem_SetDebugMode_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_MMSSSubsystem_SetDebugMode_Statics::SOTS_MMSSSubsystem_eventSetDebugMode_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MMSSSubsystem_SetDebugMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_MMSSSubsystem_SetDebugMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_MMSSSubsystem_SetDebugMode_Statics::SOTS_MMSSSubsystem_eventSetDebugMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_MMSSSubsystem_SetDebugMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_MMSSSubsystem_SetDebugMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_MMSSSubsystem::execSetDebugMode)
{
	P_GET_ENUM(ESOTS_MusicDebugMode,Z_Param_NewMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDebugMode(ESOTS_MusicDebugMode(Z_Param_NewMode));
	P_NATIVE_END;
}
// ********** End Class USOTS_MMSSSubsystem Function SetDebugMode **********************************

// ********** Begin Class USOTS_MMSSSubsystem Function SetMusicLibrary *****************************
struct Z_Construct_UFunction_USOTS_MMSSSubsystem_SetMusicLibrary_Statics
{
	struct SOTS_MMSSSubsystem_eventSetMusicLibrary_Parms
	{
		USOTS_MissionMusicLibrary* InLibrary;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Music" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ----- Config / setup -----\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MMSSSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "----- Config / setup -----" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetMusicLibrary constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InLibrary;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetMusicLibrary constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetMusicLibrary Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_MMSSSubsystem_SetMusicLibrary_Statics::NewProp_InLibrary = { "InLibrary", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MMSSSubsystem_eventSetMusicLibrary_Parms, InLibrary), Z_Construct_UClass_USOTS_MissionMusicLibrary_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_MMSSSubsystem_SetMusicLibrary_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MMSSSubsystem_SetMusicLibrary_Statics::NewProp_InLibrary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MMSSSubsystem_SetMusicLibrary_Statics::PropPointers) < 2048);
// ********** End Function SetMusicLibrary Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_MMSSSubsystem_SetMusicLibrary_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_MMSSSubsystem, nullptr, "SetMusicLibrary", 	Z_Construct_UFunction_USOTS_MMSSSubsystem_SetMusicLibrary_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MMSSSubsystem_SetMusicLibrary_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_MMSSSubsystem_SetMusicLibrary_Statics::SOTS_MMSSSubsystem_eventSetMusicLibrary_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MMSSSubsystem_SetMusicLibrary_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_MMSSSubsystem_SetMusicLibrary_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_MMSSSubsystem_SetMusicLibrary_Statics::SOTS_MMSSSubsystem_eventSetMusicLibrary_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_MMSSSubsystem_SetMusicLibrary()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_MMSSSubsystem_SetMusicLibrary_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_MMSSSubsystem::execSetMusicLibrary)
{
	P_GET_OBJECT(USOTS_MissionMusicLibrary,Z_Param_InLibrary);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMusicLibrary(Z_Param_InLibrary);
	P_NATIVE_END;
}
// ********** End Class USOTS_MMSSSubsystem Function SetMusicLibrary *******************************

// ********** Begin Class USOTS_MMSSSubsystem Function StopMusic ***********************************
struct Z_Construct_UFunction_USOTS_MMSSSubsystem_StopMusic_Statics
{
	struct SOTS_MMSSSubsystem_eventStopMusic_Parms
	{
		float FadeOutTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Music" },
		{ "CPP_Default_FadeOutTime", "1.000000" },
		{ "ModuleRelativePath", "Public/SOTS_MMSSSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function StopMusic constinit property declarations *****************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeOutTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StopMusic constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StopMusic Property Definitions ****************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USOTS_MMSSSubsystem_StopMusic_Statics::NewProp_FadeOutTime = { "FadeOutTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_MMSSSubsystem_eventStopMusic_Parms, FadeOutTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_MMSSSubsystem_StopMusic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_MMSSSubsystem_StopMusic_Statics::NewProp_FadeOutTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MMSSSubsystem_StopMusic_Statics::PropPointers) < 2048);
// ********** End Function StopMusic Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_MMSSSubsystem_StopMusic_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_MMSSSubsystem, nullptr, "StopMusic", 	Z_Construct_UFunction_USOTS_MMSSSubsystem_StopMusic_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MMSSSubsystem_StopMusic_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_MMSSSubsystem_StopMusic_Statics::SOTS_MMSSSubsystem_eventStopMusic_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_MMSSSubsystem_StopMusic_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_MMSSSubsystem_StopMusic_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_MMSSSubsystem_StopMusic_Statics::SOTS_MMSSSubsystem_eventStopMusic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_MMSSSubsystem_StopMusic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_MMSSSubsystem_StopMusic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_MMSSSubsystem::execStopMusic)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_FadeOutTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopMusic(Z_Param_FadeOutTime);
	P_NATIVE_END;
}
// ********** End Class USOTS_MMSSSubsystem Function StopMusic *************************************

// ********** Begin Class USOTS_MMSSSubsystem ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_MMSSSubsystem;
UClass* USOTS_MMSSSubsystem::GetPrivateStaticClass()
{
	using TClass = USOTS_MMSSSubsystem;
	if (!Z_Registration_Info_UClass_USOTS_MMSSSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_MMSSSubsystem"),
			Z_Registration_Info_UClass_USOTS_MMSSSubsystem.InnerSingleton,
			StaticRegisterNativesUSOTS_MMSSSubsystem,
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
	return Z_Registration_Info_UClass_USOTS_MMSSSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_MMSSSubsystem_NoRegister()
{
	return USOTS_MMSSSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_MMSSSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * GameInstance-scoped music manager for SOTS.\n *\n * - Tracks the current mission id and active music track.\n * - Resolves music requests via a mission-scoped music library DataAsset.\n * - Async-loads USoundBase assets (MetaSounds, SoundCues) and performs\n *   cross-fades between tracks using UAudioComponent.\n * - Intended as a central backend; other systems (GSM, MissionDirector, etc.)\n *   call into this subsystem via simple tag-based APIs.\n */" },
#endif
		{ "IncludePath", "SOTS_MMSSSubsystem.h" },
		{ "ModuleRelativePath", "Public/SOTS_MMSSSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GameInstance-scoped music manager for SOTS.\n\n- Tracks the current mission id and active music track.\n- Resolves music requests via a mission-scoped music library DataAsset.\n- Async-loads USoundBase assets (MetaSounds, SoundCues) and performs\n  cross-fades between tracks using UAudioComponent.\n- Intended as a central backend; other systems (GSM, MissionDirector, etc.)\n  call into this subsystem via simple tag-based APIs." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Library_MetaData[] = {
		{ "ModuleRelativePath", "Public/SOTS_MMSSSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMissionId_MetaData[] = {
		{ "ModuleRelativePath", "Public/SOTS_MMSSSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTrackId_MetaData[] = {
		{ "ModuleRelativePath", "Public/SOTS_MMSSSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMusicRoleTag_MetaData[] = {
		{ "ModuleRelativePath", "Public/SOTS_MMSSSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTrackIdName_MetaData[] = {
		{ "ModuleRelativePath", "Public/SOTS_MMSSSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPlaying_MetaData[] = {
		{ "ModuleRelativePath", "Public/SOTS_MMSSSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/SOTS_MMSSSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PersistentAudioComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The main music audio component, owned by this subsystem / GI.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SOTS_MMSSSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The main music audio component, owned by this subsystem / GI." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadingOutComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional fading-out component for crossfades.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SOTS_MMSSSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional fading-out component for crossfades." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastPlaybackTimeSeconds_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Last known playback time in seconds for the currently tracked music.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MMSSSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Last known playback time in seconds for the currently tracked music." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWasPlayingBeforeWorldChange_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Was the music playing when we last sampled?\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MMSSSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Was the music playing when we last sampled?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedWorld_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cached pointer to the last world we registered the audio component with.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MMSSSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cached pointer to the last world we registered the audio component with." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastFadeOutTimeFromTrack_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Stores the fade-out time of the last track that started playing.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MMSSSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stores the fade-out time of the last track that started playing." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasLastFadeOutTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/SOTS_MMSSSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_MMSSSubsystem constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Library;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CurrentMissionId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentTrackId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentMusicRoleTag;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CurrentTrackIdName;
	static void NewProp_bIsPlaying_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPlaying;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DebugMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DebugMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PersistentAudioComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FadingOutComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LastPlaybackTimeSeconds;
	static void NewProp_bWasPlayingBeforeWorldChange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasPlayingBeforeWorldChange;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CachedWorld;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LastFadeOutTimeFromTrack;
	static void NewProp_bHasLastFadeOutTime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasLastFadeOutTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USOTS_MMSSSubsystem constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("DebugPrintCurrentState"), .Pointer = &USOTS_MMSSSubsystem::execDebugPrintCurrentState },
		{ .NameUTF8 = UTF8TEXT("GetCurrentMissionId"), .Pointer = &USOTS_MMSSSubsystem::execGetCurrentMissionId },
		{ .NameUTF8 = UTF8TEXT("GetCurrentMusicRoleTag"), .Pointer = &USOTS_MMSSSubsystem::execGetCurrentMusicRoleTag },
		{ .NameUTF8 = UTF8TEXT("GetCurrentPlaybackTime"), .Pointer = &USOTS_MMSSSubsystem::execGetCurrentPlaybackTime },
		{ .NameUTF8 = UTF8TEXT("GetCurrentTrackId"), .Pointer = &USOTS_MMSSSubsystem::execGetCurrentTrackId },
		{ .NameUTF8 = UTF8TEXT("RequestMusicByMissionAndTag"), .Pointer = &USOTS_MMSSSubsystem::execRequestMusicByMissionAndTag },
		{ .NameUTF8 = UTF8TEXT("RequestMusicByTag"), .Pointer = &USOTS_MMSSSubsystem::execRequestMusicByTag },
		{ .NameUTF8 = UTF8TEXT("RequestRoleTrack"), .Pointer = &USOTS_MMSSSubsystem::execRequestRoleTrack },
		{ .NameUTF8 = UTF8TEXT("SetCurrentMissionId"), .Pointer = &USOTS_MMSSSubsystem::execSetCurrentMissionId },
		{ .NameUTF8 = UTF8TEXT("SetDebugMode"), .Pointer = &USOTS_MMSSSubsystem::execSetDebugMode },
		{ .NameUTF8 = UTF8TEXT("SetMusicLibrary"), .Pointer = &USOTS_MMSSSubsystem::execSetMusicLibrary },
		{ .NameUTF8 = UTF8TEXT("StopMusic"), .Pointer = &USOTS_MMSSSubsystem::execStopMusic },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USOTS_MMSSSubsystem_DebugPrintCurrentState, "DebugPrintCurrentState" }, // 2706668050
		{ &Z_Construct_UFunction_USOTS_MMSSSubsystem_GetCurrentMissionId, "GetCurrentMissionId" }, // 2654500419
		{ &Z_Construct_UFunction_USOTS_MMSSSubsystem_GetCurrentMusicRoleTag, "GetCurrentMusicRoleTag" }, // 3963587993
		{ &Z_Construct_UFunction_USOTS_MMSSSubsystem_GetCurrentPlaybackTime, "GetCurrentPlaybackTime" }, // 1134856426
		{ &Z_Construct_UFunction_USOTS_MMSSSubsystem_GetCurrentTrackId, "GetCurrentTrackId" }, // 1385288156
		{ &Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestMusicByMissionAndTag, "RequestMusicByMissionAndTag" }, // 400219235
		{ &Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestMusicByTag, "RequestMusicByTag" }, // 2158592238
		{ &Z_Construct_UFunction_USOTS_MMSSSubsystem_RequestRoleTrack, "RequestRoleTrack" }, // 1230693480
		{ &Z_Construct_UFunction_USOTS_MMSSSubsystem_SetCurrentMissionId, "SetCurrentMissionId" }, // 3970571810
		{ &Z_Construct_UFunction_USOTS_MMSSSubsystem_SetDebugMode, "SetDebugMode" }, // 1107615680
		{ &Z_Construct_UFunction_USOTS_MMSSSubsystem_SetMusicLibrary, "SetMusicLibrary" }, // 3027761613
		{ &Z_Construct_UFunction_USOTS_MMSSSubsystem_StopMusic, "StopMusic" }, // 3706001007
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_MMSSSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_MMSSSubsystem_Statics

// ********** Begin Class USOTS_MMSSSubsystem Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USOTS_MMSSSubsystem_Statics::NewProp_Library = { "Library", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_MMSSSubsystem, Library), Z_Construct_UClass_USOTS_MissionMusicLibrary_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Library_MetaData), NewProp_Library_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USOTS_MMSSSubsystem_Statics::NewProp_CurrentMissionId = { "CurrentMissionId", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_MMSSSubsystem, CurrentMissionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMissionId_MetaData), NewProp_CurrentMissionId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_MMSSSubsystem_Statics::NewProp_CurrentTrackId = { "CurrentTrackId", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_MMSSSubsystem, CurrentTrackId), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTrackId_MetaData), NewProp_CurrentTrackId_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_MMSSSubsystem_Statics::NewProp_CurrentMusicRoleTag = { "CurrentMusicRoleTag", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_MMSSSubsystem, CurrentMusicRoleTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMusicRoleTag_MetaData), NewProp_CurrentMusicRoleTag_MetaData) }; // 517357616
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USOTS_MMSSSubsystem_Statics::NewProp_CurrentTrackIdName = { "CurrentTrackIdName", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_MMSSSubsystem, CurrentTrackIdName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTrackIdName_MetaData), NewProp_CurrentTrackIdName_MetaData) };
void Z_Construct_UClass_USOTS_MMSSSubsystem_Statics::NewProp_bIsPlaying_SetBit(void* Obj)
{
	((USOTS_MMSSSubsystem*)Obj)->bIsPlaying = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USOTS_MMSSSubsystem_Statics::NewProp_bIsPlaying = { "bIsPlaying", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USOTS_MMSSSubsystem), &Z_Construct_UClass_USOTS_MMSSSubsystem_Statics::NewProp_bIsPlaying_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPlaying_MetaData), NewProp_bIsPlaying_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USOTS_MMSSSubsystem_Statics::NewProp_DebugMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USOTS_MMSSSubsystem_Statics::NewProp_DebugMode = { "DebugMode", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_MMSSSubsystem, DebugMode), Z_Construct_UEnum_SOTS_MMSS_ESOTS_MusicDebugMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugMode_MetaData), NewProp_DebugMode_MetaData) }; // 1242760997
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USOTS_MMSSSubsystem_Statics::NewProp_PersistentAudioComponent = { "PersistentAudioComponent", nullptr, (EPropertyFlags)0x0020080000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_MMSSSubsystem, PersistentAudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PersistentAudioComponent_MetaData), NewProp_PersistentAudioComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USOTS_MMSSSubsystem_Statics::NewProp_FadingOutComponent = { "FadingOutComponent", nullptr, (EPropertyFlags)0x0020080000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_MMSSSubsystem, FadingOutComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadingOutComponent_MetaData), NewProp_FadingOutComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USOTS_MMSSSubsystem_Statics::NewProp_LastPlaybackTimeSeconds = { "LastPlaybackTimeSeconds", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_MMSSSubsystem, LastPlaybackTimeSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastPlaybackTimeSeconds_MetaData), NewProp_LastPlaybackTimeSeconds_MetaData) };
void Z_Construct_UClass_USOTS_MMSSSubsystem_Statics::NewProp_bWasPlayingBeforeWorldChange_SetBit(void* Obj)
{
	((USOTS_MMSSSubsystem*)Obj)->bWasPlayingBeforeWorldChange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USOTS_MMSSSubsystem_Statics::NewProp_bWasPlayingBeforeWorldChange = { "bWasPlayingBeforeWorldChange", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USOTS_MMSSSubsystem), &Z_Construct_UClass_USOTS_MMSSSubsystem_Statics::NewProp_bWasPlayingBeforeWorldChange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWasPlayingBeforeWorldChange_MetaData), NewProp_bWasPlayingBeforeWorldChange_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_USOTS_MMSSSubsystem_Statics::NewProp_CachedWorld = { "CachedWorld", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_MMSSSubsystem, CachedWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedWorld_MetaData), NewProp_CachedWorld_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USOTS_MMSSSubsystem_Statics::NewProp_LastFadeOutTimeFromTrack = { "LastFadeOutTimeFromTrack", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_MMSSSubsystem, LastFadeOutTimeFromTrack), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastFadeOutTimeFromTrack_MetaData), NewProp_LastFadeOutTimeFromTrack_MetaData) };
void Z_Construct_UClass_USOTS_MMSSSubsystem_Statics::NewProp_bHasLastFadeOutTime_SetBit(void* Obj)
{
	((USOTS_MMSSSubsystem*)Obj)->bHasLastFadeOutTime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USOTS_MMSSSubsystem_Statics::NewProp_bHasLastFadeOutTime = { "bHasLastFadeOutTime", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USOTS_MMSSSubsystem), &Z_Construct_UClass_USOTS_MMSSSubsystem_Statics::NewProp_bHasLastFadeOutTime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasLastFadeOutTime_MetaData), NewProp_bHasLastFadeOutTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USOTS_MMSSSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MMSSSubsystem_Statics::NewProp_Library,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MMSSSubsystem_Statics::NewProp_CurrentMissionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MMSSSubsystem_Statics::NewProp_CurrentTrackId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MMSSSubsystem_Statics::NewProp_CurrentMusicRoleTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MMSSSubsystem_Statics::NewProp_CurrentTrackIdName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MMSSSubsystem_Statics::NewProp_bIsPlaying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MMSSSubsystem_Statics::NewProp_DebugMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MMSSSubsystem_Statics::NewProp_DebugMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MMSSSubsystem_Statics::NewProp_PersistentAudioComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MMSSSubsystem_Statics::NewProp_FadingOutComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MMSSSubsystem_Statics::NewProp_LastPlaybackTimeSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MMSSSubsystem_Statics::NewProp_bWasPlayingBeforeWorldChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MMSSSubsystem_Statics::NewProp_CachedWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MMSSSubsystem_Statics::NewProp_LastFadeOutTimeFromTrack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MMSSSubsystem_Statics::NewProp_bHasLastFadeOutTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_MMSSSubsystem_Statics::PropPointers) < 2048);
// ********** End Class USOTS_MMSSSubsystem Property Definitions ***********************************
UObject* (*const Z_Construct_UClass_USOTS_MMSSSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_MMSS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_MMSSSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_MMSSSubsystem_Statics::ClassParams = {
	&USOTS_MMSSSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USOTS_MMSSSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_MMSSSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_MMSSSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_MMSSSubsystem_Statics::Class_MetaDataParams)
};
void USOTS_MMSSSubsystem::StaticRegisterNativesUSOTS_MMSSSubsystem()
{
	UClass* Class = USOTS_MMSSSubsystem::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USOTS_MMSSSubsystem_Statics::Funcs));
}
UClass* Z_Construct_UClass_USOTS_MMSSSubsystem()
{
	if (!Z_Registration_Info_UClass_USOTS_MMSSSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_MMSSSubsystem.OuterSingleton, Z_Construct_UClass_USOTS_MMSSSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_MMSSSubsystem.OuterSingleton;
}
USOTS_MMSSSubsystem::USOTS_MMSSSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_MMSSSubsystem);
USOTS_MMSSSubsystem::~USOTS_MMSSSubsystem() {}
// ********** End Class USOTS_MMSSSubsystem ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MMSS_Source_SOTS_MMSS_Public_SOTS_MMSSSubsystem_h__Script_SOTS_MMSS_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_MMSSSubsystem, USOTS_MMSSSubsystem::StaticClass, TEXT("USOTS_MMSSSubsystem"), &Z_Registration_Info_UClass_USOTS_MMSSSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_MMSSSubsystem), 1411771475U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MMSS_Source_SOTS_MMSS_Public_SOTS_MMSSSubsystem_h__Script_SOTS_MMSS_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MMSS_Source_SOTS_MMSS_Public_SOTS_MMSSSubsystem_h__Script_SOTS_MMSS_3350622480{
	TEXT("/Script/SOTS_MMSS"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MMSS_Source_SOTS_MMSS_Public_SOTS_MMSSSubsystem_h__Script_SOTS_MMSS_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MMSS_Source_SOTS_MMSS_Public_SOTS_MMSSSubsystem_h__Script_SOTS_MMSS_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
