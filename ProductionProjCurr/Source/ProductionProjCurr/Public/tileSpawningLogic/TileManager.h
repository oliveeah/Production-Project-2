// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <vector>
#include "TileManager.generated.h"

// Forward declarations to break circular includes
class ABG_Tile;
class ABG_TileSpawner;

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


	UPROPERTY(BlueprintReadOnly)
	ABG_Tile* SelectedTile;

	FString& GetSelectedTileCoordinates();
	
	UFUNCTION()
	// Called to bind tile delegates
	void OnTileClicked(ABG_Tile* Tile);

	// Returns neighbors
	TArray<FVector2D> GetAdjacentTiles(bool bIncludeDiagonals);

void checkTile(int xToCheck, int yToCheck, TArray<FVector2D>& Neighbors);
};
