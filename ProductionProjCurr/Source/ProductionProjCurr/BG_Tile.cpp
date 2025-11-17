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

	tileEdgeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("tile edge mesh"));
	tileEdgeMesh->SetupAttachment(tileMesh);

	//rootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));

	//ConstructorHelpers::FObjectFinder<UStaticMesh> clearingMeshAsset(TEXT("/Game/boardGame/assets/tile.tile"));
	//if (clearingMeshAsset.Succeeded())
	//{
	//	tileMesh->SetStaticMesh(clearingMeshAsset.Object);
	//}
	//else
	//{
	//	UE_LOG(LogTemp, Warning, TEXT("Failed to load tile mesh!"));
	//}
	
	tileMesh->SetBoundsScale(1000.0f);
	tileMesh->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	tileMesh->SetCollisionResponseToAllChannels(ECR_Ignore);
	tileMesh->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);
	

	

}

// Called when the game starts or when spawned
void ABG_Tile::BeginPlay()
{
	Super::BeginPlay();

	if (tileMesh)
	{
		tileMesh->OnBeginCursorOver.AddDynamic(this, &ABG_Tile::OnBeginMouseOverTile);
		tileMesh->OnEndCursorOver.AddDynamic(this, &ABG_Tile::OnEndMouseOverTile);
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

int32 ABG_Tile::generateRandomNumber()
{
	return FMath::RandRange(0, MAT_Array.Num() - 1);
}


void ABG_Tile::OnBeginMouseOverTile(UPrimitiveComponent* TouchedComponent)
{
	UE_LOG(LogTemp, Warning, TEXT("TILE : mouse hovering over tile"));
	tileEdgeMesh->SetVisibility(true);
}

void ABG_Tile::OnEndMouseOverTile(UPrimitiveComponent* TouchedComponent)
{
	UE_LOG(LogTemp, Warning, TEXT("TILE : mouse STOPPED hovering over tile"));
	tileEdgeMesh->SetVisibility(false);

}



