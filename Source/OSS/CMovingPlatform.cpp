#include "CMovingPlatform.h"

ACMovingPlatform::ACMovingPlatform()
{
	Speed = 200.f;

	SetMobility(EComponentMobility::Movable);
}

void ACMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector CurrentLocation = GetActorLocation();
	CurrentLocation += FVector::RightVector * Speed * DeltaTime;

	SetActorLocation(CurrentLocation);
}