// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
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

		virtual void BeginPlay() override;

		UFUNCTION()
		void OnDebugToggled();




		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
		UStaticMeshComponent* tileMesh;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
		UStaticMeshComponent* tileEdgeMesh;

		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Tile Info")
		FVector2D gridCoordinates;



};