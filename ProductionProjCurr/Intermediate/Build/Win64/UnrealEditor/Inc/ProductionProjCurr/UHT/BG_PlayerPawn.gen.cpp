// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BG_PlayerPawn.h"
#include "InputActionValue.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBG_PlayerPawn() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpectatorPawnMovement_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
PRODUCTIONPROJCURR_API UClass* Z_Construct_UClass_ABG_PlayerPawn();
PRODUCTIONPROJCURR_API UClass* Z_Construct_UClass_ABG_PlayerPawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProductionProjCurr();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABG_PlayerPawn Function clickCallback ************************************
struct Z_Construct_UFunction_ABG_PlayerPawn_clickCallback_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "BG_PlayerPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABG_PlayerPawn_clickCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABG_PlayerPawn, nullptr, "clickCallback", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABG_PlayerPawn_clickCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABG_PlayerPawn_clickCallback_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ABG_PlayerPawn_clickCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABG_PlayerPawn_clickCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABG_PlayerPawn::execclickCallback)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->clickCallback();
	P_NATIVE_END;
}
// ********** End Class ABG_PlayerPawn Function clickCallback **************************************

// ********** Begin Class ABG_PlayerPawn Function DoMove *******************************************
struct Z_Construct_UFunction_ABG_PlayerPawn_DoMove_Statics
{
	struct BG_PlayerPawn_eventDoMove_Parms
	{
		float Right;
		float Forward;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "BG_PlayerPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Right;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Forward;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABG_PlayerPawn_DoMove_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BG_PlayerPawn_eventDoMove_Parms, Right), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABG_PlayerPawn_DoMove_Statics::NewProp_Forward = { "Forward", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BG_PlayerPawn_eventDoMove_Parms, Forward), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABG_PlayerPawn_DoMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABG_PlayerPawn_DoMove_Statics::NewProp_Right,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABG_PlayerPawn_DoMove_Statics::NewProp_Forward,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABG_PlayerPawn_DoMove_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABG_PlayerPawn_DoMove_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABG_PlayerPawn, nullptr, "DoMove", Z_Construct_UFunction_ABG_PlayerPawn_DoMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABG_PlayerPawn_DoMove_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABG_PlayerPawn_DoMove_Statics::BG_PlayerPawn_eventDoMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABG_PlayerPawn_DoMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABG_PlayerPawn_DoMove_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABG_PlayerPawn_DoMove_Statics::BG_PlayerPawn_eventDoMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABG_PlayerPawn_DoMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABG_PlayerPawn_DoMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABG_PlayerPawn::execDoMove)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Right);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Forward);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoMove(Z_Param_Right,Z_Param_Forward);
	P_NATIVE_END;
}
// ********** End Class ABG_PlayerPawn Function DoMove *********************************************

// ********** Begin Class ABG_PlayerPawn Function OnBeginMouseOver *********************************
struct Z_Construct_UFunction_ABG_PlayerPawn_OnBeginMouseOver_Statics
{
	struct BG_PlayerPawn_eventOnBeginMouseOver_Parms
	{
		UPrimitiveComponent* TouchedComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BG_PlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TouchedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TouchedComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABG_PlayerPawn_OnBeginMouseOver_Statics::NewProp_TouchedComponent = { "TouchedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BG_PlayerPawn_eventOnBeginMouseOver_Parms, TouchedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TouchedComponent_MetaData), NewProp_TouchedComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABG_PlayerPawn_OnBeginMouseOver_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABG_PlayerPawn_OnBeginMouseOver_Statics::NewProp_TouchedComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABG_PlayerPawn_OnBeginMouseOver_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABG_PlayerPawn_OnBeginMouseOver_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABG_PlayerPawn, nullptr, "OnBeginMouseOver", Z_Construct_UFunction_ABG_PlayerPawn_OnBeginMouseOver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABG_PlayerPawn_OnBeginMouseOver_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABG_PlayerPawn_OnBeginMouseOver_Statics::BG_PlayerPawn_eventOnBeginMouseOver_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABG_PlayerPawn_OnBeginMouseOver_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABG_PlayerPawn_OnBeginMouseOver_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABG_PlayerPawn_OnBeginMouseOver_Statics::BG_PlayerPawn_eventOnBeginMouseOver_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABG_PlayerPawn_OnBeginMouseOver()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABG_PlayerPawn_OnBeginMouseOver_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABG_PlayerPawn::execOnBeginMouseOver)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_TouchedComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBeginMouseOver(Z_Param_TouchedComponent);
	P_NATIVE_END;
}
// ********** End Class ABG_PlayerPawn Function OnBeginMouseOver ***********************************

// ********** Begin Class ABG_PlayerPawn Function OnEndMouseOver ***********************************
struct Z_Construct_UFunction_ABG_PlayerPawn_OnEndMouseOver_Statics
{
	struct BG_PlayerPawn_eventOnEndMouseOver_Parms
	{
		UPrimitiveComponent* TouchedComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BG_PlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TouchedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TouchedComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABG_PlayerPawn_OnEndMouseOver_Statics::NewProp_TouchedComponent = { "TouchedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BG_PlayerPawn_eventOnEndMouseOver_Parms, TouchedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TouchedComponent_MetaData), NewProp_TouchedComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABG_PlayerPawn_OnEndMouseOver_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABG_PlayerPawn_OnEndMouseOver_Statics::NewProp_TouchedComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABG_PlayerPawn_OnEndMouseOver_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABG_PlayerPawn_OnEndMouseOver_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABG_PlayerPawn, nullptr, "OnEndMouseOver", Z_Construct_UFunction_ABG_PlayerPawn_OnEndMouseOver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABG_PlayerPawn_OnEndMouseOver_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABG_PlayerPawn_OnEndMouseOver_Statics::BG_PlayerPawn_eventOnEndMouseOver_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABG_PlayerPawn_OnEndMouseOver_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABG_PlayerPawn_OnEndMouseOver_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABG_PlayerPawn_OnEndMouseOver_Statics::BG_PlayerPawn_eventOnEndMouseOver_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABG_PlayerPawn_OnEndMouseOver()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABG_PlayerPawn_OnEndMouseOver_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABG_PlayerPawn::execOnEndMouseOver)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_TouchedComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEndMouseOver(Z_Param_TouchedComponent);
	P_NATIVE_END;
}
// ********** End Class ABG_PlayerPawn Function OnEndMouseOver *************************************

// ********** Begin Class ABG_PlayerPawn Function scrollCallback ***********************************
struct Z_Construct_UFunction_ABG_PlayerPawn_scrollCallback_Statics
{
	struct BG_PlayerPawn_eventscrollCallback_Parms
	{
		FInputActionValue Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "BG_PlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABG_PlayerPawn_scrollCallback_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BG_PlayerPawn_eventscrollCallback_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 203218767
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABG_PlayerPawn_scrollCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABG_PlayerPawn_scrollCallback_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABG_PlayerPawn_scrollCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABG_PlayerPawn_scrollCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABG_PlayerPawn, nullptr, "scrollCallback", Z_Construct_UFunction_ABG_PlayerPawn_scrollCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABG_PlayerPawn_scrollCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABG_PlayerPawn_scrollCallback_Statics::BG_PlayerPawn_eventscrollCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABG_PlayerPawn_scrollCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABG_PlayerPawn_scrollCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABG_PlayerPawn_scrollCallback_Statics::BG_PlayerPawn_eventscrollCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABG_PlayerPawn_scrollCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABG_PlayerPawn_scrollCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABG_PlayerPawn::execscrollCallback)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->scrollCallback(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class ABG_PlayerPawn Function scrollCallback *************************************

// ********** Begin Class ABG_PlayerPawn ***********************************************************
void ABG_PlayerPawn::StaticRegisterNativesABG_PlayerPawn()
{
	UClass* Class = ABG_PlayerPawn::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "clickCallback", &ABG_PlayerPawn::execclickCallback },
		{ "DoMove", &ABG_PlayerPawn::execDoMove },
		{ "OnBeginMouseOver", &ABG_PlayerPawn::execOnBeginMouseOver },
		{ "OnEndMouseOver", &ABG_PlayerPawn::execOnEndMouseOver },
		{ "scrollCallback", &ABG_PlayerPawn::execscrollCallback },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ABG_PlayerPawn;
UClass* ABG_PlayerPawn::GetPrivateStaticClass()
{
	using TClass = ABG_PlayerPawn;
	if (!Z_Registration_Info_UClass_ABG_PlayerPawn.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BG_PlayerPawn"),
			Z_Registration_Info_UClass_ABG_PlayerPawn.InnerSingleton,
			StaticRegisterNativesABG_PlayerPawn,
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
	return Z_Registration_Info_UClass_ABG_PlayerPawn.InnerSingleton;
}
UClass* Z_Construct_UClass_ABG_PlayerPawn_NoRegister()
{
	return ABG_PlayerPawn::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABG_PlayerPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BG_PlayerPawn.h" },
		{ "ModuleRelativePath", "BG_PlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** components  */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BG_PlayerPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "components" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpectatorMovementComponent_MetaData[] = {
		{ "Category", "Movement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BG_PlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_moveAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//input\n" },
#endif
		{ "ModuleRelativePath", "BG_PlayerPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "input" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_lookAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "BG_PlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_clickAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "BG_PlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_scrollAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "BG_PlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UI_FactionCharacter_MetaData[] = {
		{ "Category", "3D UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UI\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BG_PlayerPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UI" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpectatorMovementComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_moveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_lookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_clickAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_scrollAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UI_FactionCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABG_PlayerPawn_clickCallback, "clickCallback" }, // 3740202444
		{ &Z_Construct_UFunction_ABG_PlayerPawn_DoMove, "DoMove" }, // 1853087355
		{ &Z_Construct_UFunction_ABG_PlayerPawn_OnBeginMouseOver, "OnBeginMouseOver" }, // 590078714
		{ &Z_Construct_UFunction_ABG_PlayerPawn_OnEndMouseOver, "OnEndMouseOver" }, // 306840309
		{ &Z_Construct_UFunction_ABG_PlayerPawn_scrollCallback, "scrollCallback" }, // 1446023604
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABG_PlayerPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABG_PlayerPawn_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABG_PlayerPawn, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABG_PlayerPawn_Statics::NewProp_SpectatorMovementComponent = { "SpectatorMovementComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABG_PlayerPawn, SpectatorMovementComponent), Z_Construct_UClass_USpectatorPawnMovement_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpectatorMovementComponent_MetaData), NewProp_SpectatorMovementComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABG_PlayerPawn_Statics::NewProp_moveAction = { "moveAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABG_PlayerPawn, moveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_moveAction_MetaData), NewProp_moveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABG_PlayerPawn_Statics::NewProp_lookAction = { "lookAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABG_PlayerPawn, lookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_lookAction_MetaData), NewProp_lookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABG_PlayerPawn_Statics::NewProp_clickAction = { "clickAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABG_PlayerPawn, clickAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_clickAction_MetaData), NewProp_clickAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABG_PlayerPawn_Statics::NewProp_scrollAction = { "scrollAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABG_PlayerPawn, scrollAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_scrollAction_MetaData), NewProp_scrollAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABG_PlayerPawn_Statics::NewProp_UI_FactionCharacter = { "UI_FactionCharacter", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABG_PlayerPawn, UI_FactionCharacter), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UI_FactionCharacter_MetaData), NewProp_UI_FactionCharacter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABG_PlayerPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABG_PlayerPawn_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABG_PlayerPawn_Statics::NewProp_SpectatorMovementComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABG_PlayerPawn_Statics::NewProp_moveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABG_PlayerPawn_Statics::NewProp_lookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABG_PlayerPawn_Statics::NewProp_clickAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABG_PlayerPawn_Statics::NewProp_scrollAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABG_PlayerPawn_Statics::NewProp_UI_FactionCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABG_PlayerPawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABG_PlayerPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_ProductionProjCurr,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABG_PlayerPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABG_PlayerPawn_Statics::ClassParams = {
	&ABG_PlayerPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABG_PlayerPawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABG_PlayerPawn_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABG_PlayerPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ABG_PlayerPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABG_PlayerPawn()
{
	if (!Z_Registration_Info_UClass_ABG_PlayerPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABG_PlayerPawn.OuterSingleton, Z_Construct_UClass_ABG_PlayerPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABG_PlayerPawn.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABG_PlayerPawn);
ABG_PlayerPawn::~ABG_PlayerPawn() {}
// ********** End Class ABG_PlayerPawn *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_linda_Documents_GitHub_Production_Project_2_ProductionProjCurr_Source_ProductionProjCurr_BG_PlayerPawn_h__Script_ProductionProjCurr_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABG_PlayerPawn, ABG_PlayerPawn::StaticClass, TEXT("ABG_PlayerPawn"), &Z_Registration_Info_UClass_ABG_PlayerPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABG_PlayerPawn), 3496459375U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_linda_Documents_GitHub_Production_Project_2_ProductionProjCurr_Source_ProductionProjCurr_BG_PlayerPawn_h__Script_ProductionProjCurr_2165647803(TEXT("/Script/ProductionProjCurr"),
	Z_CompiledInDeferFile_FID_Users_linda_Documents_GitHub_Production_Project_2_ProductionProjCurr_Source_ProductionProjCurr_BG_PlayerPawn_h__Script_ProductionProjCurr_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_linda_Documents_GitHub_Production_Project_2_ProductionProjCurr_Source_ProductionProjCurr_BG_PlayerPawn_h__Script_ProductionProjCurr_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
