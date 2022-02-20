#include "script_component.hpp"
/**
 *  Author: Mishkar
 *
 *  Description:
 *      Loads 25 rounds into 20mm MK.
 *
 *  Parameter(s):
 *      0: OBJECT - Vehicle (Marder).
 *      1: STRING - Ammo type (HE or AP).
 *
 *  Returns:
 *      Nothing.
 *
 *  Example:
 *      [SPz_0, 'AP'] call PzGrenBtl402_Redd_Marder_fnc_loadMK
 *
 */

params ["_veh", "_ammoType"];

switch _ammoType do
{
  case 'HE':
  {
    if (isNull gunner _veh) then
    {
      _magazines = magazinesAmmo [_veh, true];
      _ammoCount = _magazines select 0 select 1;

      if (_ammoCount <= 250) then
      {
        if ("mts_items_flag_green" in itemCargo _veh) then
        {
            _ammoCountNew = _ammoCount + 25;

            [_veh, ["Redd_MK20_HE_Mag", _ammoCountNew, [0]]] remoteExec ["setMagazineTurretAmmo", 0];

            [_veh, "mts_items_flag_green"] call CBA_fnc_removeItemCargo;

            hint "25 Patronen 20mm HE-T geladen."
        }
        else
        {
            hint "Laden nicht möglich! Keine Munition im Fahrzeug."
        };
      }
      else
      {
          hint "Laden nicht möglich! Munitionskasten voll."
      };
    }
    else
    {
        hint "Laden nicht möglich! Richtschütze besetzt Waffe."
    };
  };

  case 'AP':
  {
    if (isNull gunner _veh) then
    {
      _magazines = magazinesAmmo [_veh, true];
      _ammoCount = _magazines select 1 select 1;

      if (_ammoCount <= 100) then
      {
        if ("mts_items_flag_red" in itemCargo _veh) then
        {
            _ammoCountNew = _ammoCount + 25;

            [_veh, ["Redd_MK20_AP_Mag", _ammoCountNew, [0]]] remoteExec ["setMagazineTurretAmmo", 0];

            [_veh, "mts_items_flag_red"] call CBA_fnc_removeItemCargo;

            hint "25 Patronen 20mm APDS-T geladen."
        }
        else
        {
            hint "Laden nicht möglich! Keine Munition im Fahrzeug."
        };
      }
      else
      {
          hint "Laden nicht möglich! Munitionskasten voll."
      };
    }
    else
    {
        hint "Laden nicht möglich! Richtschütze besetzt Waffe."
    };
  };
};
