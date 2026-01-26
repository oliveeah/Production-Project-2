// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "gameMode/ProductionProjCurrGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeProductionProjCurrGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PRODUCTIONPROJCURR_API UClass* Z_Construct_UClass_AProductionProjCurrGameMode();
PRODUCTIONPROJCURR_API UClass* Z_Construct_UClass_AProductionProjCurrGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProductionProjCurr();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AProductionProjCurrGameMode **********************************************
void AProductionProjCurrGameMode::StaticRegisterNativesAProductionProjCurrGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AProductionProjCurrGameMode;
UClass* AProductionProjCurrGameMode::GetPrivateStaticClass()
{
	using TClass = AProductionProjCurrGameMode;
	if (!Z_Registration_Info_UClass_AProductionProjCurrGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ProductionProjCurrGameMode"),
			Z_Registration_Info_UClass_AProductionProjCurrGameMode.InnerSingleton,
			StaticRegisterNativesAProductionProjCurrGameMode,
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
	return Z_Registration_Info_UClass_AProductionProjCurrGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AProductionProjCurrGameMode_NoRegister()
{
	return AProductionProjCurrGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AProductionProjCurrGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "gameMode/ProductionProjCurrGameMode.h" },
		{ "ModuleRelativePath", "Public/gameMode/ProductionProjCurrGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProductionProjCurrGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AProductionProjCurrGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ProductionProjCurr,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProductionProjCurrGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProductionProjCurrGameMode_Statics::ClassParams = {
	&AProductionProjCurrGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProductionProjCurrGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AProductionProjCurrGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProductionProjCurrGameMode()
{
	if (!Z_Registration_Info_UClass_AProductionProjCurrGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProductionProjCurrGameMode.OuterSingleton, Z_Construct_UClass_AProductionProjCurrGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProductionProjCurrGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProductionProjCurrGameMode);
AProductionProjCurrGameMode::~AProductionProjCurrGameMode() {}
// ********** End Class AProductionProjCurrGameMode ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_linda_Documents_GitHub_Production_Project_2_ProductionProjCurr_Source_ProductionProjCurr_Public_gameMode_ProductionProjCurrGameMode_h__Script_ProductionProjCurr_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProductionProjCurrGameMode, AProductionProjCurrGameMode::StaticClass, TEXT("AProductionProjCurrGameMode"), &Z_Registration_Info_UClass_AProductionProjCurrGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProductionProjCurrGameMode), 3028522774U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_linda_Documents_GitHub_Production_Project_2_ProductionProjCurr_Source_ProductionProjCurr_Public_gameMode_ProductionProjCurrGameMode_h__Script_ProductionProjCurr_3692739884(TEXT("/Script/ProductionProjCurr"),
	Z_CompiledInDeferFile_FID_Users_linda_Documents_GitHub_Production_Project_2_ProductionProjCurr_Source_ProductionProjCurr_Public_gameMode_ProductionProjCurrGameMode_h__Script_ProductionProjCurr_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_linda_Documents_GitHub_Production_Project_2_ProductionProjCurr_Source_ProductionProjCurr_Public_gameMode_ProductionProjCurrGameMode_h__Script_ProductionProjCurr_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
