// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "gameMode/ProductionProjCurrGameMode.h"
#include "DevMode_Widget.generated.h"

class ATileManager;
/**
 * 
 */
UCLASS()
class PRODUCTIONPROJCURR_API UDevMode_Widget : public UUserWidget
{
	GENERATED_BODY()

	protected:
	virtual void NativeConstruct() override;

	void generateButtonLabelText(UTextBlock* buttonLabel, const FString& labelText);
	void initializeButtonLabels();

	// callbacks
	UFUNCTION()
	void ShowTileCoord_ButtonClicked();

	UFUNCTION()
	void ShowAdjacentTiles_ButtonClicked();

	UFUNCTION()
	void OwnTiles_ButtonClicked();

	UFUNCTION()
	void SwapCurrentPlayer_ButtonClicked();

	UFUNCTION()
	void SpawnTroopAtSelectedTile_ButtonClicked();

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	TObjectPtr<UButton> SpawnTroopAtSelectedTile_Button;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidgetOptional))
	TObjectPtr<UTextBlock> SpawnTroopAtSelectedTiled_ButtonLabel;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	TObjectPtr<UButton> ShowTileCoord_Button;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidgetOptional))
	TObjectPtr<UTextBlock> ShowTileCoord_ButtonLabel;
	
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	TObjectPtr<UButton> ShowAdjacentTiles_Button;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidgetOptional))
	TObjectPtr<UTextBlock> ShowAdjacentTiles_ButtonLabel;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	TObjectPtr<UButton> OwnTiles_Button;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidgetOptional))
	TObjectPtr<UTextBlock> OwnTiles_ButtonLabel;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	TObjectPtr<UButton> SwapCurrentPlayer_Button;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidgetOptional))
	TObjectPtr<UTextBlock> SwapCurrentPlayer_ButtonLabel;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	TObjectPtr<UTextBlock> WidgetTitle;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidgetOptional))
	TObjectPtr<UTextBlock> SelectedTile;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "TileManager")
	ATileManager* DevTileManager;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TileManager")
	TSubclassOf<class ATroop> TroopToSpawn;
};
