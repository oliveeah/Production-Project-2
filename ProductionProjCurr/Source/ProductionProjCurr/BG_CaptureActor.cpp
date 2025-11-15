// Fill out your copyright notice in the Description page of Project Settings.


#include "BG_CaptureActor.h"

// Sets default values
ABG_CaptureActor::ABG_CaptureActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABG_CaptureActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABG_CaptureActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

