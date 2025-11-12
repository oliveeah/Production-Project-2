// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "testInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodetestInterface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
PRODUCTIONPROJCURR_API UClass* Z_Construct_UClass_UtestInterface();
PRODUCTIONPROJCURR_API UClass* Z_Construct_UClass_UtestInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProductionProjCurr();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UtestInterface Function Interact *************************************
void ItestInterface::Interact()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Interact instead.");
}
static FName NAME_UtestInterface_Interact = FName(TEXT("Interact"));
void ItestInterface::Execute_Interact(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UtestInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UtestInterface_Interact);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (ItestInterface*)(O->GetNativeInterfaceAddress(UtestInterface::StaticClass())))
	{
		I->Interact_Implementation();
	}
}
struct Z_Construct_UFunction_UtestInterface_Interact_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "testInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UtestInterface_Interact_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UtestInterface, nullptr, "Interact", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UtestInterface_Interact_Statics::Function_MetaDataParams), Z_Construct_UFunction_UtestInterface_Interact_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UtestInterface_Interact()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UtestInterface_Interact_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ItestInterface::execInteract)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Interact_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UtestInterface Function Interact ***************************************

// ********** Begin Interface UtestInterface *******************************************************
void UtestInterface::StaticRegisterNativesUtestInterface()
{
	UClass* Class = UtestInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Interact", &ItestInterface::execInteract },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UtestInterface;
UClass* UtestInterface::GetPrivateStaticClass()
{
	using TClass = UtestInterface;
	if (!Z_Registration_Info_UClass_UtestInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("testInterface"),
			Z_Registration_Info_UClass_UtestInterface.InnerSingleton,
			StaticRegisterNativesUtestInterface,
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
	return Z_Registration_Info_UClass_UtestInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UtestInterface_NoRegister()
{
	return UtestInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UtestInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "testInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UtestInterface_Interact, "Interact" }, // 4171248999
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ItestInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UtestInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ProductionProjCurr,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UtestInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UtestInterface_Statics::ClassParams = {
	&UtestInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UtestInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UtestInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UtestInterface()
{
	if (!Z_Registration_Info_UClass_UtestInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UtestInterface.OuterSingleton, Z_Construct_UClass_UtestInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UtestInterface.OuterSingleton;
}
UtestInterface::UtestInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UtestInterface);
// ********** End Interface UtestInterface *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_linda_Documents_GitHub_Production_Project_2_ProductionProjCurr_Source_ProductionProjCurr_testInterface_h__Script_ProductionProjCurr_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UtestInterface, UtestInterface::StaticClass, TEXT("UtestInterface"), &Z_Registration_Info_UClass_UtestInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UtestInterface), 1458855180U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_linda_Documents_GitHub_Production_Project_2_ProductionProjCurr_Source_ProductionProjCurr_testInterface_h__Script_ProductionProjCurr_1641588763(TEXT("/Script/ProductionProjCurr"),
	Z_CompiledInDeferFile_FID_Users_linda_Documents_GitHub_Production_Project_2_ProductionProjCurr_Source_ProductionProjCurr_testInterface_h__Script_ProductionProjCurr_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_linda_Documents_GitHub_Production_Project_2_ProductionProjCurr_Source_ProductionProjCurr_testInterface_h__Script_ProductionProjCurr_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
