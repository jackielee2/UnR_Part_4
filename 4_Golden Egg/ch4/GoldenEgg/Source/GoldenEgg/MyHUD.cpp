/*
*	[ ����	
			https://docs.unrealengine.com/4.27/en-US/API/Runtime/Engine/GameFramework/AHUD/DrawText/
			https://docs.unrealengine.com/4.27/en-US/API/Runtime/Engine/GameFramework/AHUD/DrawLine/
	]
*/
// Fill out your copyright notice in the Description page of Project Settings.


#include "MyHUD.h"

void AMyHUD::DrawHUD()
{
	//	�θ��� [ DrawHUD ]�� ȣ��..
	Super::DrawHUD();
	//	�� �׸���..
	DrawLine(200, 300, 400, 500, FLinearColor::Blue);
	//	���ڿ� ���..
	DrawText(TEXT("Welcome to Unreal World!!"), FLinearColor::White, 0.f, 0.f, _pHudFont, 1.f, false );
}