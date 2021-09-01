#include "script_component.hpp"

if (hasInterface) then {
    GVAR(smokeAmmoPFH) = -1;
    GVAR(lastSmokeAmmoCount) = -1;
    ["turret", {_this call PzGrenBtl402_fnc_marderTurretChanged}, true] call CBA_fnc_addPlayerEventHandler;
};
