// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BG_TileSpawner.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBG_TileSpawner() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
PRODUCTIONPROJCURR_API UClass* Z_Construct_UClass_ABG_Tile_NoRegister();
PRODUCTIONPROJCURR_API UClass* Z_Construct_UClass_ABG_TileSpawner();
PRODUCTIONPROJCURR_API UClass* Z_Construct_UClass_ABG_TileSpawner_NoRegister();
PRODUCTIONPROJCURR_API UClass* Z_Construct_UClass_ABG_Token_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProductionProjCurr();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABG_TileSpawner **********************************************************
void ABG_TileSpawner::StaticRegisterNativesABG_TileSpawner()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ABG_TileSpawner;
UClass* ABG_TileSpawner::GetPrivateStaticClass()
{
	using TClass = ABG_TileSpawner;
	if (!Z_Registration_Info_UClass_ABG_TileSpawner.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BG_TileSpawner"),
			Z_Registration_Info_UClass_ABG_TileSpawner.InnerSingleton,
			StaticRegisterNativesABG_TileSpawner,
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
	return Z_Registration_Info_UClass_ABG_TileSpawner.InnerSingleton;
}
UClass* Z_Construct_UClass_ABG_TileSpawner_NoRegister()
{
	return ABG_TileSpawner::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABG_TileSpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BG_TileSpawner.h" },
		{ "ModuleRelativePath", "BG_TileSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rootScene_MetaData[] = {
		{ "Category", "Hex | Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//variables\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BG_TileSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "variables" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_staticMesh_MetaData[] = {
		{ "Category", "Hex | Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BG_TileSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_tileWidth_MetaData[] = {
		{ "Category", "Hex | Setup" },
		{ "ModuleRelativePath", "BG_TileSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_numberOfColumns_MetaData[] = {
		{ "Category", "Hex | Setup" },
		{ "ModuleRelativePath", "BG_TileSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_numberOfRows_MetaData[] = {
		{ "Category", "Hex | Setup" },
		{ "ModuleRelativePath", "BG_TileSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_xSpawnOffset_MetaData[] = {
		{ "Category", "Hex | Setup" },
		{ "ModuleRelativePath", "BG_TileSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileClass_MetaData[] = {
		{ "Category", "Hex | Biomes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//tile class \n" },
#endif
		{ "ModuleRelativePath", "BG_TileSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "tile class" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FarmTile_MetaData[] = {
		{ "Category", "Hex | Biomes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//tile child variants\n" },
#endif
		{ "ModuleRelativePath", "BG_TileSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "tile child variants" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaterTile_MetaData[] = {
		{ "Category", "Hex | Biomes" },
		{ "ModuleRelativePath", "BG_TileSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MountainTile_MetaData[] = {
		{ "Category", "Hex | Biomes" },
		{ "ModuleRelativePath", "BG_TileSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RockHillTile_MetaData[] = {
		{ "Category", "Hex | Biomes" },
		{ "ModuleRelativePath", "BG_TileSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForestTile_MetaData[] = {
		{ "Category", "Hex | Biomes" },
		{ "ModuleRelativePath", "BG_TileSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeadowTile_MetaData[] = {
		{ "Category", "Hex | Biomes" },
		{ "ModuleRelativePath", "BG_TileSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SandyTile_MetaData[] = {
		{ "Category", "Hex | Biomes" },
		{ "ModuleRelativePath", "BG_TileSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RockyTile_MetaData[] = {
		{ "Category", "Hex | Biomes" },
		{ "ModuleRelativePath", "BG_TileSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StoneTile_MetaData[] = {
		{ "Category", "Hex | Biomes" },
		{ "ModuleRelativePath", "BG_TileSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TokenClass_MetaData[] = {
		{ "Category", "Hex | Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//token logic\n" },
#endif
		{ "ModuleRelativePath", "BG_TileSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "token logic" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_shouldSpawnTokens_MetaData[] = {
		{ "Category", "Hex | Components" },
		{ "ModuleRelativePath", "BG_TileSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_spawnedTokensArray_MetaData[] = {
		{ "ModuleRelativePath", "BG_TileSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_spawnedTilesArray_MetaData[] = {
		{ "ModuleRelativePath", "BG_TileSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_randomNum_MetaData[] = {
		{ "Category", "Hex | Setup" },
		{ "ModuleRelativePath", "BG_TileSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_noiseFrequency_MetaData[] = {
		{ "Category", "Hex | Setup" },
		{ "ModuleRelativePath", "BG_TileSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_chanceForStructure_MetaData[] = {
		{ "Category", "Hex | Setup" },
		{ "ModuleRelativePath", "BG_TileSpawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_rootScene;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_staticMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_tileWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_numberOfColumns;
	static const UECodeGen_Private::FIntPropertyParams NewProp_numberOfRows;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_xSpawnOffset;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TileClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_FarmTile;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WaterTile;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MountainTile;
	static const UECodeGen_Private::FClassPropertyParams NewProp_RockHillTile;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ForestTile;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MeadowTile;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SandyTile;
	static const UECodeGen_Private::FClassPropertyParams NewProp_RockyTile;
	static const UECodeGen_Private::FClassPropertyParams NewProp_StoneTile;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TokenClass;
	static void NewProp_shouldSpawnTokens_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_shouldSpawnTokens;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_spawnedTokensArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_spawnedTokensArray;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_spawnedTilesArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_spawnedTilesArray;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_randomNum;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_noiseFrequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_chanceForStructure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABG_TileSpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABG_TileSpawner_Statics::NewProp_rootScene = { "rootScene", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABG_TileSpawner, rootScene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rootScene_MetaData), NewProp_rootScene_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABG_TileSpawner_Statics::NewProp_staticMesh = { "staticMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABG_TileSpawner, staticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_staticMesh_MetaData), NewProp_staticMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABG_TileSpawner_Statics::NewProp_tileWidth = { "tileWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABG_TileSpawner, tileWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_tileWidth_MetaData), NewProp_tileWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABG_TileSpawner_Statics::NewProp_numberOfColumns = { "numberOfColumns", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABG_TileSpawner, numberOfColumns), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_numberOfColumns_MetaData), NewProp_numberOfColumns_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABG_TileSpawner_Statics::NewProp_numberOfRows = { "numberOfRows", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABG_TileSpawner, numberOfRows), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_numberOfRows_MetaData), NewProp_numberOfRows_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABG_TileSpawner_Statics::NewProp_xSpawnOffset = { "xSpawnOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABG_TileSpawner, xSpawnOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_xSpawnOffset_MetaData), NewProp_xSpawnOffset_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABG_TileSpawner_Statics::NewProp_TileClass = { "TileClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABG_TileSpawner, TileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ABG_Tile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileClass_MetaData), NewProp_TileClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABG_TileSpawner_Statics::NewProp_FarmTile = { "FarmTile", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABG_TileSpawner, FarmTile), Z_Construct_UClass_UClass, Z_Construct_UClass_ABG_Tile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FarmTile_MetaData), NewProp_FarmTile_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABG_TileSpawner_Statics::NewProp_WaterTile = { "WaterTile", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABG_TileSpawner, WaterTile), Z_Construct_UClass_UClass, Z_Construct_UClass_ABG_Tile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaterTile_MetaData), NewProp_WaterTile_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABG_TileSpawner_Statics::NewProp_MountainTile = { "MountainTile", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABG_TileSpawner, MountainTile), Z_Construct_UClass_UClass, Z_Construct_UClass_ABG_Tile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MountainTile_MetaData), NewProp_MountainTile_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABG_TileSpawner_Statics::NewProp_RockHillTile = { "RockHillTile", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABG_TileSpawner, RockHillTile), Z_Construct_UClass_UClass, Z_Construct_UClass_ABG_Tile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RockHillTile_MetaData), NewProp_RockHillTile_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABG_TileSpawner_Statics::NewProp_ForestTile = { "ForestTile", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABG_TileSpawner, ForestTile), Z_Construct_UClass_UClass, Z_Construct_UClass_ABG_Tile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForestTile_MetaData), NewProp_ForestTile_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABG_TileSpawner_Statics::NewProp_MeadowTile = { "MeadowTile", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABG_TileSpawner, MeadowTile), Z_Construct_UClass_UClass, Z_Construct_UClass_ABG_Tile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeadowTile_MetaData), NewProp_MeadowTile_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABG_TileSpawner_Statics::NewProp_SandyTile = { "SandyTile", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABG_TileSpawner, SandyTile), Z_Construct_UClass_UClass, Z_Construct_UClass_ABG_Tile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SandyTile_MetaData), NewProp_SandyTile_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABG_TileSpawner_Statics::NewProp_RockyTile = { "RockyTile", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABG_TileSpawner, RockyTile), Z_Construct_UClass_UClass, Z_Construct_UClass_ABG_Tile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RockyTile_MetaData), NewProp_RockyTile_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABG_TileSpawner_Statics::NewProp_StoneTile = { "StoneTile", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABG_TileSpawner, StoneTile), Z_Construct_UClass_UClass, Z_Construct_UClass_ABG_Tile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StoneTile_MetaData), NewProp_StoneTile_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABG_TileSpawner_Statics::NewProp_TokenClass = { "TokenClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABG_TileSpawner, TokenClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ABG_Token_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TokenClass_MetaData), NewProp_TokenClass_MetaData) };
void Z_Construct_UClass_ABG_TileSpawner_Statics::NewProp_shouldSpawnTokens_SetBit(void* Obj)
{
	((ABG_TileSpawner*)Obj)->shouldSpawnTokens = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABG_TileSpawner_Statics::NewProp_shouldSpawnTokens = { "shouldSpawnTokens", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABG_TileSpawner), &Z_Construct_UClass_ABG_TileSpawner_Statics::NewProp_shouldSpawnTokens_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_shouldSpawnTokens_MetaData), NewProp_shouldSpawnTokens_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABG_TileSpawner_Statics::NewProp_spawnedTokensArray_Inner = { "spawnedTokensArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABG_TileSpawner_Statics::NewProp_spawnedTokensArray = { "spawnedTokensArray", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABG_TileSpawner, spawnedTokensArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_spawnedTokensArray_MetaData), NewProp_spawnedTokensArray_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABG_TileSpawner_Statics::NewProp_spawnedTilesArray_Inner = { "spawnedTilesArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABG_TileSpawner_Statics::NewProp_spawnedTilesArray = { "spawnedTilesArray", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABG_TileSpawner, spawnedTilesArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_spawnedTilesArray_MetaData), NewProp_spawnedTilesArray_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABG_TileSpawner_Statics::NewProp_randomNum = { "randomNum", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABG_TileSpawner, randomNum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_randomNum_MetaData), NewProp_randomNum_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABG_TileSpawner_Statics::NewProp_noiseFrequency = { "noiseFrequency", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABG_TileSpawner, noiseFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_noiseFrequency_MetaData), NewProp_noiseFrequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABG_TileSpawner_Statics::NewProp_chanceForStructure = { "chanceForStructure", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABG_TileSpawner, chanceForStructure), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_chanceForStructure_MetaData), NewProp_chanceForStructure_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABG_TileSpawner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABG_TileSpawner_Statics::NewProp_rootScene,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABG_TileSpawner_Statics::NewProp_staticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABG_TileSpawner_Statics::NewProp_tileWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABG_TileSpawner_Statics::NewProp_numberOfColumns,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABG_TileSpawner_Statics::NewProp_numberOfRows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABG_TileSpawner_Statics::NewProp_xSpawnOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABG_TileSpawner_Statics::NewProp_TileClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABG_TileSpawner_Statics::NewProp_FarmTile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABG_TileSpawner_Statics::NewProp_WaterTile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABG_TileSpawner_Statics::NewProp_MountainTile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABG_TileSpawner_Statics::NewProp_RockHillTile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABG_TileSpawner_Statics::NewProp_ForestTile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABG_TileSpawner_Statics::NewProp_MeadowTile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABG_TileSpawner_Statics::NewProp_SandyTile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABG_TileSpawner_Statics::NewProp_RockyTile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABG_TileSpawner_Statics::NewProp_StoneTile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABG_TileSpawner_Statics::NewProp_TokenClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABG_TileSpawner_Statics::NewProp_shouldSpawnTokens,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABG_TileSpawner_Statics::NewProp_spawnedTokensArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABG_TileSpawner_Statics::NewProp_spawnedTokensArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABG_TileSpawner_Statics::NewProp_spawnedTilesArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABG_TileSpawner_Statics::NewProp_spawnedTilesArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABG_TileSpawner_Statics::NewProp_randomNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABG_TileSpawner_Statics::NewProp_noiseFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABG_TileSpawner_Statics::NewProp_chanceForStructure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABG_TileSpawner_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABG_TileSpawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ProductionProjCurr,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABG_TileSpawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABG_TileSpawner_Statics::ClassParams = {
	&ABG_TileSpawner::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABG_TileSpawner_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABG_TileSpawner_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABG_TileSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_ABG_TileSpawner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABG_TileSpawner()
{
	if (!Z_Registration_Info_UClass_ABG_TileSpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABG_TileSpawner.OuterSingleton, Z_Construct_UClass_ABG_TileSpawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABG_TileSpawner.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABG_TileSpawner);
ABG_TileSpawner::~ABG_TileSpawner() {}
// ********** End Class ABG_TileSpawner ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_linda_Documents_GitHub_Production_Project_2_ProductionProjCurr_Source_ProductionProjCurr_BG_TileSpawner_h__Script_ProductionProjCurr_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABG_TileSpawner, ABG_TileSpawner::StaticClass, TEXT("ABG_TileSpawner"), &Z_Registration_Info_UClass_ABG_TileSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABG_TileSpawner), 3223064431U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_linda_Documents_GitHub_Production_Project_2_ProductionProjCurr_Source_ProductionProjCurr_BG_TileSpawner_h__Script_ProductionProjCurr_1721980976(TEXT("/Script/ProductionProjCurr"),
	Z_CompiledInDeferFile_FID_Users_linda_Documents_GitHub_Production_Project_2_ProductionProjCurr_Source_ProductionProjCurr_BG_TileSpawner_h__Script_ProductionProjCurr_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_linda_Documents_GitHub_Production_Project_2_ProductionProjCurr_Source_ProductionProjCurr_BG_TileSpawner_h__Script_ProductionProjCurr_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
