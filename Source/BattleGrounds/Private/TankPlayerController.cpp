// Fill out your copyright notice in the Description page of Project Settings.


#include "public/TankPlayerController.h"
#include "public/Tank.h"


void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("PlayerController begin play"));
}

ATank* ATankPlayerController::GetControllerTank() const
{
	return Cast<ATank>(GetPawn());
}

