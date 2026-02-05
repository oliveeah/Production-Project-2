// Fill out your copyright notice in the Description page of Project Settings.


#include "Occupant/Occupant_Building_BaseClass.h"

void AOccupant_Building_BaseClass::BeginPlay()
{
	if (SkeletalMesh && SkeletalMesh->GetMaterial(0))
	{
		TeamMID = UMaterialInstanceDynamic::Create(
			SkeletalMesh->GetMaterial(0),
			this);
	}
	SkeletalMesh->SetMaterial(0, TeamMID);
}
