#include "script_component.hpp"
/**
 *  Author: ACE, Timi007
 *
 *  Description:
 *      Checks if unit has a wirecutter.
 *
 *  Parameter(s):
 *      0: OBJECT - Unit.
 *
 *  Returns:
 *       BOOL - Unit has a wirecutter.
 *
 *  Example:
 *      [player] call PzGrenBtl402_Wirecutter_fnc_hasWirecutter
 *
 */

params ["_unit"];

((_unit call ace_common_fnc_uniqueItems) arrayIntersect ace_logistics_wirecutter_possibleWirecutters) isNotEqualTo [] ||
{getNumber ((configOf (backpackContainer _unit)) >> "ace_logistics_wirecutter_hasWirecutter") == 1} ||
{getNumber (configFile >> "CfgWeapons" >> (vest _unit) >> "ace_logistics_wirecutter_hasWirecutter") == 1}
