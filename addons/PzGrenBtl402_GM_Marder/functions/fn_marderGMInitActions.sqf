/**
 *  Author: Timi007
 *
 *  Description:
 *      Initializes custom getin/getout actions.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle (Marder).
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      _this call PzGrenBtl402_fnc_marderInitActions
 *
 */

params ["_veh"];

if (hasInterface) then { 
    private _vehName = getText (configFile >> "CfgVehicles" >> typeOf _veh >> "displayName");

    {
        _x params ["_params", "_str", "_picture"];
        private _text = format [localize _str, _vehName];
        private _actionID = _veh addAction _params;
        _veh setUserActionText [_actionID, _text, "", _picture];
    } forEach [
        PzGrenBtl402_getInCommanderParams,
        PzGrenBtl402_getInDriverParams, 
        PzGrenBtl402_getOutParams
    ];
};

if (isServer && locked _veh != 2) then {
    [_veh, 2] remoteExecCall ["lock", _veh];
};
