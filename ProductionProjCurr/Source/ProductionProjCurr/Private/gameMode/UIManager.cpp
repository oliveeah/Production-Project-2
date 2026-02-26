// Fill out your copyright notice in the Description page of Project Settings.

#include "gameMode/UIManager.h"
#include "Blueprint/UserWidget.h"

UUIManager::UUIManager()
{
	PlayerAWidget = CreateDefaultSubobject<UUserWidget>(TEXT("PlayerAWidget"));
	PlayerBWidget = CreateDefaultSubobject<UUserWidget>(TEXT("PlayerBWidget"));

	if (PlayerAWidget != nullptr)
	{
		PlayerAWidget->SetVisibility(ESlateVisibility::Hidden);
	}

	if (PlayerBWidget != nullptr)
	{
		PlayerBWidget->SetVisibility(ESlateVisibility::Hidden);
	}
}

void UUIManager::ShowUIForPlayer(EActivePlayerSide PlayerSide)
{
	switch (PlayerSide)
	{
		case EActivePlayerSide::PlayerA:
			UE_LOG(LogTemp, Display, TEXT("Showing UI for Player A"));
			PlayerAWidget->SetVisibility(ESlateVisibility::Visible);
			PlayerBWidget->SetVisibility(ESlateVisibility::Hidden);
		// Implement logic to show Player A's UI
		break;
		case EActivePlayerSide::PlayerB:
			UE_LOG(LogTemp, Display, TEXT("Showing UI for Player B"));
			PlayerAWidget->SetVisibility(ESlateVisibility::Hidden);
			PlayerBWidget->SetVisibility(ESlateVisibility::Visible);
			// Implement logic to show Player B's UI
		break;
		case EActivePlayerSide::None:
			UE_LOG(LogTemp, Display, TEXT("No active player, hiding UI"));
			// Implement logic to hide UI or show default UI
		break;
		default:	
			UE_LOG(LogTemp, Warning, TEXT("Unknown player side"));
		break;
	}
}