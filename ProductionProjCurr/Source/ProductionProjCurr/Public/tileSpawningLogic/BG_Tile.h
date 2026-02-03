// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "playerData/InteractionInterface.h"
#include "Components/DecalComponent.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "tileSpawningLogic/TileHighlightState.h"
#include "gameMode/Enum_PlayerSide.h"
#include "BG_Tile.generated.h"

class ATroop;
class ABuilding;

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
private:
	bool isPlayingEffect = false;

	UPROPERTY(VisibleAnywhere)
	ATroop* occupyingTroopClass;
	UPROPERTY(VisibleAnywhere)

	ETileHighlightState currentHighlightType = ETileHighlightState::None;

	UPROPERTY(EditAnywhere, Category = "Tile Spawn")
	bool bCanSpawnTroopOnTile = true;

	UPROPERTY(EditAnywhere, Category = "Tile Spawn")
	bool bBuildingCanBePlacedOnTile = true;

	UPROPERTY(VisibleAnywhere)
	ABuilding* occupyingBuildingClass;

	bool bHasBuilding = false;

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

		void	SetOccupyingTroop(ATroop* Troop) { occupyingTroopClass = Troop; }
		ATroop* getOccupyingTroop() const { return occupyingTroopClass; }



		void removeOutlineEffect();
		void addOutlineEffect(const FLinearColor& color);

		UPROPERTY()
		UMaterialInstanceDynamic* HexDecalMID;

		bool getIsPlayingEffect() const { return isPlayingEffect; }
		void SetHighlightType(ETileHighlightState newType) { currentHighlightType = newType; }
		ETileHighlightState& getHighlightType() { return currentHighlightType; }

		bool getCanSpawnTroopOnTile() const { return bCanSpawnTroopOnTile; }

		bool getBuildingCanBePlacedOnTile() const { return bBuildingCanBePlacedOnTile; }
		ABuilding* getOccupyingBuilding() const { return occupyingBuildingClass; }
		void SetOccupyingBuilding(ABuilding* Building) { occupyingBuildingClass = Building; }

		bool getHasBuilding() const { return bHasBuilding; }
		void setHasBuilding(bool hasBuilding) { bHasBuilding = hasBuilding; }

		UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		EActivePlayerSide owningPlayer =  EActivePlayerSide::None;

		void SetOwningPlayer(EActivePlayerSide newOwner) { owningPlayer = newOwner; }
};