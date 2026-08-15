#include "script_component.hpp"
/**
 *  Author: PabstMirror, mharis001, Timi007
 *
 *  Description:
 *      Dynamically adds "Cut Fence" actions to nearby fences when interact_menu is opened.
 *
 *  Parameter(s):
 *      0: NUMBER - Interact Menu Type (0 - World, 1 - Self)
 *
 *  Returns:
 *       Nothing
 *
 *  Example:
 *      [0] call PzGrenBtl402_Wirecutter_fnc_interactEH
 *
 */
params ["_interactionType"];

// Ignore self-interaction menu or mounted vehicle interaction
// For performance reasons only add PFH if player has wirecutter item
// If player somehow gets a wirecutter during keyDown, they will just have to reopen menu
if (
    _interactionType != 0
    || {!isNull objectParent ACE_player}
    || {!([ACE_player] call FUNC(hasWirecutter))}
) exitWith {};

TRACE_1("Starting wirecutter interact PFH",_interactionType);

[{
    params ["_args", "_pfhID"];
    _args params ["_setPosition", "_addedHelpers", "_objectsHelped"];

    if (!ace_interact_menu_keyDown) then {
        deleteVehicle _addedHelpers;
        [_pfhID] call CBA_fnc_removePerFrameHandler;
    } else {
        // Prevent rare error when ending mission with interact key down
        if (isNull ACE_player) exitWith {};

        // Rescan if player has moved more than 5 meters from last position
        if (getPosASL ACE_player distanceSqr _setPosition > 25) then {
            private _fncStatement = {
                params ["", "_player", "_attachedObject"];

                [_player, _attachedObject] call FUNC(cutDownObject);
            };
            private _fncCondition = {
                params ["_helper", "_player", "_attachedObject"];

                !isNull _attachedObject
                && {damage _attachedObject < 1}
                && {[_player] call FUNC(hasWirecutter)}
                && {[_player, _attachedObject, ["isNotSwimming"]] call ace_common_fnc_canInteractWith}
                && {
                    // Custom LOS check for objects
                    private _headPos = _player modelToWorldVisualWorld (_player selectionPosition "pilot");
                    !lineIntersects [_headPos, _helper modelToWorldVisualWorld [0, 0, 1.25], _attachedObject, _player]
                    || {!lineIntersects [_headPos, getPosASL _attachedObject, _attachedObject, _player]}
                }
            };
            {
                if (!(_x in _objectsHelped) && {_x call FUNC(canCut)}) then {
                    _objectsHelped pushBack _x;

                    private _helper = "ACE_LogicDummy" createVehicleLocal [0, 0, 0];
                    private _action = [
                        QGVAR(helperCutObject),
                        LLSTRING(cutObject),
                        "z\ace\addons\logistics_wirecutter\ui\wirecutter_ca.paa",
                        _fncStatement,
                        _fncCondition,
                        {},
                        _x,
                        {[0, 0, 0]},
                        5.5,
                        [false, false, false, false, true]
                    ] call ace_interact_menu_fnc_createAction;
                    [_helper, 0, [], _action] call ace_interact_menu_fnc_addActionToObject;

                    private _objectInfo = GVAR(possibleObjects) getOrDefault [(toLower (getModelInfo _x select 0)), []];
                    _objectInfo params ["", ["_actionPositionRel", [0, 0, 0]]];
                    _helper setPos (_x modelToWorld _actionPositionRel);

                    _addedHelpers pushBack _helper;
                };
            } forEach nearestObjects [ACE_player, [], 15];

            _args set [0, getPosASL ACE_player];
        };
    };
}, 0.5, [getPosASL ACE_player vectorAdd [-100, 0, 0], [], []]] call CBA_fnc_addPerFrameHandler;
