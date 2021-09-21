
params ["_staticWeapon"];

if !(local _staticWeapon) exitWith {};

private _typeOf = typeOf _staticWeapon;

private _ammoActionPath = [];
private _magazineLocation = getText (configFile >> "CfgVehicles" >> _typeOf >> "ace_csw" >> "magazineLocation");
private _condition = { 
    if ((ace_csw_ammoHandling == 0) && {!([false, true, true, ace_csw_defaultAssemblyMode] select (_target getVariable ["ace_csw_assemblyMode", 3]))}) exitWith { false };
    [_player, _target, ["isNotSwimming", "isNotSitting"]] call ace_common_fnc_canInteractWith
};
private _childenCode = {
    private _ret = (call ace_csw_fnc_reload_actionsLoad) + (call ace_csw_fnc_reload_actionsUnload);
    _ret
};

private _ammoAction = ["ace_csw_magazine", "Munitionsmanagement", "", {}, _condition, _childenCode, [], [-0.25,0.45,-0.5], 4] call ace_interact_menu_fnc_createAction;
_ammoActionPath = [_typeOf, 0, [], _ammoAction] call ace_interact_menu_fnc_addActionToClass;
