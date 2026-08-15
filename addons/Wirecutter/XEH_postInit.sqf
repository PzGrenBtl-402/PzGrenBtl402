#include "script_component.hpp"

if (hasInterface) then {
    ["ace_interactMenuOpened", LINKFUNC(interactEH)] call CBA_fnc_addEventHandler;
};
