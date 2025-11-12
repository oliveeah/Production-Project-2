// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProductionProjCurrCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeProductionProjCurrCharacter() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
PRODUCTIONPROJCURR_API UClass* Z_Construct_UClass_AProductionProjCurrCharacter();
PRODUCTIONPROJCURR_API UClass* Z_Construct_UClass_AProductionProjCurrCharacter_NoRegister();
PRODUCTIONPROJCURR_API UClass* Z_Construct_UClass_UtestInterface_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProductionProjCurr();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AProductionProjCurrCharacter Function DoMove *****************************
struct Z_Construct_UFunction_AProductionProjCurrCharacter_DoMove_Statics
{
	struct ProductionProjCurrCharacter_eventDoMove_Parms
	{
		float Right;
		float Forward;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles move inputs from either controls or UI interfaces */" },
#endif
		{ "ModuleRelativePath", "ProductionProjCurrCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles move inputs from either controls or UI interfaces" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Right;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Forward;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AProductionProjCurrCharacter_DoMove_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProductionProjCurrCharacter_eventDoMove_Parms, Right), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AProductionProjCurrCharacter_DoMove_Statics::NewProp_Forward = { "Forward", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProductionProjCurrCharacter_eventDoMove_Parms, Forward), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProductionProjCurrCharacter_DoMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProductionProjCurrCharacter_DoMove_Statics::NewProp_Right,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProductionProjCurrCharacter_DoMove_Statics::NewProp_Forward,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProductionProjCurrCharacter_DoMove_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProductionProjCurrCharacter_DoMove_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AProductionProjCurrCharacter, nullptr, "DoMove", Z_Construct_UFunction_AProductionProjCurrCharacter_DoMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProductionProjCurrCharacter_DoMove_Statics::PropPointers), sizeof(Z_Construct_UFunction_AProductionProjCurrCharacter_DoMove_Statics::ProductionProjCurrCharacter_eventDoMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProductionProjCurrCharacter_DoMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProductionProjCurrCharacter_DoMove_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AProductionProjCurrCharacter_DoMove_Statics::ProductionProjCurrCharacter_eventDoMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProductionProjCurrCharacter_DoMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProductionProjCurrCharacter_DoMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProductionProjCurrCharacter::execDoMove)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Right);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Forward);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoMove(Z_Param_Right,Z_Param_Forward);
	P_NATIVE_END;
}
// ********** End Class AProductionProjCurrCharacter Function DoMove *******************************

// ********** Begin Class AProductionProjCurrCharacter Function interactCallback *******************
struct Z_Construct_UFunction_AProductionProjCurrCharacter_interactCallback_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "ProductionProjCurrCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProductionProjCurrCharacter_interactCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AProductionProjCurrCharacter, nullptr, "interactCallback", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProductionProjCurrCharacter_interactCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProductionProjCurrCharacter_interactCallback_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AProductionProjCurrCharacter_interactCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProductionProjCurrCharacter_interactCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProductionProjCurrCharacter::execinteractCallback)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->interactCallback();
	P_NATIVE_END;
}
// ********** End Class AProductionProjCurrCharacter Function interactCallback *********************

// ********** Begin Class AProductionProjCurrCharacter Function toggleBuildModeFn ******************
struct Z_Construct_UFunction_AProductionProjCurrCharacter_toggleBuildModeFn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "ProductionProjCurrCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProductionProjCurrCharacter_toggleBuildModeFn_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AProductionProjCurrCharacter, nullptr, "toggleBuildModeFn", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProductionProjCurrCharacter_toggleBuildModeFn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProductionProjCurrCharacter_toggleBuildModeFn_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AProductionProjCurrCharacter_toggleBuildModeFn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProductionProjCurrCharacter_toggleBuildModeFn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProductionProjCurrCharacter::exectoggleBuildModeFn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->toggleBuildModeFn();
	P_NATIVE_END;
}
// ********** End Class AProductionProjCurrCharacter Function toggleBuildModeFn ********************

// ********** Begin Class AProductionProjCurrCharacter Function UsePressed *************************
struct Z_Construct_UFunction_AProductionProjCurrCharacter_UsePressed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "ProductionProjCurrCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProductionProjCurrCharacter_UsePressed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AProductionProjCurrCharacter, nullptr, "UsePressed", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProductionProjCurrCharacter_UsePressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProductionProjCurrCharacter_UsePressed_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AProductionProjCurrCharacter_UsePressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProductionProjCurrCharacter_UsePressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProductionProjCurrCharacter::execUsePressed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UsePressed();
	P_NATIVE_END;
}
// ********** End Class AProductionProjCurrCharacter Function UsePressed ***************************

