#include "script_component.hpp"


if (hasInterface) then {

  //Miclic
	private _MICLIC = ["MICLIC", "MICLIC zünden","\A3\ui_f\data\igui\cfg\simpleTasks\types\mine_ca.paa",{
		params ["_t","_p","_actionparams"];
		[_p, "PutDown"] call ace_common_fnc_doGesture;
		[
			  "Leite Zündung ein...",
			  3,
			  {
			    params ["_args","_success", "_time_elapsed", "_time_total"];
			    _args params ["_t", "_p"];
			    (_t distance2d _p < 2)
			  },
			  {
			    params ["_args","_success", "_time_elapsed", "_time_total"];
			    _args params ["_t", "_p"];
					[_t, "SN_Flare_Fired_4", 25] call CBA_fnc_globalSay3d;
					_t setVariable ["miclic_gezuendet", true, true];
					[
		        {
		          params ["_kiste"];
							_smoke = createVehicle ["SmokeShell", [0,0,0], [], 0 , "CAN_COLLIDE"];
		          [_kiste, _smoke, _p] remoteExeccall [QFUNC(zuendung), _kiste];

		        },
		        [_t],
		        3
		      ] call CBA_fnc_waitAndExecute;
			  },
			  {
			    params ["_args","_success", "_time_elapsed", "_time_total"];
			    _args params ["_t", "_p"];
			    [objNull, _t] call ace_common_fnc_claim;
			  },
			  [_t, _p],
			  true,
			  true,
				true
			] call CBA_fnc_progressBar;
	}, {!(_target getVariable ["miclic_gezuendet", false])}, {}, [], [0,0,0], 2] call ace_interact_menu_fnc_createAction;

	[QGVAR(sprengschlauch), 0, ["ACE_MainActions"], _MICLIC, true] call ace_interact_menu_fnc_addActionToClass;

};
