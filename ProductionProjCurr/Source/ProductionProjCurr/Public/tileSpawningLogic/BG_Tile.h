// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "playerData/InteractionInterface.h"
#include "BG_Tile.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(
	FOnTileSelected,
	ABG_Tile*, 
	Tile);

UCLASS()
class PRODUCTIONPROJCURR_API ABG_Tile : public AActor, public IInteractionInterface
{
	GENERATED_BODY()



	public:
	// Sets default values for this actor's properties
		ABG_Tile();

		virtual void BeginPlay() override;

		UFUNCTION()
		void OnDebugToggled();

		virtual void ReactToPlayerInteraction_Implementation() override;

		void setSelectedTile();

		UPROPERTY(BlueprintAssignable, Category = "Tile Debug")

		FOnTileSelected OnTileSelectedDelegate;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
		UStaticMeshComponent* tileMesh;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
		UStaticMeshComponent* tileEdgeMesh;

		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Tile Info")
		FVector2D gridCoordinates;

		FVector2D getGridCoordinates() const { return gridCoordinates; }


};