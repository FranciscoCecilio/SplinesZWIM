#include "SplineActor.h"

ASplineActor::ASplineActor()
{
	Spline = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
	SetRootComponent(Spline);
}

void ASplineActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void ASplineActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

