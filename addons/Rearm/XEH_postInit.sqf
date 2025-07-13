#include "script_component.hpp"

if (isServer) then {
    [QGVAR(setTurretMagazineAmmo), {
        params ["_vehicle", "_turretPath"];

        private _turretOwnerID = _vehicle turretOwner _turretPath;
        if (_turretOwnerID isEqualTo 0) then {
            [QGVAR(setTurretMagazineAmmoACE), _this, [_vehicle]] call CBA_fnc_targetEvent;
        } else {
            [QGVAR(setTurretMagazineAmmoACE), _this, _turretOwnerID] call CBA_fnc_ownerEvent;
        };
    }] call CBA_fnc_addEventHandler;
};

[QGVAR(setTurretMagazineAmmoACE), {_this call ace_rearm_fnc_setTurretMagazineAmmo}] call CBA_fnc_addEventHandler;

[QGVAR(setTurretDamage), {
    params ["_vehicle", "_damage"];

    _vehicle setHitPointDamage ["hitturret", _damage, false];
}] call CBA_fnc_addEventHandler;

GVAR(magazineNameCache) = createHashMap;
GVAR(magazineMaxAmmoCache) = createHashMap;
