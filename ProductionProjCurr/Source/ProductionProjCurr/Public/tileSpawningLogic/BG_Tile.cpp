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


	tileMesh->SetBoundsScale(1000.0f);
	tileMesh->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	tileMesh->SetCollisionResponseToAllChannels(ECR_Ignore);
	tileMesh->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);
}





