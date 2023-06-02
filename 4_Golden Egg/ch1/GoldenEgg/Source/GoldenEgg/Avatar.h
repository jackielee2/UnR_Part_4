// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Avatar.generated.h"


/*
*	UCLASS()
*	-	C++ �ڵ带 �𸮾� �����Ϳ��� ����� �� �ְ���..
*/
UCLASS()
class GOLDENEGG_API AAvatar : public ACharacter
{
	/*
	*	GENERATED_BODY()
	*	-	�𸮾� ������ Ŭ���� �Լ���
	*		�𸮾� Ŭ���� ó�� ����� ����
	*		�ʿ��� �ڵ� ����..
	*/
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	//	�ش� ĳ������ �Ӽ��� ���� �⺻�� ����..
	AAvatar();

protected:
	// Called when the game starts or when spawned
	//	������ ���۵ǰų� ��ü�� �����ɶ� ȣ���..
	virtual void BeginPlay() override;

public:	
	// Called every frame
	//	�� �����Ӹ��� ȣ���..
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	//	�Է¿� ���� �Լ��� ���ε��Ҷ� ȣ���..
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
