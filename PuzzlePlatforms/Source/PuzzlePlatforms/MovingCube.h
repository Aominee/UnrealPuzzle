// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "MovingCube.generated.h"

/**
 * 
 */
UCLASS()
class PUZZLEPLATFORMS_API AMovingCube : public AStaticMeshActor
{
	GENERATED_BODY()
public:
	AMovingCube();
	virtual void Tick(float DeltaTime) override;
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	float Speed = 20;
};
