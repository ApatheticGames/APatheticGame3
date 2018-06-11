// Fill out your copyright notice in the Description page of Project Settings.

#include "OpenDahDoor.h"


// Sets default values for this component's properties
UOpenDahDoor::UOpenDahDoor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UOpenDahDoor::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

void UOpenDahDoor::OpenDahDoor()
{
	AActor* Owner = GetOwner();
	Owner->SetActorRotation(FRotator(0.0f, OpenAngle, 0.0f));
}





void UOpenDahDoor::CloseDoor()
{
	AActor* Owner = GetOwner();
	Owner->SetActorRotation(FRotator(0.0f, 0.0f, 0.0f));	

}


// Called every frame
void UOpenDahDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

