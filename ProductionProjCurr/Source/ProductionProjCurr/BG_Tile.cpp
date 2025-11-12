// Fill out your copyright notice in the Description page of Project Settings.


#include "BG_Tile.h"
#include "UObject/ConstructorHelpers.h"

#include "Components/StaticMeshComponent.h"
// Sets default values
ABG_Tile::ABG_Tile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;


	staticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("static mesh"));
	SetRootComponent(staticMesh);

	//rootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));

	ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Game/boardGame/assets/tile.tile"));
	if (MeshAsset.Succeeded())
	{
		staticMesh->SetStaticMesh(MeshAsset.Object);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Failed to load tile mesh!"));
	}

}

// Called when the game starts or when spawned
void ABG_Tile::BeginPlay()
{
	Super::BeginPlay();


}

void ABG_Tile::OnConstruction(const FTransform& transform)
{
	
}

// Called every frame
void ABG_Tile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

