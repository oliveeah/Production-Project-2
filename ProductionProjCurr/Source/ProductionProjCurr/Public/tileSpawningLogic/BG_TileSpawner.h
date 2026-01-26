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

UCLASS()
class PRODUCTIONPROJCURR_API ABG_TileSpawner : public AActor
{
	GENERATED_BODY()

	ABG_TileSpawner();
	virtual void BeginPlay() override;

public:
	// Grid Setup
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hex | Setup")
	float tileWidth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hex | Setup")
	int32 numberOfColumns;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hex | Setup")
	int32 numberOfRows;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hex | Setup")
	float xSpawnOffset;

	// Noise Settings
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Hex | Setup")
	float noiseFrequency;

	// Tile Classes
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Hex | Biomes")
	TSubclassOf<ABG_Tile> TileClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hex | Biomes")
	TSubclassOf<ABG_Tile> WaterTile;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hex | Biomes")
	TSubclassOf<ABG_Tile> SandyTile;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hex | Biomes")
	TSubclassOf<ABG_Tile> MeadowTile;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hex | Biomes")
	TSubclassOf<ABG_Tile> ForestTile;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hex | Biomes")
	TSubclassOf<ABG_Tile> StoneTile;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hex | Biomes")
	TSubclassOf<ABG_Tile> RockHillTile;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hex | Biomes")
	TSubclassOf<ABG_Tile> MountainTile;

	TArray<TArray<ABG_Tile*>> TileGrid;



	FRandomStream randomStream;

	// Methods
	void spawnGrid(const float& randomNum);
	void clearGrid();

	TSubclassOf<ABG_Tile> GetTileClassForBiome(EBiomeType Biome) const;
	EBiomeType generateBiomeTypeBasedOnNoise(int32 rows, int32 cols, FastNoiseLite _Noise);
	ABG_Tile* spawnTile(TSubclassOf<ABG_Tile> _ChosenTileClass, const FTransform& _instanceTransform);
};