#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SOTS_SuiteDebugReportConfig.generated.h"

class UDataAsset;

USTRUCT(BlueprintType)
struct SOTS_DEBUG_API FSOTS_SuiteDebugReport
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, Category="Report")
    FName ReportId;

    UPROPERTY(EditAnywhere, Category="Report")
    FText DisplayName;

    UPROPERTY(EditAnywhere, Category="Report")
    bool bIncludeInDump = true;
};

UCLASS(BlueprintType)
class SOTS_DEBUG_API USOTS_SuiteDebugReportConfig : public UDataAsset
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, Category="Reports")
    TArray<FSOTS_SuiteDebugReport> Reports;

    const FSOTS_SuiteDebugReport* FindReport(FName ReportId) const;
};
