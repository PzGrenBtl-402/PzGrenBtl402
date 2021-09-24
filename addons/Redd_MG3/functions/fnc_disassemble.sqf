#include "script_component.hpp"
/**
 *  Author: Zumi, Timi007
 *
 *  Description:
 *      Disassembles the static MG3 and returned the MG3 to the player.
 *
 *  Parameter(s):
 *      0: OBJECT - Static MG3.
 *      1: OBJECT - Player.
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      [this, player] call PzGrenBtl402_Redd_MG3_fnc_disassemble
 *
 */

params ["_mg3Static", "_player"];

// Make the standing player kneel down
if (stance _player isNotEqualTo "PRONE") then {
    _player playAction "crouch";
};

// Barrel dismount gesture
[_player, "ace_overheating_GestureDismountMuzzle", 1] call ace_common_fnc_doGesture;
playSound "ACE_BarrelSwap";

[
    DISASSEMBLE_TIME,
    [_mg3Static, _player],
    {
        params ["_args", "_elapsedTime", "_totalTime", "_errorCode"];
        _args params ["_mg3Static", "_player"];

        {
            _x params ["_magazineClass", "_ammoCount"];

            [_player, _magazineClass, _ammoCount, true] call CBA_fnc_addMagazine;
            _target removeMagazinesTurret [_magazineClass, [0]];
        } foreach (magazinesAmmo [_mg3Static, false]);

        private _weaponHolders = nearestObjects [_player, ["WeaponHolder"], 2, true];
        if (_weaponHolders isEqualTo []) then {
            private _weaponHolder = createVehicle ["GroundWeaponHolder", [0,0,0], [], 0, "CAN_COLLIDE"];
            _weaponHolder setPosASL getPosASL _player;
            _weaponHolder addBackpackCargoGlobal ["rnt_mg3_static_tripod", 1];
        } else {
            (_weaponHolders select 0) addBackpackCargoGlobal ["rnt_mg3_static_tripod", 1];
        };

        private _previousMG = _mg3Static getVariable [QGVAR(mgType), "hlc_lmg_MG3"];

        [_player, _previousMG, true] call CBA_fnc_addWeapon;
        [_player, primaryWeapon _player] call ace_weaponselect_fnc_selectWeaponMode;
        deleteVehicle _mg3Static;
    },
    {},
    LLSTRING(disassemble),
    {
        (_this select 0) params ["_mg3Static", "_player"];
        alive _mg3Static
    },
    ["isNotInside", "isNotSitting", "isNotSwimming"]
] call ace_common_fnc_progressBar;
