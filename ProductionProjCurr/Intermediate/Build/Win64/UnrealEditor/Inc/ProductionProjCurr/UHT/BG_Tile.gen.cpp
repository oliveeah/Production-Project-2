// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BG_Tile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBG_Tile() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
PRODUCTIONPROJCURR_API UClass* Z_Construct_UClass_ABG_Tile();
PRODUCTIONPROJCURR_API UClass* Z_Construct_UClass_ABG_Tile_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProductionProjCurr();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABG_Tile *****************************************************************
void ABG_Tile::StaticRegisterNativesABG_Tile()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ABG_Tile;
UClass* ABG_Tile::GetPrivateStaticClass()
{
	using TClass = ABG_Tile;
	if (!Z_Registration_Info_UClass_ABG_Tile.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BG_Tile"),
			Z_Registration_Info_UClass_ABG_Tile.InnerSingleton,
			StaticRegisterNativesABG_Tile,
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
	return Z_Registration_Info_UClass_ABG_Tile.InnerSingleton;
}
UClass* Z_Construct_UClass_ABG_Tile_NoRegister()
{
	return ABG_Tile::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABG_Tile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BG_Tile.h" },
		{ "ModuleRelativePath", "BG_Tile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_staticMesh_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//variables\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BG_Tile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "variables" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_staticMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABG_Tile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABG_Tile_Statics::NewProp_staticMesh = { "staticMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABG_Tile, staticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_staticMesh_MetaData), NewProp_staticMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABG_Tile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABG_Tile_Statics::NewProp_staticMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABG_Tile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABG_Tile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ProductionProjCurr,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABG_Tile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABG_Tile_Statics::ClassParams = {
	&ABG_Tile::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABG_Tile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABG_Tile_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABG_Tile_Statics::Class_MetaDataParams), Z_Construct_UClass_ABG_Tile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABG_Tile()
{
	if (!Z_Registration_Info_UClass_ABG_Tile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABG_Tile.OuterSingleton, Z_Construct_UClass_ABG_Tile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABG_Tile.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABG_Tile);
ABG_Tile::~ABG_Tile() {}
// ********** End Class ABG_Tile *******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_linda_Documents_GitHub_Production_Project_2_ProductionProjCurr_Source_ProductionProjCurr_BG_Tile_h__Script_ProductionProjCurr_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABG_Tile, ABG_Tile::StaticClass, TEXT("ABG_Tile"), &Z_Registration_Info_UClass_ABG_Tile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABG_Tile), 2986168120U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_linda_Documents_GitHub_Production_Project_2_ProductionProjCurr_Source_ProductionProjCurr_BG_Tile_h__Script_ProductionProjCurr_3691492536(TEXT("/Script/ProductionProjCurr"),
	Z_CompiledInDeferFile_FID_Users_linda_Documents_GitHub_Production_Project_2_ProductionProjCurr_Source_ProductionProjCurr_BG_Tile_h__Script_ProductionProjCurr_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_linda_Documents_GitHub_Production_Project_2_ProductionProjCurr_Source_ProductionProjCurr_BG_Tile_h__Script_ProductionProjCurr_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
