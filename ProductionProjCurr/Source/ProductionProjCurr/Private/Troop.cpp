// Fill out your copyright notice in the Description page of Project Settings.


#include "Troop.h"

// Sets default values
ATroop::ATroop()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

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
	
}

// Called every frame
void ATroop::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

