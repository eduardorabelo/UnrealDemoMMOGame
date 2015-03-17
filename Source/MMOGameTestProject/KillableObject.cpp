// Fill out your copyright notice in the Description page of Project Settings.

#include "MMOGameTestProject.h"
#include "KillableObject.h"


// Sets default values
AKillableObject::AKillableObject()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TotalDamage = 200;
	DamageTimePerSecond = 1.f;
}

// Called when the game starts or when spawned
void AKillableObject::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AKillableObject::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

void AKillableObject::PostInitProperties()
{
	Super::PostInitProperties();

	DamagePerSecond = TotalDamage / DamageTimePerSecond;
}

