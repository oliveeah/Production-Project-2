// Fill out your copyright notice in the Description page of Project Settings.


#include "DevMode_Widget.h"
#include <Kismet/GameplayStatics.h>

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
}

void UDevMode_Widget::initializeButtonLabels()
{
	TArray<UButton*> Buttons = {
		ShowTileCoord_Button,
		ShowAdjacentTiles_Button,
		OwnTiles_Button,
		SwapCurrentPlayer_Button
	};

	TArray<UTextBlock*> Labels = {
		ShowTileCoord_ButtonLabel,
		ShowAdjacentTiles_ButtonLabel,
		OwnTiles_ButtonLabel,
		SwapCurrentPlayer_ButtonLabel
	};

	TArray<FString> LabelTexts = {
		TEXT("Show Tile Coordinates"),
		TEXT("Show Adjacent Tiles"),
		TEXT("Own Tiles"),
		TEXT("Swap Current Player")
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
}

void UDevMode_Widget::OwnTiles_ButtonClicked()
{
	UE_LOG(LogTemp, Display, TEXT("own tiles button clicked"));
}

void UDevMode_Widget::SwapCurrentPlayer_ButtonClicked()
{
	UE_LOG(LogTemp, Display, TEXT("swap current player button clicked"));
}

void UDevMode_Widget::generateButtonLabelText(UTextBlock* buttonLabel, const FString& labelText)
{
	if (buttonLabel)
	{
		buttonLabel->SetText(FText::FromString(labelText));
	}
}

