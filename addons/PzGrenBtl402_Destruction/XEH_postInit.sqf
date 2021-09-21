#include "script_component.hpp"

if (isServer) then {

		// In der Luft schwebende Objekte sollen gelöscht werden
		addMissionEventHandler ["BuildingChanged", {
		    params ["_buildingOld", "_buildingNew", "_isRuin"];
		    (boundingBoxReal _buildingOld) params ["_a","_b"];
		    _rad = (sizeOf (typeOf _buildingOld)) / 2;
		    if !(_isRuin) exitWith {};
				private _nearestObjects = (nearestObjects [getPos _buildingOld, ["All"], _rad, true]) select {!(_x isKindOf "CAManBase")};
				if (count _nearestObjects > 0) then {
		      {
		          if (((getPosATL _x) select 2) <= 20) then {
		              deleteVehicle _obj;
		          };
		      } forEach _nearestObjects;
		    };
		}];

};
