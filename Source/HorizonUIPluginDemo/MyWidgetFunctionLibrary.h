// Crated by dorgon, All Rights Reserved.
// email: dorgonman@hotmail.com
// blog: dorgon.horizon-studio.net

#pragma once

#include "Widget/Components/HorizonDialogueMsgTextBlock.h"
#include "Widget/Components/HorizonFlipbookWidget.h"
#include "Widget/HorizonWidgetFunctionLibrary.h"
#include "MyWidgetFunctionLibrary.generated.h"


UCLASS()
class UMyWidgetFunctionLibrary : public UBlueprintFunctionLibrary {
private:
	GENERATED_BODY()
public:




	UFUNCTION(BlueprintCallable, Category = "HorizonPlugin")
	static void SetText(const FText& newText, UHorizonDialogueMsgTextBlock* pDialogueWidget)
	{
		pDialogueWidget->SetText(newText);
		pDialogueWidget->RebuildDialogueMsgTextBlock();

	}

	UFUNCTION(BlueprintCallable, Category = "HorizonPlugin")
	static void StopDialogue(UHorizonDialogueMsgTextBlock* pDialogueWidget)
	{
		if (pDialogueWidget) 
		{
		
			//reset dialogue
			pDialogueWidget->ResetDialogueMsgText();
			//stop tick
			pDialogueWidget->SetIsStartTickDialogueMsg(false);
		
		}
	};
	UFUNCTION(BlueprintCallable, Category = "HorizonPlugin")
	static void StartDialogue(UHorizonDialogueMsgTextBlock* pDialogueWidget)
	{
		if (pDialogueWidget)
		{
			//stop tick
			pDialogueWidget->SetIsStartTickDialogueMsg(true);

		}
	};







};