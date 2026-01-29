// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "MyPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class PRODUCTIONPROJCURR_API AMyPlayerState : public APlayerState
{
	GENERATED_BODY()

private:
	UPROPERTY()
	FString PlayerName;
	UPROPERTY()
	int32 PlayerID;

public:
	UPROPERTY()
	int32 PlayerScore;
	UPROPERTY()
	int32 NumberOfResources;

	FString GetPlayerName() const 
	{
		return PlayerName; 
	}
	int32 GetPlayerID() const
	{
		return PlayerID;
	}
};