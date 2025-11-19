// Fill out your copyright notice in the Description page of Project Settings.


#include "BG_TileSpawner.h"
#include "Kismet/GameplayStatics.h"
#include <Kismet/KismetMathLibrary.h>
#include "Engine/World.h" // Added include to fix GetWorld() error

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


void ABG_TileSpawner::spawnGrid()
{
	int32 iteration = 0;
	if (!GetWorld()) return;

	const float hexWidth = tileWidth;
	const float hexHeight = hexWidth * 0.866f;
	const FVector baseLocation = GetActorLocation();


	FastNoiseLite Noise;

	Noise.SetSeed(randomNum);
	Noise.SetNoiseType(FastNoiseLite::NoiseType_Perlin);
	Noise.SetFrequency(noiseFrequency);

	for (int32 rows = 1; rows < numberOfRows + 1; rows++)
	{
		for (int32 cols = 0; cols < numberOfColumns; cols++)
		{
			const float xOffset = (rows % 2 == 0) ? 0.0f : (hexWidth * 0.5f);
			const FVector spawnLocation = baseLocation + FVector(cols * hexWidth + xOffset, rows * hexHeight, 0);
			const FTransform instanceTransform(FRotator::ZeroRotator, spawnLocation);

			const EBiomeType biomeType = generateBiomeTypeBasedOnNoise(rows, cols, Noise); //determine biome type based on noise
			const FBiomeConfig* biomeConfig = GetConfigForBiome(biomeType); //get config (if there is one) for above biome type

			TSubclassOf<ABG_Tile> ChosenTileClass = nullptr;
			{
				if (biomeConfig && biomeConfig->DefaultTile) //choose default tile
				{
					ChosenTileClass = biomeConfig->DefaultTile; 
				}
			}

			if (biomeConfig && biomeConfig->TileVariants.Num() > 0 && biomeConfig->AlternateChance > 0.0f)
			{
				const float fraction = FMath::Clamp(biomeConfig->AlternateChance / 100.0f, 0.0f, 1.0f); //normalize val between 0 and 1 then clamp
				if (ShouldSpawnByFraction(fraction, &randomStream))
				{
					const TSubclassOf<ABG_Tile> VariantTileClass = ChooseWeightedTileVariant(biomeConfig->TileVariants, &randomStream);
					if(VariantTileClass)
					{
						ChosenTileClass = VariantTileClass;
					}
				}
			}

			ABG_Tile* NewTile = spawnTile(ChosenTileClass, instanceTransform);






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

EBiomeType ABG_TileSpawner::generateBiomeTypeBasedOnNoise(int32 rows, int32 cols, FastNoiseLite _Noise)
{

	float Nx = cols + (rows % 2) * 0.5f;
	float Ny = rows * 0.8660254f;

	float Value = (_Noise.GetNoise(Nx, Ny) + 1.f) * 0.5f;


	//UE_LOG(LogTemp, Display, TEXT("noise %f"), Value);

	if (Value < 0.35f) return EBiomeType::Water;
	if (Value < 0.40f) return EBiomeType::Sandy;
	if (Value < 0.60f) return EBiomeType::Grassland;
	if (Value < 0.70f) return EBiomeType::Forest;
	if (Value < 0.75f) return EBiomeType::Stone;
	if (Value < 0.8f) return EBiomeType::Hill;
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

	if(NewTile)
	{
		spawnedTilesArray.Add(NewTile);
	}

	return NewTile;
}

bool ABG_TileSpawner::shouldSpawnAlternateTile(float percentToSpawnAlternateTile)
{
	const float Fraction = FMath::Clamp(percentToSpawnAlternateTile / 100.0f, 0.0f, 1.0f);
	return ShouldSpawnByFraction(Fraction, &randomStream); // deterministic
}


bool ABG_TileSpawner::shouldSpawnStructureTile(float percentToSpawnStructure)
{
	return false;
}
//might not need below

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
	const float Clamped = FMath::Clamp(Fraction, 0.0f, 1.0f);
	const float Rand = Stream ? Stream->FRand() : FMath::FRand();
	return (Rand < Clamped);
}

TSubclassOf<ABG_Tile> ABG_TileSpawner::ChooseWeightedTileVariant(const TArray<FTileVariant>& Variants, FRandomStream* Stream) const
{
	if (Variants.Num() == 0) return nullptr;

	float totalWeight = 0.0f;	
	for (const FTileVariant& V : Variants) //foreach variant add weight
	{
		totalWeight += FMath::Max(0.0f, V.Weight);
	}

	if(totalWeight <= 0.0f) //if no weight, return first variant
	{
		for (const FTileVariant& V : Variants)
		{
			if (V.TileClass) return V.TileClass;
		}
		return nullptr;
	}

	const float Pick = (Stream ? Stream->FRand() : FMath::FRand()) * totalWeight;
	float Accum = 0.0f;
	for (const FTileVariant& V : Variants)//foreach variant add weight to accum and check if pick is less than accum
	{
		Accum += FMath::Max(0.0f, V.Weight);
		if (Pick <= Accum && V.TileClass)
		{
			return V.TileClass;
		}
	}

	// numerical fallback //not necessary
	for (int32 i = Variants.Num() - 1; i >= 0; --i)
	{
		if (Variants[i].TileClass) return Variants[i].TileClass;
	}
	return nullptr;
}

