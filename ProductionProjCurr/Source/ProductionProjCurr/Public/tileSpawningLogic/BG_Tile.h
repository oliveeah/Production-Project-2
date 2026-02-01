// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "playerData/InteractionInterface.h"
#include "Components/DecalComponent.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "BG_Tile.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(
	FOnTileSelected,
	ABG_Tile*, 
	Tile,
	bool,
	isOccupied);


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

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
		UDecalComponent* decalComponent;

		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Tile Info")
		FIntPoint gridCoordinates;

		FIntPoint getGridCoordinates() const { return gridCoordinates; }

		void drawDebugPointer(FColor color);

		UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		bool isOccupied = false;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tile Info")
		bool isSpawnableTile = true;

		UPROPERTY()
		TSubclassOf<class ATroop> occupyingTroopClass;
		UPROPERTY(VisibleAnywhere, BlueprintReadOnly)

		bool isPlayingEffect = false;

		void removeOutlineEffect();
		void addOutlineEffect(const FLinearColor& color);

		UPROPERTY()
		UMaterialInstanceDynamic* HexDecalMID;


};