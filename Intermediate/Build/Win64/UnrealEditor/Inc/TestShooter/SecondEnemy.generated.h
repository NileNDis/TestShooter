// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTSHOOTER_SecondEnemy_generated_h
#error "SecondEnemy.generated.h already included, missing '#pragma once' in SecondEnemy.h"
#endif
#define TESTSHOOTER_SecondEnemy_generated_h

#define FID_TestShooter_Source_TestShooter_SecondEnemy_h_15_SPARSE_DATA
#define FID_TestShooter_Source_TestShooter_SecondEnemy_h_15_RPC_WRAPPERS
#define FID_TestShooter_Source_TestShooter_SecondEnemy_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_TestShooter_Source_TestShooter_SecondEnemy_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASecondEnemy(); \
	friend struct Z_Construct_UClass_ASecondEnemy_Statics; \
public: \
	DECLARE_CLASS(ASecondEnemy, AEnemy, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestShooter"), NO_API) \
	DECLARE_SERIALIZER(ASecondEnemy)


#define FID_TestShooter_Source_TestShooter_SecondEnemy_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASecondEnemy(); \
	friend struct Z_Construct_UClass_ASecondEnemy_Statics; \
public: \
	DECLARE_CLASS(ASecondEnemy, AEnemy, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestShooter"), NO_API) \
	DECLARE_SERIALIZER(ASecondEnemy)


#define FID_TestShooter_Source_TestShooter_SecondEnemy_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASecondEnemy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASecondEnemy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASecondEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASecondEnemy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASecondEnemy(ASecondEnemy&&); \
	NO_API ASecondEnemy(const ASecondEnemy&); \
public:


#define FID_TestShooter_Source_TestShooter_SecondEnemy_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASecondEnemy() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASecondEnemy(ASecondEnemy&&); \
	NO_API ASecondEnemy(const ASecondEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASecondEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASecondEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASecondEnemy)


#define FID_TestShooter_Source_TestShooter_SecondEnemy_h_12_PROLOG
#define FID_TestShooter_Source_TestShooter_SecondEnemy_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestShooter_Source_TestShooter_SecondEnemy_h_15_SPARSE_DATA \
	FID_TestShooter_Source_TestShooter_SecondEnemy_h_15_RPC_WRAPPERS \
	FID_TestShooter_Source_TestShooter_SecondEnemy_h_15_INCLASS \
	FID_TestShooter_Source_TestShooter_SecondEnemy_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_TestShooter_Source_TestShooter_SecondEnemy_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestShooter_Source_TestShooter_SecondEnemy_h_15_SPARSE_DATA \
	FID_TestShooter_Source_TestShooter_SecondEnemy_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TestShooter_Source_TestShooter_SecondEnemy_h_15_INCLASS_NO_PURE_DECLS \
	FID_TestShooter_Source_TestShooter_SecondEnemy_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTSHOOTER_API UClass* StaticClass<class ASecondEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestShooter_Source_TestShooter_SecondEnemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
