#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Sets the view of the camera.
 *
 *  Parameter(s):
 *      0: STRING - Memory selection.
 *      1: ARRAY - Viewing direction as relative offset.
 *      2: NUMBER - Field of view.
 *      3: STRING - Path to overlay texture for camera indicator.
 *
 *  Returns:
 *       Nothing.
 *
 *  Example:
 *      ["cameraL", [-2500, 1500, -0.08], 0.5, "z\PzGrenBtl402\addons\BwMod_Puma\data\rsc\Puma_Monitor_9.paa"] call PzGrenBtl402_BwMod_Puma_fnc_setCamera
 *
 */

params ["_camPosName", "_camDirHelperPos", "_camOffset", "_fov", "_indicatorOverlay"];

BWA3_cam attachTo [_vehicle, _camOffset, _camPosName, true];
BWA3_camNVG attachTo [_vehicle, _camOffset, _camPosName, true];

private _camPos = _vehicle selectionPosition _camPosName;
private _camDir = ((_camDirHelperPos select 0) - (_camPos select 0)) atan2 ((_camDirHelperPos select 1) - (_camPos select 1));

BWA3_cam setDir _camDir;
BWA3_cam camCommit 0;
BWA3_cam camPrepareFov _fov;
BWA3_cam camCommitPrepared 0;

BWA3_camNVG setDir _camDir;
BWA3_camNVG camCommit 0;
BWA3_camNVG camPrepareFov _fov;
BWA3_camNVG camCommitPrepared 0;

private _ctrlRearViewCamIndicator = (uiNamespace getVariable "BWA3_dlgRearViewCam") displayCtrl 5;
_ctrlRearViewCamIndicator ctrlSetText _indicatorOverlay;
