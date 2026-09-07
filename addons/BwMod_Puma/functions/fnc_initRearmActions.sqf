#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Initializes rearm MK actions.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle (Puma).
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      _this call PzGrenBtl402_BwMod_Puma_fnc_initRearmActions
 *
 */

#define HOLD_TIME 5

params ["_vehicle"];

if (!hasInterface) exitWith {};

// Nebeltöpfe auffüllen
private _rearmSmokeIcon = QPATHTOEF(Rearm,data\ui\holdaction_rearm_smoke.paa);
private _smokeMagazineName = [QEGVAR(Rearm,smoke_4grenade_ammo)] call EFUNC(Rearm,getMagazineName);
[
    _vehicle,
    format [LELSTRING(Rearm,rearm), _smokeMagazineName],
    _rearmSmokeIcon,
    _rearmSmokeIcon,
    QUOTE([ARR_5(_target,_this,'shell_eject_pos',2,'BWA3_SmokeLauncherMag')] call EFUNC(Rearm,canRearmFromOutside)),
    QUOTE([ARR_5(_target,_caller,'shell_eject_pos',2,'BWA3_SmokeLauncherMag')] call EFUNC(Rearm,canRearmFromOutside)),
    {},
    {},
    {
        params ["_vehicle"];
        [_vehicle, [0], "BWA3_SmokeLauncherMag", [QEGVAR(Rearm,smoke_4grenade_ammo)], 4 * EGVAR(Rearm,rearmSmokeDuration)] call EFUNC(Rearm,rearm);
    },
    {},
    [],
    HOLD_TIME,
    nil,
    false,
    false,
    false
] call BIS_fnc_holdActionAdd;

// MG laden
private _rearmMGIcon = QPATHTOEF(Rearm,data\ui\holdaction_rearm_mg.paa);
private _mgMagazineName = [QEGVAR(BwMod_Weapons,1000Rnd_762x51)] call EFUNC(Rearm,getMagazineName);
// List of all mags which can be used to rearm the turret MG5
// Sorted decending to rearm with the bigger mags first
private _mgCompatibleMags = [
    "hlc_250Rnd_762x51_B_MG3",
    "hlc_250Rnd_762x51_M_MG3",
    "hlc_250Rnd_762x51_mdim_MG3",
    "hlc_250Rnd_762x51_Barrier_MG3",
    "hlc_250Rnd_762x51_T_MG3",

    "150Rnd_762x51_Box",
    "150Rnd_762x51_Box_Tracer",

    "gm_120Rnd_762x51mm_B_T_DM21_mg3_grn",
    "gm_120Rnd_762x51mm_B_T_DM21A1_mg3_grn",
    "gm_120Rnd_762x51mm_B_T_DM21A2_mg3_grn",

    "BWA3_120Rnd_762x51_soft",
    "BWA3_120Rnd_762x51_Tracer_soft",
    "BWA3_120Rnd_762x51",
    "BWA3_120Rnd_762x51_Tracer",

    "hlc_100Rnd_762x51_B_MG3",
    "hlc_100Rnd_762x51_M_MG3",
    "hlc_100Rnd_762x51_mdim_MG3",
    "hlc_100Rnd_762x51_Barrier_MG3",
    "hlc_100Rnd_762x51_T_MG3",

    "hlc_50Rnd_762x51_B_MG3",
    "hlc_50Rnd_762x51_M_MG3",
    "hlc_50Rnd_762x51_mdim_MG3",
    "hlc_50Rnd_762x51_Barrier_MG3",
    "hlc_50Rnd_762x51_T_MG3"
];
[
    _vehicle,
    format [LELSTRING(Rearm,rearm), _mgMagazineName],
    _rearmMGIcon,
    _rearmMGIcon,
    QUOTE([ARR_5(_target,_this,'shell_eject_pos',2,QQEGVAR(BwMod_Weapons,1000Rnd_762x51))] call EFUNC(Rearm,canRearmFromOutside)),
    QUOTE([ARR_5(_target,_caller,'shell_eject_pos',2,QQEGVAR(BwMod_Weapons,1000Rnd_762x51))] call EFUNC(Rearm,canRearmFromOutside)),
    {},
    {},
    {
        params ["_vehicle", "", "", "_args"];
        _args params ["_mgCompatibleMags"];

        [_vehicle, [0], QEGVAR(BwMod_Weapons,1000Rnd_762x51), _mgCompatibleMags, EGVAR(Rearm,rearmMGDuration)] call EFUNC(Rearm,rearm);
    },
    {},
    [_mgCompatibleMags],
    HOLD_TIME,
    nil,
    false,
    false,
    false
] call BIS_fnc_holdActionAdd;
