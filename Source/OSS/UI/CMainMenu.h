#pragma once

#include "CoreMinimal.h"
#include "CMenuBase.h"
#include "CMainMenu.generated.h"

class UButton;
class UWidgetSwitcher;
class UEditableTextBox;

UCLASS()
class OSS_API UCMainMenu : public UCMenuBase
{
	GENERATED_BODY()

protected:
	virtual bool Initialize() override;

private:
	UFUNCTION()
		void HostServer();

	UFUNCTION()
		void JoinServer();

	UFUNCTION()
		void OpenMainMenu();

	UFUNCTION()
		void OpenJoinMenu();

private:
	//Main Menu
	UPROPERTY(meta = (BindWidget))
		UButton* HostButton;

	UPROPERTY(meta = (BindWidget))
		UButton* JoinButton;

	//Menu Switcher
	UPROPERTY(meta = (BindWidget))
		UWidgetSwitcher* MenuSwitcher;

	UPROPERTY(meta = (BindWidget))
		UWidget* MainMenu;

	UPROPERTY(meta = (BindWidget))
		UWidget* JoinMenu;

	//Join Menu
	UPROPERTY(meta = (BindWidget))
		UButton* CancelJoinButton;

	UPROPERTY(meta = (BindWidget))
		UButton* ConfirmJoinButton;

	UPROPERTY(meta = (BindWidget))
	UEditableTextBox* IPAddressFidle;


};
