// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BG_TileSpawner.h"
#include "TileManager.generated.h"

UCLASS()
class PRODUCTIONPROJCURR_API ATileManager : public AActor
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:		
	// Sets default values for this actor's properties
	ATileManager();
	TArray<TArray<ABG_Tile*>> TileGrid;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
