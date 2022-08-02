// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestShooter/ThirdEnemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThirdEnemy() {}
// Cross Module References
	TESTSHOOTER_API UClass* Z_Construct_UClass_AThirdEnemy_NoRegister();
	TESTSHOOTER_API UClass* Z_Construct_UClass_AThirdEnemy();
	TESTSHOOTER_API UClass* Z_Construct_UClass_AEnemy();
	UPackage* Z_Construct_UPackage__Script_TestShooter();
// End Cross Module References
	void AThirdEnemy::StaticRegisterNativesAThirdEnemy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AThirdEnemy);
	UClass* Z_Construct_UClass_AThirdEnemy_NoRegister()
	{
		return AThirdEnemy::StaticClass();
	}
	struct Z_Construct_UClass_AThirdEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AThirdEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemy,
		(UObject* (*)())Z_Construct_UPackage__Script_TestShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdEnemy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ThirdEnemy.h" },
		{ "ModuleRelativePath", "ThirdEnemy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AThirdEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThirdEnemy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AThirdEnemy_Statics::ClassParams = {
		&AThirdEnemy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AThirdEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AThirdEnemy()
	{
		if (!Z_Registration_Info_UClass_AThirdEnemy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AThirdEnemy.OuterSingleton, Z_Construct_UClass_AThirdEnemy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AThirdEnemy.OuterSingleton;
	}
	template<> TESTSHOOTER_API UClass* StaticClass<AThirdEnemy>()
	{
		return AThirdEnemy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AThirdEnemy);
	struct Z_CompiledInDeferFile_FID_TestShooter_Source_TestShooter_ThirdEnemy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestShooter_Source_TestShooter_ThirdEnemy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AThirdEnemy, AThirdEnemy::StaticClass, TEXT("AThirdEnemy"), &Z_Registration_Info_UClass_AThirdEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AThirdEnemy), 2878733550U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestShooter_Source_TestShooter_ThirdEnemy_h_3807706361(TEXT("/Script/TestShooter"),
		Z_CompiledInDeferFile_FID_TestShooter_Source_TestShooter_ThirdEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestShooter_Source_TestShooter_ThirdEnemy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
