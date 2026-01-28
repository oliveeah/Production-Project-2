// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "InputAction.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/SpectatorPawnMovement.h"

#include "DevMode_Widget.h"

#include "BG_PlayerPawn.generated.h"



UCLASS()
class PRODUCTIONPROJCURR_API ABG_PlayerPawn : public APawn
{
	GENERATED_BODY()

public:

	/** components  */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* Camera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* springArm;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement")
	class USpectatorPawnMovement* SpectatorMovementComponent;

	//UI
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="3D UI")
	USkeletalMeshComponent* UI_FactionCharacter;
protected:


	// developer-----------------

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:		
	// Sets default values for this pawn's properties
	ABG_PlayerPawn();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//developer
	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TSubclassOf<UUserWidget> devMenuWidgetRef;
	UPROPERTY()
	class UUserWidget* devMenuWidgetInstance; 

	void ToggleDevMenu();

	void AdjustCameraZoom(float scrollAmount);

	// developer
};
