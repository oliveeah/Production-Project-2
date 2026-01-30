// Fill out your copyright notice in the Description page of Project Settings.


#include "WorldEffectManager.h"
#include "tileSpawningLogic/BG_Tile.h"
// Sets default values
AWorldEffectManager::AWorldEffectManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TileDecal = CreateDefaultSubobject<UDecalComponent>(TEXT("TileDecal"));
	TileDecal->SetupAttachment(RootComponent);
	TileDecal->SetDecalMaterial(DecalMaterial);
	TileDecal->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	TileDecal->SetRelativeRotation(FRotator(0.0f, 0.0f, 0.0f));
	TileDecal->DecalSize = FVector(0.0f, 0.0f, 0.0f); // Adjust size as needed


}

// Called when the game starts or when spawned
void AWorldEffectManager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWorldEffectManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


