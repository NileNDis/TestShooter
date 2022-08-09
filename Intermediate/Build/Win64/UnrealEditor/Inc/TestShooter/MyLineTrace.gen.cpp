// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestShooter/MyLineTrace.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyLineTrace() {}
// Cross Module References
	TESTSHOOTER_API UClass* Z_Construct_UClass_UMyLineTrace_NoRegister();
	TESTSHOOTER_API UClass* Z_Construct_UClass_UMyLineTrace();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_TestShooter();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
// End Cross Module References
	DEFINE_FUNCTION(UMyLineTrace::execLineTrace)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FHitResult*)Z_Param__Result=P_THIS->LineTrace();
		P_NATIVE_END;
	}
	void UMyLineTrace::StaticRegisterNativesUMyLineTrace()
	{
		UClass* Class = UMyLineTrace::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LineTrace", &UMyLineTrace::execLineTrace },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyLineTrace_LineTrace_Statics
	{
		struct MyLineTrace_eventLineTrace_Parms
		{
			FHitResult ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMyLineTrace_LineTrace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyLineTrace_eventLineTrace_Parms, ReturnValue), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyLineTrace_LineTrace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyLineTrace_LineTrace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyLineTrace_LineTrace_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyLineTrace.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyLineTrace_LineTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyLineTrace, nullptr, "LineTrace", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMyLineTrace_LineTrace_Statics::MyLineTrace_eventLineTrace_Parms), Z_Construct_UFunction_UMyLineTrace_LineTrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyLineTrace_LineTrace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyLineTrace_LineTrace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyLineTrace_LineTrace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyLineTrace_LineTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyLineTrace_LineTrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyLineTrace);
	UClass* Z_Construct_UClass_UMyLineTrace_NoRegister()
	{
		return UMyLineTrace::StaticClass();
	}
	struct Z_Construct_UClass_UMyLineTrace_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyLineTrace_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TestShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyLineTrace_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyLineTrace_LineTrace, "LineTrace" }, // 458876531
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyLineTrace_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "MyLineTrace.h" },
		{ "ModuleRelativePath", "MyLineTrace.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyLineTrace_Statics::NewProp_Distance_MetaData[] = {
		{ "ModuleRelativePath", "MyLineTrace.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyLineTrace_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyLineTrace, Distance), METADATA_PARAMS(Z_Construct_UClass_UMyLineTrace_Statics::NewProp_Distance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyLineTrace_Statics::NewProp_Distance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyLineTrace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyLineTrace_Statics::NewProp_Distance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyLineTrace_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyLineTrace>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyLineTrace_Statics::ClassParams = {
		&UMyLineTrace::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMyLineTrace_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyLineTrace_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMyLineTrace_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyLineTrace_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyLineTrace()
	{
		if (!Z_Registration_Info_UClass_UMyLineTrace.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyLineTrace.OuterSingleton, Z_Construct_UClass_UMyLineTrace_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyLineTrace.OuterSingleton;
	}
	template<> TESTSHOOTER_API UClass* StaticClass<UMyLineTrace>()
	{
		return UMyLineTrace::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyLineTrace);
	struct Z_CompiledInDeferFile_FID_TestShooter_Source_TestShooter_MyLineTrace_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestShooter_Source_TestShooter_MyLineTrace_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyLineTrace, UMyLineTrace::StaticClass, TEXT("UMyLineTrace"), &Z_Registration_Info_UClass_UMyLineTrace, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyLineTrace), 3545631236U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestShooter_Source_TestShooter_MyLineTrace_h_3260479417(TEXT("/Script/TestShooter"),
		Z_CompiledInDeferFile_FID_TestShooter_Source_TestShooter_MyLineTrace_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestShooter_Source_TestShooter_MyLineTrace_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
