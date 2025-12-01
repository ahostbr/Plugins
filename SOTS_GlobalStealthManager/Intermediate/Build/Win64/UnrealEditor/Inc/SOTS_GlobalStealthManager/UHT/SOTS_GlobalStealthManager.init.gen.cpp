// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSOTS_GlobalStealthManager_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	SOTS_GLOBALSTEALTHMANAGER_API UFunction* Z_Construct_UDelegateFunction_SOTS_GlobalStealthManager_SOTS_PlayerDetectionStateChangedSignature__DelegateSignature();
	SOTS_GLOBALSTEALTHMANAGER_API UFunction* Z_Construct_UDelegateFunction_SOTS_GlobalStealthManager_SOTS_StealthLevelChangedSignature__DelegateSignature();
	SOTS_GLOBALSTEALTHMANAGER_API UFunction* Z_Construct_UDelegateFunction_USOTS_PlayerStealthComponent_OnLocalVisibilityUpdated__DelegateSignature();
	SOTS_GLOBALSTEALTHMANAGER_API UFunction* Z_Construct_UDelegateFunction_USOTS_PlayerStealthComponent_OnStealthTierChanged__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SOTS_GlobalStealthManager;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SOTS_GlobalStealthManager()
	{
		if (!Z_Registration_Info_UPackage__Script_SOTS_GlobalStealthManager.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_SOTS_GlobalStealthManager_SOTS_PlayerDetectionStateChangedSignature__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_SOTS_GlobalStealthManager_SOTS_StealthLevelChangedSignature__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_USOTS_PlayerStealthComponent_OnLocalVisibilityUpdated__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_USOTS_PlayerStealthComponent_OnStealthTierChanged__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/SOTS_GlobalStealthManager",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0xAC93EBF4,
			0xB7A48C11,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SOTS_GlobalStealthManager.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_SOTS_GlobalStealthManager.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SOTS_GlobalStealthManager(Z_Construct_UPackage__Script_SOTS_GlobalStealthManager, TEXT("/Script/SOTS_GlobalStealthManager"), Z_Registration_Info_UPackage__Script_SOTS_GlobalStealthManager, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xAC93EBF4, 0xB7A48C11));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
