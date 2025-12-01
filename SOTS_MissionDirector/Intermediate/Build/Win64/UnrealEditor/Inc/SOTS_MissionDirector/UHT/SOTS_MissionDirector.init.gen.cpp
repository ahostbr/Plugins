// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSOTS_MissionDirector_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	SOTS_MISSIONDIRECTOR_API UFunction* Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionEndedSignature__DelegateSignature();
	SOTS_MISSIONDIRECTOR_API UFunction* Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionEventLoggedSignature__DelegateSignature();
	SOTS_MISSIONDIRECTOR_API UFunction* Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionScoreChangedSignature__DelegateSignature();
	SOTS_MISSIONDIRECTOR_API UFunction* Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionSimpleEventSignature__DelegateSignature();
	SOTS_MISSIONDIRECTOR_API UFunction* Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_OnObjectiveUpdatedSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SOTS_MissionDirector;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SOTS_MissionDirector()
	{
		if (!Z_Registration_Info_UPackage__Script_SOTS_MissionDirector.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionEndedSignature__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionEventLoggedSignature__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionScoreChangedSignature__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_MissionSimpleEventSignature__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_SOTS_MissionDirector_SOTS_OnObjectiveUpdatedSignature__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/SOTS_MissionDirector",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0x2EDE2ECA,
			0x1A412338,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SOTS_MissionDirector.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_SOTS_MissionDirector.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SOTS_MissionDirector(Z_Construct_UPackage__Script_SOTS_MissionDirector, TEXT("/Script/SOTS_MissionDirector"), Z_Registration_Info_UPackage__Script_SOTS_MissionDirector, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x2EDE2ECA, 0x1A412338));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
