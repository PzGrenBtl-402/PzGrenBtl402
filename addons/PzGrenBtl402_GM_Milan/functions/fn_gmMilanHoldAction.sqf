params ["_veh"];

// Milan laden
[
_veh,
"Milan laden",
"\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa",
"\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa",
"_this distance _target < 2 and 'Redd_Milan_Static_Barrel' isEqualTo backpack _this and count magazines _target isEqualTo 0",
"_caller distance _target < 2 and 'Redd_Milan_Static_Barrel' isEqualTo backpack _caller and count magazines _target isEqualTo 0",
{},
{},
{params ["_target", "_caller"]; _target addMagazineGlobal 'gm_1Rnd_milan_heat_dm92'; [_target] remoteExec ['reload']; removeBackpackGlobal _caller;},
{},
[],
10,
nil,
false,
false,
false
] call BIS_fnc_holdActionAdd;

// Milan entladen
[
_veh,
"Milan entladen",
"\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa",
"\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa",
"!(count magazines _target isEqualTo 0) and _this distance _target < 2",
"!(count magazines _target isEqualTo 0) and _caller distance _target < 2",
{},
{},
{params ["_target", "_caller"]; [_target, 'gm_1Rnd_milan_heat_dm92'] remoteExec ['removeMagazines']; _caller addBackpackGlobal 'Redd_Milan_Static_Barrel';},
{},
[],
10,
nil,
false,
false,
false
] call BIS_fnc_holdActionAdd;