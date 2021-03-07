params ["_veh"];

player in [_veh turretUnit [0]] &&
"Redd_Milan_Static_Barrel" in backpackCargo _veh &&
count (_veh magazinesTurret [0]) isEqualTo 0 &&
alive _veh
