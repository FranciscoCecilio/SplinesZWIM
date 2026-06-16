// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SplinesZwimProject/SplineMover.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSplineMover() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
SPLINESZWIMPROJECT_API UClass* Z_Construct_UClass_ASplineActor_NoRegister();
SPLINESZWIMPROJECT_API UClass* Z_Construct_UClass_ASplineMover();
SPLINESZWIMPROJECT_API UClass* Z_Construct_UClass_ASplineMover_NoRegister();
UPackage* Z_Construct_UPackage__Script_SplinesZwimProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASplineMover Function GetProgressAlpha ***********************************
struct Z_Construct_UFunction_ASplineMover_GetProgressAlpha_Statics
{
	struct SplineMover_eventGetProgressAlpha_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spline Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// +1 / -1\n" },
#endif
		{ "ModuleRelativePath", "SplineMover.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "+1 / -1" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASplineMover_GetProgressAlpha_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineMover_eventGetProgressAlpha_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASplineMover_GetProgressAlpha_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASplineMover_GetProgressAlpha_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASplineMover_GetProgressAlpha_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASplineMover_GetProgressAlpha_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASplineMover, nullptr, "GetProgressAlpha", Z_Construct_UFunction_ASplineMover_GetProgressAlpha_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASplineMover_GetProgressAlpha_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASplineMover_GetProgressAlpha_Statics::SplineMover_eventGetProgressAlpha_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASplineMover_GetProgressAlpha_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASplineMover_GetProgressAlpha_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASplineMover_GetProgressAlpha_Statics::SplineMover_eventGetProgressAlpha_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASplineMover_GetProgressAlpha()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASplineMover_GetProgressAlpha_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASplineMover::execGetProgressAlpha)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetProgressAlpha();
	P_NATIVE_END;
}
// ********** End Class ASplineMover Function GetProgressAlpha *************************************

// ********** Begin Class ASplineMover Function SetDirection ***************************************
struct Z_Construct_UFunction_ASplineMover_SetDirection_Statics
{
	struct SplineMover_eventSetDirection_Parms
	{
		float InDirection;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spline Movement" },
		{ "ModuleRelativePath", "SplineMover.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASplineMover_SetDirection_Statics::NewProp_InDirection = { "InDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineMover_eventSetDirection_Parms, InDirection), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASplineMover_SetDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASplineMover_SetDirection_Statics::NewProp_InDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASplineMover_SetDirection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASplineMover_SetDirection_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASplineMover, nullptr, "SetDirection", Z_Construct_UFunction_ASplineMover_SetDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASplineMover_SetDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASplineMover_SetDirection_Statics::SplineMover_eventSetDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASplineMover_SetDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASplineMover_SetDirection_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASplineMover_SetDirection_Statics::SplineMover_eventSetDirection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASplineMover_SetDirection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASplineMover_SetDirection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASplineMover::execSetDirection)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InDirection);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDirection(Z_Param_InDirection);
	P_NATIVE_END;
}
// ********** End Class ASplineMover Function SetDirection *****************************************

