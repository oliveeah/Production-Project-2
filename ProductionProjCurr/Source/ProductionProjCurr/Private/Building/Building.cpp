// Fill out your copyright notice in the Description page of Project Settings.


#include "Building/Building.h"

// Sets default values
ABuilding::ABuilding()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	RootComponent = RootComp;
	BuildingMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BuildingMesh"));
	BuildingMesh->SetupAttachment(RootComp);


}

// Called when the game starts or when spawned
void ABuilding::BeginPlay()
{
	Super::BeginPlay();

	if (BuildingMesh && BuildingMesh->GetMaterial(0))
	{
		BuildingMID = UMaterialInstanceDynamic::Create(
			BuildingMesh->GetMaterial(0),
			this);
	}
	BuildingMesh->SetMaterial(0, BuildingMID);
}

// Called every frame
void ABuilding::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABuilding::BSetBuildingTeamColor(const FLinearColor& NewColor)
{
	BuildingMID->SetVectorParameterValue("TeamColor", NewColor);
}

