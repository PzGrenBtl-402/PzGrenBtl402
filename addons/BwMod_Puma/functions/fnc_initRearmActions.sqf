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
private _mgMagazineName = [QEGVAR(BwMod_Weapons,1000Rnd_556x45)] call EFUNC(Rearm,getMagazineName);
// List of all mags which can be used to rearm the turret MG4
// Sorted decending to rearm with the bigger mags first
private _mgCompatibleMags = [
    "BWA3_200Rnd_556x45",
    "BWA3_200Rnd_556x45_Tracer",

    "200Rnd_556x45_Box_F",
    "200Rnd_556x45_Box_Tracer_F",
    "200Rnd_556x45_Box_Red_F",
    "200Rnd_556x45_Box_Tracer_Red_F",

    "rhsusf_200rnd_556x45_M855_box",
    "rhsusf_200rnd_556x45_M855_mixed_box",
    "rhsusf_200Rnd_556x45_box",
    "rhsusf_200rnd_556x45_mixed_box",

    "rhsusf_200Rnd_556x45_M855_soft_pouch",
    "rhsusf_200Rnd_556x45_M855_soft_pouch_coyote",
    "rhsusf_200Rnd_556x45_M855_soft_pouch_ucp",
    "rhsusf_200Rnd_556x45_M855_mixed_soft_pouch",
    "rhsusf_200Rnd_556x45_M855_mixed_soft_pouch_coyote",
    "rhsusf_200Rnd_556x45_M855_mixed_soft_pouch_ucp",
    "rhsusf_200Rnd_556x45_soft_pouch",
    "rhsusf_200Rnd_556x45_soft_pouch_coyote",
    "rhsusf_200Rnd_556x45_soft_pouch_ucp",
    "rhsusf_200Rnd_556x45_mixed_soft_pouch",
    "rhsusf_200Rnd_556x45_mixed_soft_pouch_coyote",
    "rhsusf_200Rnd_556x45_mixed_soft_pouch_ucp",

    "rhsusf_200Rnd_556x45_M855_soft_pouch",
    "rhsusf_200Rnd_556x45_M855_soft_pouch_coyote",
    "rhsusf_100Rnd_556x45_M200_soft_pouch_ucp",
    "rhsusf_100Rnd_556x45_M855_soft_pouch",
    "rhsusf_100Rnd_556x45_M855_soft_pouch_coyote",
    "rhsusf_100Rnd_556x45_M855_soft_pouch_ucp",
    "rhsusf_100Rnd_556x45_M855_mixed_soft_pouch",
    "rhsusf_100Rnd_556x45_M855_mixed_soft_pouch_coyote",
    "rhsusf_100Rnd_556x45_M855_mixed_soft_pouch_ucp",
    "rhsusf_100Rnd_556x45_soft_pouch",
    "rhsusf_100Rnd_556x45_soft_pouch_coyote",
    "rhsusf_100Rnd_556x45_soft_pouch_ucp",
    "rhsusf_100Rnd_556x45_mixed_soft_pouch",
    "rhsusf_100Rnd_556x45_mixed_soft_pouch_coyote",
    "rhsusf_100Rnd_556x45_mixed_soft_pouch_ucp",
    "rhsusf_100Rnd_556x45_M995_soft_pouch",
    "rhsusf_100Rnd_556x45_M995_soft_pouch_coyote",
    "rhsusf_100Rnd_556x45_M995_soft_pouch_ucp"
];
[
    _vehicle,
    format [LELSTRING(Rearm,rearm), _mgMagazineName],
    _rearmMGIcon,
    _rearmMGIcon,
    QUOTE([ARR_5(_target,_this,'shell_eject_pos',2,QQEGVAR(BwMod_Weapons,1000Rnd_556x45))] call EFUNC(Rearm,canRearmFromOutside)),
    QUOTE([ARR_5(_target,_caller,'shell_eject_pos',2,QQEGVAR(BwMod_Weapons,1000Rnd_556x45))] call EFUNC(Rearm,canRearmFromOutside)),
    {},
    {},
    {
        params ["_vehicle", "", "", "_args"];
        _args params ["_mgCompatibleMags"];

        [_vehicle, [0], QEGVAR(BwMod_Weapons,1000Rnd_556x45), _mgCompatibleMags, EGVAR(Rearm,rearmMGDuration)] call EFUNC(Rearm,rearm);
    },
    {},
    [_mgCompatibleMags],
    HOLD_TIME,
    nil,
    false,
    false,
    false
] call BIS_fnc_holdActionAdd;
