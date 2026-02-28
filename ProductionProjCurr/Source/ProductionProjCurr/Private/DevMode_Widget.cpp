// Fill out your copyright notice in the Description page of Project Settings.


#include "DevMode_Widget.h"
#include <Kismet/GameplayStatics.h>
#include "tileSpawningLogic/TileManager.h"
#include "Occupant/Occupant_BaseClass.h"
#include "Occupant/Occupant_Troop_BaseClass.h"
#include "Occupant/Occupant_Building_BaseClass.h"
#include "Engine/World.h"           // For GetWorld()
#include "EngineUtils.h"            // For TActorIterator
#include <vector>

void UDevMode_Widget::NativeConstruct()
{
	Super::NativeConstruct();

	if (WidgetTitle)
	{
		WidgetTitle->SetText(FText::FromString(TEXT("Developer Widget")));
	}
	if (SelectedTile)
	{
		SelectedTile->SetText(FText::FromString(TEXT("Selected Tile: N/A")));
	}


	initializeButtonLabels();

	if (ShowTileCoord_Button)
	{
		ShowTileCoord_Button->OnClicked.AddDynamic(this, &UDevMode_Widget::ShowTileCoord_ButtonClicked);
	}
	if (ShowAdjacentTiles_Button)
	{
		ShowAdjacentTiles_Button->OnClicked.AddDynamic(this, &UDevMode_Widget::ShowAdjacentTiles_ButtonClicked);
	}
	if (OwnTiles_Button)
	{
		OwnTiles_Button->OnClicked.AddDynamic(this, &UDevMode_Widget::OwnTiles_ButtonClicked);
	}
	if (SwapCurrentPlayer_Button)
	{
		SwapCurrentPlayer_Button->OnClicked.AddDynamic(this, &UDevMode_Widget::SwapCurrentPlayer_ButtonClicked);
	}
	if (SpawnTroopAtSelectedTile_Button)
	{
		SpawnTroopAtSelectedTile_Button->OnClicked.AddDynamic(this, &UDevMode_Widget::SpawnTroopAtSelectedTile_ButtonClicked);
	}
	if (SpawnBuildingAtSelectedTile_Button)
	{
		SpawnBuildingAtSelectedTile_Button->OnClicked.AddDynamic(this, &UDevMode_Widget::SpawnBuildingAtSelectedTile_ButtonClicked);
	}
	if (EndGame_Button)
	{
		EndGame_Button->OnClicked.AddDynamic(this, &UDevMode_Widget::EndGame_ButtonClicked);
	}
	// Find the first TileManager actor in the current world and assign it
	for (TActorIterator<ATileManager> It(GetWorld()); It; ++It)
	{
		DevTileManager = *It;
		UE_LOG(LogTemp, Display, TEXT("DevTileManager found and assigned!"));
		break;
	}

	if (!DevTileManager)
	{
		UE_LOG(LogTemp, Warning, TEXT("Failed to find TileManager in the level!"));
	}

	for (TActorIterator<ATurnManager> It(GetWorld()); It; ++It)
	{
		turnManager = *It;
		UE_LOG(LogTemp, Display, TEXT("TurnManager found and assigned!"));
		break;
	}

	if (!turnManager)
	{
		UE_LOG(LogTemp, Warning, TEXT("Failed to find TurnManager in the level!"));
	}
}

