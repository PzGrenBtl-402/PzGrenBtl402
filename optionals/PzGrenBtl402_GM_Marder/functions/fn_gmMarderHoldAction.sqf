params ["_veh"];

// Milan laden
[
_veh,
'Milan laden',
'\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa',
'\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa',
'[_target] call PzGrenBtl402_fnc_gmMarderCanLoadMILAN;',
'[_target] call PzGrenBtl402_fnc_gmMarderCanLoadMILAN;',
{},
{},
{params ["_target"]; _target call PzGrenBtl402_fnc_gmMarderLoadMILAN;},
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
'Milan entladen',
'\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa',
'\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa',
'[_target] call PzGrenBtl402_fnc_gmMarderCanUnloadMILAN;',
'[_target] call PzGrenBtl402_fnc_gmMarderCanUnloadMILAN;',
{},
{},
{params ["_target"]; _target call PzGrenBtl402_fnc_gmMarderUnloadMILAN;},
{},
[],
10,
nil,
false,
false,
false
] call BIS_fnc_holdActionAdd;
