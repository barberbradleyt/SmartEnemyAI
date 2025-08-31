// Fill out your copyright notice in the Description page of Project Settings.


#include "SmartEnemyAIEnemy.h"
#include "Components/CapsuleComponent.h"


ASmartEnemyAIEnemy::ASmartEnemyAIEnemy()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
}

void ASmartEnemyAIEnemy::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();
}