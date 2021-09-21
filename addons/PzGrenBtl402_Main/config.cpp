
#include "script_component.hpp"

class CfgPatches {
  class ADDON {
    name = COMPONENT_NAME;
    units[] = {};
    weapons[] = {};
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {"cba_main","ace_main"};
    author = "Zumi";
    url = "https://pzgrenbtl402.de";
    VERSION_CONFIG;
  };
};

class CfgMods {
    class PREFIX {
        dir = "@PzGrenBtl402";
        name = "PzGrenBtl 402";
        picture = "z\PzGrenBtl402\PzGrenBtl402_Logo.paa";
        hidePicture = 0;
        hideName = 0;
        actionName = "Website";
        action = "https://pzgrenbtl402.de";
        description = "Go to Website...";
    };
};


#include "cfgSettings.hpp"
#include "cfgEventHandlers.hpp"
