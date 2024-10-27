#define BOAT_PROPERTIES \
    insideSoundCoef = 1; \
    rudderForceCoef = 0.25; \
    enginePower = 24.5; \
    thrustDelay = 1.5; \
    waterLinearDampingCoefX = 1.2

class CfgVehicles {
    class Rubber_duck_base_F;
    class Rescue_duck_base_F: Rubber_duck_base_F {
        BOAT_PROPERTIES;
    };

    class I_C_Boat_Transport_01_F: Rubber_duck_base_F {
        BOAT_PROPERTIES;
    };

    class I_G_Boat_Transport_01_F: Rubber_duck_base_F {
        BOAT_PROPERTIES;
    };

    class I_Boat_Transport_01_F: Rubber_duck_base_F {
        BOAT_PROPERTIES;
    };

    class B_Boat_Transport_01_F: Rubber_duck_base_F {
        BOAT_PROPERTIES;
    };

    class O_Boat_Transport_01_F: Rubber_duck_base_F {
        BOAT_PROPERTIES;
    };

    class O_T_Boat_Transport_01_F: Rubber_duck_base_F {
        BOAT_PROPERTIES;
    };
};
