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

params ["_vehicle", "_player", "_magazineClass"];

[_vehicle, _player] call FUNC(canRearmMKProgress) &&
{[_vehicle, _magazineClass] call EFUNC(Rearm,canRearm)}
