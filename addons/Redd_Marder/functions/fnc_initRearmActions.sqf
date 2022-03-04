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
 *      _this call PzGrenBtl402_Redd_Marder_fnc_initRearmActions
 *
 */

#define HOLD_TIME 5
#define REARM_DURATION 15

params ["_vehicle"];

if (!hasInterface) exitWith {};

// MK HE laden
private _rearmHeIcon = QPATHTOEF(Rearm,data\ui\holdaction_rearm_mk20_he.paa);
private _heMagazineName = getText (configFile >> "CfgMagazines" >> "Redd_MK20_HE_Mag" >> "displayName");
[
    _vehicle,
    format [LELSTRING(Rearm,rearm), _heMagazineName],
    _rearmHeIcon,
    _rearmHeIcon,
    "_this isEqualTo (fullCrew [_target, 'cargo', true] select 0 select 0) && isNull gunner _target",
    "_caller isEqualTo (fullCrew [_target, 'cargo', true] select 0 select 0) && isNull gunner _target",
    {},
    {},
    {
        params ["_vehicle"];
        [_vehicle, [0], "Redd_MK20_HE_Mag", [QEGVAR(Rearm,mk20_he_ammo)], REARM_DURATION] call EFUNC(Rearm,rearm);
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
private _rearmApIcon = QPATHTOEF(Rearm,data\ui\holdaction_rearm_mk20_ap.paa);
private _apMagazineName = getText (configFile >> "CfgMagazines" >> "Redd_MK20_HE_Mag" >> "displayName");
[
    _vehicle,
    format [LELSTRING(Rearm,rearm), _apMagazineName],
    _rearmApIcon,
    _rearmApIcon,
    "_this isEqualTo (fullCrew [_target, 'cargo', true] select 0 select 0) && isNull gunner _target",
    "_caller isEqualTo (fullCrew [_target, 'cargo', true] select 0 select 0) && isNull gunner _target",
    {},
    {},
    {
        params ["_vehicle"];
        [_vehicle, [0], "Redd_MK20_AP_Mag", [QEGVAR(Rearm,mk20_ap_ammo)], REARM_DURATION] call EFUNC(Rearm,rearm);
    },
    {},
    [],
    HOLD_TIME,
    nil,
    false,
    false,
    false
] call BIS_fnc_holdActionAdd;
