// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "tileSpawningLogic/TileHighlightState.h"
#include "gameMode/Enum_PlayerSide.h"
#include "gameMode/TurnManager.h"
#include "TileManager.generated.h"

// Forward declarations to break circular includes
class ABG_Tile;
class ABG_TileSpawner;
class AOccupant_BaseClass;

UENUM(BlueprintType)
enum class EPlayerIntent : uint8
{
	SelectTile,
	MoveTroop,
	AttackTroop,
	ReselectTile,
	Cancel
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



	int32 GridWidth;
	int32 GridHeight;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	ABG_Tile* SelectedTile;

	
	UFUNCTION()
	// Called to bind tile delegates
	void OnTileClicked(ABG_Tile* Tile, bool isOccupied);

	UFUNCTION()
	void OnTroopDeath();

	// Returns neighbors

	bool HasTile(const FIntPoint& Coords) const;

	UPROPERTY()
	TMap<FIntPoint, ABG_Tile*> TileMap;

	void RegisterTile(const FIntPoint& Coords, ABG_Tile* Tile);

	void spawnTroop(TSubclassOf<AOccupant_BaseClass> Occupant, ABG_Tile* Tile);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Troop | Spawning")
	float troopSpawnHeight = 20.0f;


	TArray<ABG_Tile*> TilesWithOutline;

	EPlayerIntent determinePlayerIntent(ABG_Tile* ClickedTile) const;


	void GetOccupantOwner(AOccupant_BaseClass* Occupant, EActivePlayerSide currentPlayer);
	void GetTileOwner(ABG_Tile* Tile, EActivePlayerSide currentPlayer);
	void SetGridWidth(int32 Width) { GridWidth = Width; }
	void SetGridHeight(int32 Height) { GridHeight = Height; }

	FLinearColor      GetOutlineColor(ETileHighlightState highlightState) const;
	TArray<FIntPoint> GetAdjacentTiles(bool bIncludeDiagonals, int32 adjRange, ABG_Tile* Tile);
	FString&		  GetSelectedTileCoordinates();


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TurnManager")
	ATurnManager* turnManager;

	void removeOutlineFromAllTiles();
};
