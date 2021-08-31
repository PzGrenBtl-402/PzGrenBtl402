
#include "script_component.hpp"

if (hasInterface) then {


	["Zeus", {
	    [QGVAR(zeus), player] call CBA_fnc_serverEvent;
	}, "adminLogged"] call CBA_fnc_registerChatCommand;

};


if (isServer) then {

  [QGVAR(zeus), {
	    params ["_unit"];
	    private _curator = createGroup sideLogic createUnit ["ModuleCurator_F", [0, 0, 0], [], 0, "CAN_COLLIDE"];
	    _curator setVariable ["addons", 3, true];
	    _curator addCuratorEditableObjects [allMissionObjects "", true];
	    _unit assignCurator _curator;
	    "Du wurdest erfolgreich als Zeus registriert!" remoteExec ["systemChat", _unit];
	}] call CBA_fnc_addEventHandler;

};
