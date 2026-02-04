// Fill out your copyright notice in the Description page of Project Settings.


#include "Troop.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "tileSpawningLogic/BG_Tile.h"

// Sets default values
ATroop::ATroop()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	RootComponent = RootComp;
	TroopMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("TroopMesh"));
	TroopMesh->SetupAttachment(RootComp);

}

bool ATroop::CanMoveTo(const FIntPoint& Target, TArray<FIntPoint> Neighbors) const
{
	for (int i = 0; i < Neighbors.Num(); i++)
	{
		if (Neighbors[i] == Target)
		{
			return true;
		}
	}
	return false;
}

void ATroop::MoveToTile(ABG_Tile* Tile)
{
	if (!Tile || !Tile->tileMesh)
		return;
	
	TargetTile = Tile;
	this->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);

	MoveTarget = Tile->tileMesh->GetSocketLocation("TroopSpawnSocket");

	MoveTarget.Z = GetActorLocation().Z;

	FVector ToTarget = MoveTarget - GetActorLocation();

	if (!ToTarget.IsNearlyZero())
	{
		SetActorRotation(ToTarget.Rotation());
	}

	setIsMoving(true);
	SetActorTickEnabled(true);
}





// Called when the game starts or when spawned
void ATroop::BeginPlay()
{
	Super::BeginPlay();
	
	if (TroopMesh && TroopMesh->GetMaterial(0))
	{
		TroopMID = UMaterialInstanceDynamic::Create(
			TroopMesh->GetMaterial(0),
			this);
	}
	TroopMesh->SetMaterial(0, TroopMID);
}

// Called every frame
void ATroop::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bIsMoving)
	{
		FVector TargetLocation = MoveTarget;
		FVector CurrentLocation = GetActorLocation();

		FVector NewLocation = FMath::VInterpTo
		(
			CurrentLocation,
			TargetLocation,
			DeltaTime,
			MoveInterpSpeed
		);

		SetActorLocation(NewLocation);

		if (FVector::Dist(GetActorLocation(), MoveTarget) < SnapDistance)
		{
			if (!TargetTile)
				return;

				setIsMoving(false);
				AttachToComponent(
				TargetTile->tileMesh,
				FAttachmentTransformRules::KeepWorldTransform,
				"TroopSpawnSocket");

			SetActorLocation(MoveTarget);
			SetGridPosition(TargetTile->getGridCoordinates());
			SetActorTickEnabled(false);
			TargetTile = nullptr;
		}
	}
}

void ATroop::SetTeamColor(const FLinearColor& NewColor)
{
	TroopMID->SetVectorParameterValue("TeamColor", NewColor);
}

