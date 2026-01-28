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
PRODUCTIONPROJCURR_API UFunction* Z_Construct_UDelegateFunction_ProductionProjCurr_OnToggleTileDebugCoordinates__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ProductionProjCurr();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnToggleTileDebugCoordinates *****************************************
struct Z_Construct_UDelegateFunction_ProductionProjCurr_OnToggleTileDebugCoordinates__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/gameMode/ProductionProjCurrGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProductionProjCurr_OnToggleTileDebugCoordinates__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProductionProjCurr, nullptr, "OnToggleTileDebugCoordinates__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProductionProjCurr_OnToggleTileDebugCoordinates__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProductionProjCurr_OnToggleTileDebugCoordinates__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_ProductionProjCurr_OnToggleTileDebugCoordinates__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProductionProjCurr_OnToggleTileDebugCoordinates__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnToggleTileDebugCoordinates_DelegateWrapper(const FMulticastScriptDelegate& OnToggleTileDebugCoordinates)
{
	OnToggleTileDebugCoordinates.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnToggleTileDebugCoordinates *******************************************

// ********** Begin Class AProductionProjCurrGameMode Function ToggleTileDebugCoordinates **********
struct Z_Construct_UFunction_AProductionProjCurrGameMode_ToggleTileDebugCoordinates_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tile Debug" },
		{ "ModuleRelativePath", "Public/gameMode/ProductionProjCurrGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProductionProjCurrGameMode_ToggleTileDebugCoordinates_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AProductionProjCurrGameMode, nullptr, "ToggleTileDebugCoordinates", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProductionProjCurrGameMode_ToggleTileDebugCoordinates_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProductionProjCurrGameMode_ToggleTileDebugCoordinates_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AProductionProjCurrGameMode_ToggleTileDebugCoordinates()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProductionProjCurrGameMode_ToggleTileDebugCoordinates_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProductionProjCurrGameMode::execToggleTileDebugCoordinates)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleTileDebugCoordinates();
	P_NATIVE_END;
}
// ********** End Class AProductionProjCurrGameMode Function ToggleTileDebugCoordinates ************

// ********** Begin Class AProductionProjCurrGameMode **********************************************
void AProductionProjCurrGameMode::StaticRegisterNativesAProductionProjCurrGameMode()
{
	UClass* Class = AProductionProjCurrGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ToggleTileDebugCoordinates", &AProductionProjCurrGameMode::execToggleTileDebugCoordinates },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnToggleTileDebugCoordinates_MetaData[] = {
		{ "Category", "Tile Debug" },
		{ "ModuleRelativePath", "Public/gameMode/ProductionProjCurrGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnToggleTileDebugCoordinates;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AProductionProjCurrGameMode_ToggleTileDebugCoordinates, "ToggleTileDebugCoordinates" }, // 4021073362
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProductionProjCurrGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AProductionProjCurrGameMode_Statics::NewProp_OnToggleTileDebugCoordinates = { "OnToggleTileDebugCoordinates", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProductionProjCurrGameMode, OnToggleTileDebugCoordinates), Z_Construct_UDelegateFunction_ProductionProjCurr_OnToggleTileDebugCoordinates__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnToggleTileDebugCoordinates_MetaData), NewProp_OnToggleTileDebugCoordinates_MetaData) }; // 614555725
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProductionProjCurrGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProductionProjCurrGameMode_Statics::NewProp_OnToggleTileDebugCoordinates,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProductionProjCurrGameMode_Statics::PropPointers) < 2048);
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
	FuncInfo,
	Z_Construct_UClass_AProductionProjCurrGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AProductionProjCurrGameMode_Statics::PropPointers),
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
		{ Z_Construct_UClass_AProductionProjCurrGameMode, AProductionProjCurrGameMode::StaticClass, TEXT("AProductionProjCurrGameMode"), &Z_Registration_Info_UClass_AProductionProjCurrGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProductionProjCurrGameMode), 4127914263U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_linda_Documents_GitHub_Production_Project_2_ProductionProjCurr_Source_ProductionProjCurr_Public_gameMode_ProductionProjCurrGameMode_h__Script_ProductionProjCurr_4279158506(TEXT("/Script/ProductionProjCurr"),
	Z_CompiledInDeferFile_FID_Users_linda_Documents_GitHub_Production_Project_2_ProductionProjCurr_Source_ProductionProjCurr_Public_gameMode_ProductionProjCurrGameMode_h__Script_ProductionProjCurr_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_linda_Documents_GitHub_Production_Project_2_ProductionProjCurr_Source_ProductionProjCurr_Public_gameMode_ProductionProjCurrGameMode_h__Script_ProductionProjCurr_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
