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

class Extended_InitPost_EventHandlers {
    class Redd_Tank_LKW_leicht_gl_Wolf_Base {
        class GVAR(map) {
            init = QUOTE(call FUNC(initMapActions));
        };
    };
};
