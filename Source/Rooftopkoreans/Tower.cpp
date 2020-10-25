// Fill out your copyright notice in the Description page of Project Settings.


#include "Tower.h"

// Sets default values
ATower::ATower()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATower::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATower::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (TowerTarget != nullptr)
	{
		SetTargetRotation();
		if (!IsReloading)
		{
			//Shot();
		}
	}
	else
	{
		//CheckForNewTarget();
	}

}

void ATower::SetTargetRotation()
{
	
	FRotator NewRotation = UKismetMathLibrary::FindLookAtRotation(this->GetActorLocation(), TowerTarget->GetActorLocation());
	SetActorRotation(NewRotation);
}

void ATower::SetName(FString ComingName)
{
	Name = ComingName;
}

FString ATower::GetName()
{
	return Name;
}

void ATower::SetDamage(float ComingDamage)
{
	if(ComingDamage > 0)
	Damage = ComingDamage;
}

float ATower::GetDamage()
{
	return Damage;
}

void ATower::SetRange(float ComingRange)
{
	Range = ComingRange;
}

float ATower::GetRange()
{
	return Range;
}

void ATower::SetFireRate(float ComingFireRate)
{
	FireRate = ComingFireRate;
}

float ATower::GetFireRate()
{
	return FireRate;
}

void ATower::SetCost(int32 ComingCost)
{
	if (ComingCost > 0)
	Cost = ComingCost;
}

int32 ATower::GetCost()
{
	return Cost;
}

void ATower::CheckForNewTarget()
{
	CheckForTargetRate = true;
	const FVector Start = this->GetActorLocation();
	const FVector End = Start - FVector(0.0f,0.0f,1.0f);
	FCollisionShape MySphere = FCollisionShape::MakeSphere(GetRange()); 
	TArray<FHitResult> OutResults;
	SphereTraceMu
}




