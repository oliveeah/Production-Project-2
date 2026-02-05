// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Occupant/Occupant_BaseClass.h"
#include "Occupant_Building_BaseClass.generated.h"

/**
 * 
 */
UCLASS()
class PRODUCTIONPROJCURR_API AOccupant_Building_BaseClass : public AOccupant_BaseClass
{
	GENERATED_BODY()
	
	private:


	public:
		virtual bool IsBuilding() const override { return true; }

};
