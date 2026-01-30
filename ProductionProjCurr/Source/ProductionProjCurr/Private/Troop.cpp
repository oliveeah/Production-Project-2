// Fill out your copyright notice in the Description page of Project Settings.


#include "Troop.h"
#include "Components/StaticMeshComponent.h"
#include "Components/CapsuleComponent.h"

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

bool ATroop::CanMoveTo(const FIntPoint& Target) const
{
	return false;
}

void ATroop::MoveToTile(ABG_Tile* Tile)
{
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

