// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTSHOOTER_FPSHUD_generated_h
#error "FPSHUD.generated.h already included, missing '#pragma once' in FPSHUD.h"
#endif
#define TESTSHOOTER_FPSHUD_generated_h

#define FID_TestShooter_Source_TestShooter_FPSHUD_h_16_SPARSE_DATA
#define FID_TestShooter_Source_TestShooter_FPSHUD_h_16_RPC_WRAPPERS
#define FID_TestShooter_Source_TestShooter_FPSHUD_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_TestShooter_Source_TestShooter_FPSHUD_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSHUD(); \
	friend struct Z_Construct_UClass_AFPSHUD_Statics; \
public: \
	DECLARE_CLASS(AFPSHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestShooter"), NO_API) \
	DECLARE_SERIALIZER(AFPSHUD)


#define FID_TestShooter_Source_TestShooter_FPSHUD_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAFPSHUD(); \
	friend struct Z_Construct_UClass_AFPSHUD_Statics; \
public: \
	DECLARE_CLASS(AFPSHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestShooter"), NO_API) \
	DECLARE_SERIALIZER(AFPSHUD)


#define FID_TestShooter_Source_TestShooter_FPSHUD_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSHUD(AFPSHUD&&); \
	NO_API AFPSHUD(const AFPSHUD&); \
public:


#define FID_TestShooter_Source_TestShooter_FPSHUD_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSHUD(AFPSHUD&&); \
	NO_API AFPSHUD(const AFPSHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSHUD)


#define FID_TestShooter_Source_TestShooter_FPSHUD_h_13_PROLOG
#define FID_TestShooter_Source_TestShooter_FPSHUD_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestShooter_Source_TestShooter_FPSHUD_h_16_SPARSE_DATA \
	FID_TestShooter_Source_TestShooter_FPSHUD_h_16_RPC_WRAPPERS \
	FID_TestShooter_Source_TestShooter_FPSHUD_h_16_INCLASS \
	FID_TestShooter_Source_TestShooter_FPSHUD_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_TestShooter_Source_TestShooter_FPSHUD_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestShooter_Source_TestShooter_FPSHUD_h_16_SPARSE_DATA \
	FID_TestShooter_Source_TestShooter_FPSHUD_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TestShooter_Source_TestShooter_FPSHUD_h_16_INCLASS_NO_PURE_DECLS \
	FID_TestShooter_Source_TestShooter_FPSHUD_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTSHOOTER_API UClass* StaticClass<class AFPSHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestShooter_Source_TestShooter_FPSHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
