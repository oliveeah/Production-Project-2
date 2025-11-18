// Fill out your copyright notice in the Description page of Project Settings.


#include "BG_TileSpawner.h"
#include "Kismet/GameplayStatics.h"
#include <Kismet/KismetMathLibrary.h>

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

	randomNum = FMath::Rand();

	FastNoiseLite Noise;

	Noise.SetSeed(randomNum);
	Noise.SetNoiseType(FastNoiseLite::NoiseType_Perlin);
	Noise.SetFrequency(noiseFrequency);

	for (int32 rows = 1; rows < numberOfRows + 1; rows++)
	{
		for (int32 cols = 0; cols < numberOfColumns; cols++)
		{
			float xOffset = (rows % 2 == 0) ? 0.0f : (hexWidth * 0.5f);

			FVector spawnLocation = baseLocation + FVector(cols * hexWidth + xOffset, rows * hexHeight, 0);
			FTransform instanceTransform(FRotator::ZeroRotator, spawnLocation);

			
			TSubclassOf<ABG_Tile> ChosenTileClass = generateBiomeTypeBasedOnNoise(rows, cols, Noise);

			spawnTile(ChosenTileClass, instanceTransform);




			//if (shouldSpawnTokens && TokenClass)
			//{
			//	FVector tokenSpawnLocation = spawnLocation + FVector(0, 0, 10);
			//	FTransform tokenInstanceTransform(FRotator::ZeroRotator, tokenSpawnLocation);

			//	ABG_Token* NewToken = GetWorld()->SpawnActor<ABG_Token>(TokenClass, tokenInstanceTransform);
			//	if (NewToken)
			//	{
			//		NewToken->AttachToActor(NewTile, FAttachmentTransformRules::KeepWorldTransform);
			//		spawnedTilesArray.Add(NewToken);
			//	}
			//}
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

TSubclassOf<ABG_Tile> ABG_TileSpawner::generateBiomeTypeBasedOnNoise(int32 rows, int32 cols, FastNoiseLite _Noise)
{

	float Nx = cols + (rows % 2) * 0.5f;
	float Ny = rows * 0.8660254f;

	float Value = (_Noise.GetNoise(Nx, Ny) + 1.f) * 0.5f;

	TSubclassOf<ABG_Tile> ChosenTileClass = nullptr;

	UE_LOG(LogTemp, Display, TEXT("noise %f"), Value);
	if (Value < 0.4f)
	{
		ChosenTileClass = WaterTile;
	}
	else if (Value < 0.5f && Value > 0.4f)
	{
		ChosenTileClass = SandyTile;
	}
	else if (Value > 0.8f)
	{
		ChosenTileClass = MountainTile;
	}
	else if (Value > 0.7 && Value < 0.8f)
	{
		ChosenTileClass = StoneTile;
	}
	else
	{

		ChosenTileClass = MeadowTile;
	}

	return ChosenTileClass;
}

void ABG_TileSpawner::spawnTile(TSubclassOf<ABG_Tile> _ChosenTileClass, FTransform _instanceTransform)
{
	ABG_Tile* NewTile = nullptr;

	if (_ChosenTileClass)
	{
		NewTile = GetWorld()->SpawnActor<ABG_Tile>(_ChosenTileClass, _instanceTransform);

		spawnedTilesArray.Add(NewTile);
	}

}

void ABG_TileSpawner::spawnToken()
{
}

