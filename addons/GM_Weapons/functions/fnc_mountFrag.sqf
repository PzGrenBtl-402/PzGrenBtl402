#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Switches the grenades between the version with or without fragmentation sleeve.
 *
 *  Parameter(s):
 *      0: OBJECT - Player.
 *      1: BOOLEAN - Mount frag (true) or remove frag (false).
 *      2: STRING - Grenade to remove.
 *      3: STRING - Grenade to add.
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      [player, false, "gm_handgrenade_frag_dm51a1", "gm_handgrenade_conc_dm51a1"] call PzGrenBtl402_GM_Weapons_fnc_mountFrag
 *
 */

params ["_unit", "_mountFrag", "_itemToRemove", "_itemToAdd"];

private _swapTime = 2;
[
    _swapTime,
    [_unit, _itemToRemove, _itemToAdd],
    {
        (_this select 0) params ["_unit", "_itemToRemove", "_itemToAdd"];

        switch (true) do {
            case (_itemToRemove in ((getMagazineCargo (vestContainer _unit)) select 0)): {
                _unit removeItemFromVest _itemToRemove;
                _unit addItemToVest _itemToAdd;
            };
            case (_itemToRemove in ((getMagazineCargo (uniformContainer _unit)) select 0)): {
                _unit removeItemFromUniform _itemToRemove;
                _unit addItemToUniform _itemToAdd;
            };
            case (_itemToRemove in ((getMagazineCargo (backpackContainer _unit)) select 0)): {
                _unit removeItemFromBackpack _itemToRemove;
                _unit addItemToBackpack _itemToAdd;
            };
            default {};
        };
    },
    {},
    [LLSTRING(RemovingFrag), LLSTRING(MountingFrag)] select _mountFrag,
    {
        (_this select 0) params ["_unit", "_itemToRemove"];

        _itemToRemove in ([_unit, false, true, true, true, false, true] call CBA_fnc_uniqueUnitItems)
    },
    ["isNotInside", "isNotSitting"]
] call ace_common_fnc_progressBar;
