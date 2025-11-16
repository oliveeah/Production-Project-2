// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BG_Tile.generated.h"




UCLASS()
class PRODUCTIONPROJCURR_API ABG_Tile : public AActor
{
	GENERATED_BODY()



	/*UPROPERTY(VisibleAnywhere, Category = "Components")
	USceneComponent* rootComponent;*/

public:
	// Sets default values for this actor's properties
	ABG_Tile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void OnConstruction(const FTransform& transform) override;

public:	//functions
	// Called every frame
	virtual void Tick(float DeltaTime) override;


public://variables

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	UStaticMeshComponent* tileMesh;

	enum clearingType { clearing1, clearing2, clearing3, clearing4 };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	TArray<UMaterialInterface*> MAT_Array;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	UMaterialInterface* overlayMAT;

	int32 generateRandomNumber();

	UFUNCTION()
	void OnBeginMouseOverTile(UPrimitiveComponent* TouchedComponent);

	UFUNCTION()
	void OnEndMouseOverTile(UPrimitiveComponent* TouchedComponent);
};