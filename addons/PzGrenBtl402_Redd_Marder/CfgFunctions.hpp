class CfgFunctions {
    class PzGrenBtl402 {
        class PzGrenBtl402_Functions_Marder {
            file = "Redd_Marder_1A5_402\functions"

            class marderPreInit {
                preInit = 1;
            };

            class marderInitActions;
            class marderHoldAction;

            class marderCanAssembleMILAN;
            class marderAssembleMILAN;

            class marderCanDisassembleMILAN;
            class marderDisassembleMILAN;

            class marderCanLoadMILAN;
            class marderLoadMILAN;

            class marderCanUnloadMILAN;
            class marderUnloadMILAN;

            class marderOpenRamp;
            class marderCloseRamp;
            class marderFired;
        };
    };
};
