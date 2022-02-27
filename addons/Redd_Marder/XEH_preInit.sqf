#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

ADDON = true;

if (hasInterface) then {
    private _getInCommanderAction = configFile >> "CfgActions" >> "GetInCommander";
    private _getInCommanderParams = [
        [
            "", // will be set with setUserActionText
            {
                params ["_veh", "_unit"];
                _unit playAction "GetInLow";
                [{(animationState (_this select 1)) isEqualTo "amovpercmstpsnonwnondnon"}, {
                    params ["_veh", "_unit"];
                    [_unit, _veh] remoteExecCall ["moveInCommander", _unit];
                }, [_veh, _unit]] call CBA_fnc_waitUntilAndExecute;
            },
            nil,
            getNumber (_getInCommanderAction >> "priority"),
            true,
            true,
            getText (_getInCommanderAction >> "shortcut"),
            "(isNull (commander _target)) && {(locked _target) isEqualTo 2} && {isNull objectParent _this}", //_target = _veh, _this = player
            1.5
        ],
        "str_action_getin_commander",
        getText (configFile >> "CfgActions" >> "GetInGunner" >> "textDefault")
    ];

    private _getInDriverAction = configFile >> "CfgActions" >> "GetInDriver";
    private _getInDriverParams = [
        [
            "", // will be set with setUserActionText
            {
                params ["_veh", "_unit"];
                _unit playAction "GetInLow";
                [{(animationState (_this select 1)) isEqualTo "amovpercmstpsnonwnondnon"}, {
                    params ["_veh", "_unit"];
                    [_unit, _veh] remoteExecCall ["moveInDriver", _unit];
                }, [_veh, _unit]] call CBA_fnc_waitUntilAndExecute;
            },
            nil,
            getNumber (_getInDriverAction >> "priority"),
            true,
            true,
            getText (_getInDriverAction >> "shortcut"),
            "(isNull (driver _target)) && {(locked _target) isEqualTo 2} && {isNull objectParent _this}", //_target = _veh, _this = player
            2
        ],
        "str_action_getin_driver",
        getText (_getInDriverAction >> "textDefault")
    ];

    private _getOutAction = configFile >> "CfgActions" >> "GetOut";
    private _getOutParams = [
        [
            "", // will be set with setUserActionText
            {
                params ["_veh", "_unit"];
                _unit action ["getOut", _veh];
            },
            nil,
            getNumber (_getOutAction >> "priority"),
            false,
            true,
            getText (_getOutAction >> "shortcut"),
            "(_this in [driver _target, commander _target]) && {(locked _target) isEqualTo 2}", //_target = _veh, _this = player
            4
        ],
        "str_action_getout",
        getText (_getOutAction >> "textDefault")
    ];

    GVAR(getInOutParams) = [_getInCommanderParams, _getInDriverParams, _getOutParams];
};

["Redd_Marder_1A5_base", "InitPost", {
    _this call FUNC(initActions);
    _this call FUNC(initMilanActions);
    _this call FUNC(initRearmMKActions);
}, nil, nil, true] call CBA_fnc_addClassEventHandler;
