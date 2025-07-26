#include "script_component.hpp"
/**
 *  Author: commy2, Timi007
 *
 *  Description:
 *      Toggles the cargo cameras or rear view camera.
 *
 *  Parameter(s):
 *      0: NUMBER - 1 for next camera, -1 for previous.
 *
 *  Returns:
 *       BOOL - Handled.
 *
 *  Example:
 *      [1] call PzGrenBtl402_BwMod_Puma_fnc_toggleCamera
 *
 */

params [["_direction", 1, [0]]];

if (_direction != 1 && _direction != -1) exitWith {false};

private _unit = call CBA_fnc_currentUnit;

private _config = configFile >> "CfgVehicles" >> typeOf cameraOn;
if (getNumber (_config >> "BWA3_hasRearViewCamera") == 0 && !isClass (_config >> "BWA3_RearViewCamera")) exitWith {false};

// toggle camera Puma cargo
if (_unit isNotEqualTo driver vehicle _unit && {vehicle _unit isKindOf "BWA3_Puma_Base"}) then {
    private _selectedCamera = missionNamespace getVariable [QGVAR(selectedCamera), -1];

    GVAR(selectedCamera) = if (_direction == 1) then {
        if (_selectedCamera < 4) then {(_selectedCamera + 1) max -1} else {-1}
    } else {
        if (_selectedCamera >= 0) then {(_selectedCamera - 1) min 4} else {4}
    };

    BWA3_isRearViewCamera = true;
    [cameraOn, GVAR(selectedCamera)] spawn FUNC(rearViewCamCargo);
} else {
    // toggle camera driver
    if (missionNamespace getVariable ["BWA3_isRearViewCamera", false]) then {
        BWA3_isRearViewCamera = false;
    } else {
        BWA3_isRearViewCamera = true;
        [cameraOn] spawn compile preprocessFileLineNumbers "\bwa3_common\scripts\rearViewCam.sqf";
    };
};

true
