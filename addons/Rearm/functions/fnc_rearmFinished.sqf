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
_args params ["_vehicle", "_originalDamage", "_turretPath", "_magazineClass", "_magazineName", "_simEvents"];

// Enable turret
[QGVAR(setTurretDamage), [_vehicle, _originalDamage], _vehicle] call CBA_fnc_targetEvent;

if (_errorCode isEqualTo 0) then {
    [format [LLSTRING(rearmed), _magazineName], 1, [0, 0.9, 0, 1]] call CBA_fnc_notify;
} else {
    [LLSTRING(rearmInterrupted), 1, [0.9, 0, 0, 1]] call CBA_fnc_notify;
};
