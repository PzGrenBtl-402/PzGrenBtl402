#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Toggles between AP and HE for the MK20 gun from Redd and GM.
 *
 *  Parameter(s):
 *      None
 *
 *  Returns:
 *       BOOL - Handled
 *
 *  Example:
 *      call PzGrenBtl402_Common_fnc_toggleHEAP
 *
 */

private _player = call CBA_fnc_currentUnit;
private _vehicle = objectParent _player;

if (_player isNotEqualTo gunner _vehicle) exitWith {false};

private _turret = _vehicle unitTurret _player;
(weaponState [_vehicle, _turret]) params ["_weapon", "_muzzle", "_firemode"];

private _cfgWeapons = configFile >> "CfgWeapons";
private _newMuzzle = switch (true) do {
    case (_weapon isKindOf ["BWA3_MK30", _cfgWeapons]);
    case (_weapon isKindOf ["Redd_MK20", _cfgWeapons]): {
        ["AP", "HE"] select (_muzzle isEqualTo "AP")
    };
    case (_weapon isKindOf ["gm_20mm_rh202", _cfgWeapons]): {
        ["gm_20mm_rh202_ap_muzzle", "gm_20mm_rh202_he_muzzle"] select (_muzzle isEqualTo "gm_20mm_rh202_ap_muzzle")
    };
    default {""};
};

if (_newMuzzle isEqualTo "") exitWith {false};

_vehicle selectWeaponTurret [_weapon, _turret, _newMuzzle, _firemode];

true

// weaponState [vehicle player, vehicle player unitTurret player]
// ["BWA3_MK30","BWA3_MK30","player","BWA3_240Rnd_APFSDS_shells",212,0,0]


// ["BWA3_MK30","BWA3_MK30","player","BWA3_160Rnd_ABM_shells",160,0,0]
