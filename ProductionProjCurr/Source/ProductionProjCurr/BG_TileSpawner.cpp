// Fill out your copyright notice in the Description page of Project Settings.


#include "BG_TileSpawner.h"
#include "Kismet/GameplayStatics.h"
// Sets default values
ABG_TileSpawner::ABG_TileSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	staticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh"));
	RootComponent = staticMesh;
}

// Called when the game starts or when spawned
void ABG_TileSpawner::BeginPlay()
{
	Super::BeginPlay();


	float hexWidth = tileWidth;
	float hexHeight = hexWidth * 0.866f; // sqrt(3)/2 for hex spacing

	FVector baseLocation = GetActorLocation();


	//loop create instances
	for (int32 rows = 1; rows < numberOfRows + 1; rows++)
	{
		//ySpawnOffset = ySpawnOffset * rows;

		for (int32 cols = 0; cols < numberOfColumns; cols++)
		{
			float xOffset = (rows % 2 == 0) ? 0.0f : (hexWidth * 0.5f);



			float X = cols * hexWidth;
			float Y = rows * hexHeight;

			FVector spawnLocation = baseLocation + FVector(cols * hexWidth + xOffset, rows * hexHeight, 0.0f);
			FTransform instanceTransform(FRotator::ZeroRotator, spawnLocation);

			ABG_Tile* NewTile = GetWorld()->SpawnActor<ABG_Tile>(TileClass, instanceTransform);
			if (NewTile)
			{
				NewTile->AttachToActor(this, FAttachmentTransformRules::KeepWorldTransform);
			}
		}
	}
}

void ABG_TileSpawner::OnConstruction(const FTransform& transform)
{
	UE_LOG(LogTemp, Display, TEXT("on construction called"));

	Super::OnConstruction(transform);

	// Clear old instances so we don’t duplicate
//	staticMesh->ClearInstances();


	
}

// Called every frame
void ABG_TileSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

