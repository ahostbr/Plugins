// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSOTS_AIPerception_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	SOTS_AIPERCEPTION_API UFunction* Z_Construct_UDelegateFunction_USOTS_AIPerceptionComponent_SOTS_OnPerceptionStateChanged__DelegateSignature();
	SOTS_AIPERCEPTION_API UFunction* Z_Construct_UDelegateFunction_USOTS_AIPerceptionComponent_SOTS_OnTargetPerceptionChanged__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SOTS_AIPerception;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SOTS_AIPerception()
	{
		if (!Z_Registration_Info_UPackage__Script_SOTS_AIPerception.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_USOTS_AIPerceptionComponent_SOTS_OnPerceptionStateChanged__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_USOTS_AIPerceptionComponent_SOTS_OnTargetPerceptionChanged__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/SOTS_AIPerception",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0x4B008EFE,
			0x0A7E0749,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SOTS_AIPerception.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_SOTS_AIPerception.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SOTS_AIPerception(Z_Construct_UPackage__Script_SOTS_AIPerception, TEXT("/Script/SOTS_AIPerception"), Z_Registration_Info_UPackage__Script_SOTS_AIPerception, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x4B008EFE, 0x0A7E0749));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
