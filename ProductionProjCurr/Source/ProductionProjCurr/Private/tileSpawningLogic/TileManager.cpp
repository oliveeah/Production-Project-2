// Fill out your copyright notice in the Description page of Project Settings.

#include "tileSpawningLogic/TileManager.h"  
#include "tileSpawningLogic/BG_TileSpawner.h"
#include "tileSpawningLogic/BG_Tile.h"
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

void ATileManager::OnTileClicked(ABG_Tile* Tile)
{
	SelectedTile = Tile;
}

TArray<FVector2D> ATileManager::GetAdjacentTiles( bool bIncludeDiagonals)
{
	if (SelectedTile == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("No tile selected!"));
		return TArray<FVector2D>();
	}

	TArray<FVector2D> Neighbors;
	if (!SelectedTile)
		return Neighbors;

	FVector2D SelectedCoords = SelectedTile->getGridCoordinates();
	int	cx = (int)SelectedCoords.X;
	int	cy = (int)SelectedCoords.Y;


	for (int dx = -1; dx <= 1; dx++)
	{
		for (int dy = -1; dy <= 1; dy++)
		{
			if (dx == 0 && dy == 0)
				continue; // Skip the selected tile itself


			int nx = cx + dx;
			int ny = cy + dy;

			checkTile(nx, ny, Neighbors);

		}
	}



	return Neighbors;
}



	void ATileManager::checkTile(int xToCheck, int yToCheck, TArray<FVector2D>& Neighbors)
	{
		UE_LOG(LogTemp, Warning, TEXT("Checking (%d, %d)"), xToCheck, yToCheck);
		if (TileGrid.IsValidIndex(xToCheck) && TileGrid[xToCheck].IsValidIndex(yToCheck))
		{
			UE_LOG(LogTemp, Display, TEXT("neighbour : (%d, %d)"), xToCheck, yToCheck);
			Neighbors.Add(FVector2D(xToCheck, yToCheck));
		}
		else
		{
			UE_LOG(LogTemp, Display, TEXT("no neighbour at : (%d, %d)"), xToCheck, yToCheck);
		}
	}



