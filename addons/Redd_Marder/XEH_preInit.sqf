#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

if (hasInterface) then {
    private _getInCommanderAction = configFile >> "CfgActions" >> "GetInCommander";
    private _getInCommanderParams = [
        [
            "", // will be set with setUserActionText
            {
                params ["_veh", "_unit"];

                [_veh, [COMMANDER_TURRET_PATH, false]] remoteExecCall ["lockTurret"];
                TRACE_2("Unlocked commander seat",_unit,_veh);
                _unit setVariable [QEGVAR(Common,lockedSeat), nil, true];

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
            QUOTE(((locked _target) isEqualTo 2) && {isNull objectParent _this} && {_target call FUNC(canGetInCommander)}), //_target = _veh, _this = player
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
            "(isNull (driver _target)) && {(locked _target) isEqualTo 2} && {isNull objectParent _this} && {!lockedDriver _target}", //_target = _veh, _this = player
            2
        ],
        "str_action_getin_driver",
        getText (_getInDriverAction >> "textDefault")
    ];

    GVAR(getInParams) = [_getInCommanderParams, _getInDriverParams];
};

ADDON = true;
