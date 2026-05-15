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

class Extended_FiredBIS_Eventhandlers {
    class CAManBase {
        ADDON = QUOTE(call FUNC(handleFired));
    };
};

class Extended_Take_EventHandlers {
    class CAManBase {
        class ADDON {
            clientTake = QUOTE(call FUNC(handleTake));
        };
    };
};
