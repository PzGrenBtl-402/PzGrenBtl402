params ["_veh"];

[
_veh,
'TOW laden',
'\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa',
'\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa',
'[_target] call PzGrenBtl402_fnc_WieselTOWCanLoadTOW;',
'[_target] call PzGrenBtl402_fnc_WieselTOWCanLoadTOW;',
{},
{},
{params ["_target"]; _target call PzGrenBtl402_fnc_WieselTOWLoadTOW;},
{},
[],
10,
nil,
false,
false,
false
] call BIS_fnc_holdActionAdd;
