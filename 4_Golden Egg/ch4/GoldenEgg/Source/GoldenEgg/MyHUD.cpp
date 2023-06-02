/*
*	[ 참고	
			https://docs.unrealengine.com/4.27/en-US/API/Runtime/Engine/GameFramework/AHUD/DrawText/
			https://docs.unrealengine.com/4.27/en-US/API/Runtime/Engine/GameFramework/AHUD/DrawLine/
	]
*/
// Fill out your copyright notice in the Description page of Project Settings.


#include "MyHUD.h"

void AMyHUD::DrawHUD()
{
	//	부모의 [ DrawHUD ]를 호출..
	Super::DrawHUD();
	//	선 그리기..
	DrawLine(200, 300, 400, 500, FLinearColor::Blue);
	//	문자열 출력..
	DrawText(TEXT("Welcome to Unreal World!!"), FLinearColor::White, 0.f, 0.f, _pHudFont, 1.f, false );
}