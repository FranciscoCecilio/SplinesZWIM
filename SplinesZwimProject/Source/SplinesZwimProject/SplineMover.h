#pragma once

#include "CoreMinimal.h"
#include "SplineActor.h"
#include "GameFramework/Actor.h"
#include "SplineMover.generated.h"

UCLASS()
class SPLINESZWIMPROJECT_API ASplineMover : public AActor
{
	GENERATED_BODY()
	
public:	
	ASplineMover();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditInstanceOnly, Category = "Spline Movement")
	TObjectPtr<ASplineActor> TargetSpline;

	UPROPERTY(EditAnywhere, Category = "Spline Movement")
	float MaxSpeed = 300.f;

	UPROPERTY(EditAnywhere, Category = "Spline Movement")
	float Acceleration = 150.f;

	UPROPERTY(EditAnywhere, Category = "Spline Movement")
	bool bLoop = true;


	UFUNCTION(BlueprintCallable, Category = "Spline Movement")
	void StartMoving();

	UFUNCTION(BlueprintCallable, Category = "Spline Movement")
	void StopMoving();

	UFUNCTION(BlueprintCallable, Category = "Spline Movement")
	void SetSpeed(float NewSpeed);

	UFUNCTION(BlueprintCallable, Category = "Spline Movement")
	void SetLooping(bool bShouldLoop);

	UFUNCTION(BlueprintCallable, Category = "Spline Movement")
	void SetDirection(float InDirection); // +1 / -1

	UFUNCTION(BlueprintPure, Category = "Spline Movement")
	float GetProgressAlpha() const;


private:
	float CurrentDistance = 0.f;
	float CurrentSpeed = 0.f;
	bool bIsMoving = false;
	float Direction = 1.f;
};
