// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BG_Tile.h"
#include "BG_TileSpawner.generated.h"

UCLASS()
class PRODUCTIONPROJCURR_API ABG_TileSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABG_TileSpawner();

	virtual void BeginPlay() override;

	virtual void OnConstruction(const FTransform& transform) override;

public:	//functions
	// Called every frame
	virtual void Tick(float DeltaTime) override;


public://variables

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	UStaticMeshComponent* staticMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	float tileWidth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	int32 numberOfColumns;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	int32 numberOfRows;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")

	float xSpawnOffset;


	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Components")
	TSubclassOf<ABG_Tile> TileClass;
};
