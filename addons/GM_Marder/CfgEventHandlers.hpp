class Extended_PreStart_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_SCRIPT(XEH_preStart));
    };
};

class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_SCRIPT(XEH_preInit));
    };
};

class Extended_PostInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_SCRIPT(XEH_postInit));
    };
};

class Extended_InitPost_EventHandlers {
    class gm_marder1_base {
        class GVAR(ramp) {
            init = QUOTE(call FUNC(initRampActions));
        };
        class GVAR(milan) {
            init = QUOTE(call FUNC(initMilanActions));
        };
        class GVAR(rearm) {
            init = QUOTE(call FUNC(initRearmActions));
        };
    };

    class gm_marder1a2_base {
        class GVAR(removeMilanMagazines) {
            init = QUOTE(call FUNC(removeMilanMagazines));
        };
    };
};
