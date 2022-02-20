#include "script_component.hpp"
/**
 *  Author: Lemonberries, Timi007
 *
 *  Description:
 *      Initializes Milan actions.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle (Marder).
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      _this call PzGrenBtl402_Redd_Marder_fnc_initMilanActions
 *
 */


params ["_veh"];

if (!hasInterface) exitWith {};

private _assembleIcon = "\a3\data_f_destroyer\data\UI\IGUI\Cfg\holdactions\holdAction_loadVehicle_ca.paa";
// Milan aufbauen
[
    _veh,
    LELSTRING(Milan,assemble),
    _assembleIcon,
    _assembleIcon,
    QUOTE([ARR_2(_target, _this)] call FUNC(canAssembleMilan)),
    QUOTE([ARR_2(_target, _caller)] call FUNC(canAssembleMilan)),
    {},
    {},
    LINKFUNC(assembleMilan),
    {},
    [],
    10,
    nil,
    false,
    false,
    false
] call BIS_fnc_holdActionAdd;

private _disassembleIcon = "\a3\data_f_destroyer\data\UI\IGUI\Cfg\holdactions\holdAction_unloadVehicle_ca.paa";
// Milan abbauen
[
    _veh,
    LELSTRING(Milan,disassemble),
    _disassembleIcon,
    _disassembleIcon,
    QUOTE([ARR_2(_target, _this)] call FUNC(canDisassembleMilan)),
    QUOTE([ARR_2(_target, _caller)] call FUNC(canDisassembleMilan)),
    {},
    {},
    LINKFUNC(disassembleMilan),
    {},
    [],
    10,
    nil,
    false,
    false,
    false
] call BIS_fnc_holdActionAdd;

// Milan laden
private _loadIcon = QPATHTOEF(Milan,data\ui\holdaction_load_milan);
[
    _veh,
    LELSTRING(Milan,load),
    _loadIcon,
    _loadIcon,
    QUOTE([ARR_2(_target, _this)] call FUNC(canLoadMilan)),
    QUOTE([ARR_2(_target, _caller)] call FUNC(canLoadMilan)),
    {},
    {},
    LINKFUNC(loadMilan),
    {},
    [],
    10,
    nil,
    false,
    false,
    false
] call BIS_fnc_holdActionAdd;

// Milan entladen
private _unloadIcon = QPATHTOEF(Milan,data\ui\holdaction_unload_milan);
[
    _veh,
    LELSTRING(Milan,unload),
    _unloadIcon,
    _unloadIcon,
    QUOTE([ARR_2(_target, _this)] call FUNC(canUnloadMilan)),
    QUOTE([ARR_2(_target, _caller)] call FUNC(canUnloadMilan)),
    {},
    {},
    LINKFUNC(unloadMilan),
    {},
    [],
    10,
    nil,
    false,
    false,
    false
] call BIS_fnc_holdActionAdd;

// MK HE laden
private _loadIcon = QPATHTOEF(Milan,data\ui\holdaction_load_milan);
[
    _veh,
    "MK 20mm HE-T laden",
    _loadIcon,
    _loadIcon,
    "_this == fullCrew [_target, 'cargo', true] select 0 select 0 && isNull gunner _target",
    "_caller == fullCrew [_target, 'cargo', true] select 0 select 0 && isNull gunner _target",
    {},
    {},
    {[_target, 'HE'] call PzGrenBtl402_Redd_Marder_fnc_loadMK},
    {},
    [],
    10,
    nil,
    false,
    false,
    false
] call BIS_fnc_holdActionAdd;

// MK AP laden
private _loadIcon = QPATHTOEF(Milan,data\ui\holdaction_load_milan);
[
    _veh,
    "MK 20mm APDS-T laden",
    _loadIcon,
    _loadIcon,
    "_this == fullCrew [_target, 'cargo', true] select 0 select 0 && isNull gunner _target",
    "_caller == fullCrew [_target, 'cargo', true] select 0 select 0 && isNull gunner _target",
    {},
    {},
    {[_target, 'AP'] call PzGrenBtl402_Redd_Marder_fnc_loadMK},
    {},
    [],
    10,
    nil,
    false,
    false,
    false
] call BIS_fnc_holdActionAdd;
