#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CMenuBase.generated.h"

UCLASS()
class OSS_API UCMenuBase : public UUserWidget
{
	GENERATED_BODY()
	
public:
	void SetOwningInstance(ICMenuInterfaces* InInstance);

	void Startup();
	void Shutdown();

protected:
	ICMenuInterfaces* OwningInstance;
};
