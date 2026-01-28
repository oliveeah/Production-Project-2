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

TArray<ABG_Tile*> ATileManager::GetAdjacentTiles(ABG_Tile* Tile, bool bIncludeDiagonals)
{
	return TArray<ABG_Tile*>();
}

