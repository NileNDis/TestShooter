// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestShooter/GameSave.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameSave() {}
// Cross Module References
	TESTSHOOTER_API UClass* Z_Construct_UClass_UGameSave_NoRegister();
	TESTSHOOTER_API UClass* Z_Construct_UClass_UGameSave();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_TestShooter();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UGameSave::StaticRegisterNativesUGameSave()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameSave);
	UClass* Z_Construct_UClass_UGameSave_NoRegister()
	{
		return UGameSave::StaticClass();
	}
	struct Z_Construct_UClass_UGameSave_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HP_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EnemyHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameSave_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_TestShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSave_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GameSave.h" },
		{ "ModuleRelativePath", "GameSave.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSave_Statics::NewProp_PlayerLocation_MetaData[] = {
		{ "Category", "GameSave" },
		{ "ModuleRelativePath", "GameSave.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameSave_Statics::NewProp_PlayerLocation = { "PlayerLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSave, PlayerLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGameSave_Statics::NewProp_PlayerLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSave_Statics::NewProp_PlayerLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSave_Statics::NewProp_HP_MetaData[] = {
		{ "Category", "GameSave" },
		{ "ModuleRelativePath", "GameSave.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameSave_Statics::NewProp_HP = { "HP", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSave, HP), METADATA_PARAMS(Z_Construct_UClass_UGameSave_Statics::NewProp_HP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSave_Statics::NewProp_HP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSave_Statics::NewProp_EnemyHealth_MetaData[] = {
		{ "Category", "GameSave" },
		{ "ModuleRelativePath", "GameSave.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameSave_Statics::NewProp_EnemyHealth = { "EnemyHealth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSave, EnemyHealth), METADATA_PARAMS(Z_Construct_UClass_UGameSave_Statics::NewProp_EnemyHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSave_Statics::NewProp_EnemyHealth_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameSave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSave_Statics::NewProp_PlayerLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSave_Statics::NewProp_HP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSave_Statics::NewProp_EnemyHealth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameSave_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameSave>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameSave_Statics::ClassParams = {
		&UGameSave::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameSave_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameSave_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameSave_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSave_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameSave()
	{
		if (!Z_Registration_Info_UClass_UGameSave.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameSave.OuterSingleton, Z_Construct_UClass_UGameSave_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameSave.OuterSingleton;
	}
	template<> TESTSHOOTER_API UClass* StaticClass<UGameSave>()
	{
		return UGameSave::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameSave);
	struct Z_CompiledInDeferFile_FID_TestShooter_Source_TestShooter_GameSave_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestShooter_Source_TestShooter_GameSave_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameSave, UGameSave::StaticClass, TEXT("UGameSave"), &Z_Registration_Info_UClass_UGameSave, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameSave), 3222251155U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestShooter_Source_TestShooter_GameSave_h_1783451307(TEXT("/Script/TestShooter"),
		Z_CompiledInDeferFile_FID_TestShooter_Source_TestShooter_GameSave_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestShooter_Source_TestShooter_GameSave_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
