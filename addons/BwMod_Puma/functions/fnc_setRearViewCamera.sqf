#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Sets the rear view camera.
 *
 *  Parameter(s):
 *      0: OBJECT - The vehicle to attach to the camera.
 *
 *  Returns:
 *       Nothing.
 *
 *  Example:
 *      [cursorTarget] call PzGrenBtl402_BwMod_Puma_fnc_setRearViewCamera
 *
 */

params ["_vehicle"];

private _fov = 0.75;

BWA3_cam attachTo [_vehicle, [0, 0, 0], "camera"];
BWA3_camNVG attachTo [_vehicle, [0, 0, 0], "camera"];

private _camPos = _vehicle selectionPosition "camera";
private _camDirHelperPos = _vehicle selectionPosition "camera_dir";
private _camDir = ((_camDirHelperPos select 0) - (_camPos select 0)) atan2 ((_camDirHelperPos select 1) - (_camPos select 1));

BWA3_cam setDir _camDir;
BWA3_cam camSetFov _fov;
BWA3_cam camCommit 0;

BWA3_camNVG setDir _camDir;
BWA3_camNVG camSetFov _fov;
BWA3_camNVG camCommit 0;
