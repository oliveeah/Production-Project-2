// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Troop.generated.h"

class UStaticMeshComponent;
class UCapsuleComponent;
class ABG_Tile;

UCLASS()
class PRODUCTIONPROJCURR_API ATroop : public AActor
{
	GENERATED_BODY()
private:
	int		  troopHealth = 3;
	FIntPoint GridPosition;
	int		  troopDamage = 1;

public:	
	// Sets default values for this actor's properties
	ATroop();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components")
	USceneComponent* RootComp;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components")
	UStaticMeshComponent* TroopMesh;



	void SetGridPosition(const FIntPoint& NewPos) { GridPosition = NewPos; }
	void SetTroopHealth(int NewHealth) { troopHealth = NewHealth; }
	void SetTroopDamage(int NewDamage) { troopDamage = NewDamage; }

	void DeleteTroop()
	{
		Destroy();
		UE_LOG(LogTemp, Display, TEXT("delete troop called on troop"));
	}

	virtual bool CanMoveTo(const FIntPoint& Target, TArray<FIntPoint> Neighbors) const;
	virtual void MoveToTile(class ABG_Tile* Tile);




protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


};
