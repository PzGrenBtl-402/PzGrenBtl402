#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Returns all grenades where the fragmentation sleeve can be switched.
 *
 *  Parameter(s):
 *      0: OBJECT - Player.
 *
 *  Returns:
 *      ACE actions.
 *
 *  Example:
 *      [player] call PzGrenBtl402_GM_Weapons_fnc_getGrenadeChildren
 *
 */

params ["_unit"];

private _actions = [];

private _removeFragChildren = [];
private _mountFragChildren = [];

private _handledThrowable = createHashMap;
{
    _x params ["_throwable"];

    if (_throwable in _handledThrowable) then {continue};
    _handledThrowable set [_throwable, true];

    if (_throwable in GVAR(fragToConcMapping)) then {
        (GVAR(grenadeCache) get _throwable) params ["_name", "_picture"];
        TRACE_1("Add remove frag action",_throwable);

        private _action = [
            _throwable,
            _name,
            _picture,
            {
                params ["_unit", "", "_args"];
                _args params ["_frag", "_conc"];

                [_unit, false, _frag, _conc] call FUNC(mountFrag);
            },
            {true},
            {},
            [_throwable, GVAR(fragToConcMapping) get _throwable]
        ] call ace_interact_menu_fnc_createAction;
        _removeFragChildren pushBack [_action, [], _unit];
    };

    if (_throwable in GVAR(concToFragMapping)) then {
        (GVAR(grenadeCache) get _throwable) params ["_name", "_picture"];
        TRACE_1("Add mount frag action",_throwable);

        private _action = [
            _throwable,
            _name,
            _picture,
            {
                params ["_unit", "", "_args"];
                _args params ["_conc", "_frag"];

                [_unit, true, _conc, _frag] call FUNC(mountFrag);
            },
            {true},
            {},
            [_throwable, GVAR(concToFragMapping) get _throwable]
        ] call ace_interact_menu_fnc_createAction;
        _mountFragChildren pushBack [_action, [], _unit];
    };
} forEach (throwables _unit);

if (_removeFragChildren isNotEqualTo []) then {
    private _newDisplayNameAndIcon = [
        QGVAR(removeFrag),
        LLSTRING(RemoveFrag),
        QPATHTOF(data\ui\remove_frag_icon.paa)
    ];
    private _removeFragAction = _newDisplayNameAndIcon + (((_removeFragChildren select 0) select 0) select [3]);
    TRACE_1("",_removeFragAction);

    if (count _removeFragChildren > 1) then {
        _actions pushBack [_removeFragAction, _removeFragChildren, _unit];
    } else {
        _actions pushBack [_removeFragAction, [], _unit];
    };
};

if (_mountFragChildren isNotEqualTo []) then {
    private _newDisplayNameAndIcon = [
        QGVAR(mountFrag),
        LLSTRING(MountFrag),
        QPATHTOF(data\ui\mount_frag_icon.paa)
    ];
    private _mountFragAction = _newDisplayNameAndIcon + (((_mountFragChildren select 0) select 0) select [3]);
    TRACE_1("",_mountFragAction);

    if (count _mountFragChildren > 1) then {
        _actions pushBack [_mountFragAction, _mountFragChildren, _unit];
    } else {
        _actions pushBack [_mountFragAction, [], _unit];
    };
};

TRACE_3("",count _actions,count _mountFragChildren,count _removeFragChildren);

_actions
