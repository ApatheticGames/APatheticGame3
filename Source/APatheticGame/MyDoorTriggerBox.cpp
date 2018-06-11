// Fill out your copyright notice in the Description page of Project Settings.

#include "MyDoorTriggerBox.h"
#include "DrawDebugHelpers.h"




AMyDoorTriggerBox::AMyDoorTriggerBox()
{
	OnActorBeginOverlap.AddDynamic(this, &AMyDoorTriggerBox::OnOverlapBegin);
	OnActorEndOverlap.AddDynamic(this, &AMyDoorTriggerBox::OnOverlapEnd);
}

void AMyDoorTriggerBox::BeginPlay() {
	Super::BeginPlay();
	DrawDebugBox(GetWorld(), GetActorLocation(), GetComponentsBoundingBox().GetExtent(),FColor::Purple,true, -1,0,5);


}
void AMyDoorTriggerBox::OnOverlapBegin(AActor * OverlappedActor, AActor * OtherActor)
{
	if (OtherActor && (OtherActor != this)) {
		UE_LOG(LogTemp, Warning, TEXT("Entered Box"));
		
	}
}

void AMyDoorTriggerBox::OnOverlapEnd(AActor * OverlappedActor, AActor * OtherActor)
{
	if (OtherActor && (OtherActor != this)) {
		UE_LOG(LogTemp, Warning, TEXT("Exited Box"));
		
	}

}
