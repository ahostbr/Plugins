#include "SOTS_SuiteDebugReportConfig.h"

const FSOTS_SuiteDebugReport* USOTS_SuiteDebugReportConfig::FindReport(FName ReportId) const
{
    if (!ReportId.IsValid())
    {
        return nullptr;
    }

    for (const FSOTS_SuiteDebugReport& Report : Reports)
    {
        if (Report.ReportId == ReportId)
        {
            return &Report;
        }
    }

    return nullptr;
}
