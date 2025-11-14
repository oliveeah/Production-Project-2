// Fill out your copyright notice in the Description page of Project Settings.


#include "BG_Tile.h"
#include "UObject/ConstructorHelpers.h"

#include "Components/StaticMeshComponent.h"
// Sets default values
ABG_Tile::ABG_Tile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;


	tileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("tile mesh"));
	SetRootComponent(tileMesh);


	//rootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));

	ConstructorHelpers::FObjectFinder<UStaticMesh> clearingMeshAsset(TEXT("/Game/boardGame/assets/tile.tile"));
	if (clearingMeshAsset.Succeeded())
	{
		tileMesh->SetStaticMesh(clearingMeshAsset.Object);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Failed to load tile mesh!"));
	}

	ConstructorHelpers::FObjectFinder<UMaterialInterface> MAT_One(TEXT("/Game/Fab/Megascans/Surfaces/Rippled_Sand_vd3lecfs/Medium/vd3lecfs_tier_2/Materials/MI_vd3lecfs.MI_vd3lecfs"));
	ConstructorHelpers::FObjectFinder<UMaterialInterface> MAT_Two(TEXT("/Game/Fab/Megascans/Surfaces/Swamp_Water_tgmjffbqx/Medium/tgmjffbqx_tier_2/Materials/MI_tgmjffbqx.MI_tgmjffbqx"));
	ConstructorHelpers::FObjectFinder<UMaterialInterface> MAT_Three(TEXT("/Game/Fab/Megascans/Surfaces/Uncut_Grass_oilpt20/Medium/oilpt20_tier_2/Materials/MI_oilpt20.MI_oilpt20"));
	ConstructorHelpers::FObjectFinder<UMaterialInterface> MAT_Four(TEXT("/Game/Fab/026_Weathered_RockMaterial___SeamlessTexture___Instance___Blueprint/Mat_026_Weathered_Rock/Materials/Mat_026_Weathered_Rock.Mat_026_Weathered_Rock"));

	if (MAT_One.Succeeded())  MAT_Array.Add(MAT_One.Object);
	if (MAT_Two.Succeeded())  MAT_Array.Add(MAT_Two.Object);
	if (MAT_Three.Succeeded())  MAT_Array.Add(MAT_Three.Object);
	if (MAT_Four.Succeeded())  MAT_Array.Add(MAT_Four.Object);
	
	tileMesh->SetBoundsScale(1000.0f);

	

}

// Called when the game starts or when spawned
void ABG_Tile::BeginPlay()
{
	Super::BeginPlay();

	
}

void ABG_Tile::OnConstruction(const FTransform& transform)
{
	//set material and clearing type
	if (MAT_Array.Num() > 0 && tileMesh)
	{
		int32 randomClearingType = generateRandomNumber();

		clearingType tileClearingType;

		switch (randomClearingType)
		{
		case 0:
			tileClearingType = clearing1;

			break;
		case 1:
			tileClearingType = clearing2;

			break;
		case 2:
			tileClearingType = clearing3;

			break;
		case 3:
			tileClearingType = clearing4;

			break;
		}
		//tileMesh->SetMaterial(0, MAT_Array[randomClearingType]);

	}

}

// Called every frame
void ABG_Tile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

int32 ABG_Tile::generateRandomNumber()
{
	return FMath::RandRange(0, MAT_Array.Num() - 1);
}



