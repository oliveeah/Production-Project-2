// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "gameMode/Enum_PlayerSide.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Troop.generated.h"


class USkeletalMeshComponent;
class ABG_Tile;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(
	FOnIsMovingChanged,
	bool,
	NewValue);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(
	FOnIsAttackingChanged,
	bool,
	NewValue);

DECLARE_DYNAMIC_MULTICAST_DELEGATE(
	FOnTroopDeath);

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

	UPROPERTY()
	bool bIsAttacking = false;


public:	
	// Sets default values for this actor's properties
	ATroop();



	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components")
	USceneComponent* RootComp;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components")
	USkeletalMeshComponent* TroopMesh;

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnIsMovingChanged OnIsMovingChanged;

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnIsAttackingChanged OnIsAttackingChanged;

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnTroopDeath OnTroopDeath;

	void SetGridPosition(const FIntPoint& NewPos) { GridPosition = NewPos; }
	void SetTroopHealth(int NewHealth) 
	{ 
		troopHealth = NewHealth;

		if (troopHealth <= 0)
		{
			TroopDeath();
			OnTroopDeath.Broadcast();
		}
	}
	void SetTroopDamage(int NewDamage) { troopDamage = NewDamage; }

	int GetTroopHealth() const { return troopHealth; }
	int GetTroopDamage() const { return troopDamage; }

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

	UFUNCTION(BlueprintCallable)
	void setIsAttacking(bool NewIsAttacking)
	{
		if (bIsAttacking != NewIsAttacking)
		{
			bIsAttacking = NewIsAttacking;
			OnIsAttackingChanged.Broadcast(bIsAttacking);
		}
	}
	bool getIsAttacking() const { return bIsAttacking; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

		UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	EActivePlayerSide owningPlayer;

	void SetOwningPlayer(EActivePlayerSide newOwner) { owningPlayer = newOwner; }

	void SetTroopTeamColor(const FLinearColor& NewColor);

	void TroopDeath();

	UPROPERTY()
	UMaterialInstanceDynamic* TroopMID;
};
