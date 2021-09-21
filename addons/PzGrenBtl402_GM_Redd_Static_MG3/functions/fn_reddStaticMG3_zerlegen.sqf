params ["_player", "_csw", "_actionParams"];


// Make the standing player kneel down
if (stance _player != "PRONE") then {
    [_player, "amovpknlmstpsraswrfldnon", 1] call ace_common_fnc_doAnimation;
};

// Barrel dismount gesture
[_player, "ace_overheating_GestureDismountMuzzle", 1] call ace_common_fnc_doGesture;
playSound "ACE_BarrelSwap";

[
  5,
  [_csw, _player],
  {
    params ["_args", "_elapsedTime", "_totalTime", "_errorCode"];
    _args params ["_laf", "_p"];
    private _magazinesAmmo = (magazinesAmmo [_laf, false]);
    if !(_magazinesAmmo isEqualTo []) then {
      {
        [_p, _x select 0, _x select 1, true] call CBA_fnc_addMagazine;
      } foreach _magazinesAmmo;
      {
        // Leere Magazine wollen wir nicht aufnehmen
        if ((_x select 1) > 0) then {
          [_p, _x select 0, _x select 1, true] call CBA_fnc_addMagazine;
          _target removeMagazinesTurret [_x select 0, [0]];
        };
      } foreach _magazinesAmmo;
    };

    private _weaponHolder = nearestObjects [_p, ["WeaponHolder"], 2, true];
    if (_weaponHolder isEqualTo []) then {
        _weaponHolder = createVehicle ["GroundWeaponHolder", [0,0,0], [], 0, "CAN_COLLIDE"];
        _weaponHolder setPosASL getPosASL _p;
        _weaponHolder addBackpackCargoGlobal ["rnt_mg3_static_tripod", 1];
    } else {
      (_weaponHolder select 0) addBackpackCargoGlobal ["rnt_mg3_static_tripod", 1];
    };
    [_p, (_laf getVariable ["402_mg_type", "hlc_lmg_MG3"]), true] call CBA_fnc_addWeapon;
    [_p, primaryWeapon _p] call ace_weaponselect_fnc_selectWeaponMode;
    deleteVehicle _laf;
  },
  {},
  "Löse MG3 von der Lafette",
  {
    params ["_args", "_elapsedTime", "_totalTime", "_errorCode"];
    _args params ["_laf", "_p"];
    alive _laf;
  },
  ["isNotInside", "isNotSitting", "isNotSwimming"]
] call ace_common_fnc_progressBar;
