// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ProductionProjCurrGameMode.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnToggleTileDebugCoordinates);
/**
 *  Simple GameMode for a third person game
 */
UCLASS(abstract)
class AProductionProjCurrGameMode : public AGameModeBase
{
	GENERATED_BODY()

protected:

	virtual void BeginPlay() override;

	virtual void OnConstruction(const FTransform& transform) override;
public:
	
	/** Constructor */
	AProductionProjCurrGameMode();

	UPROPERTY(BlueprintAssignable, Category = "Tile Debug")
	FOnToggleTileDebugCoordinates OnToggleTileDebugCoordinates;

	UFUNCTION(BlueprintCallable, Category = "Tile Debug")
	void ToggleTileDebugCoordinates()
	{
		OnToggleTileDebugCoordinates.Broadcast();
	}

};



