/**
 *  Author: Lemonberries, Timi007
 *
 *  Description:
 *      Initializes MILAN actions.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle (Marder).
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      _this call PzGrenBtl402_fnc_marderInitMILANActions
 *
 */


params ["_veh"];

if (!hasInterface) exitWith {};

private _icon = "\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa";
// Milan aufbauen
[
    _veh,
    'Milan aufbauen',
    _icon,
    _icon,
    '[_target] call PzGrenBtl402_fnc_marderCanAssembleMILAN;',
    '[_target] call PzGrenBtl402_fnc_marderCanAssembleMILAN;',
    {},
    {},
    {
        params ["_target"];
        _target call PzGrenBtl402_fnc_marderAssembleMILAN;
    },
    {},
    [],
    10,
    nil,
    false,
    false,
    false
] call BIS_fnc_holdActionAdd;

// Milan abbauen
[
    _veh,
    'Milan abbauen',
    _icon,
    _icon,
    '[_target] call PzGrenBtl402_fnc_marderCanDisassembleMILAN;',
    '[_target] call PzGrenBtl402_fnc_marderCanDisassembleMILAN;',
    {},
    {},
    {
        params ["_target"];
        _target call PzGrenBtl402_fnc_marderDisassembleMILAN;
    },
    {},
    [],
    10,
    nil,
    false,
    false,
    false
] call BIS_fnc_holdActionAdd;

// Milan laden
[
    _veh,
    'Milan laden',
    _icon,
    _icon,
    '[_target] call PzGrenBtl402_fnc_marderCanLoadMILAN;',
    '[_target] call PzGrenBtl402_fnc_marderCanLoadMILAN;',
    {},
    {},
    {
        params ["_target"];
        _target call PzGrenBtl402_fnc_marderLoadMILAN;
    },
    {},
    [],
    10,
    nil,
    false,
    false,
    false
] call BIS_fnc_holdActionAdd;

// Milan entladen
[
    _veh,
    'Milan entladen',
    _icon,
    _icon,
    '[_target] call PzGrenBtl402_fnc_marderCanUnloadMILAN;',
    '[_target] call PzGrenBtl402_fnc_marderCanUnloadMILAN;',
    {},
    {},
    {
        params ["_target"];
        _target call PzGrenBtl402_fnc_marderUnloadMILAN;
    },
    {},
    [],
    10,
    nil,
    false,
    false,
    false
] call BIS_fnc_holdActionAdd;
