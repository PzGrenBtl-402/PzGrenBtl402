#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Returns the first connected intercom network.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle
 *
 *  Returns:
 *       NUMBER - Intercom network or -1 if no connected intercom network exist
 *
 *  Example:
 *      [vehicle acre_player] call PzGrenBtl402_ACRE_Intercom_fnc_getFirstConnectedIntercom
 *
 */

params ["_vehicle"];

private _intercomNames = _vehicle getVariable ["acre_sys_intercom_intercomNames", []];

if (_vehicle isEqualTo acre_player || {_intercomNames isEqualTo []}) exitWith {-1};

private _activeIntercom = -1;
{
    private _connectionStatus = [_vehicle, acre_player, _forEachIndex, INTERCOM_STATIONSTATUS_CONNECTION] call acre_sys_intercom_fnc_getStationConfiguration;
    if (_connectionStatus > INTERCOM_DISCONNECTED) exitWith {
        _activeIntercom = _forEachIndex;
    }
} forEach _intercomNames;

_activeIntercom
