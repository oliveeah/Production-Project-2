// Fill out your copyright notice in the Description page of Project Settings.

#include "tileSpawningLogic/TileManager.h"  
#include "tileSpawningLogic/BG_TileSpawner.h"
#include "tileSpawningLogic/BG_Tile.h"
#include "Occupant/Occupant_BaseClass.h"
#include "Occupant/Occupant_Troop_BaseClass.h"
#include "Occupant/Occupant_Building_BaseClass.h"
#include "Kismet/GameplayStatics.h" // For GetActorOfClass
#include <gameMode/ProductionProjCurrGameMode.h>

// Sets default values
ATileManager::ATileManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
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
		removeOutlineFromAllTiles();
	}
	// Update selection
	SelectedTile = Tile;

	switch (playerIntent)
	{
		case EPlayerIntent::SelectTile:
		{
			if (isOccupied)//if troop is on tile
			{
				AOccupant_Troop_BaseClass* OccupyingTroop = previousTile->getOccupyingTroop();
				if (OccupyingTroop && OccupyingTroop->GetHealth() > 0)
				{
					FLinearColor color;
					TArray<FIntPoint> adjacentTiles = GetAdjacentTiles(true, 1, SelectedTile);

					for (FIntPoint Coord : adjacentTiles)
					{
						if (ABG_Tile* AdjTile = TileMap[Coord])
						{
							if (AdjTile->isOccupied)
							{
								AdjTile->SetHighlightType(ETileHighlightState::Attack);
								color = GetOutlineColor(ETileHighlightState::Attack);
								AdjTile->addOutlineEffect(color);
								TilesWithOutline.Add(AdjTile);
							}
							else if (!AdjTile->isOccupied && AdjTile->getCanSpawnTroopOnTile())
							{
								AdjTile->SetHighlightType(ETileHighlightState::Adjacency);
								color = GetOutlineColor(ETileHighlightState::Adjacency);
								AdjTile->addOutlineEffect(color);
								TilesWithOutline.Add(AdjTile);
							}
							else
							{
								AdjTile->SetHighlightType(ETileHighlightState::Blocked);
								color = GetOutlineColor(ETileHighlightState::Blocked);
								AdjTile->addOutlineEffect(color);
								TilesWithOutline.Add(AdjTile);
							}

						}
	
					}
				}
			}
			
			else
			{
				FLinearColor color = GetOutlineColor(ETileHighlightState::Standard);
				Tile->SetHighlightType(ETileHighlightState::Standard);

				Tile->addOutlineEffect(color);
				TilesWithOutline.Add(Tile);
			}
			break;
		}
		case EPlayerIntent::MoveTroop:
		{
				AOccupant_Troop_BaseClass* OccupyingTroop = previousTile->getOccupyingTroop();
				if (OccupyingTroop && OccupyingTroop->GetHealth() > 0)
				{
					TArray<FIntPoint> adjacentTiles = GetAdjacentTiles(true, 1, previousTile);
					bool			  canMove = OccupyingTroop->CanMoveTo(Tile->getGridCoordinates(), adjacentTiles);
					if (canMove)
					{
						OccupyingTroop->MoveToTile(Tile);
						Tile->SetOccupyingTroop(OccupyingTroop);
						Tile->isOccupied = true;

						if (turnManager && Tile)//update owning player for both tiles (Prior and New)
						{
							previousTile->SetOwningPlayer(EActivePlayerSide::None);
							Tile->SetOwningPlayer(turnManager->GetActivePlayer());
						}

						previousTile->isOccupied = false;
					}
				}
			
			break;
		}
		case EPlayerIntent::AttackTroop:
		{
			AOccupant_Troop_BaseClass* AttackingTroop = previousTile->getOccupyingTroop();
			AOccupant_Troop_BaseClass* DefendingTroop = Tile->getOccupyingTroop();
			AttackingTroop->SetIsAttacking(true);
			DefendingTroop->SetHealth(0);
			Tile->isOccupied = false;
				
			break;
		}
		case EPlayerIntent::ReselectTile:
		{

			break;
		}
		case EPlayerIntent::Cancel:
		{
			break;
		}
		default:
		{
			break;
		}
	}

	// Check if tile is already highlighted // assume player trying to do action



}

