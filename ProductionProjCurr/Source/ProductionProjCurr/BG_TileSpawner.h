// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BG_Tile.h"
#include "Noise/FastNoiseLite.h"

#include "BG_Token.h"
#include "BG_TileSpawner.generated.h"


UCLASS()
class PRODUCTIONPROJCURR_API ABG_TileSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABG_TileSpawner();

	virtual void BeginPlay() override;

	virtual void OnConstruction(const FTransform& transform) override;

public:	//functions
	// Called every frame
	virtual void Tick(float DeltaTime) override;


public://variables
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Hex | Components")
	USceneComponent* rootScene;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hex | Components")
	UStaticMeshComponent* staticMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hex | Setup")
	float tileWidth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hex | Setup")
	int32 numberOfColumns;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hex | Setup")
	int32 numberOfRows;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hex | Setup")

	float xSpawnOffset;

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
	TSubclassOf<ABG_Tile> ForestTile;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hex | Biomes")
	TSubclassOf<ABG_Tile> MeadowTile;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hex | Biomes")
	TSubclassOf<ABG_Tile> SandyTile;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hex | Biomes")
	TSubclassOf<ABG_Tile> StoneTile;
	//tile child variants


	//token logic
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Hex | Components")
	TSubclassOf<ABG_Token> TokenClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hex | Components")
	bool shouldSpawnTokens;

	UPROPERTY(Transient)
	TArray<AActor*> spawnedTokensArray;

	UPROPERTY(Transient)
	TArray<AActor*> spawnedTilesArray;

	int32 generateRandomTileToSpawnNumber();

	void spawnGrid();
	void clearGrid();

	TSubclassOf<ABG_Tile> generateBiomeTypeBasedOnNoise(int32 rows, int32 cols, FastNoiseLite _Noise);

	void spawnTile(TSubclassOf<ABG_Tile> _ChosenTileClass, FTransform _instanceTransform);
	void spawnToken();


	FRandomStream randomStream;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Hex | Setup")
	float randomNum;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Hex | Setup")
	float noiseFrequency;
};
