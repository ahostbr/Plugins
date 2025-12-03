#pragma once

/**
 * GSM config stack contract
 *
 * The Stealth configuration stack is processed in the following priority order:
 *   1. Global defaults (push once on subsystem construction).
 *   2. Difficulty overrides (MissionDirector or difficulty manager pushes per-run overrides).
 *   3. Mission-specific tweaks (mission definition pushes mission config before objectives).
 *   4. Local or temporary overrides (debug panel, scripted events) push the final entry.
 *
 * PushStealthConfig always pushes a new config onto the stack and makes the pushed asset active.
 * PopStealthConfig removes the most recently pushed entry and returns control to the previous config.
 * The "last pushed = active" rule means consumers must push a config before querying GSM state and must always pop once the scope ends.
 *
 * MissionDirector, difficulty systems, and other orchestrators should avoid swapping `ActiveConfig` directly. Instead they should:
 *   - Acquire the desired `USOTS_StealthConfigDataAsset`.
 *   - Call `PushStealthConfig` with it (optionally tagging the push for easier tracing).
 *   - Rely on the stack to revert to the prior config by calling `PopStealthConfig` in the same scope.
 */
struct FSOTS_StealthConfigDocs {}
