#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Fires the smoke launcher of the marder.
 *
 *  Parameter(s):
 *      0: OBJECT - Marder which should fire the smoke launcher.
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      [vehicle player] call PzGrenBtl402_fnc_marderFireSmokeLauncher;
 *
 */

#define GUNNER_TURRET [0]

params ["_veh"];

if !(_veh isKindOf "Redd_Marder_1A5_base") exitWith {};
if (_veh ammo QGVAR(SmokeLauncher) <= 0) exitWith {};

_veh setVariable [QGVAR(smokeLauncherReloading), true, true];

if (isNull (_veh turretUnit GUNNER_TURRET)) then {
    private _dummy = createAgent ["B_Soldier_F", [0,0,0], [], 0, "CAN_COLLIDE"];
    [_dummy, true] remoteExecCall ["hideObjectGlobal", 2];
    _dummy allowDamage false;

    _dummy moveInGunner _veh;

    [_veh, QGVAR(SmokeLauncher)] call BIS_fnc_fire;

    deleteVehicle _dummy;
} else {
    [_veh, QGVAR(SmokeLauncher)] call BIS_fnc_fire;
};

private _reloadTime = getNumber (configFile >> "CfgWeapons" >> QGVAR(SmokeLauncher) >> "magazineReloadTime");
[{
    params ["_veh"];
    _veh setVariable [QGVAR(smokeLauncherReloading), false, true];
}, [_veh], _reloadTime] call CBA_fnc_waitAndExecute;
