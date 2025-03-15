#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Disassembles the milan.
 *
 *  Parameter(s):
 *      0: OBJECT - Milan.
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      [this] call PzGrenBtl402_GM_Milan_fnc_disassemble
 *
 */

params ["_milan"];

private _player = call CBA_fnc_currentUnit;
_player playAction "PutDown";

[{((animationState (_this select 1)) select [25,7]) isEqualTo "putdown"}, {
    params ["_milan", "_player"];

    deleteVehicle _milan;
    _player addBackpackGlobal "gm_milan_launcher_weaponBag";
}, [_milan, _player]] call CBA_fnc_waitUntilAndExecute;
