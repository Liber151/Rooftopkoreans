// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemy.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Tower.generated.h"



UCLASS()
class ROOFTOPKOREANS_API ATower : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATower();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void CheckForNewTarget();
	void SetTargetRotation();
	void Shot();
	void SetName(FString ComingName);
	FString GetName();
	void SetDamage(float ComingDamage);
	float GetDamage();
	void SetRange(float ComingRange);
	float GetRange();
	void SetFireRate(float ComingFireRate);
	float GetFireRate();
	void SetCost(int32 ComingCost);
	int32 GetCost();

private:
	AEnemy* TowerTarget;
	bool IsReloading = false;
	bool CheckForTargetRate = false;

	FString Name;
	float Damage;
	float Range;
	float FireRate;
	int32 Cost;


};
