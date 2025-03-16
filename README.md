# PzGrenBtl 402 Mod

This mod contains changes to Redd'n'Tanks, BWMod, NIArms, RHS and GM improving ACRE Radio Racks and adding further functionality and features.

## Requirements

- [CBA_A3](https://steamcommunity.com/sharedfiles/filedetails/?id=450814997)
- [ACE3](https://steamcommunity.com/sharedfiles/filedetails/?id=463939057)
- [ACRE2](https://steamcommunity.com/sharedfiles/filedetails/?id=751965892)
- [Redd'n'Tank Vehicles](https://steamcommunity.com/sharedfiles/filedetails/?id=1128145626)

Optional:
- [GM](https://store.steampowered.com/app/1042220/Arma_3_Creator_DLC_Global_Mobilization__Cold_War_Germany/)
- [BWMod](https://steamcommunity.com/sharedfiles/filedetails/?id=1200127537)
- [Rosche](https://steamcommunity.com/sharedfiles/filedetails/?id=1527410521)
- [CUP Terrains - Core](https://steamcommunity.com/sharedfiles/filedetails/?id=583496184)
- [RHSAFRF](https://steamcommunity.com/workshop/filedetails/?id=843425103)
- [RHSTERRACORE](https://steamcommunity.com/sharedfiles/filedetails/?id=2288691268)
- [NIArms Core](https://steamcommunity.com/sharedfiles/filedetails/?id=667454606)
- [NIArms MG3 GPMGs](https://steamcommunity.com/sharedfiles/filedetails/?id=774809509)
- [Global Ops Terrains](https://steamcommunity.com/sharedfiles/filedetails/?id=2917444360)
- [Bundeswehr Waffenkammer (PBW)](https://steamcommunity.com/sharedfiles/filedetails/?id=2693900325)
- [JSRS SOUNDMOD 2025 Beta](https://steamcommunity.com/sharedfiles/filedetails/?id=3407948300)

Whitelist these client-side only mods: `PzGrenBtl402_JSRS2025_NiArms_Compat_MG3, PzGrenBtl402_JSRS2025_Redd_Compat, PzGrenBtl402_JSRS2025_Redd_Compat_NiArms_Sounds`

## Modifications

### Redd'n'Tank

- Replace Redd MG3 Sound with NiArms Sounds (JSRS 2025 takes precedence)
- Marder Milan can only be assembled if the tripod is in the vehicle cargo
- Assemble Marder Milan also with GM Milan tripod
- Fix missing Marder ramp sounds (Fixes RPT error)
- Reduced HUD for static weapons and vehicles
- Remove Marder commander stabilizer
- Remove NVG of Marder
- Small changes to Marder (initial gun zeroing to 800 m; Don't lock turret when driver is turned out; Shortcut for commander to go higher; ...)
- Custom TOW reloading system
- Get in and out of Marder through hatches
- Ability to setup ladder on top of Marder (for breaching into buildings)
- Add JSRS 2025 compatability

### BWMod

- Reduced headgear mass

### GM

- Add Fuchs door actions
- Single fire mode for Marder
- More durable buildings (can take more damage)
- Allow GM wire cutter to cut Arma vanilla NATO wires
- Modify ACE fragmentation settings of DM51 and DM51A1 grenades
- Add ACE self-interaction to swap fragmentation sleeve of DM51 and DM51A1 grenades

### RHS

- Custom Russian MotInf/MechInf Groups

### NIArms

- Added ACE Tracer effect
- Reduced mass of MG3 ammo
- Increase fire rate MG3 to 1200 rpm
- Add JSRS 2025 compatability for MG3

### Rosche

- Replace open/close door actions of buildings because they do not check if the door is locked
- More durable buildings (can take more damage)

### CUP Terrains / RHSTERRACORE / Global Ops Terrains

- More durable buildings (can take more damage)

### ACE

- Make flags lighter

### A3

- More durable buildings (can take more damage)
- Add modification of CRRCs that is more agile

### ACRE

- Add keybinds for switching working intercom radio (this is temporary until this feature is merged into ACRE)

### General

- [NiArms/GM/BwMod] Ability to assemble static MG3 with the primary weapon MG3
- ACRE Racks, attenuation rework, and speakers for manpacks and racks
- Increased vehicle space
- Ability to fire vehicle smoke launcher as gunner and commander (also turned out)
- [Redd'n'Tank/GM] Back compartment of the Marder is locked when ramp is closed (Driver and commander can access vehicle via the hatches)
- [Redd'n'Tank/GM] Custom Milan reloading system (One Milan tube bag is one shot)
- [Redd'n'Tank/GM] Custom weapon reloading system for Marder (ammo as inventory items, reload on top of vehicle)
