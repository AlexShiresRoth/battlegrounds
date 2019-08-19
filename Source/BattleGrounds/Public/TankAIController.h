// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tank.h"
#include "CoreMinimal.h"
#include "AIController.h"
#include "TankAIController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLEGROUNDS_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	
public:

	virtual void BeginPlay() override;

private: 

	ATank* GetAIControlledTank() const;
	ATank* GetPlayerTank() const;
};
