// Fill out your copyright notice in the Description page of Project Settings.

#include "GrassComponent1.h"

// Sets default values for this component's properties
UGrassComponent1::UGrassComponent1()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UGrassComponent1::BeginPlay()
{
	Super::BeginPlay();

	SpawnGrass();
}

void UGrassComponent1::SpawnGrass()
{
	for (size_t i = 0; i < SpawnCount; i++)
	{
		FVector Location = FMath::RandPointInBox(SpawningExtents);
		AddInstance(FTransform(Location));
	}
}

// Called every frame
void UGrassComponent1::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}