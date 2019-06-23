// Fill out your copyright notice in the Description page of Project Settings.


#include "public/TankPlayerController.h"
#include "public/Tank.h"


void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();

	auto ControlledTank = GetControlledTank();
	if (!ControlledTank) 
	{
		UE_LOG(LogTemp, Warning, TEXT("PLayer controller not possessing a tank!"));
	}
	else 
	{
		UE_LOG(LogTemp, Warning, TEXT("Playercontroller possess: %s"), *(ControlledTank->GetName()));
	}
	
}

ATank* ATankPlayerController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}

