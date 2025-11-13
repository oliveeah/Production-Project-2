// Fill out your copyright notice in the Description page of Project Settings.


#include "BG_Token.h"
#include "UObject/ConstructorHelpers.h"

#include "Components/StaticMeshComponent.h"
// Sets default values
ABG_Token::ABG_Token()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	tokenMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("token mesh"));
	SetRootComponent(tokenMesh);

	ConstructorHelpers::FObjectFinder<UStaticMesh> tokenMeshAsset(TEXT("/Game/boardGame/assets/tokenmesh.tokenmesh"));
	if (tokenMeshAsset.Succeeded())
	{
		tokenMesh->SetStaticMesh(tokenMeshAsset.Object);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Failed to load token mesh!"));
	}

	ConstructorHelpers::FObjectFinder<UMaterialInterface> MAT_One(TEXT("/Game/boardGame/assets/tile_MAT.tile_MAT"));
	ConstructorHelpers::FObjectFinder<UMaterialInterface> MAT_Two(TEXT("/Game/boardGame/assets/tile_MAT1.tile_MAT1"));
	ConstructorHelpers::FObjectFinder<UMaterialInterface> MAT_Three(TEXT("/Game/boardGame/assets/tile_MAT2.tile_MAT2"));
	ConstructorHelpers::FObjectFinder<UMaterialInterface> MAT_Four(TEXT("/Game/boardGame/assets/tile_MAT3.tile_MAT3"));

	if (MAT_One.Succeeded())  MAT_TokenArray.Add(MAT_One.Object);
	if (MAT_Two.Succeeded())  MAT_TokenArray.Add(MAT_Two.Object);
	if (MAT_Three.Succeeded())  MAT_TokenArray.Add(MAT_Three.Object);
	if (MAT_Four.Succeeded())  MAT_TokenArray.Add(MAT_Four.Object);

	tokenMesh->SetBoundsScale(1000.0f);

}

// Called when the game starts or when spawned
void ABG_Token::BeginPlay()
{
	Super::BeginPlay();
	

	int32 randomToken = generateRandomTokenNumber();
	tokenType tileTokenType;


	switch (randomToken)
	{
	case 0:
		tileTokenType = token1;

		break;
	case 1:
		tileTokenType = token2;

		break;
	case 2:
		tileTokenType = token3;

		break;
	case 3:
		tileTokenType = token4;

		break;
	}
	tokenMesh->SetMaterial(0, MAT_TokenArray[randomToken]);

}

// Called every frame
void ABG_Token::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

int32 ABG_Token::generateRandomTokenNumber()
{
	return FMath::RandRange(0, MAT_TokenArray.Num() - 1);
}

