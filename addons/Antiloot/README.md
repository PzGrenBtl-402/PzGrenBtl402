# Anti-Loot System

## Setup

### Weapon/Magazine/Item

In `init.sqf`, blacklist the Weapon/Magazine/Item that should trigger a trap:
```sqf
// 10 % chance that picking up an RPG7 and 50 % chance on fire will trigger a trap (detonation).
["launch_RPG7_F", 0.1, 0.5] call PzGrenBtl402_Antiloot_fnc_addToBlacklist;
// 50 % chance that picking up a HandGrenade and 100 % chance on throw will trigger a trap (detonation).
["HandGrenade", 0.5, 1] call PzGrenBtl402_Antiloot_fnc_addToBlacklist;
```

Note that the `addToBlacklist` function is local so that each play can have different blacklists with different probabilities. 

### Containers

If you want to trigger a trap when a container is opened, run this on the server (e.g. `initServer.sqf`):
```sqf
// 75 % chance that opening the container will trigger the trap. Roll only once when the container is opened for the first time.
[myCrate, 0.75, true] call PzGrenBtl402_Antiloot_fnc_addTrapToContainer;
```
