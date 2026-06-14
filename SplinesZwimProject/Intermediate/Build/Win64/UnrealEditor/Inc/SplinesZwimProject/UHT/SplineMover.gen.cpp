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
SPLINESZWIMPROJECT_API UClass* Z_Construct_UClass_ASplineMover();
SPLINESZWIMPROJECT_API UClass* Z_Construct_UClass_ASplineMover_NoRegister();
UPackage* Z_Construct_UPackage__Script_SplinesZwimProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASplineMover *************************************************************
void ASplineMover::StaticRegisterNativesASplineMover()
{
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "Spline Movement" },
		{ "ModuleRelativePath", "SplineMover.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLoop_MetaData[] = {
		{ "Category", "Spline Movement" },
		{ "ModuleRelativePath", "SplineMover.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[] = {
		{ "Category", "Spline Movement" },
		{ "ModuleRelativePath", "SplineMover.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static void NewProp_bLoop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoop;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Acceleration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASplineMover>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASplineMover_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASplineMover, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
void Z_Construct_UClass_ASplineMover_Statics::NewProp_bLoop_SetBit(void* Obj)
{
	((ASplineMover*)Obj)->bLoop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASplineMover_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASplineMover), &Z_Construct_UClass_ASplineMover_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLoop_MetaData), NewProp_bLoop_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASplineMover_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASplineMover, Acceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Acceleration_MetaData), NewProp_Acceleration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASplineMover_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineMover_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineMover_Statics::NewProp_bLoop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineMover_Statics::NewProp_Acceleration,
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
	nullptr,
	Z_Construct_UClass_ASplineMover_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
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
struct Z_CompiledInDeferFile_FID_Users_franc_Documents_Unreal_Projects_ZWIM_SplinesZwimProject_Source_SplinesZwimProject_SplineMover_h__Script_SplinesZwimProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASplineMover, ASplineMover::StaticClass, TEXT("ASplineMover"), &Z_Registration_Info_UClass_ASplineMover, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASplineMover), 2594632091U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_franc_Documents_Unreal_Projects_ZWIM_SplinesZwimProject_Source_SplinesZwimProject_SplineMover_h__Script_SplinesZwimProject_1913384423(TEXT("/Script/SplinesZwimProject"),
	Z_CompiledInDeferFile_FID_Users_franc_Documents_Unreal_Projects_ZWIM_SplinesZwimProject_Source_SplinesZwimProject_SplineMover_h__Script_SplinesZwimProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_franc_Documents_Unreal_Projects_ZWIM_SplinesZwimProject_Source_SplinesZwimProject_SplineMover_h__Script_SplinesZwimProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
