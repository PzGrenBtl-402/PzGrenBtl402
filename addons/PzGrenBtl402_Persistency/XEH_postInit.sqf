#include "script_component.hpp"

if (isServer) then {

	// Erstelle Database
	datenbank = ["new", format ["database_%1", WorldName]] call OO_INIDBI;

	// Lösche die Spielerliste nach jedem Zyklus neu
	["deleteSection", "Spielerliste"] call datenbank;

	//Spieler JIP
	"check_in_db" addPublicVariableEventHandler {
	  params ["_varname","_varvalue","_target"];
	  _varvalue params ["_player","_clientID","_UID","_name"];
	  private _playerinfo = ["read", ["Spielerliste", _UID, []]] call datenbank;
	  if (_playerinfo isEqualto []) exitWith {};
	  [_playerinfo] remoteExecCall ["PzGrenBtl402_Persistency_fnc_persistent_join", _player, false];
	};

	addMissionEventHandler ["HandleDisconnect", {
		params ["_unit", "_id", "_uid", "_name"];
		//Exkludiere die HLCs
	  if (_unit in EGVAR(acex,headless,headlessClients)) exitWith {};
	  ["write", ["Spielerliste",
	    //Speichere per GUID
	    _uid,
	    [
	      //Loadout
	      [getUnitLoadout [_unit, false]] call acre_api_fnc_filterUnitLoadout,
	      //Medizinisches
	      [
	        _unit getVariable ["isDeadPlayer", false],
	        _unit getVariable ["ACE_isUnconscious", false],
	        _unit getVariable ["ace_medical_pain", 0],
	        _unit getVariable ["ace_medical_bloodVolume", 6],
	        _unit getVariable ["ace_medical_tourniquets", [0,0,0,0,0,0]],
	        _unit getVariable ["ace_medical_treatment_occludedMedications", []],
	        _unit getVariable ["ace_medical_openWounds", []],
	        _unit getVariable ["ace_medical_bandagedWounds", []],
	        _unit getVariable ["ace_medical_stitchedWounds", []],
	        _unit getVariable ["ace_medical_isLimping", false],
	        _unit getVariable ["ace_medical_fractures", [0,0,0,0,0,0]],
	        _unit getVariable ["ace_medical_heartRate", 80],
	        _unit getVariable ["ace_medical_bloodPressure", [80, 120]],
	        _unit getVariable ["ace_medical_peripheralResistance", 100],
	        _unit getVariable ["ace_medical_ivBags", []],
	        _unit getVariable ["ace_medical_bodyPartDamage", [0,0,0,0,0,0]],
	        _unit getVariable ["ace_medical_hemorrhage", 0],
	        _unit getVariable ["ace_medical_inPain", false],
	        _unit getVariable ["ace_medical_painSuppress", 0],
	        _unit getVariable ["ace_medical_medications", []],
	        _unit getVariable ["ace_medical_triageCard", []],
	        parseNumber ([(_unit getVariable ["acex_field_rations_thirst", 0]), 1, 4] call CBA_fnc_formatNumber),
	        parseNumber ([(_unit getVariable ["acex_field_rations_hunger", 0]), 1, 4] call CBA_fnc_formatNumber)
	      ],
	      getPosATL _unit,
				getDir _unit,
	      _name,
	      (_unit getVariable ["BIS_fnc_setUnitInsignia_class", ""])
	    ]
	  ]] call datenbank;

};


if (hasInterface) then {

		[
		  {([player] call CBA_fnc_isAlive)},
		  {
		    params ["_player","_clientOwner","_playerUID","_name"];
		    "ladebildschirm" cutText ["Persistenz lädt", "BLACK FADED", 0, true, false];
		    check_in_db = [_player, _clientOwner, _playerUID, _name];
		    publicVariableServer "check_in_db";
		  },
		  [player, clientOwner, getplayerUID player, name player]
		] call CBA_fnc_waitUntilAndExecute;

};
