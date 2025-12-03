# Mission → HUD → Notification Flow

This page explains how mission systems drive the player HUD and the accompanying notification feed through a data-driven configuration asset and how DevTools keeps widgets honest.

## HUD Config Asset

`USOTS_HUDConfigDataAsset` lives inside the `SOTS_UI` plugin and exposes an array of `FSOTS_HUDStateEntry` definitions. Each entry maps a gameplay tag (usually emitted by mission states/events) to a set of overrides that are applied when the tag becomes active:

- `bOverrideHealthPercent` / `HealthPercent` – clamps the HUD health meter for the duration of the state.
- `bOverrideDetectionLevel` / `DetectionLevel` – forces the detection bar into low/medium/high buckets.
- `bOverrideObjectiveText` / `ObjectiveText` – overwrites the objective text line.
- `bTriggerNotification` plus notification metadata – sends a push notification with the provided text/category/duration.

Designers can author assets in the editor (`Editor > SOTS > HUD Config`) and reference them from mission blueprints, scriptable events, or from the mission director when tags fire.

## Applying a Tag-Driven HUD State

When a mission event emits one of the canonical tags (see `SOTS_TagLibrary` `GetMissionState*` / `GetMissionEvent*` helpers), the mission director, mission data asset, or the UI widget should look up the tag in the HUD config asset:

```cpp
if (USOTS_HUDConfigDataAsset* Config = GetHUDConfig())
{
    Config->ApplyStateForTag(WorldContextObject, Tag);
}
```

`ApplyStateForTag` will fetch `USOTS_HUDSubsystem`, update the health/detection/objective values if requested, and optionally push a notification through `USOTS_NotificationSubsystem`. Since both subsystem calls live in the UI plugin, gameplay code never reaches into HUD state variables directly.

## Notification Flow

Notifications are emitted through the same asset entry. If `bTriggerNotification` is enabled, `ApplyStateForTag` sends a `PushNotification` using `NotificationText`, `NotificationDuration`, and `NotificationCategory`. The notification subsystem owns the active notification list and exposes the `OnNotificationsChanged` delegate for widgets to bind to.

## DevTools Enforcement

To keep the HUD/notification subsystems encapsulated inside the UI plugin, `DevTools/python/hud_widget_usage_check.py` scans every C++ file for calls like `SetHealthPercent`, `SetDetectionLevel`, `SetObjectiveText`, or `PushNotification`. If these calls live outside `Plugins/SOTS_UI`, the check fails.

The same script is wired into `DevTools/python/ci_checks.py`, so repo-wide CI will also flag any violations. Run it locally with:

```powershell
python DevTools/python/hud_widget_usage_check.py
```

This enforces the expectation that widgets and mission code rely on the data-driven HUD config asset instead of touching the subsystems themselves.