// ********** Begin Class AProductionProjCurrCharacter *********************************************
void AProductionProjCurrCharacter::StaticRegisterNativesAProductionProjCurrCharacter()
{
	UClass* Class = AProductionProjCurrCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DoMove", &AProductionProjCurrCharacter::execDoMove },
		{ "interactCallback", &AProductionProjCurrCharacter::execinteractCallback },
		{ "toggleBuildModeFn", &AProductionProjCurrCharacter::exectoggleBuildModeFn },
		{ "UsePressed", &AProductionProjCurrCharacter::execUsePressed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AProductionProjCurrCharacter;
UClass* AProductionProjCurrCharacter::GetPrivateStaticClass()
{
	using TClass = AProductionProjCurrCharacter;
	if (!Z_Registration_Info_UClass_AProductionProjCurrCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ProductionProjCurrCharacter"),
			Z_Registration_Info_UClass_AProductionProjCurrCharacter.InnerSingleton,
			StaticRegisterNativesAProductionProjCurrCharacter,
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
	return Z_Registration_Info_UClass_AProductionProjCurrCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AProductionProjCurrCharacter_NoRegister()
{
	return AProductionProjCurrCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AProductionProjCurrCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ProductionProjCurrCharacter.h" },
		{ "ModuleRelativePath", "ProductionProjCurrCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProductionProjCurrCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Follow camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProductionProjCurrCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Follow camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "ProductionProjCurrCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_useAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "ProductionProjCurrCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_interactAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "ProductionProjCurrCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_myWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProductionProjCurrCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_myWidgetClass_MetaData[] = {
		{ "Category", "ProductionProjCurrCharacter" },
		{ "ModuleRelativePath", "ProductionProjCurrCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_useAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_interactAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_myWidget;
	static const UECodeGen_Private::FClassPropertyParams NewProp_myWidgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AProductionProjCurrCharacter_DoMove, "DoMove" }, // 293883639
		{ &Z_Construct_UFunction_AProductionProjCurrCharacter_interactCallback, "interactCallback" }, // 2673671603
		{ &Z_Construct_UFunction_AProductionProjCurrCharacter_toggleBuildModeFn, "toggleBuildModeFn" }, // 3790110106
		{ &Z_Construct_UFunction_AProductionProjCurrCharacter_UsePressed, "UsePressed" }, // 1039340311
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProductionProjCurrCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProductionProjCurrCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProductionProjCurrCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProductionProjCurrCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProductionProjCurrCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProductionProjCurrCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProductionProjCurrCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProductionProjCurrCharacter_Statics::NewProp_useAction = { "useAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProductionProjCurrCharacter, useAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_useAction_MetaData), NewProp_useAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProductionProjCurrCharacter_Statics::NewProp_interactAction = { "interactAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProductionProjCurrCharacter, interactAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_interactAction_MetaData), NewProp_interactAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProductionProjCurrCharacter_Statics::NewProp_myWidget = { "myWidget", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProductionProjCurrCharacter, myWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_myWidget_MetaData), NewProp_myWidget_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AProductionProjCurrCharacter_Statics::NewProp_myWidgetClass = { "myWidgetClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProductionProjCurrCharacter, myWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_myWidgetClass_MetaData), NewProp_myWidgetClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProductionProjCurrCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProductionProjCurrCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProductionProjCurrCharacter_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProductionProjCurrCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProductionProjCurrCharacter_Statics::NewProp_useAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProductionProjCurrCharacter_Statics::NewProp_interactAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProductionProjCurrCharacter_Statics::NewProp_myWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProductionProjCurrCharacter_Statics::NewProp_myWidgetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProductionProjCurrCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AProductionProjCurrCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_ProductionProjCurr,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProductionProjCurrCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AProductionProjCurrCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UtestInterface_NoRegister, (int32)VTABLE_OFFSET(AProductionProjCurrCharacter, ItestInterface), false },  // 1458855180
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProductionProjCurrCharacter_Statics::ClassParams = {
	&AProductionProjCurrCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AProductionProjCurrCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AProductionProjCurrCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008001A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProductionProjCurrCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AProductionProjCurrCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProductionProjCurrCharacter()
{
	if (!Z_Registration_Info_UClass_AProductionProjCurrCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProductionProjCurrCharacter.OuterSingleton, Z_Construct_UClass_AProductionProjCurrCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProductionProjCurrCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProductionProjCurrCharacter);
AProductionProjCurrCharacter::~AProductionProjCurrCharacter() {}
// ********** End Class AProductionProjCurrCharacter ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_linda_Documents_GitHub_Production_Project_2_ProductionProjCurr_Source_ProductionProjCurr_ProductionProjCurrCharacter_h__Script_ProductionProjCurr_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProductionProjCurrCharacter, AProductionProjCurrCharacter::StaticClass, TEXT("AProductionProjCurrCharacter"), &Z_Registration_Info_UClass_AProductionProjCurrCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProductionProjCurrCharacter), 3764916415U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_linda_Documents_GitHub_Production_Project_2_ProductionProjCurr_Source_ProductionProjCurr_ProductionProjCurrCharacter_h__Script_ProductionProjCurr_994800201(TEXT("/Script/ProductionProjCurr"),
	Z_CompiledInDeferFile_FID_Users_linda_Documents_GitHub_Production_Project_2_ProductionProjCurr_Source_ProductionProjCurr_ProductionProjCurrCharacter_h__Script_ProductionProjCurr_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_linda_Documents_GitHub_Production_Project_2_ProductionProjCurr_Source_ProductionProjCurr_ProductionProjCurrCharacter_h__Script_ProductionProjCurr_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
