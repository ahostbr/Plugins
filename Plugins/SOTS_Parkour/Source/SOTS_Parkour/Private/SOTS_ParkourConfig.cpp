#include "SOTS_ParkourConfig.h"

USOTS_ParkourConfig::USOTS_ParkourConfig()
{
    // Match the hard-coded SPINE 3 values so behavior remains identical
    // when you first assign this config.

    ForwardTraceDistance   = 150.0f;
    TraceVerticalOffset    = 40.0f;

    MantleMinHeight        = 30.0f;
    MantleMaxHeight        = 120.0f;

    MaxSafeDropHeight      = 240.0f;

    MantleForwardOffsetScale = 0.8f;
    MantleUpOffsetScale      = 0.6f;

    DropStepDownDistance     = 150.0f;
}
