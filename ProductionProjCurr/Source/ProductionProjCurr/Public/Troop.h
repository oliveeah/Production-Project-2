// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Troop.generated.h"

UCLASS()
class PRODUCTIONPROJCURR_API ATroop : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATroop();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components")
	UStaticMeshComponent* TroopMesh;

	int troopHealth;
	FIntPoint GridPos;
	int troopDamage;

	virtual bool CanMoveTo(const FIntPoint& Target) const;
	virtual void MoveToTile(class ABG_Tile* Tile);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
