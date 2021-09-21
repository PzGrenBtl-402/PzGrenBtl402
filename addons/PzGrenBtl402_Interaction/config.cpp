
#include "script_component.hpp"

class CfgPatches {
  class ADDON {
    name = COMPONENT_NAME;
    units[] = {};
    weapons[] = {};
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {"cba_main","PzGrenBtl402_Main","acre_main","ace_interact_menu"};
    author = "Zumi";
    url = "";
    VERSION_CONFIG;
  };
};


#include "cfgEventHandlers.hpp"
