// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestShooter/FirstEnemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstEnemy() {}
// Cross Module References
	TESTSHOOTER_API UClass* Z_Construct_UClass_AFirstEnemy_NoRegister();
	TESTSHOOTER_API UClass* Z_Construct_UClass_AFirstEnemy();
	TESTSHOOTER_API UClass* Z_Construct_UClass_AEnemy();
	UPackage* Z_Construct_UPackage__Script_TestShooter();
// End Cross Module References
	void AFirstEnemy::StaticRegisterNativesAFirstEnemy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFirstEnemy);
	UClass* Z_Construct_UClass_AFirstEnemy_NoRegister()
	{
		return AFirstEnemy::StaticClass();
	}
	struct Z_Construct_UClass_AFirstEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFirstEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemy,
		(UObject* (*)())Z_Construct_UPackage__Script_TestShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstEnemy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FirstEnemy.h" },
		{ "ModuleRelativePath", "FirstEnemy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFirstEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirstEnemy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFirstEnemy_Statics::ClassParams = {
		&AFirstEnemy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFirstEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFirstEnemy()
	{
		if (!Z_Registration_Info_UClass_AFirstEnemy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFirstEnemy.OuterSingleton, Z_Construct_UClass_AFirstEnemy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFirstEnemy.OuterSingleton;
	}
	template<> TESTSHOOTER_API UClass* StaticClass<AFirstEnemy>()
	{
		return AFirstEnemy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFirstEnemy);
	struct Z_CompiledInDeferFile_FID_TestShooter_Source_TestShooter_FirstEnemy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestShooter_Source_TestShooter_FirstEnemy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFirstEnemy, AFirstEnemy::StaticClass, TEXT("AFirstEnemy"), &Z_Registration_Info_UClass_AFirstEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFirstEnemy), 3340108552U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestShooter_Source_TestShooter_FirstEnemy_h_1021498420(TEXT("/Script/TestShooter"),
		Z_CompiledInDeferFile_FID_TestShooter_Source_TestShooter_FirstEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestShooter_Source_TestShooter_FirstEnemy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
