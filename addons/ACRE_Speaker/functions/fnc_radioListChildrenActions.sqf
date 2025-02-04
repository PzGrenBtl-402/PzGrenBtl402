#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Adds child actions for self-interaction.
 *      Adds an action to toggle the speaker of a radio.
 *
 *  Parameter(s):
 *      0: OBJECT - Interaction Target (Player)
 *
 *  Returns:
 *       ARRAY - ACE Child Actions
 *
 *  Example:
 *      [player] call PzGrenBtl402_ACRE_Speaker_fnc_radioListChildrenActions
 *
 */

private _actions = _this call acre_ace_interact_fnc_radioListChildrenActions;

{
    _x params ["_action", "_children", "_target"];
    _action params ["_id"];

    if !([_id] call acre_api_fnc_isRadio) then {continue};
    private _radioType = [_id] call acre_api_fnc_getBaseRadio;

    // Supported radio types
    if !(_radioType in ["ACRE_PRC148", "ACRE_PRC152", "ACRE_SEM70", "ACRE_SEM52SL"]) then {continue};

    private _isSpeaker = [_id] call acre_api_fnc_isRadioSpeaker;
    private _text = [LLSTRING(EnableSpeaker), LLSTRING(DisableSpeaker)] select _isSpeaker;
    private _icon = [QPATHTOF(data\ui\icons\enable_speaker_icon.paa), QPATHTOF(data\ui\icons\disable_speaker_icon.paa)] select _isSpeaker;

    private _speakerAction = [
        QGVAR(toggleSpeaker),
        _text,
        _icon,
        {(_this select 2) call acre_api_fnc_setRadioSpeaker},
        {true},
        {},
        [_id, !_isSpeaker]
    ] call ace_interact_menu_fnc_createAction;

    _children pushBack [_speakerAction, [], _target];
} forEach _actions;

_actions