void UDevMode_Widget::initializeButtonLabels()
{
	TArray<UButton*> Buttons = {
		ShowTileCoord_Button,
		ShowAdjacentTiles_Button,
		OwnTiles_Button,
		SwapCurrentPlayer_Button,
		SpawnTroopAtSelectedTile_Button,
		SpawnBuildingAtSelectedTile_Button,
		EndGame_Button
	};

	TArray<UTextBlock*> Labels = {
		ShowTileCoord_ButtonLabel,
		ShowAdjacentTiles_ButtonLabel,
		OwnTiles_ButtonLabel,
		SwapCurrentPlayer_ButtonLabel,
		SpawnTroopAtSelectedTiled_ButtonLabel,
		SpawnBuildingAtSelectedTile_ButtonLabel,
		EndGame_ButtonLabel
	};

	TArray<FString> LabelTexts = {
		TEXT("Show Tile Coordinates"),
		TEXT("Show Adjacent Tiles"),
		TEXT("Own Tiles"),
		TEXT("Swap Current Player"),
		TEXT("Spawn Troop At Selected Tile"),
		TEXT("Spawn Building At Selected Tile"),
		TEXT("End Game")
	};

	for (int32 i = 0; i < Buttons.Num(); ++i)
	{
		if (Buttons[i])
		{
			generateButtonLabelText(Labels[i], LabelTexts[i]);
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Button at index %d is not valid!"), i);
		}
	}
}

void UDevMode_Widget::ShowTileCoord_ButtonClicked()
{
	UE_LOG(LogTemp, Display, TEXT("show tile coord button clicked"));

	if (AProductionProjCurrGameMode* GameMode = Cast<AProductionProjCurrGameMode>(UGameplayStatics::GetGameMode(this)))
	{
		GameMode->ToggleTileDebugCoordinates(); 
	}
}

void UDevMode_Widget::ShowAdjacentTiles_ButtonClicked()
{
	UE_LOG(LogTemp, Display, TEXT("show adjacent tiles button clicked"));

	if(DevTileManager)
	{
		TArray<FIntPoint> Neighbours = DevTileManager->GetAdjacentTiles(true, 0, DevTileManager->SelectedTile);
		for (int i = 0; i < Neighbours.Num(); i++)
		{
			UE_LOG(LogTemp, Display, TEXT("Neighbour Tile Coords: (%d, %d)"), Neighbours[i].X, Neighbours[i].Y);
		}
	}
}

void UDevMode_Widget::OwnTiles_ButtonClicked()
{
	if (SelectedTile)
	{
		if (DevTileManager)
		{
			FString coords = DevTileManager->GetSelectedTileCoordinates();
			SelectedTile->SetText(FText::FromString(FString::Printf(TEXT("Selected Tile: %s"), *coords)));
		}
		else
		{
			UE_LOG(LogTemp, Display, TEXT("fail"));
			SelectedTile->SetText(FText::FromString(TEXT("Selected Tile: N/A")));
		}


	}
}

void UDevMode_Widget::SwapCurrentPlayer_ButtonClicked()
{
	UE_LOG(LogTemp, Display, TEXT("swap current player button clicked"));
	if (!turnManager)
	{
		UE_LOG(LogTemp, Warning, TEXT("TurnManager not assigned in DevMode_Widget!"));
		return;
	}
	turnManager->PassTurn();
}

void UDevMode_Widget::SpawnTroopAtSelectedTile_ButtonClicked()
{
	if (DevTileManager)
	{
		if (DevTileManager->SelectedTile)
		{
			DevTileManager->spawnTroop(TroopToSpawn, DevTileManager->SelectedTile);
			UE_LOG(LogTemp, Display, TEXT("Spawned troop at selected tile"));
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("No tile selected to spawn troop on!"));
		}
	}
}

void UDevMode_Widget::SpawnBuildingAtSelectedTile_ButtonClicked()
{
	if (DevTileManager)
	{
		if (DevTileManager->SelectedTile)
		{
			DevTileManager->spawnTroop(BuildingToSpawn, DevTileManager->SelectedTile);
			UE_LOG(LogTemp, Display, TEXT("Spawned building at selected tile"));
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("No tile selected to spawn building on!"));
		}
	}
}

void UDevMode_Widget::EndGame_ButtonClicked()
{
	if (AProductionProjCurrGameMode* GameMode = Cast<AProductionProjCurrGameMode>(UGameplayStatics::GetGameMode(this)))
	{
		GameMode->SetGameActive(false);
	}
}

void UDevMode_Widget::generateButtonLabelText(UTextBlock* buttonLabel, const FString& labelText)
{
	if (buttonLabel)
	{
		buttonLabel->SetText(FText::FromString(labelText));
	}
}

