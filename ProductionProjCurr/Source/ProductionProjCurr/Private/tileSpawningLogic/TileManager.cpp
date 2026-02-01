// Fill out your copyright notice in the Description page of Project Settings.

#include "tileSpawningLogic/TileManager.h"  
#include "tileSpawningLogic/BG_TileSpawner.h"
#include "tileSpawningLogic/BG_Tile.h"
#include "Troop.h"
#include "WorldEffectManager.h"
#include "Kismet/GameplayStatics.h" // For GetActorOfClass

// Sets default values
ATileManager::ATileManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ATileManager::BeginPlay()
{
	Super::BeginPlay();

	if (ABG_TileSpawner* TileSpawner = Cast<ABG_TileSpawner>(UGameplayStatics::GetActorOfClass(this, ABG_TileSpawner::StaticClass())))
	{
		UE_LOG(LogTemp, Display, TEXT("Found TileSpawner, binding to delegate"));

		TileGrid = TileSpawner->getTileGrid();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("TileSpawner not found!"));
	}

	
}

// Called every frame
void ATileManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


FString& ATileManager::GetSelectedTileCoordinates()
{
		static FString coords = TEXT("N/A");
		if (SelectedTile)
		{
			coords = FString::Printf(TEXT("(%d, %d)"), (int)SelectedTile->getGridCoordinates().X, (int)SelectedTile->getGridCoordinates().Y);
		}
		else
		{
			coords = TEXT("N/A");
		}
		return coords;
}

void ATileManager::OnTileClicked(ABG_Tile* Tile, bool isOccupied)
{
	if (!Tile)
		return;

	// Turn off previous selection
	if (SelectedTile)
	{
		for (ABG_Tile* TileWithOutline : TilesWithOutline)
		{
			if (TileWithOutline)
			{
				TileWithOutline->removeOutlineEffect();
			}
		}
		TilesWithOutline.Empty();
	}

	// Update selection
	SelectedTile = Tile;
	FLinearColor outlineColor;
	// Turn on new selection

	if (isOccupied)
	{	
		// occupied logic for each neighbour
		outlineColor = getOutlineColor(EOutlineType::Adjacency);

		TArray<FIntPoint> adjacentTiles = GetAdjacentTiles(true, 1);
		for (int i =0; i < adjacentTiles.Num(); i++)
		{
			if (ABG_Tile* AdjTile = TileMap[adjacentTiles[i]])
			{
				AdjTile->addOutlineEffect(outlineColor);
				TilesWithOutline.Add(AdjTile);
			}
		}
	}
	else
	{
		//standard logic
		outlineColor = getOutlineColor(EOutlineType::Standard);
		SelectedTile->addOutlineEffect(outlineColor);
		TilesWithOutline.Add(SelectedTile);
	}
}

TArray<FIntPoint> ATileManager::GetAdjacentTiles( bool bIncludeDiagonals, int32 adjRange)
{
	TArray<FIntPoint> Neighbors;

	if (!SelectedTile)
		return Neighbors;

	const FIntPoint SelectedCoords = SelectedTile->getGridCoordinates();

	static const FIntPoint EvenRowDirs[6] = {
		{ -1, 0 }, { 1, 0 },
		{ -1, -1 }, { 0, -1 },
		{ -1, 1 }, { 0, 1 }
	};

	static const FIntPoint OddRowDirs[6] = {
		{ -1, 0 }, { 1, 0 },
		{ 0, -1 }, { 1, -1 },
		{ 0, 1 }, { 1, 1 }
	};

	const FIntPoint* Directions = (SelectedCoords.Y % 2 == 0) ? EvenRowDirs : OddRowDirs;

	for (int32 i = 0; i < 6; i++)
	{
		const FIntPoint Neighbor = SelectedCoords + Directions[i];

        if (HasTile(Neighbor)) 
		{
			Neighbors.Add(Neighbor);
		}

	}
	return Neighbors;
}

bool ATileManager::HasTile(const FIntPoint& Coords) const
{
	return TileMap.Contains(Coords);
}

void ATileManager::RegisterTile(const FIntPoint& Coords, ABG_Tile* Tile)
{
	TileMap.Add(Coords, Tile);
}

void ATileManager::spawnTroop(TSubclassOf<ATroop> troopToSpawn, ABG_Tile* Tile)
{
	if (!troopToSpawn || !Tile)
		return;
	if (Tile->isOccupied)
		return;
	UWorld* World = GetWorld();
	if (!World)
		return;

	FVector SpawnLocation = Tile->GetActorLocation();
	SpawnLocation.Z += troopSpawnHeight; 
	FTransform SpawnTransform = FTransform(FRotator::ZeroRotator, SpawnLocation);
	//ATroop*	SpawnedTroop = World->SpawnActor<ATroop>(troopToSpawn, SpawnTransform);
	ATroop* Troop = World->SpawnActor<ATroop>(troopToSpawn,SpawnTransform);

	Troop->SetGridPosition(Tile->getGridCoordinates());
	Tile->isOccupied = true;
}

FLinearColor ATileManager::getOutlineColor(EOutlineType outlineType) const
{
	switch (outlineType)
	{
		case EOutlineType::Standard:
			return FLinearColor(0, 0, 0, 1); // White

		case EOutlineType::Adjacency:
			return FLinearColor(0, 0, 5, 1); // Blue

		case EOutlineType::Attack:
			return FLinearColor(5, 0, 0, 1); // Red

		default:
			return FLinearColor(5, 5, 5, 1); // White
	}
}







