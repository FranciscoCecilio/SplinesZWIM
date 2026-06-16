// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SplinesZwimProject/SplineActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSplineActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
SPLINESZWIMPROJECT_API UClass* Z_Construct_UClass_ASplineActor();
SPLINESZWIMPROJECT_API UClass* Z_Construct_UClass_ASplineActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_SplinesZwimProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASplineActor *************************************************************
void ASplineActor::StaticRegisterNativesASplineActor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASplineActor;
UClass* ASplineActor::GetPrivateStaticClass()
{
	using TClass = ASplineActor;
	if (!Z_Registration_Info_UClass_ASplineActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SplineActor"),
			Z_Registration_Info_UClass_ASplineActor.InnerSingleton,
			StaticRegisterNativesASplineActor,
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
	return Z_Registration_Info_UClass_ASplineActor.InnerSingleton;
}
UClass* Z_Construct_UClass_ASplineActor_NoRegister()
{
	return ASplineActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASplineActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SplineActor.h" },
		{ "ModuleRelativePath", "SplineActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[] = {
		{ "Category", "Spline" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SplineActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSpline_MetaData[] = {
		{ "Category", "SplineActor" },
		{ "ModuleRelativePath", "SplineActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Spline;
	static void NewProp_bIsSpline_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSpline;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASplineActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASplineActor_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASplineActor, Spline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spline_MetaData), NewProp_Spline_MetaData) };
void Z_Construct_UClass_ASplineActor_Statics::NewProp_bIsSpline_SetBit(void* Obj)
{
	((ASplineActor*)Obj)->bIsSpline = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASplineActor_Statics::NewProp_bIsSpline = { "bIsSpline", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASplineActor), &Z_Construct_UClass_ASplineActor_Statics::NewProp_bIsSpline_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSpline_MetaData), NewProp_bIsSpline_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASplineActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineActor_Statics::NewProp_Spline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineActor_Statics::NewProp_bIsSpline,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASplineActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASplineActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SplinesZwimProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASplineActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASplineActor_Statics::ClassParams = {
	&ASplineActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASplineActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASplineActor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASplineActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ASplineActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASplineActor()
{
	if (!Z_Registration_Info_UClass_ASplineActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASplineActor.OuterSingleton, Z_Construct_UClass_ASplineActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASplineActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASplineActor);
ASplineActor::~ASplineActor() {}
// ********** End Class ASplineActor ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_franc_Documents_Unreal_Projects_ZWIM_SplinesZWIM_SplinesZwimProject_Source_SplinesZwimProject_SplineActor_h__Script_SplinesZwimProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASplineActor, ASplineActor::StaticClass, TEXT("ASplineActor"), &Z_Registration_Info_UClass_ASplineActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASplineActor), 3317631342U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_franc_Documents_Unreal_Projects_ZWIM_SplinesZWIM_SplinesZwimProject_Source_SplinesZwimProject_SplineActor_h__Script_SplinesZwimProject_3748812195(TEXT("/Script/SplinesZwimProject"),
	Z_CompiledInDeferFile_FID_Users_franc_Documents_Unreal_Projects_ZWIM_SplinesZWIM_SplinesZwimProject_Source_SplinesZwimProject_SplineActor_h__Script_SplinesZwimProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_franc_Documents_Unreal_Projects_ZWIM_SplinesZWIM_SplinesZwimProject_Source_SplinesZwimProject_SplineActor_h__Script_SplinesZwimProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
