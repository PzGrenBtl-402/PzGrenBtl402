class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ACRE_Interact {
                insertChildren = QUOTE(_this call FUNC(radioListChildrenActions));
            };
        };
    };
};
