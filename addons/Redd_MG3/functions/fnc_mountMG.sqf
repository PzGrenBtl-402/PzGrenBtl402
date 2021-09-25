#include "script_component.hpp"
/**
 *  Author: Zumi, Timi007
 *
 *  Description:
 *      Mounts the current MG3 of the player to the tripod creating a static MG3.
 *
 *  Parameter(s):
 *      0: OBJECT - Tripod.
 *      1: OBJECT - Player.
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      [this, player] call PzGrenBtl402_Redd_MG3_fnc_mountMG
 *
 */

params ["_tripod", "_player"];

// Make the standing player kneel down
if (stance _player isNotEqualTo "PRONE") then {
    _player playAction "crouch";
};

// Barrel dismount gesture
[_player, "ace_overheating_GestureDismountMuzzle"] call ace_common_fnc_doGesture;
playSound "ACE_BarrelSwap";

[
    MG_MOUNT_TIME,
    [_player, _tripod],
    {
        params ["_args", "_elapsedTime", "_totalTime", "_errorCode"];
        _args params ["_player", "_tripod"];

        private _weaponType = primaryWeapon _player;
        private _magazineClass = currentMagazine _player;
        private _ammoCount = _player ammo _weaponType;
        _player removeWeaponGlobal _weaponType;

        private _tripodPos = getPosATL _tripod;
        private _tripodDir = getDir _tripod;
        deleteVehicle _tripod;

        private _mg3Static = createVehicle ["rnt_mg3_static", [0, 0, 0], [], 0, "CAN_COLLIDE"];
        ["ace_csw_disableVanillaAssembly", [_mg3Static]] call CBA_fnc_globalEvent;
        _mg3Static setDir _tripodDir;
        _mg3Static setPosATL _tripodPos;

        if ((_tripodPos select 2) < 0.5) then {
            _mg3Static setVectorUp (surfaceNormal _tripodPos);
        };

        if (_magazineClass isNotEqualTo "") then {
            _mg3Static addMagazineTurret [_magazineClass, [0], _ammoCount];
        };

        [{
            params ["_mg3Static", "_weaponType"];

            _mg3Static setVariable [QGVAR(mgType), _weaponType, true];
        }, [_mg3Static, _weaponType]] call CBA_fnc_execNextFrame; // need to wait a frame to allow setting object vars
    },
    {},
    LLSTRING(mounting),
    {
        (_this select 0) params ["_player", "_tripod"];
        alive _tripod;
    },
    ["isNotInside", "isNotSitting", "isNotSwimming"]
] call ace_common_fnc_progressBar;
