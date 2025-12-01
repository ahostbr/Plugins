// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOmniTrace_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_OmniTrace;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_OmniTrace()
	{
		if (!Z_Registration_Info_UPackage__Script_OmniTrace.OuterSingleton)
		{
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/OmniTrace",
			nullptr,
			0,
			PKG_CompiledIn | 0x00000000,
			0xEFB225C1,
			0x7810DB03,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_OmniTrace.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_OmniTrace.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_OmniTrace(Z_Construct_UPackage__Script_OmniTrace, TEXT("/Script/OmniTrace"), Z_Registration_Info_UPackage__Script_OmniTrace, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xEFB225C1, 0x7810DB03));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
