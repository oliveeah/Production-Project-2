// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyAnimNotifyState.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMyAnimNotifyState() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
PRODUCTIONPROJCURR_API UClass* Z_Construct_UClass_UMyAnimNotifyState();
PRODUCTIONPROJCURR_API UClass* Z_Construct_UClass_UMyAnimNotifyState_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProductionProjCurr();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMyAnimNotifyState *******************************************************
void UMyAnimNotifyState::StaticRegisterNativesUMyAnimNotifyState()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMyAnimNotifyState;
UClass* UMyAnimNotifyState::GetPrivateStaticClass()
{
	using TClass = UMyAnimNotifyState;
	if (!Z_Registration_Info_UClass_UMyAnimNotifyState.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MyAnimNotifyState"),
			Z_Registration_Info_UClass_UMyAnimNotifyState.InnerSingleton,
			StaticRegisterNativesUMyAnimNotifyState,
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
	return Z_Registration_Info_UClass_UMyAnimNotifyState.InnerSingleton;
}
UClass* Z_Construct_UClass_UMyAnimNotifyState_NoRegister()
{
	return UMyAnimNotifyState::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMyAnimNotifyState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "MyAnimNotifyState.h" },
		{ "ModuleRelativePath", "MyAnimNotifyState.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyAnimNotifyState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMyAnimNotifyState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
	(UObject* (*)())Z_Construct_UPackage__Script_ProductionProjCurr,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyAnimNotifyState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyAnimNotifyState_Statics::ClassParams = {
	&UMyAnimNotifyState::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001130A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyAnimNotifyState_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyAnimNotifyState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyAnimNotifyState()
{
	if (!Z_Registration_Info_UClass_UMyAnimNotifyState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyAnimNotifyState.OuterSingleton, Z_Construct_UClass_UMyAnimNotifyState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyAnimNotifyState.OuterSingleton;
}
UMyAnimNotifyState::UMyAnimNotifyState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyAnimNotifyState);
UMyAnimNotifyState::~UMyAnimNotifyState() {}
// ********** End Class UMyAnimNotifyState *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_linda_Documents_GitHub_Production_Project_2_ProductionProjCurr_Source_ProductionProjCurr_MyAnimNotifyState_h__Script_ProductionProjCurr_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyAnimNotifyState, UMyAnimNotifyState::StaticClass, TEXT("UMyAnimNotifyState"), &Z_Registration_Info_UClass_UMyAnimNotifyState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyAnimNotifyState), 50596369U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_linda_Documents_GitHub_Production_Project_2_ProductionProjCurr_Source_ProductionProjCurr_MyAnimNotifyState_h__Script_ProductionProjCurr_2489730551(TEXT("/Script/ProductionProjCurr"),
	Z_CompiledInDeferFile_FID_Users_linda_Documents_GitHub_Production_Project_2_ProductionProjCurr_Source_ProductionProjCurr_MyAnimNotifyState_h__Script_ProductionProjCurr_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_linda_Documents_GitHub_Production_Project_2_ProductionProjCurr_Source_ProductionProjCurr_MyAnimNotifyState_h__Script_ProductionProjCurr_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
