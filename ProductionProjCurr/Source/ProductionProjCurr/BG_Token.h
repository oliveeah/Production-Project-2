// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BG_Token.generated.h"

UCLASS()
class PRODUCTIONPROJCURR_API ABG_Token : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABG_Token();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	UStaticMeshComponent* tokenMesh;

	enum tokenType { token1, token2, token3, token4 };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	TArray<UMaterialInterface*> MAT_TokenArray;

	int32 generateRandomTokenNumber();

};
