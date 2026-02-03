// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "gameMode/Enum_PlayerSide.h"
#include "TurnManager.generated.h"

UCLASS()
class PRODUCTIONPROJCURR_API ATurnManager : public AActor
{
	GENERATED_BODY()
private:	
	UPROPERTY()
	EActivePlayerSide activePlayer = EActivePlayerSide::PlayerA;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	// Sets default values for this actor's properties
	ATurnManager();

	UFUNCTION()
	void PassTurn();

	EActivePlayerSide GetActivePlayer() const { return activePlayer; }

};
