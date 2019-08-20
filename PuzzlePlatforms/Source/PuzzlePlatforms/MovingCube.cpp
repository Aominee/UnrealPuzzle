// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingCube.h"

AMovingCube::AMovingCube()
{
	PrimaryActorTick.bCanEverTick = true;
	//SetMobility(EComponentMobility::Movable);
}

void AMovingCube::BeginPlay()
{
	Super::BeginPlay();

	if (HasAuthority())
	{
		SetReplicates(true);
		SetReplicateMovement(true);
	}
	
}

void AMovingCube::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (HasAuthority())
	{
		FVector Location = GetActorLocation();
		Location += FVector(Speed * DeltaTime, 0, 0);
		SetActorLocation(Location);
	}
}