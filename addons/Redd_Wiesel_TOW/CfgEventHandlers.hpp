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
    class Redd_Tank_Wiesel_1A2_TOW_base {
        class GVAR(camonet) {
            serverInit = QUOTE([ARR_2(FUNC(setCamonet),_this)] call CBA_fnc_execNextFrame);
        };
        class GVAR(tow) {
            init = QUOTE(call FUNC(addLoadAction));
        };
    };
};
