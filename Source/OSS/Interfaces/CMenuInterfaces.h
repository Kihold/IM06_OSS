#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CMenuInterfaces.generated.h"

UINTERFACE(MinimalAPI)
class UCMenuInterfaces : public UInterface
{
	GENERATED_BODY()
};

class OSS_API ICMenuInterfaces
{
	GENERATED_BODY()

public:
	virtual void Host() = 0;
	virtual void Join(const FString& InAddress) = 0;

};
