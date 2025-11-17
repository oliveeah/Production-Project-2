// Fill out your copyright notice in the Description page of Project Settings.


#include "BG_TileSpawner.h"
#include "Kismet/GameplayStatics.h"
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


	for (int32 rows = 1; rows < numberOfRows + 1; rows++)
	{
		for (int32 cols = 0; cols < numberOfColumns; cols++)
		{
			float xOffset = (rows % 2 == 0) ? 0.0f : (hexWidth * 0.5f);

			FVector spawnLocation = baseLocation + FVector(cols * hexWidth + xOffset, rows * hexHeight, 0);
			FTransform instanceTransform(FRotator::ZeroRotator, spawnLocation);

			int32 randomNum = generateRandomTileToSpawnNumber();



			TSubclassOf<ABG_Tile> ChosenTileClass = nullptr;

			switch (randomNum)
			{
			case 1: ChosenTileClass = FarmTile; break;
			case 2: ChosenTileClass = WaterTile; break;
			case 3: ChosenTileClass = MountainTile; break;
			case 4: ChosenTileClass = ForestTile; break;
			case 5: ChosenTileClass = MeadowTile; break;
			case 6: ChosenTileClass = SandyTile; break;
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

