class CfgVehicles {
    class B_Boat_Transport_01_F;
    class PzGrenBtl402_CRRC: B_Boat_Transport_01_F {
        displayName = CSTRING(CRRC);

        insideSoundCoef = 1;
        rudderForceCoef = 0.25;
        enginePower = 24.5;
        thrustDelay = 1.5;
        waterLinearDampingCoefX = 1.2;

        class TransportItems {
            delete _xx_FirstAidKit;
        };
    };
};
