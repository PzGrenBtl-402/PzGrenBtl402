#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

ADDON = true;

#include "initSettings.hpp"

// Item with fragmentation sleeve, without fragmentation sleeve
GVAR(fragToConcMapping) = createHashMapFromArray [
    ["gm_handgrenade_frag_dm51", "gm_handgrenade_conc_dm51"],
    ["gm_handgrenade_frag_dm51a1", "gm_handgrenade_conc_dm51a1"],
    ["gm_handgrenade_pracfrag_dm58", "gm_handgrenade_pracconc_dm58"],
    ["PBW_DM51A1_Frag", "PBW_DM51A1_NoFrag"]
];

// Reverse mapping
GVAR(concToFragMapping) = createHashMap;
{
    GVAR(concToFragMapping) set [_y, _x];
} forEach GVAR(fragToConcMapping);

GVAR(grenadeCache) = createHashMap;
private _cfgMagazines = configFile >> "CfgMagazines";
{
    {
        private _cfg = _cfgMagazines >> _x;
        private _displayName = getText (_cfg >> "displayName");
        private _picture = getText (_cfg >> "picture");

        GVAR(grenadeCache) set [_x, [_displayName, _picture]];
    } forEach [_x, _y];
} forEach GVAR(fragToConcMapping);
