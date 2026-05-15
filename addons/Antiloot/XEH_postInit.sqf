#include "script_component.hpp"

if (isServer) then {
    [QGVAR(triggerTrap), {
        if (!GVAR(triggerDetonation)) exitWith {};
        _this call FUNC(detonate);
    }] call CBA_fnc_addEventHandler;

    [QGVAR(containerOpenedOnce), {
        params ["_container"];
        [_container] call FUNC(removeTrapFromContainer);
    }] call CBA_fnc_addEventHandler;
};

[QGVAR(addTrapToContainerLocal), LINKFUNC(addTrapToContainerLocal)] call CBA_fnc_addEventHandler;
[QGVAR(removeTrapFromContainerLocal), LINKFUNC(removeTrapFromContainerLocal)] call CBA_fnc_addEventHandler;
