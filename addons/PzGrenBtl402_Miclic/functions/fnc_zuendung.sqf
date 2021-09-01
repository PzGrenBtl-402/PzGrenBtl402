/**
 *  Author: Zumi
 *
 *  Description:
 *      Fires a mine-clearing-line out of a crate
 *
 *  Parameter(s):
 *      0: OBJECT - Crate (PzGrenBtl402_miclic_prengschlauch).
 *      1: OBJECT - Smoke grenade that will be attached to the propelling object for effect enhancement.
 *      2: OBJECT - Player.
 *
 *  Returns:
 *      None
 *
 *  Example:
 *      [_kiste, _smokegrenade, player] call PzGrenBtl402_Miclic_fnc_zuendung
 *
 */
params [["_kiste", objnull], "_smoke", "_player"];

if (isNull _kiste) exitWith {
  deleteVehicle _smoke;
};

clearBackpackCargoGlobal _kiste;
clearMagazineCargoGlobal _kiste;
clearWeaponCargoGlobal _kiste;
clearItemCargoGlobal _kiste;

private _dir = (direction _kiste) - 180;
private _pos = getPosATL _kiste;
private _shell = createVehicle
["SCBACylinder_01_CUR_F", [_pos select 0, (_pos select 1) + 0.25, (_pos select 2) + 0.5], [], 0, "CAN_COLLIDE"];

_shell setDir _dir;
private _placeholder = createVehicle ["SoundSetSource_01_base_F", [0, 0, 0], [], 0, "CAN_COLLIDE"]; _placeholder allowDamage false;
_placeHolder attachTo [_kiste, [0,0,0.25], ""];
private _endpos =  _pos getPos [120, _dir];
private _schlauch =  ropeCreate [_placeHolder, [0,0,0], _shell, [0, 0, 0], 70];
_smoke attachTo [_shell, [0,0,0],""];
//Entrolle Schlauch mit etwa 20 m/s
ropeUnwind [_schlauch, 20, 100];


[_shell, "EXP_m04_flare", 250] call CBA_fnc_globalSay3d;

_shell setVelocity [30*(sin (getDir _shell)), 30*(cos (getDir _shell)), 35];

[
  {
    params ["_args", "_handle"];
    _args params ["_schlauch", "_shell", "_placeholder","_kiste", "_smoke", "_time"];
if ((ropeUnwound _schlauch) && (!isNull attachedTo _placeholder)) then {
detach _placeHolder;
_placeHolder setVelocity [5*(sin (getDir _shell)), 5*(cos (getDir _shell)), 3];
};
    if ((ropeUnwound _schlauch) && (((getPosATL _shell) select 2 < 0.5) || (isTouchingGround _shell)) || (cba_missiontime >= (_time + 10))) exitWith {
      [_handle] call CBA_fnc_removePerFrameHandler;
      deleteVehicle _smoke;
      //Boom
      [
        {
          params ["_schlauch", "_shell", "_placeholder", "_kiste", "_smoke"];
          _minen = [];
          _cutters = [];
          for "_i" from 0 to (_placeHolder distance2d _shell) step 10 do {
            private _mine = createMine ["Apersmine", _shell getPos [-_i, [_placeHolder, _shell] call bis_fnc_dirTo], [], 0];
            private _cutter = createVehicle ["Land_ClutterCutter_large_F", _shell getPos [-_i, [_placeHolder, _shell] call bis_fnc_dirTo], [], 0, "CAN_COLLIDE"];
            _minen pushBack _mine;
            _cutters pushBack _cutter;
            [_mine, [0,0,-_i]] ropeAttachTo _schlauch;
            _mine setVectorUp surfaceNormal (position _mine);

          };
          {_x ropeDetach _schlauch;} forEach _minen;
          {deletevehicle _x;} forEach _cutters;
          //Alle in der Nähe auch zünden
          {
            [_x] call ace_explosives_fnc_scriptedExplosive;
          } forEach ((allmines select {(position _x) inArea [_placeHolder getPos [(_placeHolder distance2d _shell)/2, [_placeHolder, _shell] call bis_fnc_dirTo], 5, (_placeHolder distance2d _shell), [_placeHolder, _shell] call bis_fnc_dirTo, true, 15]}) + _minen);
          ropeDestroy _schlauch;
          deleteVehicle _placeHolder;
          deleteVehicle _shell;
          deleteVehicle _kiste;
        },
        [_schlauch, _shell, _placeHolder, _kiste, _smoke],
        3

      ] call CBA_fnc_waitAndExecute;


    };

  },
  0,
  [_schlauch, _shell, _placeHolder, _kiste, _smoke, cba_missiontime]
] call CBA_fnc_addPerFrameHandler;
