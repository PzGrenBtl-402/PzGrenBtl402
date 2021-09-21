params ["_player", "_target", "_actionParams"];


// Make the standing player kneel down
if (stance _player != "PRONE") then {
    [_player, "amovpknlmstpsraswrfldnon", 1] call ace_common_fnc_doAnimation;
};

// Barrel dismount gesture
[_player, ace_overheating_GestureDismountMuzzle] call ace_common_fnc_doGesture;
playSound "ACE_BarrelSwap";

[
  5,
  [_player, _target],
  {
    params ["_args", "_elapsedTime", "_totalTime", "_errorCode"];
    _args params ["_p", "_t"];
    private _weaponType = (PrimaryWeapon _p);
    private _magazineClass = currentMagazine _p;
    private _cmd = currentMagazineDetail _p;
    _p removeWeaponGlobal _weaponType;
    private _tripodPos = getPosATL _t;
    private _tripodDir = getDir _t;
    deleteVehicle _t;
    [
      {
        params ["_tripodDir", "_tripodPos", "_magazineClass", "_weaponType", "_cmd"];
        private _csw = createVehicle ["rnt_mg3_static", [0, 0, 0], [], 0, "CAN_COLLIDE"];
        _csw setVariable ["402_mg_type", _weaponType, true];
        ["ace_csw_disableVanillaAssembly", [_csw]] call CBA_fnc_globalEvent;
        _csw setDir _tripodDir;
        _csw setPosATL _tripodPos;
        if ((_tripodPos select 2) < 0.5) then {
          _csw setVectorUp (surfaceNormal _tripodPos);
        };
        //[_csw] call PzGrenBtl402_fnc_reddStaticMG3_holdaction; //Deprecated
        if (_magazineClass != "") then {
          private _splitstrng = _cmd splitString "([ ]/:)";
          _csw addMagazineTurret [_magazineClass, [0], parsenumber (_splitstrng select 6)];
        };
      },
      [_tripodDir, _tripodPos, _magazineClass, _weaponType, _cmd]
    ] call CBA_fnc_execNextFrame;

  },
  {},
  "Lafettiere MG3",
  {
    params ["_args", "_elapsedTime", "_totalTime", "_errorCode"];
    _args params ["_p", "_t"];
    alive _t;
  },
  ["isNotInside", "isNotSitting", "isNotSwimming"]
] call ace_common_fnc_progressBar;