// ********** Begin Class ASplineMover Function SetLooping *****************************************
struct Z_Construct_UFunction_ASplineMover_SetLooping_Statics
{
	struct SplineMover_eventSetLooping_Parms
	{
		bool bShouldLoop;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spline Movement" },
		{ "ModuleRelativePath", "SplineMover.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bShouldLoop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldLoop;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ASplineMover_SetLooping_Statics::NewProp_bShouldLoop_SetBit(void* Obj)
{
	((SplineMover_eventSetLooping_Parms*)Obj)->bShouldLoop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASplineMover_SetLooping_Statics::NewProp_bShouldLoop = { "bShouldLoop", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SplineMover_eventSetLooping_Parms), &Z_Construct_UFunction_ASplineMover_SetLooping_Statics::NewProp_bShouldLoop_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASplineMover_SetLooping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASplineMover_SetLooping_Statics::NewProp_bShouldLoop,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASplineMover_SetLooping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASplineMover_SetLooping_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASplineMover, nullptr, "SetLooping", Z_Construct_UFunction_ASplineMover_SetLooping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASplineMover_SetLooping_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASplineMover_SetLooping_Statics::SplineMover_eventSetLooping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASplineMover_SetLooping_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASplineMover_SetLooping_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASplineMover_SetLooping_Statics::SplineMover_eventSetLooping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASplineMover_SetLooping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASplineMover_SetLooping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASplineMover::execSetLooping)
{
	P_GET_UBOOL(Z_Param_bShouldLoop);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLooping(Z_Param_bShouldLoop);
	P_NATIVE_END;
}
// ********** End Class ASplineMover Function SetLooping *******************************************

// ********** Begin Class ASplineMover Function SetSpeed *******************************************
struct Z_Construct_UFunction_ASplineMover_SetSpeed_Statics
{
	struct SplineMover_eventSetSpeed_Parms
	{
		float NewSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spline Movement" },
		{ "ModuleRelativePath", "SplineMover.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASplineMover_SetSpeed_Statics::NewProp_NewSpeed = { "NewSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineMover_eventSetSpeed_Parms, NewSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASplineMover_SetSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASplineMover_SetSpeed_Statics::NewProp_NewSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASplineMover_SetSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASplineMover_SetSpeed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASplineMover, nullptr, "SetSpeed", Z_Construct_UFunction_ASplineMover_SetSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASplineMover_SetSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASplineMover_SetSpeed_Statics::SplineMover_eventSetSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASplineMover_SetSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASplineMover_SetSpeed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASplineMover_SetSpeed_Statics::SplineMover_eventSetSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASplineMover_SetSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASplineMover_SetSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASplineMover::execSetSpeed)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSpeed(Z_Param_NewSpeed);
	P_NATIVE_END;
}
// ********** End Class ASplineMover Function SetSpeed *********************************************

// ********** Begin Class ASplineMover Function StartMoving ****************************************
struct Z_Construct_UFunction_ASplineMover_StartMoving_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spline Movement" },
		{ "ModuleRelativePath", "SplineMover.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASplineMover_StartMoving_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASplineMover, nullptr, "StartMoving", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASplineMover_StartMoving_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASplineMover_StartMoving_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASplineMover_StartMoving()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASplineMover_StartMoving_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASplineMover::execStartMoving)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartMoving();
	P_NATIVE_END;
}
// ********** End Class ASplineMover Function StartMoving ******************************************

// ********** Begin Class ASplineMover Function StopMoving *****************************************
struct Z_Construct_UFunction_ASplineMover_StopMoving_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spline Movement" },
		{ "ModuleRelativePath", "SplineMover.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASplineMover_StopMoving_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASplineMover, nullptr, "StopMoving", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASplineMover_StopMoving_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASplineMover_StopMoving_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASplineMover_StopMoving()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASplineMover_StopMoving_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASplineMover::execStopMoving)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopMoving();
	P_NATIVE_END;
}
// ********** End Class ASplineMover Function StopMoving *******************************************

// ********** Begin Class ASplineMover *************************************************************
void ASplineMover::StaticRegisterNativesASplineMover()
{
	UClass* Class = ASplineMover::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetProgressAlpha", &ASplineMover::execGetProgressAlpha },
		{ "SetDirection", &ASplineMover::execSetDirection },
		{ "SetLooping", &ASplineMover::execSetLooping },
		{ "SetSpeed", &ASplineMover::execSetSpeed },
		{ "StartMoving", &ASplineMover::execStartMoving },
		{ "StopMoving", &ASplineMover::execStopMoving },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASplineMover;
UClass* ASplineMover::GetPrivateStaticClass()
{
	using TClass = ASplineMover;
	if (!Z_Registration_Info_UClass_ASplineMover.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SplineMover"),
			Z_Registration_Info_UClass_ASplineMover.InnerSingleton,
			StaticRegisterNativesASplineMover,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ASplineMover.InnerSingleton;
}
UClass* Z_Construct_UClass_ASplineMover_NoRegister()
{
	return ASplineMover::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASplineMover_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SplineMover.h" },
		{ "ModuleRelativePath", "SplineMover.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetSpline_MetaData[] = {
		{ "Category", "Spline Movement" },
		{ "ModuleRelativePath", "SplineMover.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[] = {
		{ "Category", "Spline Movement" },
		{ "ModuleRelativePath", "SplineMover.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[] = {
		{ "Category", "Spline Movement" },
		{ "ModuleRelativePath", "SplineMover.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLoop_MetaData[] = {
		{ "Category", "Spline Movement" },
		{ "ModuleRelativePath", "SplineMover.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetSpline;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Acceleration;
	static void NewProp_bLoop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoop;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASplineMover_GetProgressAlpha, "GetProgressAlpha" }, // 1967805270
		{ &Z_Construct_UFunction_ASplineMover_SetDirection, "SetDirection" }, // 646512257
		{ &Z_Construct_UFunction_ASplineMover_SetLooping, "SetLooping" }, // 2854946576
		{ &Z_Construct_UFunction_ASplineMover_SetSpeed, "SetSpeed" }, // 2835052594
		{ &Z_Construct_UFunction_ASplineMover_StartMoving, "StartMoving" }, // 2567709948
		{ &Z_Construct_UFunction_ASplineMover_StopMoving, "StopMoving" }, // 2527922050
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASplineMover>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASplineMover_Statics::NewProp_TargetSpline = { "TargetSpline", nullptr, (EPropertyFlags)0x0114000000000801, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASplineMover, TargetSpline), Z_Construct_UClass_ASplineActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetSpline_MetaData), NewProp_TargetSpline_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASplineMover_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASplineMover, MaxSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSpeed_MetaData), NewProp_MaxSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASplineMover_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASplineMover, Acceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Acceleration_MetaData), NewProp_Acceleration_MetaData) };
void Z_Construct_UClass_ASplineMover_Statics::NewProp_bLoop_SetBit(void* Obj)
{
	((ASplineMover*)Obj)->bLoop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASplineMover_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASplineMover), &Z_Construct_UClass_ASplineMover_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLoop_MetaData), NewProp_bLoop_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASplineMover_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineMover_Statics::NewProp_TargetSpline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineMover_Statics::NewProp_MaxSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineMover_Statics::NewProp_Acceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineMover_Statics::NewProp_bLoop,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASplineMover_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASplineMover_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SplinesZwimProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASplineMover_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASplineMover_Statics::ClassParams = {
	&ASplineMover::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASplineMover_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASplineMover_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASplineMover_Statics::Class_MetaDataParams), Z_Construct_UClass_ASplineMover_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASplineMover()
{
	if (!Z_Registration_Info_UClass_ASplineMover.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASplineMover.OuterSingleton, Z_Construct_UClass_ASplineMover_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASplineMover.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASplineMover);
ASplineMover::~ASplineMover() {}
// ********** End Class ASplineMover ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_franc_Documents_Unreal_Projects_ZWIM_SplinesZWIM_SplinesZwimProject_Source_SplinesZwimProject_SplineMover_h__Script_SplinesZwimProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASplineMover, ASplineMover::StaticClass, TEXT("ASplineMover"), &Z_Registration_Info_UClass_ASplineMover, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASplineMover), 1309887830U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_franc_Documents_Unreal_Projects_ZWIM_SplinesZWIM_SplinesZwimProject_Source_SplinesZwimProject_SplineMover_h__Script_SplinesZwimProject_3094025086(TEXT("/Script/SplinesZwimProject"),
	Z_CompiledInDeferFile_FID_Users_franc_Documents_Unreal_Projects_ZWIM_SplinesZWIM_SplinesZwimProject_Source_SplinesZwimProject_SplineMover_h__Script_SplinesZwimProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_franc_Documents_Unreal_Projects_ZWIM_SplinesZWIM_SplinesZwimProject_Source_SplinesZwimProject_SplineMover_h__Script_SplinesZwimProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
