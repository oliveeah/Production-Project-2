// Fill out your copyright notice in the Description page of Project Settings.


#include "Troop.h"
#include "Components/StaticMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "tileSpawningLogic/BG_Tile.h"

// Sets default values
ATroop::ATroop()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	RootComponent = RootComp;
	TroopMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TroopMesh"));
	TroopMesh->SetupAttachment(RootComp);

}

bool ATroop::CanMoveTo(const FIntPoint& Target, TArray<FIntPoint> Neighbors) const
{
	for (int i = 0; i < Neighbors.Num(); i++)
	{
		if (Neighbors[i] == Target)
		{
			return true;
		}
	}
	return false;
}

void ATroop::MoveToTile(ABG_Tile* Tile)
{
	if (!Tile || !Tile->tileMesh)
		return;

	this->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
	this->AttachToComponent(
		Tile->tileMesh, // attach to the tile’s mesh (not the Actor)
		FAttachmentTransformRules::SnapToTargetNotIncludingScale,
		"TroopSpawnSocket");
	SetGridPosition(Tile->getGridCoordinates());
}





// Called when the game starts or when spawned
void ATroop::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Display, TEXT("Spawned troop here"));

}

// Called every frame
void ATroop::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

