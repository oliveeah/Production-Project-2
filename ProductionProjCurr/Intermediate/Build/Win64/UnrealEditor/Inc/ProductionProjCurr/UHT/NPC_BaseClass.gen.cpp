// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NPC_BaseClass.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeNPC_BaseClass() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
PRODUCTIONPROJCURR_API UClass* Z_Construct_UClass_ANPC_BaseClass();
PRODUCTIONPROJCURR_API UClass* Z_Construct_UClass_ANPC_BaseClass_NoRegister();
PRODUCTIONPROJCURR_API UClass* Z_Construct_UClass_UtestInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProductionProjCurr();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ANPC_BaseClass ***********************************************************
void ANPC_BaseClass::StaticRegisterNativesANPC_BaseClass()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ANPC_BaseClass;
UClass* ANPC_BaseClass::GetPrivateStaticClass()
{
	using TClass = ANPC_BaseClass;
	if (!Z_Registration_Info_UClass_ANPC_BaseClass.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("NPC_BaseClass"),
			Z_Registration_Info_UClass_ANPC_BaseClass.InnerSingleton,
			StaticRegisterNativesANPC_BaseClass,
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
	return Z_Registration_Info_UClass_ANPC_BaseClass.InnerSingleton;
}
UClass* Z_Construct_UClass_ANPC_BaseClass_NoRegister()
{
	return ANPC_BaseClass::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ANPC_BaseClass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "NPC_BaseClass.h" },
		{ "ModuleRelativePath", "NPC_BaseClass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_sceneRoot_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NPC_BaseClass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_staticMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NPC_BaseClass.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_sceneRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_staticMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANPC_BaseClass>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANPC_BaseClass_Statics::NewProp_sceneRoot = { "sceneRoot", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANPC_BaseClass, sceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_sceneRoot_MetaData), NewProp_sceneRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANPC_BaseClass_Statics::NewProp_staticMesh = { "staticMesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANPC_BaseClass, staticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_staticMesh_MetaData), NewProp_staticMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANPC_BaseClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPC_BaseClass_Statics::NewProp_sceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPC_BaseClass_Statics::NewProp_staticMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_BaseClass_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANPC_BaseClass_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ProductionProjCurr,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_BaseClass_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANPC_BaseClass_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UtestInterface_NoRegister, (int32)VTABLE_OFFSET(ANPC_BaseClass, ItestInterface), false },  // 1458855180
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANPC_BaseClass_Statics::ClassParams = {
	&ANPC_BaseClass::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ANPC_BaseClass_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_BaseClass_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_BaseClass_Statics::Class_MetaDataParams), Z_Construct_UClass_ANPC_BaseClass_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANPC_BaseClass()
{
	if (!Z_Registration_Info_UClass_ANPC_BaseClass.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANPC_BaseClass.OuterSingleton, Z_Construct_UClass_ANPC_BaseClass_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANPC_BaseClass.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANPC_BaseClass);
ANPC_BaseClass::~ANPC_BaseClass() {}
// ********** End Class ANPC_BaseClass *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_linda_Documents_GitHub_Production_Project_2_ProductionProjCurr_Source_ProductionProjCurr_NPC_BaseClass_h__Script_ProductionProjCurr_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANPC_BaseClass, ANPC_BaseClass::StaticClass, TEXT("ANPC_BaseClass"), &Z_Registration_Info_UClass_ANPC_BaseClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANPC_BaseClass), 3822250747U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_linda_Documents_GitHub_Production_Project_2_ProductionProjCurr_Source_ProductionProjCurr_NPC_BaseClass_h__Script_ProductionProjCurr_3450701969(TEXT("/Script/ProductionProjCurr"),
	Z_CompiledInDeferFile_FID_Users_linda_Documents_GitHub_Production_Project_2_ProductionProjCurr_Source_ProductionProjCurr_NPC_BaseClass_h__Script_ProductionProjCurr_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_linda_Documents_GitHub_Production_Project_2_ProductionProjCurr_Source_ProductionProjCurr_NPC_BaseClass_h__Script_ProductionProjCurr_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
