// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSOTS_KillExecutionManager_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	SOTS_KILLEXECUTIONMANAGER_API UFunction* Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_AISExecutionChosenSignature__DelegateSignature();
	SOTS_KILLEXECUTIONMANAGER_API UFunction* Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_CASExecutionChosenSignature__DelegateSignature();
	SOTS_KILLEXECUTIONMANAGER_API UFunction* Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_LevelSequenceExecutionChosenSignature__DelegateSignature();
	SOTS_KILLEXECUTIONMANAGER_API UFunction* Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_OnExecutionEvent__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SOTS_KillExecutionManager;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SOTS_KillExecutionManager()
	{
		if (!Z_Registration_Info_UPackage__Script_SOTS_KillExecutionManager.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_AISExecutionChosenSignature__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_CASExecutionChosenSignature__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_KEM_LevelSequenceExecutionChosenSignature__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_SOTS_KillExecutionManager_SOTS_OnExecutionEvent__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/SOTS_KillExecutionManager",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0xAF66FECB,
			0x47769689,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SOTS_KillExecutionManager.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_SOTS_KillExecutionManager.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SOTS_KillExecutionManager(Z_Construct_UPackage__Script_SOTS_KillExecutionManager, TEXT("/Script/SOTS_KillExecutionManager"), Z_Registration_Info_UPackage__Script_SOTS_KillExecutionManager, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xAF66FECB, 0x47769689));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
