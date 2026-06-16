#pragma once

#include "CoreMinimal.h"
#include "Components/SplineComponent.h"
#include "GameFramework/Actor.h"
#include "SplineActor.generated.h"

UCLASS()
class SPLINESZWIMPROJECT_API ASplineActor : public AActor
{
	GENERATED_BODY()
	
public:	
	ASplineActor();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Spline")
	TObjectPtr<USplineComponent> Spline;


	UPROPERTY(EditAnywhere)
	bool bIsSpline;

};
