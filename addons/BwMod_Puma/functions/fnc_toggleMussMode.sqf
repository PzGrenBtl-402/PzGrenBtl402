#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Handles the keybind to toggle the Multifunctional Self Protection System (MUSS) mode of the SPz Puma.
 *
 *  Parameter(s):
 *      0: OBJECT - Player pressing the keybind.
 *
 *  Returns:
 *       BOOL - Handled.
 *
 *  Example:
 *      [] call PzGrenBtl402_BwMod_Puma_fnc_toggleMussMode
 *
 */

private _player = call CBA_fnc_currentUnit;
private _vehicle = objectParent _player;

private _gunner = gunner _vehicle;
private _commander = commander _vehicle;

TRACE_4("Toggle MUSS",_player,_vehicle,_gunner,_commander);
if (
    isNull _vehicle ||
    {_player isNotEqualTo _gunner && {_player isNotEqualTo _commander}} ||
    {!(_vehicle isKindOf "BWA3_Puma_Base")}
) exitWith {false};

private _currentMode = _vehicle getVariable [QGVAR(MussMode), DEFAULT_MUSS_MODE];
private _newMode = (_currentMode + 1) % 3;
_vehicle setVariable [QGVAR(MussMode), _newMode, true];
TRACE_2("MUSS mode",_currentMode,_newMode);

private _notifyUnits = [];
if (!isNull _gunner) then {_notifyUnits pushBack _gunner};
if (!isNull _commander) then {_notifyUnits pushBack _commander};

private _activeColor = [0, 1, 0, 1];
private _disabledColor = [1, 0, 0, 1];

private _jammingText = ["  " + LLSTRING(muss_jamming), 1, _activeColor];
private _rotateTurretText = if (_newMode >= MUSS_MODE_TURRET_ROTATION) then {
    ["+ " + LLSTRING(muss_rotateTurret), 1, _activeColor]
} else {
    ["  " + LLSTRING(muss_rotateTurret), 1, _disabledColor]
};

private _smokeActiveText = if (_newMode >= MUSS_MODE_SMOKE) then {
    ["+ " + LLSTRING(muss_smoke), 1, _activeColor]
} else {
    ["  " + LLSTRING(muss_smoke), 1, _disabledColor]
};

[
    QGVAR(notify),
    [
        [LLSTRING(muss), 1.5],
        _jammingText,
        _rotateTurretText,
        _smokeActiveText,
        true
    ],
    _notifyUnits
] call CBA_fnc_targetEvent;

true
