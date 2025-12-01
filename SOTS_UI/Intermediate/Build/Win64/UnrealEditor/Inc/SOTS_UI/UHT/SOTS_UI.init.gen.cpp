// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSOTS_UI_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	SOTS_UI_API UFunction* Z_Construct_UDelegateFunction_SOTS_UI_SOTS_OnHudFloatChanged__DelegateSignature();
	SOTS_UI_API UFunction* Z_Construct_UDelegateFunction_SOTS_UI_SOTS_OnHudTextChanged__DelegateSignature();
	SOTS_UI_API UFunction* Z_Construct_UDelegateFunction_USOTS_NotificationSubsystem_SOTS_OnNotificationsChanged__DelegateSignature();
	SOTS_UI_API UFunction* Z_Construct_UDelegateFunction_USOTS_WaypointSubsystem_SOTS_OnWaypointsChanged__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SOTS_UI;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SOTS_UI()
	{
		if (!Z_Registration_Info_UPackage__Script_SOTS_UI.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_SOTS_UI_SOTS_OnHudFloatChanged__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_SOTS_UI_SOTS_OnHudTextChanged__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_USOTS_NotificationSubsystem_SOTS_OnNotificationsChanged__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_USOTS_WaypointSubsystem_SOTS_OnWaypointsChanged__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/SOTS_UI",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0x5969787D,
			0xEFE5CB7A,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SOTS_UI.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_SOTS_UI.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SOTS_UI(Z_Construct_UPackage__Script_SOTS_UI, TEXT("/Script/SOTS_UI"), Z_Registration_Info_UPackage__Script_SOTS_UI, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x5969787D, 0xEFE5CB7A));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
