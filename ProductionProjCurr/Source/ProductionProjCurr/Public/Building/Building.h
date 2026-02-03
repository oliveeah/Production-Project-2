// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "gameMode/Enum_PlayerSide.h"
#include "Building.generated.h"

class USkeletalMeshComponent;
class ABG_Tile;
UCLASS()
class PRODUCTIONPROJCURR_API ABuilding : public AActor
{
	GENERATED_BODY()
private:
	int		  buildingHealth = 3;
	FIntPoint GridPosition;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:		
	
	// Sets default values for this actor's properties
	ABuilding();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components")
	USceneComponent* RootComp;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components")
	USkeletalMeshComponent* BuildingMesh;

	void SetGridPosition(const FIntPoint& NewPos) { GridPosition = NewPos; }

	
		UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	EActivePlayerSide owningPlayer;

	void SetOwningPlayer(EActivePlayerSide newOwner) { owningPlayer = newOwner; }
};
