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

	//generate random number and seed with it
	randomNum = FMath::Rand();
	randomStream.Initialize(randomNum);

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

	if (Value < 0.35f)//0 - .4
	{
		ChosenTileClass = WaterTile;

	}
	else if (Value > 0.35f && Value < 0.40f) // .4 - .5
	{
		ChosenTileClass = SandyTile;
	}
	else if (Value > 0.6f && Value < 0.7f)//.55 - /7
	{
		ChosenTileClass = ForestTile;
	}
	else if (Value > 0.65 && Value < 0.7f)
	{
		ChosenTileClass = StoneTile;
	}
	else if (Value > 0.7f && Value < 0.75f)
	{
		ChosenTileClass = RockyTile;
	}
	else if (Value > 0.75 && Value < 0.8f)
	{
		ChosenTileClass = RockHillTile;
	}
	else if (Value > 0.8f)
	{
		ChosenTileClass = MountainTile; 
	}

	else
	{

		ChosenTileClass = MeadowTile;
	}
	bool test = shouldSpawnAlternateTile(chanceForAlternateTile);
	if (test)
	{
		//spawnAlternateTile();
	}
	

	return ChosenTileClass;
}

ABG_Tile* spawnTile(TSubclassOf<ABG_Tile> _ChosenTileClass, const FTransform& _instanceTransform) // changed
{
	ABG_Tile* NewTile = nullptr;

	if (_ChosenTileClass)
	{
		NewTile = GetWorld()->SpawnActor<ABG_Tile>(_ChosenTileClass, _instanceTransform);

		spawnedTilesArray.Add(NewTile);
	}

}

bool ABG_TileSpawner::shouldSpawnAlternateTile(float percentToSpawnAlternateTile)
{
	const float ClampedPercent = FMath::Clamp(percentToSpawnAlternateTile, 0.0f, 100.0f); // val between 0 and 100
	const float Fraction = ClampedPercent / 100.0f; // get fraction

	const float Rand = FMath::FRand(); 	// Get a random in 0..1 and test
	const bool bShouldSpawn = (Rand < Fraction); 

	UE_LOG(LogTemp, Display, TEXT("Rand = %f, Fraction = %f -> Spawn = %s"), Rand, Fraction, bShouldSpawn ? TEXT("true") : TEXT("false"));

	return bShouldSpawn;
}


bool ABG_TileSpawner::shouldSpawnStructureTile(float percentToSpawnStructure)
{
	return false;
}
//might not need below


void ABG_TileSpawner::spawnAlternateTile(TSubclassOf<ABG_Tile> _ChosenTileClass, FTransform _instanceTransform)
{
}

void ABG_TileSpawner::spawnToken()
{
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

const FBiomeConfig* ABG_TileSpawner::GetConfigForBiome(EBiomeType Biome) const
{
	for(const FBiomeEntry& EntryBiome : BiomeConfigs)
	{
		if (EntryBiome.Biome == Biome)
		{
			return &EntryBiome.Config;
		}
	}
	return nullptr;
}

bool ABG_TileSpawner::ShouldSpawnByFraction(float Fraction, FRandomStream* Stream) const
{
	const float Clamped = FMath::Clamp(Fraction, 0.0f, 1.0f); //this ensures fraction is between 0 and 1
	const float Rand = Stream ? Stream->FRand() : FMath::FRand(); //get random number between 0 and 1
	return (Rand < Fraction); 
}

TSubclassOf<ABG_Tile> ABG_TileSpawner::ChooseWeightedTileVariant(const TArray<FTileVariant>& Variants, FRandomStream* Stream) const
{
	if (Variants.Num() == 0)
	{
		return nullptr;
	}


}

