#include "SOTS_ParkourDebugLibrary.h"

#include "SOTS_ParkourComponent.h"
#include "DrawDebugHelpers.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "Engine/Engine.h"

void USOTS_ParkourDebugLibrary::DrawParkourResult(const UObject* WorldContextObject, const FSOTS_ParkourResult& Result, float Duration, float Thickness)
{
#if !(UE_BUILD_SHIPPING || UE_BUILD_TEST)
	if (!WorldContextObject)
	{
		return;
	}

	if (!Result.bHasResult)
	{
		return;
	}

	UWorld* World = WorldContextObject->GetWorld();
	if (!World)
	{
		return;
	}

	const FVector Location = Result.WorldLocation;
	const FVector Normal   = Result.WorldNormal.GetSafeNormal();

	const float SphereRadius = 12.0f;
	const float NormalLength = 60.0f;

	// Draw impact/location sphere.
	DrawDebugSphere(World, Location, SphereRadius, 12, FColor::Cyan, false, Duration, 0, Thickness);

	// Draw normal line.
	if (!Normal.IsNearlyZero())
	{
		const FVector End = Location + Normal * NormalLength;
		DrawDebugLine(World, Location, End, FColor::Blue, false, Duration, 0, Thickness);
	}
#endif
}

FString USOTS_ParkourDebugLibrary::DescribeParkourResult(const USOTS_ParkourComponent* ParkourComponent)
{
	if (!IsValid(ParkourComponent))
	{
		return FString();
	}

	const FSOTS_ParkourResult& Result = ParkourComponent->GetLastResult();
	if (!Result.bHasResult)
	{
		return FString();
	}

	const ESOTS_ParkourAction Action      = Result.Action;
	const ESOTS_ClimbStyle    ClimbStyle  = Result.ClimbStyle;

	FString ActionName   = TEXT("None");
	FString ClimbName    = TEXT("None");

	if (const UEnum* ActionEnum = StaticEnum<ESOTS_ParkourAction>())
	{
		ActionName = ActionEnum->GetNameStringByValue(static_cast<int64>(Action));
	}

	if (const UEnum* ClimbEnum = StaticEnum<ESOTS_ClimbStyle>())
	{
		ClimbName = ClimbEnum->GetNameStringByValue(static_cast<int64>(ClimbStyle));
	}

	const FVector Loc = Result.WorldLocation;

	return FString::Printf(
		TEXT("HasResult=true; Action=%s; ClimbStyle=%s; Loc=X=%.1f,Y=%.1f,Z=%.1f"),
		*ActionName,
		*ClimbName,
		Loc.X, Loc.Y, Loc.Z
	);
}

void USOTS_ParkourDebugLibrary::LogParkourResultToScreen(const USOTS_ParkourComponent* ParkourComponent, float Duration, int32 Key)
{
#if !(UE_BUILD_SHIPPING || UE_BUILD_TEST)
	if (!IsValid(ParkourComponent))
	{
		return;
	}

	const FString Desc = DescribeParkourResult(ParkourComponent);
	if (Desc.IsEmpty())
	{
		return;
	}

	UWorld* World = ParkourComponent->GetWorld();
	if (!World || !GEngine)
	{
		return;
	}

	FString OwnerName = TEXT("Unknown");
	if (const AActor* OwnerActor = Cast<AActor>(ParkourComponent->GetOwner()))
	{
		OwnerName = OwnerActor->GetName();
	}

	const FString Message = FString::Printf(TEXT("[SOTS_Parkour][Screen] %s: %s"), *OwnerName, *Desc);
	GEngine->AddOnScreenDebugMessage(Key, Duration, FColor::Green, Message);
#endif
}

void USOTS_ParkourDebugLibrary::LogParkourResultToLog(const USOTS_ParkourComponent* ParkourComponent)
{
#if !(UE_BUILD_SHIPPING || UE_BUILD_TEST)
	if (!IsValid(ParkourComponent))
	{
		return;
	}

	const FString Desc = DescribeParkourResult(ParkourComponent);
	if (Desc.IsEmpty())
	{
		return;
	}

	FString OwnerName = TEXT("Unknown");
	if (const AActor* OwnerActor = Cast<AActor>(ParkourComponent->GetOwner()))
	{
		OwnerName = OwnerActor->GetName();
	}

	UE_LOG(LogTemp, Log, TEXT("[SOTS_Parkour][Log] %s: %s"), *OwnerName, *Desc);
#endif
}
