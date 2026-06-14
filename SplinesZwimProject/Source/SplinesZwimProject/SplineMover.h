// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SplineMover.generated.h"

UCLASS()
class SPLINESZWIMPROJECT_API ASplineMover : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASplineMover();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = "Spline Movement")
	float Speed = 200.f;

	UPROPERTY(EditAnywhere, Category = "Spline Movement")
	bool bLoop = true;

	UPROPERTY(EditAnywhere, Category = "Spline Movement")
	float Acceleration = 150.f; // bonus: smooth accel

	void StartMoving();
	void StopMoving();
	void SetDirection(float InDirection); // +1 / -1

};
