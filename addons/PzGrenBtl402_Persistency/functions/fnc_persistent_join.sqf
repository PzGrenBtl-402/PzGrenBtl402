/**
 *  Author: Zumi
 *
 *  Description:
 *      Puts the player back in place and shape
 *
 *  Parameter(s):
 *      0: ARRAY - Stored Information about the player
 *
 *  Returns:
 *      None
 *
 *  Example:
 *      [_spielerinfo] call PzGrenBtl402_Persistency_fnc_persistent_join
 *
 */

 #include "script_component.hpp"

 params [["_spielerinfo", []]];

 _spielerinfo params ["_loadout","_medical","_pos","_dir", "_name", ["_insignia", ""]];
 _medical params [
   "_isDeadPlayer",
   "_isUnconscious",
   "_ace_medical_pain",
   "_ace_medical_bloodVolume",
   "_ace_medical_tourniquets",
   "_ace_medical_treatment_occludedMedications",
   "_ace_medical_openWounds",
   "_ace_medical_bandagedWounds",
   "_ace_medical_stitchedWounds",
   "_ace_medical_isLimping",
   "_ace_medical_fractures",
   "_ace_medical_heartRate",
   "_ace_medical_bloodPressure",
   "_ace_medical_peripheralResistance",
   "_ace_medical_ivBags",
   "_ace_medical_bodyPartDamage",
   "_ace_medical_hemorrhage",
   "_ace_medical_inPain",
   "_ace_medical_painSuppress",
   "_ace_medical_medications",
   "_ace_medical_triageCard",
   ["_thirst", 0],
   ["_appetite", 0]
 ];

// Rüste Spieler aus
player setUnitLoadout [_loadout, false];

// Entferne Schlüssel und AceX Intel Objekte
{
 if ((_x isEqualto "ACE_key_customKeyMagazine") || (_x IN ["acex_intelitems_notepad","acex_intelitems_document","acex_intelitems_photo"])) then {
   [player, _x] call CBA_fnc_removeItem;
 };
} forEach (magazines player);

{
 if (_x isEqualto "ACE_key_master") then {
   [player, _x] call CBA_fnc_removeItem;
 };
} forEach (items player);

// Adde Earplugs
if (!("ACE_EarPlugs" in (items player))) then {
 [player, "ACE_EarPlugs"] call CBA_fnc_addItem;
};

/*

 Medic Vars

*/

player setVariable ["acex_field_rations_thirst", _thirst, true];
player setVariable ["acex_field_rations_hunger", _appetite, true];
player setVariable ["ace_medical_pain", _ace_medical_pain, true];
player setVariable ["ace_medical_bloodVolume", _ace_medical_bloodVolume, true];
player setVariable ["ace_medical_tourniquets", _ace_medical_tourniquets, true];
player setVariable ["ace_medical_treatment_occludedMedications", _ace_medical_treatment_occludedMedications, true];
player setVariable ["ace_medical_openWounds", _ace_medical_openWounds, true];
player setVariable ["ace_medical_bandagedWounds", _ace_medical_bandagedWounds, true];
player setVariable ["ace_medical_stitchedWounds", _ace_medical_stitchedWounds, true];
player setVariable ["ace_medical_isLimping", _ace_medical_isLimping, true];
player setVariable ["ace_medical_fractures", _ace_medical_fractures, true];
player setVariable ["ace_medical_heartRate", _ace_medical_heartRate, true];
player setVariable ["ace_medical_bloodPressure", _ace_medical_bloodPressure, true];
player setVariable ["ace_medical_peripheralResistance", _ace_medical_peripheralResistance, true];
player setVariable ["ace_medical_ivBags", _ace_medical_ivBags, true];
player setVariable ["ace_medical_bodyPartDamage", _ace_medical_bodyPartDamage, true];
player setVariable ["ace_medical_hemorrhage", _ace_medical_hemorrhage, true];
player setVariable ["ace_medical_inPain", _ace_medical_inPain, true];
player setVariable ["ace_medical_painSuppress", _ace_medical_painSuppress, true];
player setVariable ["ace_medical_medications", _ace_medical_medications, true];
player setVariable ["ace_medical_triageCard", _ace_medical_triageCard, true];

[player] call ace_medical_status_fnc_updateWoundBloodLoss;
[player] call ace_medical_engine_fnc_updateDamageEffects;

player setDir _dir;
player setPosATL _pos;

if (_isUnconscious) then {
 [player, true] call ace_medical_fnc_setUnconscious;
};


[
 {
   params ["_p", "_ins"];
   [_p, _ins] call BIS_fnc_setUnitInsignia;
   ["InitializePlayer", [_p, true]] call BIS_fnc_dynamicGroups;

 },
 [player, _insignia],
 1
] call CBA_fnc_waitAndExecute;

// Ist der Spieler tot gewesen?
if (_isDeadPlayer) then {
 [player] call ace_medical_status_fnc_setDead;
};
