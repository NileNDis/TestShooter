// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestShooter_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TestShooter;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TestShooter()
	{
		if (!Z_Registration_Info_UPackage__Script_TestShooter.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/TestShooter",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xA1A25A7D,
				0xD58CDD0E,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TestShooter.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TestShooter.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TestShooter(Z_Construct_UPackage__Script_TestShooter, TEXT("/Script/TestShooter"), Z_Registration_Info_UPackage__Script_TestShooter, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xA1A25A7D, 0xD58CDD0E));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
