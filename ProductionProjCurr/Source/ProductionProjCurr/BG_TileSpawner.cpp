// Fill out your copyright notice in the Description page of Project Settings.


#include "BG_TileSpawner.h"
#include "Kismet/GameplayStatics.h"
#include "Noise/FastNoiseLite.h"

// Sets default values
ABG_TileSpawner::ABG_TileSpawner()
{
	PrimaryActorTick.bCanEverTick = false;

 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.

	rootScene = CreateDefaultSubobject<USceneComponent>(TEXT("Root Scene"));
	SetRootComponent(rootScene);

	//staticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh"));
	//RootComponent = staticMesh;
}

// Called when the game starts or when spawned
void ABG_TileSpawner::BeginPlay()
{
	Super::BeginPlay();

	// Clear old instances so we don’t duplicate
	clearGrid();

	//spawn new tiles
	spawnGrid();

}

void ABG_TileSpawner::OnConstruction(const FTransform& transform)
{
	UE_LOG(LogTemp, Display, TEXT("on construction called"));

	Super::OnConstruction(transform);


	
}

// Called every frame
void ABG_TileSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

int32 ABG_TileSpawner::generateRandomTileToSpawnNumber()
{
	return FMath::RandRange(1, 6);
}

void ABG_TileSpawner::spawnGrid()
{
	int32 iteration = 0;
	if (!GetWorld()) return;

	float hexWidth = tileWidth;
	float hexHeight = hexWidth * 0.866f;

	FVector baseLocation = GetActorLocation();

	FastNoiseLite Noise;
	randomNum = FMath::Rand();


	Noise.SetSeed(randomNum);
	Noise.SetNoiseType(FastNoiseLite::NoiseType_Perlin);
	Noise.SetFrequency(.1f);

	for (int32 rows = 1; rows < numberOfRows + 1; rows++)
	{
		for (int32 cols = 0; cols < numberOfColumns; cols++)
		{
			float xOffset = (rows % 2 == 0) ? 0.0f : (hexWidth * 0.5f);

			FVector spawnLocation = baseLocation + FVector(cols * hexWidth + xOffset, rows * hexHeight, 0);
			FTransform instanceTransform(FRotator::ZeroRotator, spawnLocation);

			//int32 randomNum = generateRandomTileToSpawnNumber();



			float Nx = cols + (rows % 2) * 0.5f;
			float Ny = rows * 0.8660254f;

			float Value = (Noise.GetNoise(Nx, Ny) + 1.f) * 0.5f;

			TSubclassOf<ABG_Tile> ChosenTileClass = nullptr;

			UE_LOG(LogTemp, Display, TEXT("noise %f"), Value);
			if (Value < 0.4f)
			{
				ChosenTileClass = WaterTile; 
			}
			else if (Value < 0.47f && Value > 0.4f)
			{
				ChosenTileClass = SandyTile;
			}
			else if (Value > 0.8f)
			{
				ChosenTileClass = MountainTile;
			}
			else
			{
				ChosenTileClass = MeadowTile; 
			}





			ABG_Tile* NewTile = nullptr;
			if (ChosenTileClass)
			{
				NewTile = GetWorld()->SpawnActor<ABG_Tile>(ChosenTileClass, instanceTransform);
				iteration++;
				NewTile->setnumberInGrid(FString::Printf(TEXT("Tile_%d-%d"), cols, rows));

				//NewTile->SetActorLabel(FString::Printf(TEXT("Tile_%d-%d"), cols, rows));
				
				spawnedTilesArray.Add(NewTile);
			}

			if (shouldSpawnTokens && TokenClass)
			{
				FVector tokenSpawnLocation = spawnLocation + FVector(0, 0, 10);
				FTransform tokenInstanceTransform(FRotator::ZeroRotator, tokenSpawnLocation);

				ABG_Token* NewToken = GetWorld()->SpawnActor<ABG_Token>(TokenClass, tokenInstanceTransform);
				if (NewToken)
				{
					NewToken->AttachToActor(NewTile, FAttachmentTransformRules::KeepWorldTransform);
					spawnedTilesArray.Add(NewToken);
				}
			}
		}
	}
}

void ABG_TileSpawner::clearGrid()
{
	for (AActor* Tile : spawnedTilesArray)
	{
		if (Tile && Tile->IsPendingKillPending())
		{
			Tile->Destroy();
		}
	}
	//will add for tokens too if needed

	spawnedTilesArray.Empty();

}

