// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MyHUD.generated.h"
//==================================================================
 //	메시지 구성 요소..
struct SMessage
{
	//	메시지 저장..
	FString _msg;
	//	화면에 연출할 시간..
	float _time;
	//	메시지 색..
	FColor _color;

	SMessage()
	{
		//	기본값..
		_msg = TEXT("");
		_time = 5.f;
		_color = FColor::White;
	}

	SMessage(FString msg, float time, FColor color)
	{
		_msg = msg;
		_time = time;
		_color = color;
	}

};
//	struct SMessage
//==================================================================
UCLASS()
class GOLDENEGG_API AMyHUD : public AHUD
{
	GENERATED_BODY()

public:

	//	-	[ HUD ]에서 문자열을 표시..
	//	-	폰트는 [ AMyHUD 클래스 ]의 블루 프린트 버전에서 설정..
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HUDFont)
	UFont* _pHudFont;

	//	DrawHUD..
	//	-	HUD를 그리는 함수..
	//	-	프레임당 한번 호출됨..
	virtual void DrawHUD() override;

	//	출력할 메시지 배열..
	TArray<SMessage> _msg;

	//	메시지 추가..
	void AddMessage(SMessage msg);
	
};
//==================================================================