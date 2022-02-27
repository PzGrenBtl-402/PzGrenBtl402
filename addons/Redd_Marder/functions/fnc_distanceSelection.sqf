#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Returns the distance between the unit and a selection point on the vehicle.
 *
 *  Parameter(s):
 *      0: OBJECT - The unit.
 *      1: OBJECT - The vehicle with a selection.
 *      2: OBJECT - The selection name on the vehcile.
 *
 *  Returns:
 *      NUMBER - Distance between selection pos and unit.
 *
 *  Example:
 *      [player, cursorObject, "shell_eject_pos"] call PzGrenBtl402_Redd_Marder_fnc_distanceSelection
 *
 */

params [["_unit", objNull, [objNull]], ["_vehicle", objNull, [objNull]], ["_selection", "", [""]]];

private _selectionPos = _vehicle selectionPosition _selection;
private _selectionPosASL = _vehicle modelToWorldWorld _selectionPos;

private _unitPosASL = getPosASL _unit;

_unitPosASL distance _selectionPosASL
