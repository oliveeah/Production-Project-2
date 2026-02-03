// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "gameMode/Enum_PlayerSide.h"
#include "Troop.generated.h"


class USkeletalMeshComponent;
class ABG_Tile;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(
	FOnIsMovingChanged,
	bool,
	NewValue);


UCLASS()
class PRODUCTIONPROJCURR_API ATroop : public AActor
{
	GENERATED_BODY()
private:
	int		  troopHealth = 3;
	FIntPoint GridPosition;
	int		  troopDamage = 1;

	
	FVector MoveTarget;
	UPROPERTY(EditAnywhere, Category = "Movement")
	float	MoveInterpSpeed = 6.f;

	UPROPERTY(EditAnywhere, Category = "Movement")
	float	SnapDistance = 5.f;

	ABG_Tile* TargetTile = nullptr;
	UPROPERTY()
	bool bIsMoving = false;



public:	
	// Sets default values for this actor's properties
	ATroop();



	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components")
	USceneComponent* RootComp;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components")
	USkeletalMeshComponent* TroopMesh;

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnIsMovingChanged OnIsMovingChanged;

	void SetGridPosition(const FIntPoint& NewPos) { GridPosition = NewPos; }
	void SetTroopHealth(int NewHealth) { troopHealth = NewHealth; }
	void SetTroopDamage(int NewDamage) { troopDamage = NewDamage; }

	virtual bool CanMoveTo(const FIntPoint& Target, TArray<FIntPoint> Neighbors) const;
	virtual void MoveToTile(class ABG_Tile* Tile);

	UFUNCTION(BlueprintCallable)
	void setIsMoving(bool NewIsMoving) 
	{ 
		if (bIsMoving != NewIsMoving)
		{
			bIsMoving = NewIsMoving; 
			OnIsMovingChanged.Broadcast(bIsMoving);
		}
	}	
	bool getIsMoving() const { return bIsMoving; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;



public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

		UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	EActivePlayerSide owningPlayer;

	void SetOwningPlayer(EActivePlayerSide newOwner) { owningPlayer = newOwner; }
};
