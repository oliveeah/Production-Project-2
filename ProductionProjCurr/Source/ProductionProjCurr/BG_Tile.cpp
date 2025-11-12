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

	ConstructorHelpers::FObjectFinder<UMaterialInterface> MAT_One(TEXT("/Game/boardGame/assets/tile_MAT.tile_MAT"));
	ConstructorHelpers::FObjectFinder<UMaterialInterface> MAT_Two(TEXT("/Game/boardGame/assets/tile_MAT1.tile_MAT1"));
	ConstructorHelpers::FObjectFinder<UMaterialInterface> MAT_Three(TEXT("/Game/boardGame/assets/tile_MAT2.tile_MAT2"));
	ConstructorHelpers::FObjectFinder<UMaterialInterface> MAT_Four(TEXT("/Game/boardGame/assets/tile_MAT3.tile_MAT3"));

	if (MAT_One.Succeeded())  MAT_Array.Add(MAT_One.Object);
	if (MAT_Two.Succeeded())  MAT_Array.Add(MAT_Two.Object);
	if (MAT_Two.Succeeded())  MAT_Array.Add(MAT_Two.Object);
	if (MAT_Three.Succeeded())  MAT_Array.Add(MAT_Three.Object);
	if (MAT_Four.Succeeded())  MAT_Array.Add(MAT_Four.Object);
	

	

}

// Called when the game starts or when spawned
void ABG_Tile::BeginPlay()
{
	Super::BeginPlay();

	if (MAT_Array.Num() > 0 && staticMesh)
	{
		// Generate random index
		int32 RandomIndex = FMath::RandRange(0, MAT_Array.Num() - 1);

		staticMesh->SetMaterial(0, MAT_Array[RandomIndex]);

		UE_LOG(LogTemp, Display, TEXT("Tile [%s] assigned material %d"), *GetName(), RandomIndex);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("MAT_Array empty or staticMesh missing in tile %s"), *GetName());
	}

}

void ABG_Tile::OnConstruction(const FTransform& transform)
{

}

// Called every frame
void ABG_Tile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}



