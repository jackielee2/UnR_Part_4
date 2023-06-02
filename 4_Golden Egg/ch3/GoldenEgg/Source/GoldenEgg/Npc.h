// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Npc.generated.h"

UCLASS()
class GOLDENEGG_API ANpc : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ANpc();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	/*
		NPC의 대사 처리..

		-	UPROPERTY
			
			-	[ 참고	:	https://minusi.tistory.com/entry/%EC%96%B8%EB%A6%AC%EC%96%BC-UPROPERTY-Unreal-UPROPERTY
							https://darkcatgame.tistory.com/62 ]
			
			-	변수에 붙는 리플렉션 메크로..
			


		-	FString
			-	C++ / STL / string 타입의 언리얼 버전..			
	*/
	/*
		EditAnywhere		:	블루프린트 에디터 & 월드상에 배치된 오브젝트의 디테일 패널에서 값을 수정 가능..
		BlueprintReadWrite	:	블루프린트에서 해당 변수를 읽기 & 쓰기가 가능..
		Category			:	디테일패널의 항목 이름을 명칭..
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NPCMessage")
	FString _NpcMessage;
};
