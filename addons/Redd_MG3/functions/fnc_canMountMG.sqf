#include "script_component.hpp"
/**
 *  Author: Zumi
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
