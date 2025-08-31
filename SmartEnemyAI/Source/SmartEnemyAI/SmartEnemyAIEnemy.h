// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SmartEnemyAIEnemy.generated.h"

/**
 * 
 */
UCLASS()
class SMARTENEMYAI_API ASmartEnemyAIEnemy : public ACharacter
{
	GENERATED_BODY()

public:
	ASmartEnemyAIEnemy();
	
protected:
	// To add mapping context
	virtual void BeginPlay();
};
