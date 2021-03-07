params ["_veh"];

// Milan aufbauen
[
_veh,
'Milan aufbauen',
'\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa',
'\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa',
'[_target] call PzGrenBtl402_fnc_marderCanAssembleMILAN;',
'[_target] call PzGrenBtl402_fnc_marderCanAssembleMILAN;',
{},
{},
{params ["_target"]; _target call PzGrenBtl402_fnc_marderAssembleMILAN;},
{},
[],
10,
nil,
false,
false,
false
] call BIS_fnc_holdActionAdd;

// Milan abbauen
[
_veh,
'Milan abbauen',
'\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa',
'\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa',
'[_target] call PzGrenBtl402_fnc_marderCanDisassembleMILAN;',
'[_target] call PzGrenBtl402_fnc_marderCanDisassembleMILAN;',
{},
{},
{params ["_target"]; _target call PzGrenBtl402_fnc_marderDisassembleMILAN;},
{},
[],
10,
nil,
false,
false,
false
] call BIS_fnc_holdActionAdd;

// Milan laden
[
_veh,
'Milan laden',
'\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa',
'\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa',
'[_target] call PzGrenBtl402_fnc_marderCanLoadMILAN;',
'[_target] call PzGrenBtl402_fnc_marderCanLoadMILAN;',
{},
{},
{params ["_target"]; _target call PzGrenBtl402_fnc_marderLoadMILAN;},
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
'[_target] call PzGrenBtl402_fnc_marderCanUnloadMILAN;',
'[_target] call PzGrenBtl402_fnc_marderCanUnloadMILAN;',
{},
{},
{params ["_target"]; _target call PzGrenBtl402_fnc_marderUnloadMILAN;},
{},
[],
10,
nil,
false,
false,
false
] call BIS_fnc_holdActionAdd;
