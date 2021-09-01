
#include "script_component.hpp"

class CfgPatches {
  class ADDON {
    name = COMPONENT_NAME;
    units[] = {
      QGVAR(sprengschlauch)
    };
    weapons[] = {};
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {"cba_main","PzGrenBtl402_Main","ace_interaction"};
    author = "Zumi";
    url = "";
    VERSION_CONFIG;
  };
};


#include "cfgEventHandlers.hpp"
#include "cfgVehicles.hpp"
