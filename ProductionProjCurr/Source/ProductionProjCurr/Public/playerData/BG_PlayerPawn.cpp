// Fill out your copyright notice in the Description page of Project Settings.


#include "BG_PlayerPawn.h" //must be at top
#include <tileSpawningLogic/BG_Tile.h>




// Sets default values
ABG_PlayerPawn::ABG_PlayerPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Root component
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

	//spring arm
	springArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));	
	springArm->SetupAttachment(RootComponent);
	springArm->bUsePawnControlRotation = true;
	springArm->bDoCollisionTest = false;

	// Camera
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
	Camera->SetupAttachment(springArm);
	Camera->bUsePawnControlRotation = false;

	// spectator movement
	SpectatorMovementComponent = CreateDefaultSubobject<USpectatorPawnMovement>(TEXT("MovementComponent"));
	SpectatorMovementComponent->UpdatedComponent = RootComponent;

	// Control settings
	bUseControllerRotationPitch = true;
	bUseControllerRotationYaw = true;
	bUseControllerRotationRoll = false;

	//UI
	//UI_FactionCharacter = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("faction UI character"));
	//UI_FactionCharacter->SetupAttachment(Camera);

	AutoPossessPlayer = EAutoReceiveInput::Player0;
}

// Called when the game starts or when spawned
void ABG_PlayerPawn::BeginPlay()
{
	Super::BeginPlay();

	playerController = Cast<APlayerController>(GetController());

	if (playerController)
	{
		playerController->bShowMouseCursor = true;
		playerController->bEnableClickEvents = true;
		playerController->bEnableMouseOverEvents = true;

		FInputModeGameAndUI mode;
		playerController->SetInputMode(mode);
	}

	// Create the dev menu widget
	if (devMenuWidgetRef)
	{
		devMenuWidgetInstance = CreateWidget<UUserWidget>(GetWorld(), devMenuWidgetRef);
		
		if (devMenuWidgetInstance)
		{
			devMenuWidgetInstance->AddToViewport();
			devMenuWidgetInstance->SetVisibility(ESlateVisibility::Hidden);
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Failed to create dev menu widget!"));
		}
	}
}

// Called every frame
void ABG_PlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABG_PlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent)) {


		// Moving
		EnhancedInputComponent->BindAction(clickAction, ETriggerEvent::Triggered, this, &ABG_PlayerPawn::clickCallback);
		EnhancedInputComponent->BindAction(moveAction, ETriggerEvent::Triggered, this, &ABG_PlayerPawn::MoveCallback);
		EnhancedInputComponent->BindAction(lookAction, ETriggerEvent::Triggered, this, &ABG_PlayerPawn::LookCallback);
		EnhancedInputComponent->BindAction(scrollAction, ETriggerEvent::Triggered, this, &ABG_PlayerPawn::scrollCallback);

		//developer
		EnhancedInputComponent->BindAction(openDevMenu, ETriggerEvent::Triggered, this, &ABG_PlayerPawn::OpenDevMenuCallback);

	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("'%s' Failed to find an Enhanced Input component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}

void ABG_PlayerPawn::MoveCallback(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	// route the input
	DoMove(MovementVector.X, MovementVector.Y);
}

void ABG_PlayerPawn::LookCallback(const FInputActionValue& Value)
{
	FVector2D InputVector = Value.Get<FVector2D>();

	if (IsValid(Controller))
	{
		AddControllerYawInput(InputVector.X);
		AddControllerPitchInput(InputVector.Y);
	}
}


void ABG_PlayerPawn::DoMove(float Right, float Forward)
{
	if (GetController() != nullptr)
	{
		// find out which way is forward
		const FRotator Rotation = GetController()->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		// get right vector 
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// add movement 
		AddMovementInput(ForwardDirection, Forward);
		AddMovementInput(RightDirection, Right);
	}
}

void ABG_PlayerPawn::OpenDevMenuCallback(const FInputActionValue& Value)
{
	if (devMenuWidgetInstance->IsVisible())
	{
		devMenuWidgetInstance->SetVisibility(ESlateVisibility::Hidden);
	}
	else
	{
		devMenuWidgetInstance->SetVisibility(ESlateVisibility::Visible);
	}
}

void ABG_PlayerPawn::clickCallback()
{
	UE_LOG(LogTemp, Display, TEXT("click callback called"));

	if (!playerController)
	{
		return;
	}

	// Get the mouse cursor position and perform a line trace
	FHitResult HitResult;
	bool bHit = playerController->GetHitResultUnderCursor(ECC_Visibility, false, HitResult);

	if (bHit)
	{
		UPrimitiveComponent* HitComponent = HitResult.GetComponent();
		
		if (HitComponent && HitComponent->ComponentHasTag(FName("Tile")))
		{
			AActor* HitActor = HitResult.GetActor();
			FString TileName = HitComponent->GetName();
			FVector HitLocation = HitResult.Location;

			UE_LOG(LogTemp, Warning, TEXT("Clicked on tile: %s at location: %s"), 
				*TileName, *HitLocation.ToString());

			// If you need to access the tile actor specifically
			if (ABG_Tile* Tile = Cast<ABG_Tile>(HitActor))
			{
				// Do something with the tile
				UE_LOG(LogTemp, Warning, TEXT("Clicked on ABG_Tile: %s"), *Tile->GetName());
				// You can call methods on the tile here
			}
		}
		else
		{
			UE_LOG(LogTemp, Display, TEXT("Clicked on non-tile object: %s"), 
				HitResult.GetActor() ? *HitResult.GetActor()->GetName() : TEXT("None"));
		}
	}
	else
	{
		UE_LOG(LogTemp, Display, TEXT("Click did not hit any object"));
	}
}

void ABG_PlayerPawn::scrollCallback(const FInputActionValue& Value)
{
	float scrollValue = Value.Get<float>();

	float armLength = springArm->TargetArmLength;

	springArm->TargetArmLength = ((scrollValue * 50.0f) + (armLength));
}