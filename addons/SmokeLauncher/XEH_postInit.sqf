#include "script_component.hpp"

GVAR(reloadTimeCache) = createHashMap;
GVAR(gunnerAndCommanderCanSmokeCache) = createHashMap;
GVAR(smokeLauncherMuzzleCache) = createHashMap;

if (hasInterface) then {
    GVAR(PFH) = -1;
    GVAR(lastAmmoCount) = -1;
    ["turret", LINKFUNC(turretChanged), true] call CBA_fnc_addPlayerEventHandler;
};
