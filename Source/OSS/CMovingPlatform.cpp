#include "CMovingPlatform.h"

ACMovingPlatform::ACMovingPlatform()
{
	PrimaryActorTick.bCanEverTick = true;
	SetMobility(EComponentMobility::Movable);

	Speed = 10.f;
}

void ACMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector CurrentLocation = GetActorLocation();
	CurrentLocation += FVector::RightVector * Speed * DeltaTime;

	SetActorLocation(CurrentLocation);
}