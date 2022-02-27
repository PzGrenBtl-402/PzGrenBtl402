#include "script_component.hpp"
/**
 *  Author: Mishkar
 *
 *  Description:
 *      Initializes rearm MK actions.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle (Marder).
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      _this call PzGrenBtl402_Redd_Marder_fnc_initMKActions
 *
 */

#define HOLD_TIME 5

params ["_veh"];

if (!hasInterface) exitWith {};

// MK HE laden
private _rearmHeIcon = QPATHTOEF(MK20,data\ui\holdaction_rearm_he.paa);
[
    _veh,
    LELSTRING(MK20,rearmHE),
    _rearmHeIcon,
    _rearmHeIcon,
    "_this isEqualTo (fullCrew [_target, 'cargo', true] select 0 select 0) && isNull gunner _target",
    "_caller isEqualTo (fullCrew [_target, 'cargo', true] select 0 select 0) && isNull gunner _target",
    {},
    {},
    {
        params ["_veh"];
        [_veh, 'HE'] call FUNC(rearmMK);
    },
    {},
    [],
    HOLD_TIME,
    nil,
    false,
    false,
    false
] call BIS_fnc_holdActionAdd;

// MK AP laden
private _rearmApIcon = QPATHTOEF(MK20,data\ui\holdaction_rearm_ap.paa);
[
    _veh,
    LELSTRING(MK20,rearmAP),
    _rearmApIcon,
    _rearmApIcon,
    "_this isEqualTo (fullCrew [_target, 'cargo', true] select 0 select 0) && isNull gunner _target",
    "_caller isEqualTo (fullCrew [_target, 'cargo', true] select 0 select 0) && isNull gunner _target",
    {},
    {},
    {
        params ["_veh"];
        [_veh, 'AP'] call FUNC(rearmMK);
    },
    {},
    [],
    HOLD_TIME,
    nil,
    false,
    false,
    false
] call BIS_fnc_holdActionAdd;
