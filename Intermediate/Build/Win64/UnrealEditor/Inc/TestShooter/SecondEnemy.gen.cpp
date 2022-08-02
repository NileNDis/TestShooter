// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestShooter/SecondEnemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSecondEnemy() {}
// Cross Module References
	TESTSHOOTER_API UClass* Z_Construct_UClass_ASecondEnemy_NoRegister();
	TESTSHOOTER_API UClass* Z_Construct_UClass_ASecondEnemy();
	TESTSHOOTER_API UClass* Z_Construct_UClass_AEnemy();
	UPackage* Z_Construct_UPackage__Script_TestShooter();
// End Cross Module References
	void ASecondEnemy::StaticRegisterNativesASecondEnemy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASecondEnemy);
	UClass* Z_Construct_UClass_ASecondEnemy_NoRegister()
	{
		return ASecondEnemy::StaticClass();
	}
	struct Z_Construct_UClass_ASecondEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASecondEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemy,
		(UObject* (*)())Z_Construct_UPackage__Script_TestShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASecondEnemy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SecondEnemy.h" },
		{ "ModuleRelativePath", "SecondEnemy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASecondEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASecondEnemy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASecondEnemy_Statics::ClassParams = {
		&ASecondEnemy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASecondEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASecondEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASecondEnemy()
	{
		if (!Z_Registration_Info_UClass_ASecondEnemy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASecondEnemy.OuterSingleton, Z_Construct_UClass_ASecondEnemy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASecondEnemy.OuterSingleton;
	}
	template<> TESTSHOOTER_API UClass* StaticClass<ASecondEnemy>()
	{
		return ASecondEnemy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASecondEnemy);
	struct Z_CompiledInDeferFile_FID_TestShooter_Source_TestShooter_SecondEnemy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestShooter_Source_TestShooter_SecondEnemy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASecondEnemy, ASecondEnemy::StaticClass, TEXT("ASecondEnemy"), &Z_Registration_Info_UClass_ASecondEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASecondEnemy), 1609207029U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestShooter_Source_TestShooter_SecondEnemy_h_3101005775(TEXT("/Script/TestShooter"),
		Z_CompiledInDeferFile_FID_TestShooter_Source_TestShooter_SecondEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestShooter_Source_TestShooter_SecondEnemy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
