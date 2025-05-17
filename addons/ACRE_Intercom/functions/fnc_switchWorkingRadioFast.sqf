#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Handles the working radio switching keybind.
 *
 *  Parameter(s):
 *      0: NUMBER - Working radio switch amount (expected -1 or 1)
 *      0: BOOL - Play sound (default: false)
 *
 *  Returns:
 *       BOOL - Handled
 *
 *  Example:
 *      [1, true] call PzGrenBtl402_ACRE_Intercom_fnc_switchWorkingRadioFast
 *
 */

params ["_dir", ["_playSound", false, [false]]];
TRACE_1("Switch working radio",_dir);

private _vehicle = vehicle acre_player;
private _intercomNetwork = [_vehicle] call FUNC(getFirstConnectedIntercom);
TRACE_1("Intercom",_intercomNetwork);
if (_intercomNetwork < 0) exitWith {false};

private _workPos = [_vehicle, acre_player, _intercomNetwork, INTERCOM_STATIONSTATUS_WORKKNOB] call acre_sys_intercom_fnc_getStationConfiguration;
TRACE_1("WorkPos",_workPos);
private _success = [_intercomNetwork, _workPos + _dir] call FUNC(vic3ffcsSetWork);

if (!_success) exitWith {false};

if (_playSound) then {
    ["Acre_GenericClick", [0,0,0], [0,0,0], 1, false] call acre_sys_sounds_fnc_playSound;
};

true
