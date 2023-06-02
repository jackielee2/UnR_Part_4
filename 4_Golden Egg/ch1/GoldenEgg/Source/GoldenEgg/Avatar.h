// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Avatar.generated.h"


/*
*	UCLASS()
*	-	C++ 코드를 언리얼 에디터에서 사용할 수 있게함..
*/
UCLASS()
class GOLDENEGG_API AAvatar : public ACharacter
{
	/*
	*	GENERATED_BODY()
	*	-	언리얼 엔진이 클래스 함수를
	*		언리얼 클래스 처럼 만들기 위해
	*		필요한 코드 복사..
	*/
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	//	해당 캐릭터의 속성에 대한 기본값 설정..
	AAvatar();

protected:
	// Called when the game starts or when spawned
	//	게임이 시작되거나 객체가 생성될때 호출됨..
	virtual void BeginPlay() override;

public:	
	// Called every frame
	//	매 프레임마다 호출됨..
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	//	입력에 대한 함수를 바인딩할때 호출됨..
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
