// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BG_Tile.generated.h"




UCLASS()
class PRODUCTIONPROJCURR_API ABG_Tile : public AActor
{
	GENERATED_BODY()

	public:
	// Sets default values for this actor's properties
	ABG_Tile();

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
		UStaticMeshComponent* tileMesh;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
		UStaticMeshComponent* tileEdgeMesh;
};