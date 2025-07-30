#include "script_component.hpp"
/**
 *  Author: commy2, Max, Timi007
 *
 *  Description:
 *      Displays a rear view camera/commander camera.
 *
 *  Parameter(s):
 *      0: OBJECT - Puma.
 *      0: NUMBER - Camera index (0-4) or -1 to disable.
 *
 *  Returns:
 *       Noting.
 *
 *  Example:
 *      [vehicle player, 0] call PzGrenBtl402_BwMod_Puma_fnc_rearViewCamCargo
 *
 */

#define ACTIVE_POS [0.330 * safeZoneW + safeZoneX, 0.277 * safeZoneH + safeZoneY, 0.34 * safeZoneW, 0.455 * safeZoneH]
#define SLEEP_POS [safeZoneX + safeZoneW - pixelW, safeZoneY + safeZoneH - pixelH, pixelW, pixelH]

params ["_vehicle", "_selectedCamera"];

disableSerialization;
private _dlgRearViewCam = uiNamespace getVariable "BWA3_dlgRearViewCam";
private _ctrlRearViewCamProxy = _dlgRearViewCam displayCtrl 1;
private _ctrlRearViewCamProxyNVG = _dlgRearViewCam displayCtrl 2;
private _ctrlRearViewCam = _dlgRearViewCam displayCtrl 4;
private _ctrlRearViewCamIndicator = _dlgRearViewCam displayCtrl 5;

private _visionMode = 0;
_ctrlRearViewCam ctrlShow true;
_ctrlRearViewCamIndicator ctrlShow true;
_ctrlRearViewCamProxy ctrlSetPosition ACTIVE_POS;
_ctrlRearViewCamProxy ctrlCommit 0;

_ctrlRearViewCamIndicator ctrlSetText "";

switch (_selectedCamera) do {
    case -1: {
        BWA3_isRearViewCamera = false;
    };
    case 0: {
        ["cameraL", [-250, 150, -0.08], [0, -0.1, 0], 0.5, QPATHTOF(data\rsc\Radar_9.paa)] call FUNC(setCamera);
    };
    case 1: {
        ["cameraL", [-100, -150, -0.1], [0, 0, 0], 0.5, QPATHTOF(data\rsc\Radar_7.paa)] call FUNC(setCamera);
    };
    case 2: {
        ["cameraR", [100, -150, -0.1], [0, 0, 0], 0.5, QPATHTOF(data\rsc\Radar_5.paa)] call FUNC(setCamera);
    };
    case 3: {
        ["cameraR", [250, 150, -0.08], [0, -0.1, 0], 0.5, QPATHTOF(data\rsc\Radar_3.paa)] call FUNC(setCamera);
    };
    case 4: {
        ["commanderview", [0, 250, 0], [0, 0, 0], 0.25, QPATHTOF(data\rsc\Radar_Kdt.paa)] call FUNC(setCamera);
    };
};

waitUntil {
    if (currentVisionMode player != _visionMode) then {
        _visionMode = currentVisionMode player;
        if (_visionMode == 1) then {
            _ctrlRearViewCamProxy ctrlSetPosition SLEEP_POS;
            _ctrlRearViewCamProxy ctrlCommit 0;
            _ctrlRearViewCamProxyNVG ctrlSetPosition ACTIVE_POS;
            _ctrlRearViewCamProxyNVG ctrlCommit 0;
        } else {
            _ctrlRearViewCamProxy ctrlSetPosition ACTIVE_POS;
            _ctrlRearViewCamProxy ctrlCommit 0;
            _ctrlRearViewCamProxyNVG ctrlSetPosition SLEEP_POS;
            _ctrlRearViewCamProxyNVG ctrlCommit 0;
        };
    };

    !BWA3_isRearViewCamera || {!(player in (crew _vehicle - [driver _vehicle, gunner _vehicle, commander _vehicle]))} || {cameraView != "INTERNAL"} || {!isPiPEnabled}
};

_ctrlRearViewCam ctrlShow false;
_ctrlRearViewCamIndicator ctrlShow false;
_ctrlRearViewCamProxy ctrlSetPosition SLEEP_POS;
_ctrlRearViewCamProxy ctrlCommit 0;
_ctrlRearViewCamProxyNVG ctrlSetPosition SLEEP_POS;
_ctrlRearViewCamProxyNVG ctrlCommit 0;

BWA3_isRearViewCamera = false;
