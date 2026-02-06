// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Occupant/Occupant_BaseClass.h"
#include "Components/StaticMeshComponent.h"
#include "Occupant_Building_BaseClass.generated.h"

/**
 * 
 */
UCLASS()
class PRODUCTIONPROJCURR_API AOccupant_Building_BaseClass : public AOccupant_BaseClass
{
	GENERATED_BODY()
	
	private:

	protected:

	public:
		virtual bool IsBuilding() const override { return true; }
		
		UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components")
		UStaticMeshComponent* StaticMesh;

		void BeginPlay() override;

		AOccupant_Building_BaseClass();
};
