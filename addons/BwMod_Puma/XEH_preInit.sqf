#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

missionNamespace setVariable ["BWA3_MK30AP", true];
missionNamespace setVariable ["BWA3_MK30HE", true];
missionNamespace setVariable ["BWA3_MK30ABM", false];

ADDON = true;
