#include "script_component.hpp"

// Server only EH
[QGVAR(rearmMK20), {
    if (!isServer) exitWith {};

    params ["_vehicle", "_turretPath"];

    private _turretOwnerID = _vehicle turretOwner _turretPath;
    if (_turretOwnerID isEqualTo 0) then {
        [QGVAR(setTurretMagazineAmmo), _this, [_vehicle]] call CBA_fnc_targetEvent;
    } else {
        [QGVAR(setTurretMagazineAmmo), _this, _turretOwnerID] call CBA_fnc_ownerEvent;
    };
}] call CBA_fnc_addEventHandler;

[QGVAR(setTurretMagazineAmmo), {_this call ace_rearm_fnc_setTurretMagazineAmmo}] call CBA_fnc_addEventHandler;
