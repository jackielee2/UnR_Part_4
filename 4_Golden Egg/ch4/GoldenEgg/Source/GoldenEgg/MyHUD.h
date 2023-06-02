// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MyHUD.generated.h"
//==================================================================
 //	�޽��� ���� ���..
struct SMessage
{
	//	�޽��� ����..
	FString _msg;
	//	ȭ�鿡 ������ �ð�..
	float _time;
	//	�޽��� ��..
	FColor _color;

	SMessage()
	{
		//	�⺻��..
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

	//	-	[ HUD ]���� ���ڿ��� ǥ��..
	//	-	��Ʈ�� [ AMyHUD Ŭ���� ]�� ��� ����Ʈ �������� ����..
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HUDFont)
	UFont* _pHudFont;

	//	DrawHUD..
	//	-	HUD�� �׸��� �Լ�..
	//	-	�����Ӵ� �ѹ� ȣ���..
	virtual void DrawHUD() override;

	//	����� �޽��� �迭..
	TArray<SMessage> _msg;

	//	�޽��� �߰�..
	void AddMessage(SMessage msg);
	
};
//==================================================================