// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestShooter/TestShooterGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestShooterGameModeBase() {}
// Cross Module References
	TESTSHOOTER_API UClass* Z_Construct_UClass_ATestShooterGameModeBase_NoRegister();
	TESTSHOOTER_API UClass* Z_Construct_UClass_ATestShooterGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TestShooter();
// End Cross Module References
	void ATestShooterGameModeBase::StaticRegisterNativesATestShooterGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATestShooterGameModeBase);
	UClass* Z_Construct_UClass_ATestShooterGameModeBase_NoRegister()
	{
		return ATestShooterGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATestShooterGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestShooterGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TestShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestShooterGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TestShooterGameModeBase.h" },
		{ "ModuleRelativePath", "TestShooterGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestShooterGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestShooterGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestShooterGameModeBase_Statics::ClassParams = {
		&ATestShooterGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATestShooterGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATestShooterGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATestShooterGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ATestShooterGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestShooterGameModeBase.OuterSingleton, Z_Construct_UClass_ATestShooterGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATestShooterGameModeBase.OuterSingleton;
	}
	template<> TESTSHOOTER_API UClass* StaticClass<ATestShooterGameModeBase>()
	{
		return ATestShooterGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestShooterGameModeBase);
	struct Z_CompiledInDeferFile_FID_TestShooter_Source_TestShooter_TestShooterGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestShooter_Source_TestShooter_TestShooterGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATestShooterGameModeBase, ATestShooterGameModeBase::StaticClass, TEXT("ATestShooterGameModeBase"), &Z_Registration_Info_UClass_ATestShooterGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestShooterGameModeBase), 1267456942U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestShooter_Source_TestShooter_TestShooterGameModeBase_h_3916384813(TEXT("/Script/TestShooter"),
		Z_CompiledInDeferFile_FID_TestShooter_Source_TestShooter_TestShooterGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestShooter_Source_TestShooter_TestShooterGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
