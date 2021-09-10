class CfgFunctions {
    class PzGrenBtl402 {
        class PzGrenBtl402_Functions_Marder_GM {
            file = "PzGrenBtl402_GM_Marder\functions"

            class gmMarderPreInit {
                preInit = 1;
            };

            class gmMarderInitActions;
            class gmMarderHoldAction;

            class gmMarderOpenRamp;
            class gmMarderCloseRamp;

            class gmMarderCanLoadMILAN;
            class gmMarderCanUnloadMILAN;

            class gmMarderLoadMILAN;
            class gmMarderUnloadMILAN;
        };
    };
};
