class CfgPatches {
    class hlcweapons_core_402 {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.90;
        requiredAddons[] = {
            "hlcweapons_core",
            "ace_tracers"
        };
    };
};

class CfgAmmo {
    //MG3
    class B_762x51_Ball;
    class HLC_762x51_ball: B_762x51_Ball {
        model = "z\ace\addons\tracers\ace_TracerRed2.p3d";
    };
    
    //G36 EPR
    class B_556x45_Ball;
    class HLC_556NATO_EPR: B_556x45_Ball {
        model = "z\ace\addons\tracers\ace_TracerRed2.p3d";
    };
    
    //G36 EPR Tracer
    class HLC_556NATO_EPR_Tracer: HLC_556NATO_EPR {
        model = "z\ace\addons\tracers\ace_TracerRed2.p3d";
    };
};