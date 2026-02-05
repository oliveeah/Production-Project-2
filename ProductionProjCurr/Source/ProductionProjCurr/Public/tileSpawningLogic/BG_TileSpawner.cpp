// Fill out your copyright notice in the Description page of Project Settings.

#include "BG_TileSpawner.h"
#include "BG_Tile.h"
#include "TileManager.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
ABG_TileSpawner::ABG_TileSpawner()
{
	PrimaryActorTick.bCanEverTick = false;
}

// Called when the game starts or when spawned
void ABG_TileSpawner::BeginPlay()
{
	Super::BeginPlay();


	// Generate random number and seed with it
	const float randomNum = FMath::Rand();
	randomStream.Initialize(randomNum);

	// Clear old instances so we don't duplicate
	clearGrid();

	// Spawn new tiles
	spawnGrid(randomNum);
}

void ABG_TileSpawner::clearGrid()
{
	for (TArray<ABG_Tile*>& Row : TileGrid) 
	{
		for (ABG_Tile* Tile : Row)
		{
			if (Tile && !Tile->IsPendingKillPending())
			{
				Tile->Destroy();
			}
		}
	}

	TileGrid.Empty();
}


void ABG_TileSpawner::spawnGrid(const float& randomNum)
{
	if (!GetWorld()) return;

	const float hexWidth = tileWidth;
	const float hexHeight = hexWidth * 0.866f; // hexHeight
	const FVector tileSpawnerLocation = GetActorLocation();
	
	FastNoiseLite Noise;
	Noise.SetSeed(randomNum);
	Noise.SetNoiseType(FastNoiseLite::NoiseType_ValueCubic);
	Noise.SetFrequency(noiseFrequency);


	TileGrid.SetNum(numberOfRows);
	TileManager->SetGridWidth(numberOfColumns);
	TileManager->SetGridHeight(numberOfRows);

	for (int32 rows = 0; rows < numberOfRows; rows++)
	{
		TileGrid[rows].SetNum(numberOfColumns);
		for (int32 cols = 0; cols < numberOfColumns; cols++)
		{
			// Offset every other row
			const float xOffset = (rows % 2 == 0) ? 0.0f : (hexWidth * 0.5f);
			float Nx = cols + (rows % 2) * 0.5f;
			float Ny = rows * 0.8660254f;

			float		HeightNoise = Noise.GetNoise(Nx, Ny); // reuse same coords
			float		Height = HeightNoise * 40.f;		  // tweak this in editor

			FVector		spawnLocation = tileSpawnerLocation + FVector(
				cols * hexWidth + xOffset,
				rows * hexHeight, Height);

			const FTransform instanceTransform(FRotator::ZeroRotator, spawnLocation);

			// Determine biome type based on noise
			const EBiomeType biomeType = generateBiomeTypeBasedOnNoise(rows, cols, Noise);
			
			// Get tile class for biome
			TSubclassOf<ABG_Tile> ChosenTileClass = GetTileClassForBiome(biomeType);

			// Spawn the tile
			ABG_Tile* NewTile = spawnTile(ChosenTileClass, instanceTransform);

			if (NewTile)
			{
				TileGrid[rows][cols] = NewTile; 
				NewTile->gridCoordinates = FIntPoint(cols, rows);
				if (TileManager)
				{
					NewTile->OnTileSelectedDelegate.AddDynamic(TileManager, &ATileManager::OnTileClicked);
					TileManager->RegisterTile(FIntPoint(cols, rows), NewTile); 
				}
				else
				{
					UE_LOG(LogTemp, Warning, TEXT("TileManager not set in TileSpawner! Cannot bind delegate."));
				}
			}
		}
	}

}

TSubclassOf<ABG_Tile> ABG_TileSpawner::GetTileClassForBiome(EBiomeType Biome) const
{
	switch (Biome)
	{
		case EBiomeType::Water:
			return WaterTile;
		case EBiomeType::Sandy:
			return SandyTile;
		case EBiomeType::Grassland:
			return MeadowTile;
		case EBiomeType::Forest:
			return ForestTile;
		case EBiomeType::Stone:
			return StoneTile;
		case EBiomeType::Hill:
			return RockHillTile;
		case EBiomeType::Mountain:
			return MountainTile;
		default:
			return TileClass; // Fallback to base tile
	}
}

EBiomeType ABG_TileSpawner::generateBiomeTypeBasedOnNoise(int32 rows, int32 cols, FastNoiseLite _Noise)
{
	float Nx = cols + (rows % 2) * 0.5f;
	float Ny = rows * 0.8660254f;

	float Value = (_Noise.GetNoise(Nx, Ny) + 1.f) * 0.5f;

	// UE_LOG(LogTemp, Display, TEXT("noise %f"), Value);

	if (Value < 0.35f) return EBiomeType::Water;
	if (Value < 0.4f) return EBiomeType::Sandy;
	if (Value < 0.65f) return EBiomeType::Grassland;
	if (Value < 0.75f) return EBiomeType::Forest;
	if (Value < 0.8f) return EBiomeType::Stone;
	if (Value < 0.85f) return EBiomeType::Hill;
	return EBiomeType::Mountain;
}

ABG_Tile* ABG_TileSpawner::spawnTile(TSubclassOf<ABG_Tile> _ChosenTileClass, const FTransform& _instanceTransform)
{
	if (!_ChosenTileClass) return nullptr;

	UWorld* World = GetWorld();
	if (!World) return nullptr;

	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;

	ABG_Tile* NewTile = World->SpawnActor<ABG_Tile>(_ChosenTileClass, _instanceTransform, SpawnParams);

	return NewTile;
}

