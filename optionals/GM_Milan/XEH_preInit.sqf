#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

ADDON = true;

["gm_milan_launcher_tripod_base", "InitPost", LINKFUNC(addActions), nil, nil, true] call CBA_fnc_addClassEventHandler;
