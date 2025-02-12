class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ACE_Equipment {
                // Hide PBW DM51 swap frag action (replaced with ours)
                class PBW_Handgrenades {
                    condition = "false";
                };
            };
        };
    };
};
