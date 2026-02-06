// Fill out your copyright notice in the Description page of Project Settings.


#include "Occupant/Occupant_Troop_BaseClass.h"
#include "tileSpawningLogic/BG_Tile.h"

void AOccupant_Troop_BaseClass::SetHealth(int32 NewHealth)
{
	Health = NewHealth;
	if (Health <= 0)
	{
		OnTroopDeath.Broadcast();
		TroopDeath();
	}
}

void AOccupant_Troop_BaseClass::SetDamage(int NewDamage)
{
	Damage = NewDamage;
}

void AOccupant_Troop_BaseClass::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bIsMoving)
	{
		FVector TargetLocation = MoveTarget;
		FVector CurrentLocation = GetActorLocation();

		FVector NewLocation = FMath::VInterpTo(
			CurrentLocation,
			TargetLocation,
			DeltaTime,
			MoveInterpSpeed);

		SetActorLocation(NewLocation);

		if (FVector::Dist(GetActorLocation(), MoveTarget) < SnapDistance)
		{
			if (!TargetTile)
				return;

			SetIsMoving(false);
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

AOccupant_Troop_BaseClass::AOccupant_Troop_BaseClass()
{
	PrimaryActorTick.bCanEverTick = true;

	SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
	SkeletalMesh->SetupAttachment(RootComp);
}

void AOccupant_Troop_BaseClass::BeginPlay()
{
	Super::BeginPlay();
	if (SkeletalMesh && SkeletalMesh->GetMaterial(0))
	{
		TeamMID = UMaterialInstanceDynamic::Create(
			SkeletalMesh->GetMaterial(0),
			this);
	}
	SkeletalMesh->SetMaterial(0, TeamMID);
}


bool AOccupant_Troop_BaseClass::CanMoveTo(const FIntPoint& Target, TArray<FIntPoint> Neighbors) const
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

void AOccupant_Troop_BaseClass::MoveToTile(ABG_Tile* Tile)
{
	if (!Tile || !Tile->tileMesh)
		return;

	TargetTile = Tile;
	this->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);

	MoveTarget = Tile->tileMesh->GetSocketLocation("TroopSpawnSocket");

	FVector ToTarget = MoveTarget - GetActorLocation();

	if (!ToTarget.IsNearlyZero())
	{
		SetActorRotation(ToTarget.Rotation());
	}

	SetIsMoving(true);
	SetActorTickEnabled(true);
}
