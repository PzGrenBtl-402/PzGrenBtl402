#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Handles success and error case of progress bar.
 *
 *  Parameter(s):
 *      0: ARRAY - Arguments from fnc_rearm.
 *      1: NUMBER - Elapsed Time.
 *      2: NUMBER - Total time rearming will take.
 *      3: NUMBER - Error code of progress bar.
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      _this call PzGrenBtl402_Rearm_fnc_rearmFinished
 *
 */

params ["_args", "_elapsedTime", "_totalTime", "_errorCode"];
_args params ["_vehicle", "_turretPath", "_magazineClass", "_magazineName"];

TRACE_2("Rearm finished", _errorCode, _this);

private _rearmingMags = _vehicle getVariable [QGVAR(rearming), []];
private _i = _rearmingMags findIf {_x == _magazineClass};
if (_i < 0) exitWith {ERROR_1("%1 was not rearmed", _magazineClass)};
_rearmingMags deleteAt _i;
_vehicle setVariable [QGVAR(rearming), _rearmingMags, true];

TRACE_1("Removing rearming from queue", _rearmingMags);

// Enable turret if no other players are rearming
if (_rearmingMags isEqualTo []) then {
    private _originalDamage = _vehicle getVariable [QGVAR(originalTurretDamage), 0];
    _vehicle setVariable [QGVAR(originalTurretDamage), nil, true];
    [QGVAR(setTurretDamage), [_vehicle, _originalDamage], _vehicle] call CBA_fnc_targetEvent;
};

if (_errorCode isNotEqualTo 0) then {
    [LLSTRING(rearmInterrupted), 1, [0.9, 0, 0, 1]] call CBA_fnc_notify;
};
