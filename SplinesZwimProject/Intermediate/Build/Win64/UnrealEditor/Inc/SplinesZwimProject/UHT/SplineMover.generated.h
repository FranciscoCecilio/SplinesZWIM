// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SplineMover.h"

#ifdef SPLINESZWIMPROJECT_SplineMover_generated_h
#error "SplineMover.generated.h already included, missing '#pragma once' in SplineMover.h"
#endif
#define SPLINESZWIMPROJECT_SplineMover_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ASplineMover *************************************************************
#define FID_Users_franc_Documents_Unreal_Projects_ZWIM_SplinesZWIM_SplinesZwimProject_Source_SplinesZwimProject_SplineMover_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetProgressAlpha); \
	DECLARE_FUNCTION(execSetDirection); \
	DECLARE_FUNCTION(execSetLooping); \
	DECLARE_FUNCTION(execSetSpeed); \
	DECLARE_FUNCTION(execStopMoving); \
	DECLARE_FUNCTION(execStartMoving);


SPLINESZWIMPROJECT_API UClass* Z_Construct_UClass_ASplineMover_NoRegister();

#define FID_Users_franc_Documents_Unreal_Projects_ZWIM_SplinesZWIM_SplinesZwimProject_Source_SplinesZwimProject_SplineMover_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASplineMover(); \
	friend struct Z_Construct_UClass_ASplineMover_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SPLINESZWIMPROJECT_API UClass* Z_Construct_UClass_ASplineMover_NoRegister(); \
public: \
	DECLARE_CLASS2(ASplineMover, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SplinesZwimProject"), Z_Construct_UClass_ASplineMover_NoRegister) \
	DECLARE_SERIALIZER(ASplineMover)


#define FID_Users_franc_Documents_Unreal_Projects_ZWIM_SplinesZWIM_SplinesZwimProject_Source_SplinesZwimProject_SplineMover_h_11_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASplineMover(ASplineMover&&) = delete; \
	ASplineMover(const ASplineMover&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASplineMover); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASplineMover); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASplineMover) \
	NO_API virtual ~ASplineMover();


#define FID_Users_franc_Documents_Unreal_Projects_ZWIM_SplinesZWIM_SplinesZwimProject_Source_SplinesZwimProject_SplineMover_h_8_PROLOG
#define FID_Users_franc_Documents_Unreal_Projects_ZWIM_SplinesZWIM_SplinesZwimProject_Source_SplinesZwimProject_SplineMover_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_franc_Documents_Unreal_Projects_ZWIM_SplinesZWIM_SplinesZwimProject_Source_SplinesZwimProject_SplineMover_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_franc_Documents_Unreal_Projects_ZWIM_SplinesZWIM_SplinesZwimProject_Source_SplinesZwimProject_SplineMover_h_11_INCLASS_NO_PURE_DECLS \
	FID_Users_franc_Documents_Unreal_Projects_ZWIM_SplinesZWIM_SplinesZwimProject_Source_SplinesZwimProject_SplineMover_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASplineMover;

// ********** End Class ASplineMover ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_franc_Documents_Unreal_Projects_ZWIM_SplinesZWIM_SplinesZwimProject_Source_SplinesZwimProject_SplineMover_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
