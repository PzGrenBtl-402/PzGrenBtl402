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
    class Redd_Marder_1A5_base {
        class GVAR(ramp) {
            init = QUOTE(call FUNC(initRampActions));
        };
        class GVAR(ladder) {
            init = QUOTE(call FUNC(initLadderActions));
        };
        class GVAR(milan) {
            init = QUOTE(call FUNC(initMilanActions));
        };
        class GVAR(rearm) {
            init = QUOTE(call FUNC(initRearmActions));
        };
        class GVAR(camonet) {
            serverInit = QUOTE([ARR_2(FUNC(setCamonet),_this)] call CBA_fnc_execNextFrame);
        };
    };
};
