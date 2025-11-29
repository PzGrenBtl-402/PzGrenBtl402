#include "script_component.hpp"
/**
 *  Author: BWMod-Team, Timi007
 *
 *  Description:
 *      Description
 *
 *  Parameter(s):
 *      0: TYPE - Parameter description
 *
 *  Returns:
 *       TYPE - Description
 *
 *  Example:
 *      _this call PzGrenBtl402_BwMod_Puma_fnc_onDrawRadar
 *
 */

private _unit = player;
private _vehicle = cameraOn;

// fix loader in optics mode
if ((_vehicle animationPhase "loaderhatch" > 0) && {isNil {_vehicle turretLocal [0, 1]}} && {_unit isEqualTo (_vehicle turretUnit [0, 1])}) exitWith {};

params ["_script"];
private _display = ctrlParent _script;
_display getVariable ["BWA3_radarControls", [
    controlNull, controlNull, controlNull, controlNull, controlNull
]] params ["_compass", "_chassis", "_turret", "_observer", "_missileWarnDir"];

// exit when not in gunner view
if (cameraView != "GUNNER") exitWith {
    ctrlDelete _compass;
    ctrlDelete _chassis;
    ctrlDelete _turret;
    ctrlDelete _observer;
    ctrlDelete _missileWarnDir;
};

if (isNull _compass) then {
    private _compass = _display ctrlCreate ["RscPicture", -1];
    private _chassis = _display ctrlCreate ["RscPicture", -1];
    private _turret = _display ctrlCreate ["RscPicture", -1];
    private _observer = _display ctrlCreate ["RscPicture", -1];
    private _missileWarnDir = _display ctrlCreate ["RscPicture", -1];

    _compass ctrlSetText "bwa3_common\rsc\Radar_Compass.paa";
    _chassis ctrlSetText "bwa3_common\rsc\Radar_Vehicle.paa";
    _turret ctrlSetText "bwa3_common\rsc\Radar_Turret.paa";
    _observer ctrlSetText "bwa3_common\rsc\Radar_Commander.paa";
    _missileWarnDir ctrlSetText "";

    private _position = [
        safeZoneX + 0.1 * safeZoneW,
        safeZoneY + 0.1 * safeZoneH,
        safeZoneW / 8,
        safeZoneH / 8 * getResolution # 4
    ];

    _compass ctrlSetPosition _position;
    _chassis ctrlSetPosition _position;
    _turret ctrlSetPosition _position;
    _observer ctrlSetPosition _position;
    _missileWarnDir ctrlSetPosition _position;

    _compass ctrlCommit 0;
    _chassis ctrlCommit 0;
    _turret ctrlCommit 0;
    _observer ctrlCommit 0;
    _missileWarnDir ctrlCommit 0;

    _display setVariable ["BWA3_radarControls", [_compass, _chassis, _turret, _observer, _missileWarnDir]];
};

// get vehicle, weapon and eye direction
private _vehicleDir = - getDir _vehicle;
private _weapon = currentWeapon _vehicle;
private _turretDir = 0;

if (_weapon != "") then {
    _turretDir = _vehicle weaponDirection _weapon;
    _turretDir = (_turretDir#0 atan2 _turretDir#1) + _vehicleDir;
};

private _observerDir = eyeDirection _vehicle;
_observerDir = (_observerDir#0 atan2 _observerDir#1) + _vehicleDir;

// rotate controls
_compass ctrlSetAngle [_vehicleDir, 0.5, 0.5];
_turret ctrlSetAngle [_turretDir, 0.5, 0.5];
_observer ctrlSetAngle [_observerDir, 0.5, 0.5];

// Show direction of incoming missile as warning
if (missionNamespace getVariable ["BWA3_showIncomingMissileWarning", false]) then {
    private _missile = _vehicle getVariable [QGVAR(mussMissileLock), objNull];
    if (!isNull _missile && alive _missile) then {
        _missileWarnDir ctrlSetText QPATHTOF(data\rsc\Radar_MissileWarning.paa);
        _missileWarnDir ctrlSetAngle [_vehicle getRelDir _missile, 0.5, 0.5];
        _missileWarnDir ctrlSetTextColor [1, 0, 0, 1];
    };
} else {
    _missileWarnDir ctrlSetText "";
};
