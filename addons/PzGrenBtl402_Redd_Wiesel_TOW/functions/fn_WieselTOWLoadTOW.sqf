params ["_veh"];

[_veh, 'Redd_Milan_Static_Barrel'] call CBA_fnc_removeBackpackCargo;
[_veh, ['Redd_TOW_Mag', [0]]] remoteExec ['addMagazineTurret'];
