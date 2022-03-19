#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      [Description]
 *
 *  Parameter(s):
 *      0: [TYPE] - [argument name]
 *
 *  Returns:
 *      [TYPE] - [return name]
 *
 *  Example:
 *      [[arguments]] call [function name]
 *
 */

params ["_vehicle", "_player"];

_player isEqualTo (fullCrew [_vehicle, "turret", true] select 2 select 0) &&
{!isTurnedOut _player}
