#include "script_component.hpp"
/**
 *  Author: Zumi, Timi007
 *
 *  Description:
 *      Checks if current weapon of the player can be used to assemble the static MG.
 *
 *  Parameter(s):
 *      0: OBJECT - Tripod.
 *      1: OBJECT - Player.
 *
 *  Returns:
 *      BOOLEAN - Can assemble static MG.
 *
 *  Example:
 *      [this, player] call PzGrenBtl402_Redd_MG3_fnc_canMountMG3
 *
 */

params ["_tripod", "_player"];

private _primary = primaryWeapon _player;
private _supportedMgs = [
    "BWA3_MG3",
    "BWA3_MG3_bipod",
    "BWA3_MG3_MicroT2_pointer_bipod",
    "hlc_lmg_MG3",
    "hlc_lmg_MG3_100rnd",
    "hlc_lmg_MG3_optic",
    "hlc_lmg_MG3KWS_b",
    "hlc_lmg_MG3KWS_g",
    "hlc_lmg_MG3KWS",

    "gm_mg3_blk",
    "gm_mg3_des"
];

(_primary in _supportedMgs) &&
((currentWeapon _player) isEqualTo _primary)
