#include "CGameInstance.h"

UCGameInstance::UCGameInstance()
{
	UE_LOG(LogTemp, Error, TEXT("GI Constructor"));
}

void UCGameInstance::Init()
{
	Super::Init();


}

void UCGameInstance::Host()
{
	UEngine* Engine = GetEngine();
	if (!Engine) return;
	Engine->AddOnScreenDebugMessage(-1, 2.f, FColor::White, "Host");

	UWorld* World = GetWorld();
	if (!World) return;
	World->ServerTravel("/Game/Maps/Coop?listen");
}

void UCGameInstance::Join(const FString& InAddress)
{
	UEngine* Engine = GetEngine();
	if (!Engine) return;
	Engine->AddOnScreenDebugMessage(-1, 10.f, FColor::Green, FString::Printf(TEXT("Join to %s"), *InAddress));
}
