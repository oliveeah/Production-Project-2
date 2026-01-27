// Fill out your copyright notice in the Description page of Project Settings.


#include "BG_Tile.h"
#include <gameMode/ProductionProjCurrGameMode.h>
#include <Kismet/GameplayStatics.h>

ABG_Tile::ABG_Tile()
{
	PrimaryActorTick.bCanEverTick = false;

	tileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("tile mesh"));
	SetRootComponent(tileMesh);

	tileEdgeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("tile edge mesh"));
	tileEdgeMesh->SetupAttachment(tileMesh);

	tileMesh->SetBoundsScale(1000.0f);
	tileMesh->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	tileMesh->SetCollisionResponseToAllChannels(ECR_Ignore);
	tileMesh->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);

	Tags.Add(FName("Tile"));
}

void ABG_Tile::BeginPlay()
{
	Super::BeginPlay();

	if(AProductionProjCurrGameMode* GameMode = Cast<AProductionProjCurrGameMode>(UGameplayStatics::GetGameMode(this)))	
	{
		GameMode->OnToggleTileDebugCoordinates.AddDynamic(this, &ABG_Tile::OnDebugToggled);
	}
}

void ABG_Tile::OnDebugToggled(bool bNewShowDebug)
{
    bShowDebug = bNewShowDebug;
    
    // Example: Draw 3D debug text showing grid coordinates
    if (bShowDebug)
    {
        FString DebugText = FString::Printf(TEXT("(%d, %d)"), (int)gridCoordinates.X, (int)gridCoordinates.Y);
        DrawDebugString(GetWorld(), GetActorLocation() + FVector(0, 0, 100), DebugText, nullptr, FColor::Green, 5.0f, true);
    }
    else
    {
        FlushPersistentDebugLines(GetWorld());
    }
}




