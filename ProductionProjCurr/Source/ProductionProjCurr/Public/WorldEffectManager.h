// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/DecalComponent.h"
#include "WorldEffectManager.generated.h"

class ABG_Tile;
UCLASS()
class PRODUCTIONPROJCURR_API AWorldEffectManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWorldEffectManager();

	UPROPERTY(VisibleAnywhere)
	UDecalComponent* TileDecal;

	UPROPERTY(EditDefaultsOnly)
	UMaterialInterface* DecalMaterial;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void AddDisplayTileOutline(ABG_Tile* TileToPlayEffect);
	void RemoveDisplayTileOutline(ABG_Tile* TileToPlayEffect);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Decal")
	float decalSpawnHeight;
};
