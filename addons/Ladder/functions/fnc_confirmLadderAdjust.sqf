#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Confim ladder adjustments.
 *
 *  Parameter(s):
 *      0: OBJECT - Player.
 *      1: NUMBER - Key pressed.
 *
 *  Returns:
 *       Success.
 *
 *  Example:
 *      [player, 1] call PzGrenBtl402_Redd_Marder_fnc_confirmLadderAdjust
 *
 */

params ["_player", "_key"];

TRACE_1("Cancel ladder adjustment",_key);

if (isNull _ladder || isNull _player || _key isNotEqualTo 1) exitwith {};

// remove mouse buttons and hint
call ace_interaction_fnc_hideMouseHint;

GVAR(ladder) = objNull;

false
