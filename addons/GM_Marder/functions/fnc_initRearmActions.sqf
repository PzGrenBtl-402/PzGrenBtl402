#include "script_component.hpp"
/**
 *  Author: Mishkar, Timi007
 *
 *  Description:
 *      Initializes rearm MK actions.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle (Marder).
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      _this call PzGrenBtl402_GM_Marder_fnc_initRearmActions
 *
 */

#define HOLD_TIME 5

params ["_vehicle"];

if (!hasInterface) exitWith {};

private _rearmHEShowCondition = QUOTE([ARR_3(_target,_this,QQGVAR(20x139mm_hei_t_dm81))] call FUNC(canRearmMK));
private _rearmAPShowCondition = QUOTE([ARR_3(_target,_this,QQGVAR(20x139mm_apds_t_dm63))] call FUNC(canRearmMK));
private _rearmMKProgressCondition = QUOTE([ARR_2(_target,_this)] call FUNC(canRearmMKProgress));

// MK HE laden
private _rearmHeIcon = QPATHTOEF(Rearm,data\ui\holdaction_rearm_mk20_he.paa);
private _heMagazineName = [QEGVAR(Rearm,mk20_he_ammo)] call EFUNC(Rearm,getMagazineName);
[
    _vehicle,
    format [LELSTRING(Rearm,rearm), _heMagazineName],
    _rearmHeIcon,
    _rearmHeIcon,
    _rearmHEShowCondition,
    _rearmMKProgressCondition,
    {},
    {},
    {
        params ["_vehicle"];
        [_vehicle, [0], QGVAR(20x139mm_hei_t_dm81), [QEGVAR(Rearm,mk20_he_ammo)], EGVAR(Rearm,rearmMK20Duration)] call EFUNC(Rearm,rearm);
    },
    {},
    [],
    HOLD_TIME,
    nil,
    false,
    false,
    false
] call BIS_fnc_holdActionAdd;

// MK AP laden
private _rearmApIcon = QPATHTOEF(Rearm,data\ui\holdaction_rearm_mk20_ap.paa);
private _apMagazineName = [QEGVAR(Rearm,mk20_ap_ammo)] call EFUNC(Rearm,getMagazineName);
[
    _vehicle,
    format [LELSTRING(Rearm,rearm), _apMagazineName],
    _rearmApIcon,
    _rearmApIcon,
    _rearmAPShowCondition,
    _rearmMKProgressCondition,
    {},
    {},
    {
        params ["_vehicle"];
        [_vehicle, [0], QGVAR(20x139mm_apds_t_dm63), [QEGVAR(Rearm,mk20_ap_ammo)], EGVAR(Rearm,rearmMK20Duration)] call EFUNC(Rearm,rearm);
    },
    {},
    [],
    HOLD_TIME,
    nil,
    false,
    false,
    false
] call BIS_fnc_holdActionAdd;

// Nebeltöpfe auffüllen
private _rearmSmokeIcon = QPATHTOEF(Rearm,data\ui\holdaction_rearm_smoke.paa);
private _smokeMagazineName = [QEGVAR(Rearm,smoke_6grenade_ammo)] call EFUNC(Rearm,getMagazineName);
[
    _vehicle,
    format [LELSTRING(Rearm,rearm), _smokeMagazineName],
    _rearmSmokeIcon,
    _rearmSmokeIcon,
    QUOTE([ARR_5(_target,_this,'mainturret_coax',2,QQGVAR(1Rnd_76mm_RP_dm35))] call EFUNC(Rearm,canRearmFromOutside)),
    QUOTE([ARR_5(_target,_caller,'mainturret_coax',2,QQGVAR(1Rnd_76mm_RP_dm35))] call EFUNC(Rearm,canRearmFromOutside)),
    {},
    {},
    {
        params ["_vehicle"];
        [_vehicle, [0], QGVAR(1Rnd_76mm_RP_dm35), [QEGVAR(Rearm,smoke_6grenade_ammo)], 2 * EGVAR(Rearm,rearmSmoke3Duration)] call EFUNC(Rearm,rearm);
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
private _mgMagazineName = getText (configFile >> "CfgWeapons" >> QGVAR(mg3_coax) >> "displayName");
// List of all mags which can be used to rearm the turret MG3
// Sorted decending to rearm with the bigger mags first
private _mg3CompatibleMags = [
    "hlc_250Rnd_762x51_B_MG3",
    "hlc_250Rnd_762x51_M_MG3",
    "hlc_250Rnd_762x51_mdim_MG3",
    "hlc_250Rnd_762x51_Barrier_MG3",
    "hlc_250Rnd_762x51_T_MG3",

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
    QUOTE([ARR_5(_target,_this,'mainturret_coax',2,'gm_500Rnd_762x51mm_b_t_DM21_mg3')] call EFUNC(Rearm,canRearmFromOutside)),
    QUOTE([ARR_5(_target,_caller,'mainturret_coax',2,'gm_500Rnd_762x51mm_b_t_DM21_mg3')] call EFUNC(Rearm,canRearmFromOutside)),
    {},
    {},
    {
        params ["_vehicle", "", "", "_args"];
        _args params ["_mg3CompatibleMags"];

        [_vehicle, [0], "gm_500Rnd_762x51mm_b_t_DM21_mg3", _mg3CompatibleMags, EGVAR(Rearm,rearmMG3Duration)] call EFUNC(Rearm,rearm);
    },
    {},
    [_mg3CompatibleMags],
    HOLD_TIME,
    nil,
    false,
    false,
    false
] call BIS_fnc_holdActionAdd;
