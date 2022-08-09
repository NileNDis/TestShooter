// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
#ifdef TESTSHOOTER_MyLineTrace_generated_h
#error "MyLineTrace.generated.h already included, missing '#pragma once' in MyLineTrace.h"
#endif
#define TESTSHOOTER_MyLineTrace_generated_h

#define FID_TestShooter_Source_TestShooter_MyLineTrace_h_13_SPARSE_DATA
#define FID_TestShooter_Source_TestShooter_MyLineTrace_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLineTrace);


#define FID_TestShooter_Source_TestShooter_MyLineTrace_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLineTrace);


#define FID_TestShooter_Source_TestShooter_MyLineTrace_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyLineTrace(); \
	friend struct Z_Construct_UClass_UMyLineTrace_Statics; \
public: \
	DECLARE_CLASS(UMyLineTrace, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestShooter"), NO_API) \
	DECLARE_SERIALIZER(UMyLineTrace)


#define FID_TestShooter_Source_TestShooter_MyLineTrace_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUMyLineTrace(); \
	friend struct Z_Construct_UClass_UMyLineTrace_Statics; \
public: \
	DECLARE_CLASS(UMyLineTrace, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestShooter"), NO_API) \
	DECLARE_SERIALIZER(UMyLineTrace)


#define FID_TestShooter_Source_TestShooter_MyLineTrace_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyLineTrace(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyLineTrace) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyLineTrace); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyLineTrace); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyLineTrace(UMyLineTrace&&); \
	NO_API UMyLineTrace(const UMyLineTrace&); \
public:


#define FID_TestShooter_Source_TestShooter_MyLineTrace_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyLineTrace(UMyLineTrace&&); \
	NO_API UMyLineTrace(const UMyLineTrace&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyLineTrace); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyLineTrace); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMyLineTrace)


#define FID_TestShooter_Source_TestShooter_MyLineTrace_h_10_PROLOG
#define FID_TestShooter_Source_TestShooter_MyLineTrace_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestShooter_Source_TestShooter_MyLineTrace_h_13_SPARSE_DATA \
	FID_TestShooter_Source_TestShooter_MyLineTrace_h_13_RPC_WRAPPERS \
	FID_TestShooter_Source_TestShooter_MyLineTrace_h_13_INCLASS \
	FID_TestShooter_Source_TestShooter_MyLineTrace_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_TestShooter_Source_TestShooter_MyLineTrace_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestShooter_Source_TestShooter_MyLineTrace_h_13_SPARSE_DATA \
	FID_TestShooter_Source_TestShooter_MyLineTrace_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TestShooter_Source_TestShooter_MyLineTrace_h_13_INCLASS_NO_PURE_DECLS \
	FID_TestShooter_Source_TestShooter_MyLineTrace_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTSHOOTER_API UClass* StaticClass<class UMyLineTrace>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestShooter_Source_TestShooter_MyLineTrace_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
