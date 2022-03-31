// Copyright Epic Games, Inc. All Rights Reserved.


#include "dcom5GameModeBase.h"
#include <Blueprint/UserWidget.h> //UUserWidget 클래스를 사용하기 위해

void Adcom5GameModeBase::ChangeMenuWidget(TSubclassOf<UUserWidget> NewWidgetClass)
{
	if (CurrentWidget != nullptr)
	{
		CurrentWidget->RemoveFromViewport();
		CurrentWidget = nullptr;
	}

	//언리얼의 가비지 컬렉션 시스템 덕에 생성된 위젯을 굳이 해제시킬 필요는 없다.
	if (NewWidgetClass != nullptr) {
		CurrentWidget = CreateWidget(GetWorld(), NewWidgetClass);
		if (CurrentWidget != nullptr) {
			CurrentWidget->AddToViewport();
		}
	}

}

void Adcom5GameModeBase::BeginPlay()
{
	Super::BeginPlay();						// 기존절차의 끝 부분에 한 단꼐 추가하기 위해 첫 줄에 호출
	ChangeMenuWidget(StartingWidgetClass);	// 게임이 시작될 때 UI를 표시하도록 만들어 줌
}
