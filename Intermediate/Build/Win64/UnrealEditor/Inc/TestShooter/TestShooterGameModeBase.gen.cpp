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
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	TESTSHOOTER_API UClass* Z_Construct_UClass_AEnemy_NoRegister();
	TESTSHOOTER_API UClass* Z_Construct_UClass_UHealthComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATestShooterGameModeBase::execGetEnemies)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetEnemies();
		P_NATIVE_END;
	}
	void ATestShooterGameModeBase::StaticRegisterNativesATestShooterGameModeBase()
	{
		UClass* Class = ATestShooterGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEnemies", &ATestShooterGameModeBase::execGetEnemies },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATestShooterGameModeBase_GetEnemies_Statics
	{
		struct TestShooterGameModeBase_eventGetEnemies_Parms
		{
			TArray<AActor*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATestShooterGameModeBase_GetEnemies_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ATestShooterGameModeBase_GetEnemies_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TestShooterGameModeBase_eventGetEnemies_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATestShooterGameModeBase_GetEnemies_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATestShooterGameModeBase_GetEnemies_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATestShooterGameModeBase_GetEnemies_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestShooterGameModeBase_GetEnemies_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TestShooterGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestShooterGameModeBase_GetEnemies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestShooterGameModeBase, nullptr, "GetEnemies", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATestShooterGameModeBase_GetEnemies_Statics::TestShooterGameModeBase_eventGetEnemies_Parms), Z_Construct_UFunction_ATestShooterGameModeBase_GetEnemies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestShooterGameModeBase_GetEnemies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATestShooterGameModeBase_GetEnemies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestShooterGameModeBase_GetEnemies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATestShooterGameModeBase_GetEnemies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATestShooterGameModeBase_GetEnemies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATestShooterGameModeBase);
	UClass* Z_Construct_UClass_ATestShooterGameModeBase_NoRegister()
	{
		return ATestShooterGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATestShooterGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Enemy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Enemy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Hp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestShooterGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TestShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATestShooterGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATestShooterGameModeBase_GetEnemies, "GetEnemies" }, // 2432035119
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestShooterGameModeBase_Statics::NewProp_Enemy_MetaData[] = {
		{ "Category", "TestShooterGameModeBase" },
		{ "ModuleRelativePath", "TestShooterGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestShooterGameModeBase_Statics::NewProp_Enemy = { "Enemy", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestShooterGameModeBase, Enemy), Z_Construct_UClass_AEnemy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATestShooterGameModeBase_Statics::NewProp_Enemy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestShooterGameModeBase_Statics::NewProp_Enemy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestShooterGameModeBase_Statics::NewProp_Hp_MetaData[] = {
		{ "Category", "TestShooterGameModeBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TestShooterGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestShooterGameModeBase_Statics::NewProp_Hp = { "Hp", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestShooterGameModeBase, Hp), Z_Construct_UClass_UHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATestShooterGameModeBase_Statics::NewProp_Hp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestShooterGameModeBase_Statics::NewProp_Hp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATestShooterGameModeBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestShooterGameModeBase_Statics::NewProp_Enemy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestShooterGameModeBase_Statics::NewProp_Hp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestShooterGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestShooterGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestShooterGameModeBase_Statics::ClassParams = {
		&ATestShooterGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATestShooterGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATestShooterGameModeBase_Statics::PropPointers),
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
		{ Z_Construct_UClass_ATestShooterGameModeBase, ATestShooterGameModeBase::StaticClass, TEXT("ATestShooterGameModeBase"), &Z_Registration_Info_UClass_ATestShooterGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestShooterGameModeBase), 316473388U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestShooter_Source_TestShooter_TestShooterGameModeBase_h_4212539493(TEXT("/Script/TestShooter"),
		Z_CompiledInDeferFile_FID_TestShooter_Source_TestShooter_TestShooterGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestShooter_Source_TestShooter_TestShooterGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
