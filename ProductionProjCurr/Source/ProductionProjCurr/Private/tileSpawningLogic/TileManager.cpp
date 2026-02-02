// Fill out your copyright notice in the Description page of Project Settings.

#include "tileSpawningLogic/TileManager.h"  
#include "tileSpawningLogic/BG_TileSpawner.h"
#include "tileSpawningLogic/BG_Tile.h"
#include "Troop.h"
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
	static ABG_Tile* previousTile = nullptr;

	// determine if valid tile and apply selection logic
	if (!Tile)
		return;

	//get intent
	EPlayerIntent playerIntent = determinePlayerIntent(Tile);
	previousTile = SelectedTile;

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

	switch (playerIntent)
	{
		case EPlayerIntent::SelectTile:
			if (isOccupied)//if troop is on tile
			{
				FLinearColor color = getOutlineColor(ETileHighlightState::Adjacency);
				TArray<FIntPoint> adjacentTiles = GetAdjacentTiles(true, 1, SelectedTile);

				for (FIntPoint Coord : adjacentTiles)
				{
					if (ABG_Tile* AdjTile = TileMap[Coord])
					{
						AdjTile->SetHighlightType(ETileHighlightState::Adjacency);
						AdjTile->addOutlineEffect(color);
						TilesWithOutline.Add(AdjTile);
					}
				}
			}
			else
			{
				FLinearColor color = getOutlineColor(ETileHighlightState::Standard);
				Tile->SetHighlightType(ETileHighlightState::Standard);

				Tile->addOutlineEffect(color);
				TilesWithOutline.Add(Tile);
			}
			break;
		case EPlayerIntent::MoveTroop:
		{
			ATroop* OccupyingTroop = previousTile->getOccupyingTroop();
			if (OccupyingTroop)
			{
				TArray<FIntPoint> adjacentTiles = GetAdjacentTiles(true, 1, previousTile);
				bool canMove = OccupyingTroop->CanMoveTo(Tile->getGridCoordinates(), adjacentTiles);
				if (canMove)
				{
					OccupyingTroop->MoveToTile(Tile);
					Tile->SetOccupyingTroop(OccupyingTroop);
					Tile->isOccupied = true;
					previousTile->isOccupied = false;
					
				}
				UE_LOG(LogTemp, Display, TEXT("canMove: %d"), canMove);

			}
			break;
		}
		case EPlayerIntent::AttackTroop:
			break;
		case EPlayerIntent::ReselectTile:

			break;
		case EPlayerIntent::Cancel:
			break;
		default:
			break;
	}

	// Check if tile is already highlighted // assume player trying to do action



}

EPlayerIntent ATileManager::determinePlayerIntent(ABG_Tile* ClickedTile) const
{
	if (!ClickedTile)
		return EPlayerIntent::Cancel;
	if (!ClickedTile->getIsPlayingEffect())
		return EPlayerIntent::SelectTile;

	switch (ClickedTile->getHighlightType())
	{
		case ETileHighlightState::Adjacency:
			return EPlayerIntent::MoveTroop;

		case ETileHighlightState::Attack:
			return EPlayerIntent::AttackTroop;

		case ETileHighlightState::Standard:
			//return EPlayerIntent::ReselectTile;

		default:
			return EPlayerIntent::SelectTile;
	}
}


TArray<FIntPoint> ATileManager::GetAdjacentTiles( bool bIncludeDiagonals, int32 adjRange, ABG_Tile* Tile)
{
	TArray<FIntPoint> Neighbors;

	if (!Tile)
		return Neighbors;

	const FIntPoint SelectedCoords = Tile->getGridCoordinates();

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
	FTransform SpawnTransform = FTransform(FRotator::ZeroRotator, SpawnLocation);
	ATroop* Troop = World->SpawnActor<ATroop>(troopToSpawn,SpawnTransform);
	Troop->AttachToComponent(
		Tile->tileMesh, // attach to the tile’s mesh (not the Actor)
		FAttachmentTransformRules::SnapToTargetNotIncludingScale,
		"TroopSpawnSocket");
	Tile->SetOccupyingTroop(Troop);
	Troop->SetGridPosition(Tile->getGridCoordinates());
	Tile->isOccupied = true;
}

FLinearColor ATileManager::getOutlineColor(ETileHighlightState highlightState) const
{
	switch (highlightState)
	{
		case ETileHighlightState::Standard:
			return FLinearColor(0, 0, 0, 1); // black

		case ETileHighlightState::Adjacency:
			return FLinearColor(0, 0, 5, 1); // Blue

		case ETileHighlightState::Attack:
			return FLinearColor(5, 0, 0, 1); // Red

		default:
			return FLinearColor(5, 5, 5, 1); // White
	}
}








