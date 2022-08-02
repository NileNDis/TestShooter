// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTSHOOTER_FPSCharacter_generated_h
#error "FPSCharacter.generated.h already included, missing '#pragma once' in FPSCharacter.h"
#endif
#define TESTSHOOTER_FPSCharacter_generated_h

#define FID_TestShooter_Source_TestShooter_FPSCharacter_h_16_SPARSE_DATA
#define FID_TestShooter_Source_TestShooter_FPSCharacter_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execStopJump); \
	DECLARE_FUNCTION(execStartJump); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveForward);


#define FID_TestShooter_Source_TestShooter_FPSCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execStopJump); \
	DECLARE_FUNCTION(execStartJump); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveForward);


#define FID_TestShooter_Source_TestShooter_FPSCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSCharacter(); \
	friend struct Z_Construct_UClass_AFPSCharacter_Statics; \
public: \
	DECLARE_CLASS(AFPSCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestShooter"), NO_API) \
	DECLARE_SERIALIZER(AFPSCharacter)


#define FID_TestShooter_Source_TestShooter_FPSCharacter_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAFPSCharacter(); \
	friend struct Z_Construct_UClass_AFPSCharacter_Statics; \
public: \
	DECLARE_CLASS(AFPSCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestShooter"), NO_API) \
	DECLARE_SERIALIZER(AFPSCharacter)


#define FID_TestShooter_Source_TestShooter_FPSCharacter_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSCharacter(AFPSCharacter&&); \
	NO_API AFPSCharacter(const AFPSCharacter&); \
public:


#define FID_TestShooter_Source_TestShooter_FPSCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSCharacter(AFPSCharacter&&); \
	NO_API AFPSCharacter(const AFPSCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSCharacter)


#define FID_TestShooter_Source_TestShooter_FPSCharacter_h_13_PROLOG
#define FID_TestShooter_Source_TestShooter_FPSCharacter_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestShooter_Source_TestShooter_FPSCharacter_h_16_SPARSE_DATA \
	FID_TestShooter_Source_TestShooter_FPSCharacter_h_16_RPC_WRAPPERS \
	FID_TestShooter_Source_TestShooter_FPSCharacter_h_16_INCLASS \
	FID_TestShooter_Source_TestShooter_FPSCharacter_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_TestShooter_Source_TestShooter_FPSCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestShooter_Source_TestShooter_FPSCharacter_h_16_SPARSE_DATA \
	FID_TestShooter_Source_TestShooter_FPSCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TestShooter_Source_TestShooter_FPSCharacter_h_16_INCLASS_NO_PURE_DECLS \
	FID_TestShooter_Source_TestShooter_FPSCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTSHOOTER_API UClass* StaticClass<class AFPSCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestShooter_Source_TestShooter_FPSCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
