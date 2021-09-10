#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"PzGrenBtl402_Main"};
        author = ECSTRING(Main, authors);
        authors[] = {""};
        url = ECSTRING(Main, URL);
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"

class GVAR(Racks2_Base) {
    class Rack_1 {
        displayName = CSTRING(RadioNetworkA);
        shortName = CSTRING(RadioNetworkAShort);
        componentName = "ACRE_SEM90";
        allowedPositions[] = {"inside"};
        disabledPositions[] = {};
        defaultComponents[] = {};
        mountedRadio = "ACRE_SEM70";
        isRadioRemovable = 0;
        intercom[] = {"none"};
    };
    class Rack_2 {
        displayName = CSTRING(RadioNetworkB);
        shortName = CSTRING(RadioNetworkBShort);
        componentName = "ACRE_SEM90";
        allowedPositions[] = {"inside"};
        disabledPositions[] = {};
        defaultComponents[] = {};
        mountedRadio = "ACRE_SEM70";
        isRadioRemovable = 0;
        intercom[] = {"none"};
    };
};
