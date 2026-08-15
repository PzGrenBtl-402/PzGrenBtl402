#include "script_component.hpp"
/**
 *  Author: gpgpgpgp, commy2, PabstMirror, mharis001, Timi007
 *
 *  Description:
 *      Starts cutting down a object.
 *
 *  Parameter(s):
 *      0: OBJECT - Unit.
 *      0: OBJECT - Object.
 *
 *  Returns:
 *       Nothing.
 *
 *  Example:
 *      [player, cursorObject] call PzGrenBtl402_Wirecutter_fnc_cutDownObject
 *
 */

params ["_unit", "_object"];
TRACE_2("Object cutting started",_unit,_object);

if (_unit != ACE_player) exitWith {};

// Get cut time based on if unit is a engineer
private _cutTime = [
    CUT_TIME_DEFAULT,
    CUT_TIME_ENGINEER
] select (_unit call ace_common_fnc_isEngineer);

if !(_unit call ace_common_fnc_isSwimming) then {
    [_unit, "AinvPknlMstpSnonWnonDr_medic5", 0] call ace_common_fnc_doAnimation;
};

[
    _cutTime,
    [_unit, _object, 0],
    {
        TRACE_1("Object cutting successful",_this);
        (_this select 0) params ["_unit", "_object"];

        // Destroy the object
        deleteVehicle _object;

        if !(_unit call ace_common_fnc_isSwimming) then {
            [_unit, "AmovPknlMstpSrasWrflDnon", 1] call ace_common_fnc_doAnimation;
        };
    },
    {
        TRACE_1("Object cutting failed",_this);
        (_this select 0) params ["_unit"];

        if !(_unit call ace_common_fnc_isSwimming) then {
            [_unit, "AmovPknlMstpSrasWrflDnon", 1] call ace_common_fnc_doAnimation;
        };
    },
    LLSTRING(cuttingObject),
    {
        params ["_args", "_elapsedTime"];
        _args params ["_unit", "_object", "_lastSoundTime"];

        if (_elapsedTime > _lastSoundTime + SOUND_CLIP_TIME_SPACING) then {
            playSound3D ["\z\ace\addons\logistics_wirecutter\sound\wirecut.ogg", objNull, false, getPosASL _unit, 3, 1, 10];
            _args set [2, _elapsedTime];
        };

        !isNull _object
        && {damage _object < 1}
        && {[_unit] call FUNC(hasWirecutter)}
    },
    ["isNotSwimming"]
] call ace_common_fnc_progressBar;

