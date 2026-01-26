// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "UObject/ConstructorHelpers.h"

#include "Components/StaticMeshComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BG_Tile.generated.h"


UCLASS()
class PRODUCTIONPROJCURR_API ABG_Tile : public AActor
{
	GENERATED_BODY()

	public:
	// Sets default values for this actor's properties
		ABG_Tile()
		{
			PrimaryActorTick.bCanEverTick = false;


			tileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("tile mesh"));
			SetRootComponent(tileMesh);

			tileEdgeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("tile edge mesh"));
			tileEdgeMesh->SetupAttachment(tileMesh);


			tileMesh->SetBoundsScale(1000.0f);
			tileMesh->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
			tileMesh->SetCollisionResponseToAllChannels(ECR_Ignore);
			tileMesh->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);
		};

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
		UStaticMeshComponent* tileMesh;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
		UStaticMeshComponent* tileEdgeMesh;

		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Tile Info")
		FVector2D gridCoordinates;
};