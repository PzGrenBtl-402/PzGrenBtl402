#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Sets the working radio in the FFCS.
 *
 *  Parameter(s):
 *      0: NUMBER - Intercom network
 *      1: NUMBER - Working radio index
 *
 *  Returns:
 *       BOOL - Success
 *
 *  Example:
 *      [0, 1] call PzGrenBtl402_ACRE_Intercom_fnc_vic3ffcsSetWork
 *
 */

params ["_intercomNetwork", "_newWorkPos"];
TRACE_2("Set work",_intercomNetwork,_newWorkPos);

if (_newWorkPos < 0 || _newWorkPos > VIC3FFCS_WORK_KNOB_POSITIONS) exitWith {false};

private _vehicle = vehicle acre_player;
private _workPos = [_vehicle, acre_player, _intercomNetwork, INTERCOM_STATIONSTATUS_WORKKNOB] call acre_sys_intercom_fnc_getStationConfiguration;

if (_newWorkPos isEqualTo _workPos) exitWith {false};

private _wiredRacks = [_vehicle, acre_player, _intercomNetwork, INTERCOM_STATIONSTATUS_WIREDRACKS] call acre_sys_intercom_fnc_getStationConfiguration;
private _monitorPos = [_vehicle, acre_player, _intercomNetwork, INTERCOM_STATIONSTATUS_MONITORKNOB] call acre_sys_intercom_fnc_getStationConfiguration;

// Set the previous rack to no monitor unless it is selected in the monitor knob
if (_workPos isNotEqualTo 0) then {
    private _selectedRack = _wiredRacks select (_workPos - 1);

    private _rackId = _selectedRack select 0;
    if (_rackId isNotEqualTo "" && {_selectedRack select 2}) then {
        if (_workPos isNotEqualTo _monitorPos) then {
            private _radioId = [_rackId] call acre_sys_rack_fnc_getMountedRadio;

            if (_monitorPos isNotEqualTo VIC3FFCS_MONITOR_KNOB_POSITIONS) then {
                _selectedRack set [1, RACK_NO_MONITOR];
                if (_radioId isNotEqualTo "") then {
                    [_vehicle, acre_player, _radioId] call acre_sys_rack_fnc_stopUsingMountedRadio;
                };
            } else {
                _selectedRack set [1, RACK_RX_ONLY];
            };
        } else {
            _selectedRack set [1, RACK_RX_ONLY];
        };
    };
};

if (_newWorkPos isNotEqualTo 0) then {
    private _selectedRack = _wiredRacks select (_newWorkPos - 1); // RackID, Functionality, Has Access
    private _rackId = _selectedRack select 0;
    if ((_rackId isNotEqualTo "") && {_selectedRack select 2}) then {
        private _radioId = [_rackId] call acre_sys_rack_fnc_getMountedRadio;
        _selectedRack set [1, RACK_RX_AND_TX];

        if ((_newWorkPos isNotEqualTo _monitorPos) && {_radioId isNotEqualTo ""}) then {
            [_vehicle, acre_player, _radioId] call acre_sys_rack_fnc_startUsingMountedRadio;
        };
    };
} else {
    private _selectedRack = _wiredRacks select (_workPos - 1);
    private _rackId = _selectedRack select 0;
    if ((_rackId isNotEqualTo "") && {_selectedRack select 2} && {_workPos isNotEqualTo _monitorPos} && {_monitorPos isNotEqualTo VIC3FFCS_MONITOR_KNOB_POSITIONS}) then {
        private _radioId = [_rackId] call acre_sys_rack_fnc_getMountedRadio;

        _selectedRack set [1, RACK_NO_MONITOR];
        if (_radioId isNotEqualTo "") then {
            [_vehicle, acre_player, _radioId] call acre_sys_rack_fnc_stopUsingMountedRadio;
        };
    };
};

[_vehicle, acre_player, _intercomNetwork, INTERCOM_STATIONSTATUS_WORKKNOB, _newWorkPos] call acre_sys_intercom_fnc_setStationConfiguration;

true
