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

class Extended_PostInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_postInit));
    };
};

class Extended_IncomingMissile_EventHandlers {
    class BWA3_Puma_base {
        class GVAR(muss) {
            incomingMissile = QUOTE(call FUNC(incomingMissile));
        };
    };
};
