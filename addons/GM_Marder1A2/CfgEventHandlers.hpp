class Extended_PreStart_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preStart));
    };
};

class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preInit));
    };
};

class Extended_InitPost_EventHandlers {
    class gm_marder1a2_base {
        class GVAR(removeMilanMagazines) {
            init = QUOTE(call FUNC(removeMilanMagazines));
        };
    };
};