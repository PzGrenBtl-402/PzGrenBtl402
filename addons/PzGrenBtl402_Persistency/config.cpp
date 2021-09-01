
#include "script_component.hpp"

class CfgPatches {
  class ADDON {
    name = COMPONENT_NAME;
    units[] = {};
    weapons[] = {};
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {"cba_main","PzGrenBtl402_Main","inidbi2"};
    author = "Zumi";
    url = "";
    VERSION_CONFIG;
  };
};


#include "cfgEventHandlers.hpp"
