#include "script_component.hpp"

if (hasInterface) then {
    GVAR(smokeAmmoPFH) = -1;
    GVAR(lastSmokeAmmoCount) = -1;
    ["turret", LINKFUNC(turretChanged), true] call CBA_fnc_addPlayerEventHandler;
};
