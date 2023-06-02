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
		NPC�� ��� ó��..

		-	UPROPERTY
			
			-	[ ����	:	https://minusi.tistory.com/entry/%EC%96%B8%EB%A6%AC%EC%96%BC-UPROPERTY-Unreal-UPROPERTY
							https://darkcatgame.tistory.com/62 ]
			
			-	������ �ٴ� ���÷��� ��ũ��..
			


		-	FString
			-	C++ / STL / string Ÿ���� �𸮾� ����..			
	*/
	/*
		EditAnywhere		:	�������Ʈ ������ & ����� ��ġ�� ������Ʈ�� ������ �гο��� ���� ���� ����..
		BlueprintReadWrite	:	�������Ʈ���� �ش� ������ �б� & ���Ⱑ ����..
		Category			:	�������г��� �׸� �̸��� ��Ī..
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NPCMessage")
	FString _NpcMessage;
};
