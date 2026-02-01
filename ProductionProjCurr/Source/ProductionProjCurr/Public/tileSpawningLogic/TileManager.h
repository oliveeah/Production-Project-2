// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <vector>
#include "TileManager.generated.h"

// Forward declarations to break circular includes
class ABG_Tile;
class ABG_TileSpawner;
class ATroop;
class AWorldEffectManager;

UENUM(BlueprintType)
enum class EOutlineType : uint8
{
	Standard,
	Adjacency,
	Attack

};

UCLASS()
class PRODUCTIONPROJCURR_API ATileManager : public AActor
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:		
	// Sets default values for this actor's properties
	ATileManager();
	TArray<TArray<ABG_Tile*>> TileGrid;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SetGridWidth(int32 Width) { GridWidth = Width; }
	void SetGridHeight(int32 Height) { GridHeight = Height; }

	int32 GridWidth;
	int32 GridHeight;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	ABG_Tile* SelectedTile;

	FString& GetSelectedTileCoordinates();
	
	UFUNCTION()
	// Called to bind tile delegates
	void OnTileClicked(ABG_Tile* Tile, bool isOccupied);

	// Returns neighbors
	TArray<FIntPoint> GetAdjacentTiles(bool bIncludeDiagonals, int32 adjRange);

	bool HasTile(const FIntPoint& Coords) const;

	UPROPERTY()
	TMap<FIntPoint, ABG_Tile*> TileMap;

	void RegisterTile(const FIntPoint& Coords, ABG_Tile* Tile);

	void spawnTroop(TSubclassOf<ATroop> troopToSpawn, ABG_Tile* Tile);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Troop | Spawning")
	float troopSpawnHeight = 20.0f;

	FLinearColor getOutlineColor(EOutlineType outlineType) const;

	TArray<ABG_Tile*> TilesWithOutline;

};
