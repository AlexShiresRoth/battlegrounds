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

void ATankPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	AimTowardsCrosshair();

}

ATank* ATankPlayerController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}

void ATankPlayerController::AimTowardsCrosshair()
{
	if (!GetControlledTank()) {
		return;
	}
	// Get world location through linetrace of cross hair
	// if it hits landscape 
		//tell controlled tank to aim at this point
}

