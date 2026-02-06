// Fill out your copyright notice in the Description page of Project Settings.


#include "Occupant/Occupant_Building_BaseClass.h"

void AOccupant_Building_BaseClass::BeginPlay()
{
	Super::BeginPlay();
	if (StaticMesh && StaticMesh->GetMaterial(0))
	{
		TeamMID = UMaterialInstanceDynamic::Create(
			StaticMesh->GetMaterial(0),
			this);
	}
	StaticMesh->SetMaterial(0, TeamMID);
}

AOccupant_Building_BaseClass::AOccupant_Building_BaseClass()
{
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMesh->SetupAttachment(RootComp);
}
