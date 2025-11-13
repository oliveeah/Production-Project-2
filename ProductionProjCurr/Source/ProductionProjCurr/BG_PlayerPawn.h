// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "InputAction.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "BG_PlayerPawn.generated.h"

UCLASS()
class PRODUCTIONPROJCURR_API ABG_PlayerPawn : public APawn
{
	GENERATED_BODY()

public:

	/** components  */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* Camera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement")
	class USpectatorPawnMovement* SpectatorMovementComponent;

	//input
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* moveAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* lookAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* clickAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* scrollAction;

	//UI
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="3D UI")
	USkeletalMeshComponent* UI_FactionCharacter;
protected:
	/** Called for movement input */
	void MoveCallback(const FInputActionValue& Value);

	/** Called for looking input */
	void LookCallback(const FInputActionValue& Value);

	UFUNCTION(BlueprintCallable, Category = "Input")
	virtual void clickCallback();

	UFUNCTION(BlueprintCallable, Category = "Input")
	virtual void scrollCallback(const FInputActionValue& Value);

	UFUNCTION(BlueprintCallable, Category = "Input")
	virtual void DoMove(float Right, float Forward);

public:
	// Sets default values for this pawn's properties
	ABG_PlayerPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

protected:



public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	float BaseZoomDistance = 800.f;        
	float TargetZoomDistance = 800.f;     
	float CurrentZoomDistance = 800.f;      
	float ZoomSpeed = 200.f;               
	float ZoomInterpSpeed = 8.f;           
};
