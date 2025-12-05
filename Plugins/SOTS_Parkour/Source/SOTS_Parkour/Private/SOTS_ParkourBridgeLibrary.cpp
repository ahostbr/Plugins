#include "SOTS_ParkourBridgeLibrary.h"

#include "SOTS_ParkourComponent.h"

FName USOTS_ParkourBridgeLibrary::GetParkourStateLabel(const USOTS_ParkourComponent* ParkourComponent)
{
	if (!IsValid(ParkourComponent))
	{
		return NAME_None;
	}

	const ESOTS_ParkourState State = ParkourComponent->GetParkourState();

	if (const UEnum* EnumObj = StaticEnum<ESOTS_ParkourState>())
	{
		return EnumObj->GetNameByValue(static_cast<int64>(State));
	}

	return NAME_None;
}

FName USOTS_ParkourBridgeLibrary::GetParkourActionLabel(const USOTS_ParkourComponent* ParkourComponent)
{
	if (!IsValid(ParkourComponent))
	{
		return NAME_None;
	}

	const FSOTS_ParkourResult& Result = ParkourComponent->GetLastResult();
	if (!Result.bHasResult)
	{
		return NAME_None;
	}

	if (const UEnum* EnumObj = StaticEnum<ESOTS_ParkourAction>())
	{
		return EnumObj->GetNameByValue(static_cast<int64>(Result.Action));
	}

	return NAME_None;
}

bool USOTS_ParkourBridgeLibrary::HasValidParkourResult(const USOTS_ParkourComponent* ParkourComponent)
{
	if (!IsValid(ParkourComponent))
	{
		return false;
	}

	const FSOTS_ParkourResult& Result = ParkourComponent->GetLastResult();
	return Result.bHasResult;
}
