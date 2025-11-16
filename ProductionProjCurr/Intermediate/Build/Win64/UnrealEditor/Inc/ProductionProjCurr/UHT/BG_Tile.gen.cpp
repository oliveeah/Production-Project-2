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
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
PRODUCTIONPROJCURR_API UClass* Z_Construct_UClass_ABG_Tile();
PRODUCTIONPROJCURR_API UClass* Z_Construct_UClass_ABG_Tile_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProductionProjCurr();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABG_Tile Function OnBeginMouseOverTile ***********************************
struct Z_Construct_UFunction_ABG_Tile_OnBeginMouseOverTile_Statics
{
	struct BG_Tile_eventOnBeginMouseOverTile_Parms
	{
		UPrimitiveComponent* TouchedComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BG_Tile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TouchedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TouchedComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABG_Tile_OnBeginMouseOverTile_Statics::NewProp_TouchedComponent = { "TouchedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BG_Tile_eventOnBeginMouseOverTile_Parms, TouchedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TouchedComponent_MetaData), NewProp_TouchedComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABG_Tile_OnBeginMouseOverTile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABG_Tile_OnBeginMouseOverTile_Statics::NewProp_TouchedComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABG_Tile_OnBeginMouseOverTile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABG_Tile_OnBeginMouseOverTile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABG_Tile, nullptr, "OnBeginMouseOverTile", Z_Construct_UFunction_ABG_Tile_OnBeginMouseOverTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABG_Tile_OnBeginMouseOverTile_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABG_Tile_OnBeginMouseOverTile_Statics::BG_Tile_eventOnBeginMouseOverTile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABG_Tile_OnBeginMouseOverTile_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABG_Tile_OnBeginMouseOverTile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABG_Tile_OnBeginMouseOverTile_Statics::BG_Tile_eventOnBeginMouseOverTile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABG_Tile_OnBeginMouseOverTile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABG_Tile_OnBeginMouseOverTile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABG_Tile::execOnBeginMouseOverTile)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_TouchedComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBeginMouseOverTile(Z_Param_TouchedComponent);
	P_NATIVE_END;
}
// ********** End Class ABG_Tile Function OnBeginMouseOverTile *************************************

// ********** Begin Class ABG_Tile Function OnEndMouseOverTile *************************************
struct Z_Construct_UFunction_ABG_Tile_OnEndMouseOverTile_Statics
{
	struct BG_Tile_eventOnEndMouseOverTile_Parms
	{
		UPrimitiveComponent* TouchedComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BG_Tile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TouchedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TouchedComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABG_Tile_OnEndMouseOverTile_Statics::NewProp_TouchedComponent = { "TouchedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BG_Tile_eventOnEndMouseOverTile_Parms, TouchedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TouchedComponent_MetaData), NewProp_TouchedComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABG_Tile_OnEndMouseOverTile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABG_Tile_OnEndMouseOverTile_Statics::NewProp_TouchedComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABG_Tile_OnEndMouseOverTile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABG_Tile_OnEndMouseOverTile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABG_Tile, nullptr, "OnEndMouseOverTile", Z_Construct_UFunction_ABG_Tile_OnEndMouseOverTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABG_Tile_OnEndMouseOverTile_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABG_Tile_OnEndMouseOverTile_Statics::BG_Tile_eventOnEndMouseOverTile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABG_Tile_OnEndMouseOverTile_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABG_Tile_OnEndMouseOverTile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABG_Tile_OnEndMouseOverTile_Statics::BG_Tile_eventOnEndMouseOverTile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABG_Tile_OnEndMouseOverTile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABG_Tile_OnEndMouseOverTile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABG_Tile::execOnEndMouseOverTile)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_TouchedComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEndMouseOverTile(Z_Param_TouchedComponent);
	P_NATIVE_END;
}
// ********** End Class ABG_Tile Function OnEndMouseOverTile ***************************************

// ********** Begin Class ABG_Tile *****************************************************************
void ABG_Tile::StaticRegisterNativesABG_Tile()
{
	UClass* Class = ABG_Tile::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnBeginMouseOverTile", &ABG_Tile::execOnBeginMouseOverTile },
		{ "OnEndMouseOverTile", &ABG_Tile::execOnEndMouseOverTile },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_tileMesh_MetaData[] = {
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_tileEdgeMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BG_Tile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MAT_Array_MetaData[] = {
		{ "Category", "Components" },
		{ "ModuleRelativePath", "BG_Tile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_tileMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_tileEdgeMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MAT_Array_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MAT_Array;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABG_Tile_OnBeginMouseOverTile, "OnBeginMouseOverTile" }, // 1499540828
		{ &Z_Construct_UFunction_ABG_Tile_OnEndMouseOverTile, "OnEndMouseOverTile" }, // 410851823
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABG_Tile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABG_Tile_Statics::NewProp_tileMesh = { "tileMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABG_Tile, tileMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_tileMesh_MetaData), NewProp_tileMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABG_Tile_Statics::NewProp_tileEdgeMesh = { "tileEdgeMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABG_Tile, tileEdgeMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_tileEdgeMesh_MetaData), NewProp_tileEdgeMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABG_Tile_Statics::NewProp_MAT_Array_Inner = { "MAT_Array", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABG_Tile_Statics::NewProp_MAT_Array = { "MAT_Array", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABG_Tile, MAT_Array), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MAT_Array_MetaData), NewProp_MAT_Array_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABG_Tile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABG_Tile_Statics::NewProp_tileMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABG_Tile_Statics::NewProp_tileEdgeMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABG_Tile_Statics::NewProp_MAT_Array_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABG_Tile_Statics::NewProp_MAT_Array,
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
	FuncInfo,
	Z_Construct_UClass_ABG_Tile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_ABG_Tile, ABG_Tile::StaticClass, TEXT("ABG_Tile"), &Z_Registration_Info_UClass_ABG_Tile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABG_Tile), 3156720865U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_linda_Documents_GitHub_Production_Project_2_ProductionProjCurr_Source_ProductionProjCurr_BG_Tile_h__Script_ProductionProjCurr_161668475(TEXT("/Script/ProductionProjCurr"),
	Z_CompiledInDeferFile_FID_Users_linda_Documents_GitHub_Production_Project_2_ProductionProjCurr_Source_ProductionProjCurr_BG_Tile_h__Script_ProductionProjCurr_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_linda_Documents_GitHub_Production_Project_2_ProductionProjCurr_Source_ProductionProjCurr_BG_Tile_h__Script_ProductionProjCurr_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
