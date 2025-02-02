// Fill out your copyright notice in the Description page of Project Settings.

#include "MMOGameTestProject.h"
#include "FlyingConeClass.h"


// Sets default values
AFlyingConeClass::AFlyingConeClass()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFlyingConeClass::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFlyingConeClass::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

	FVector newLocation = GetActorLocation();
	float deltaY = (FMath::Sin(RunningTime + DeltaTime) - FMath::Sin(RunningTime));
	float deltaX = (FMath::Cos(RunningTime + DeltaTime) - FMath::Cos(RunningTime));

	newLocation.X += deltaX * 300.0f;
	newLocation.Y += deltaY * 300.0f;
	
	RunningTime += DeltaTime;

	SetActorLocation(newLocation);
}