void ATileManager::OnTroopDeath()
{
	removeOutlineFromAllTiles();
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

void ATileManager::GetOccupantOwner(AOccupant_BaseClass* Occupant, EActivePlayerSide currentPlayer)
{
	if (Occupant)
	{
		Occupant->SetOwningPlayer(currentPlayer);
	}
}

void ATileManager::GetTileOwner(ABG_Tile* Tile, EActivePlayerSide currentPlayer)
{
	if (!Tile)
		return;

	Tile->SetOwningPlayer(currentPlayer);
}

void ATileManager::removeOutlineFromAllTiles()
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

void ATileManager::spawnTroop(TSubclassOf<AOccupant_BaseClass> Occupant, ABG_Tile* Tile)
{
	/*Ptr Checks and Setting Member vals*/
	if (!Occupant || !Tile)
		return;
	if (Tile->isOccupied)
		return;
	UWorld* World = GetWorld();
	if (!World)
		return;

	AOccupant_BaseClass* OccupantCDO = Occupant->GetDefaultObject<AOccupant_BaseClass>();
	if (!OccupantCDO)
		return;

	if (OccupantCDO->IsBuilding() && !Tile->getBuildingCanBePlacedOnTile())
		return;

	if (OccupantCDO->IsTroop() && !Tile->getCanSpawnTroopOnTile())
		return;

	const FName SpawnSocketName = OccupantCDO->IsBuilding()
		? TEXT("BuildingSpawnSocket")
		: TEXT("TroopSpawnSocket");

	/*Spawn and attach*/
	FVector	   SpawnLocation = Tile->GetActorLocation();
	FTransform SpawnTransform(FRotator::ZeroRotator, SpawnLocation);

	AOccupant_BaseClass* SpawnedOccupant = World->SpawnActor<AOccupant_BaseClass>(Occupant, SpawnTransform);
	if (!SpawnedOccupant)
		return;

	SpawnedOccupant->AttachToComponent(
		Tile->tileMesh,
		FAttachmentTransformRules::SnapToTargetNotIncludingScale,
		SpawnSocketName);

	EActivePlayerSide CurrentPlayer = turnManager->GetActivePlayer();

	switch (CurrentPlayer)
	{
		case EActivePlayerSide::PlayerA:
			SpawnedOccupant->SetTeamColor(FLinearColor::FromSRGBColor(FColor::Red));
			break;
		case EActivePlayerSide::PlayerB:
			SpawnedOccupant->SetTeamColor(FLinearColor::FromSRGBColor(FColor::Blue));
			break;
		case EActivePlayerSide::None:
		default:
			break;
	}

	SpawnedOccupant->SetGridPosition(Tile->getGridCoordinates());
	SpawnedOccupant->SetOwningPlayer(CurrentPlayer);

	if (AOccupant_Troop_BaseClass* Troop = Cast<AOccupant_Troop_BaseClass>(SpawnedOccupant))
	{
		Troop->OnTroopDeath.AddDynamic(this, &ATileManager::OnTroopDeath);
		Tile->SetOccupyingTroop(Troop);
		Tile->isOccupied = true;
	}
	else if (AOccupant_Building_BaseClass* Building = Cast<AOccupant_Building_BaseClass>(SpawnedOccupant))
	{
		Tile->SetOccupyingBuilding(Building);
		Tile->setHasBuilding(true);
	}

	Tile->SetOwningPlayer(CurrentPlayer);
}

FLinearColor ATileManager::GetOutlineColor(ETileHighlightState highlightState) const
{
	switch (highlightState)
	{
		case ETileHighlightState::Standard:
			return FLinearColor(0, 0, 0, 1); // black

		case ETileHighlightState::Adjacency:
			return FLinearColor(0, 0, 5, 1); // Blue

		case ETileHighlightState::Attack:
			return FLinearColor(5, 0, 0, 1); // Red
		case ETileHighlightState::Blocked:
			return FLinearColor(5, 5, 5, 1); // White
		default:
			return FLinearColor(5, 5, 5, 1); // White
	}
}















