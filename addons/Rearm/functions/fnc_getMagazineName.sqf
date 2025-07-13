#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Gets a the display name for a magazine.
 *
 *  Parameter(s):
 *      0: STRING - Magazine Classname
 *
 *  Returns:
 *      STRING - Display Name
 *
 *  Example:
 *      ["B_20mm_AP"] call PzGrenBtl402_Rearm_fnc_getMagazineName
 *
 */

params [["_magazineClass", "", [""]]];

GVAR(magazineNameCache) getOrDefaultCall [_magazineClass, {
    private _displayName = getText (configFile >> "CfgMagazines" >> _magazineClass >> "displayName");

    if (_displayName isEqualTo "") then {
        _displayName = _magazineClass;
        WARNING_1("Magazine is missing display name [%1]",_magazineClass);
    };

    TRACE_2("Adding to cache",_magazineClass,_displayName);

    _displayName // return
}, true]
