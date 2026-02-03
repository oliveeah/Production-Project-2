// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProductionProjCurrGameMode.h"
#include "UObject/ConstructorHelpers.h"
#include "EngineUtils.h"  
#include "GameFramework/Actor.h"


void AProductionProjCurrGameMode::BeginPlay()
{
	Super::BeginPlay();

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

	bGameActive = true;

	//while (bGameActive)
	//{
		TurnLoop();

	//}

}

void AProductionProjCurrGameMode::OnConstruction(const FTransform& transform)
{
	//Super::OnConstruction(transform);

}

AProductionProjCurrGameMode::AProductionProjCurrGameMode()
{
//	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/RefactoredStuff/Blueprints/Animation/ABP_TestCharacter.ABP_TestCharacter"));
	//DefaultPawnClass = PlayerPawnClassFinder.Class;

	//static ConstructorHelpers::FClassFinder<UUserWidget> PlayerWidgetClassFinder(TEXT("/Game/MyStuff/Blueprints/UI/Player_Widget.Player_Widget"));
	//HUDClass = PlayerWidgetClassFinder.Class;

}

void AProductionProjCurrGameMode::TurnLoop()
{
	if (!turnManager)
		return;

	EActivePlayerSide activePlayer = turnManager->GetActivePlayer();

	if (activePlayer == EActivePlayerSide::PlayerA)
	{
		UE_LOG(LogTemp, Display, TEXT("Player A's turn"));
	}
	else if (activePlayer == EActivePlayerSide::PlayerB)
	{
		UE_LOG(LogTemp, Display, TEXT("Player B's turn"));
	}

//	while (activePlayer == turnManager->GetActivePlayer())
//	{
		// Wait for turn to end
//	}

}
