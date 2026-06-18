#include "SplineMover.h"

ASplineMover::ASplineMover()
{
	PrimaryActorTick.bCanEverTick = true;

}

void ASplineMover::BeginPlay()
{
	Super::BeginPlay();
    CurrentDistance = StartDistance;
}

void ASplineMover::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (!bIsMoving || !TargetSpline) return;

    USplineComponent* Spline = TargetSpline->Spline;

    // Smooth acceleration
    CurrentSpeed = FMath::FInterpTo(CurrentSpeed, MaxSpeed, DeltaTime, Acceleration / MaxSpeed);

    float SplineLength = Spline->GetSplineLength();
    CurrentDistance += CurrentSpeed * Direction * DeltaTime;

    // Loop handling
    if (bLoop)
    {
        if (CurrentDistance > SplineLength) CurrentDistance -= SplineLength;
        if (CurrentDistance < 0.f)          CurrentDistance += SplineLength;
    }
    else
    {
        CurrentDistance = FMath::Clamp(CurrentDistance, 0.f, SplineLength);
        if (CurrentDistance >= SplineLength || CurrentDistance <= 0.f) StopMoving();
    }

    // Position + rotation along spline
    FVector  NewLocation = Spline->GetLocationAtDistanceAlongSpline(CurrentDistance, ESplineCoordinateSpace::World);
    FRotator NewRotation = Spline->GetRotationAtDistanceAlongSpline(CurrentDistance, ESplineCoordinateSpace::World);

    SetActorLocationAndRotation(NewLocation, NewRotation);
}

void ASplineMover::StartMoving() 
{ 
    bIsMoving = true;
}

void ASplineMover::StopMoving()
{
    bIsMoving = false;
    CurrentSpeed = 0.f; // resets so accel kicks in fresh on next Start
}

float ASplineMover::GetProgressAlpha() const
{
    if (!TargetSpline) return 0.f;
    return CurrentDistance / TargetSpline->Spline->GetSplineLength();
}

void ASplineMover::SetSpeed(float NewSpeed)
{
    CurrentSpeed = NewSpeed;
}

void ASplineMover::SetLooping(bool bShouldLoop)
{
    bLoop = bShouldLoop;
}

void ASplineMover::SetDirection(float InDirection)
{
    float NewDir = FMath::Sign(InDirection);
    if (NewDir == Direction) return; // no change, skip
    Direction = NewDir;
    OnDirectionChanged.Broadcast(Direction);
}


