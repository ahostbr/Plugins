#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

DECLARE_LOG_CATEGORY_EXTERN(LogSOTS_BlueprintGen, Log, All);

/**
 * SOTS_BlueprintGen primary editor module.
 *
 * SPINE 1 responsibilities:
 * - Register the module.
 * - Provide a log category.
 *
 * Later passes will add:
 * - Builder API (USOTS_BPGenBuilder).
 * - Commandlets.
 * - Any editor helpers needed by DevTools.
 */
class FSOTS_BlueprintGenModule : public IModuleInterface
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
