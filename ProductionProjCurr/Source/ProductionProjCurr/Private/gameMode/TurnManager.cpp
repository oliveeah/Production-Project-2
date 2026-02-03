// Fill out your copyright notice in the Description page of Project Settings.

#include "gameMode/TurnManager.h"

// Sets default values
ATurnManager::ATurnManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ATurnManager::PassTurn()
{
	if (activePlayer == EActivePlayerSide::PlayerA)
	{
		activePlayer = EActivePlayerSide::PlayerB;
		UE_LOG(LogTemp, Display, TEXT("Player B is active"));
	}
	else
	{
		activePlayer = EActivePlayerSide::PlayerA;
		UE_LOG(LogTemp, Display, TEXT("Player A is active"));

	}
}

// Called when the game starts or when spawned
void ATurnManager::BeginPlay()
{
	Super::BeginPlay();
	
}



