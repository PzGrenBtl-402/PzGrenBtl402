#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

ADDON = true;

["Redd_Tank_Wiesel_1A2_TOW_base", "InitPost", LINKFUNC(addLoadAction), nil, nil, true] call CBA_fnc_addClassEventHandler;
