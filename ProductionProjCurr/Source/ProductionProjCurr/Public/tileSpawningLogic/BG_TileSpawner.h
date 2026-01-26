// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BG_Tile.h"
#include "Noise/FastNoiseLite.h"
#include "BG_TileSpawner.generated.h"


UENUM(BlueprintType)
enum class EBiomeType : uint8
{
	Water,
	Sandy,
	Grassland,
	Forest,
	Stone,
	Hill,
	Mountain
};

USTRUCT(BlueprintType)
struct FTileVariant
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tile Variant")
	TSubclassOf<ABG_Tile> TileClass = nullptr;

	// Relative weight for roulette selection; 1.0 = equal
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tile Variant", meta = (ClampMin = "0.0"))
	float Weight = 1.0f;
};

USTRUCT(BlueprintType)
struct FBiomeConfig
{
	GENERATED_BODY()

	// Default tile class for this biome (designer sets this; used when no alternate chosen)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Biome")
	TSubclassOf<ABG_Tile> DefaultTile = nullptr;

	// Zero or more alternate variants for this biome
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Biome")
	TArray<FTileVariant> TileVariants;

	// Chance (0..100) to pick a variant instead of the default tile
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Biome", meta = (ClampMin = "0.0", ClampMax = "100.0"))
	float AlternateChance = 0.0f;

};

USTRUCT(BlueprintType)
struct FBiomeEntry
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Biome Entry")
	EBiomeType Biome = EBiomeType::Grassland;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Biome Entry")
	FBiomeConfig Config;
};

UCLASS()
class PRODUCTIONPROJCURR_API ABG_TileSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABG_TileSpawner();

	virtual void BeginPlay() override;


public://variables

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hex | Setup")
	 float tileWidth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hex | Setup")
	int32 numberOfColumns;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hex | Setup")
	int32 numberOfRows;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hex | Setup")
	float xSpawnOffset;

	FRandomStream randomStream;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Hex | Setup")
	float randomNum;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Hex | Setup")
	float noiseFrequency;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Hex | Setup")
	float chanceForStructure;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Hex | Setup")
	float chanceForAlternateTile;

	UPROPERTY(EditAnywhere, Category = "Biome")
	TArray<FBiomeEntry> BiomeConfigs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hex | Biomes")
	TArray<UStaticMeshComponent*> tileMeshArray;

	//tile class 
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Hex | Biomes")
	TSubclassOf<ABG_Tile> TileClass;


	//tile child variants
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hex | Biomes")
	TSubclassOf<ABG_Tile> FarmTile;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hex | Biomes")
	TSubclassOf<ABG_Tile> WaterTile;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hex | Biomes")
	TSubclassOf<ABG_Tile> MountainTile;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hex | Biomes")
	TSubclassOf<ABG_Tile> RockHillTile;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hex | Biomes")
	TSubclassOf<ABG_Tile> ForestTile;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hex | Biomes")
	TSubclassOf<ABG_Tile> MeadowTile;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hex | Biomes")
	TSubclassOf<ABG_Tile> SandyTile;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hex | Biomes")
	TSubclassOf<ABG_Tile> RockyTile;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hex | Biomes")
	TSubclassOf<ABG_Tile> StoneTile;
	//tile child variants

	UPROPERTY(Transient)
	TArray<AActor*> spawnedTilesArray;

	void spawnGrid();
	void clearGrid();

	const FBiomeConfig* GetConfigForBiome(EBiomeType Biome) const; //changed
	bool ShouldSpawnByFraction(float Fraction, FRandomStream* Stream = nullptr) const; // Fraction 0..1 // changed
	TSubclassOf<ABG_Tile> ChooseWeightedTileVariant(const TArray<FTileVariant>& Variants, FRandomStream* Stream = nullptr) const; // changed

	EBiomeType generateBiomeTypeBasedOnNoise(int32 rows, int32 cols, FastNoiseLite _Noise); //changed

	ABG_Tile* spawnTile(TSubclassOf<ABG_Tile> _ChosenTileClass, const FTransform& _instanceTransform);

	bool shouldSpawnAlternateTile(float percentToSpawnAlternateTile);
};
