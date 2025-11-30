#include "script_component.hpp"
/**
 *  Author: Timi007
 *
 *  Description:
 *      Sets the vehicle number on the back of the SPz Puma. Must be executed on the server.
 *
 *  Parameter(s):
 *      0: OBJECT - SPz Puma.
 *      1: STRING - Number string in the format "color_number", e.g. "red_a3".
 *
 *  Returns:
 *       Nothing.
 *
 *  Example:
 *      [_this, "red_c3"] call PzGrenBtl402_BwMod_Puma_fnc_setVehicleNumber
 *
 */

params [["_vehicle", objNull, [objNull]], ["_number", "", [""]]];

if (!isServer || {is3DEN} || {isNull _vehicle} || {_number isEqualTo ""}) exitWith {};

private _texture = format [QPATHTOF(data\numbers\%1.paa), toLower _number];

private _textureObj = _vehicle getVariable [QGVAR(vehicleNumberObj), objNull];
if (isNull _textureObj) then {
    _textureObj = createVehicle ["UserTexture1m_F", [0, 0, 0], [], 0, "CAN_COLLIDE"];
};

_textureObj setObjectTextureGlobal [0, _texture];

_textureObj attachTo [_vehicle, [1.475, -2.37, 0.04], "spice rakety", true];
_textureObj setVectorDirAndUp [[-0.0838975, 0.986274, -0.142215], [-0.0120599, 0.141703, 0.989836]];
_textureObj setObjectScale 0.4;

_vehicle setVariable [QGVAR(vehicleNumberObj), _textureObj, true];
_vehicle setVariable [QGVAR(vehicleNumber), _number, true];
