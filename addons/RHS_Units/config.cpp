#include "script_component.hpp"

class CfgPatches {
    class ADDON_BWC {
        name = COMPONENT_NAME;
        #include "CfgPatchesUnits.hpp"
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"PzGrenBtl402_Main", "rhs_main"};
        author = ECSTRING(Main, authors);
        authors[] = {"Lemonberries"};
        url = ECSTRING(Main, URL);
        VERSION_CONFIG;
    };
};


#include "CfgEditorSubcategories.hpp"
#include "CfgVehicleClasses.hpp"
#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"
