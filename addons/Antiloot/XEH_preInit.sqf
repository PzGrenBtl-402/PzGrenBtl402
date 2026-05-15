#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

GVAR(blacklist) = createHashMap;
GVAR(detonateMine) = "APERSMineDispenser_Mine_F";
GVAR(triggerDetonation) = true;

#include "initSettings.hpp"

ADDON = true;
