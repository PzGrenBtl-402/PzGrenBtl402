#include "script_component.hpp"
/**
 *  Author: Zumi, Timi007
 *
 *  Description:
 *      Pick up the tripod.
 *
 *  Parameter(s):
 *      0: OBJECT - Tripod.
 *      1: OBJECT - Player.
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      [this, player] call PzGrenBtl402_Redd_MG3_fnc_pickupTripod
 *
 */

params ["_tripod", "_player"];

_player playAction "PutDown";

[{((animationState player) select [25,7]) isEqualTo "putdown"}, {
    params ["_tripod", "_player"];

    deleteVehicle _tripod;
    _player addBackpackGlobal "rnt_mg3_static_tripod";
}, [_tripod, _player]] call CBA_fnc_waitUntilAndExecute;
