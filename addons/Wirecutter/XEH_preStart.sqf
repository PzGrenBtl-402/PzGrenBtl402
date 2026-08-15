#include "script_component.hpp"

#include "XEH_PREP.hpp"


private _possibleObjects = QUOTE(getNumber (_x >> QQGVAR(canCut)) == 1) configClasses (configFile >> "CfgVehicles");
private _possibleObjectsCache = createHashMap;

{
    private _name = configName _x;
    private _model = getText (_x >> "model");
    private _modelName = toLower ((_model splitString "\") select -1);
    private _actionPosition = getArray (_x >> QGVAR(actionPosition));

    _possibleObjectsCache set [_modelName, [_name, _actionPosition]];
} forEach _possibleObjects;

uiNamespace setVariable [QGVAR(possibleObjects), compileFinal _possibleObjectsCache];
