class CfgVehicles
{
    class gm_iltis_base;
    class gm_iltis_cargo_base: gm_iltis_base
    {
        maximumLoad = 10000;

        class AcreRacks
        {
            class Rack_1
            {
                displayName = ECSTRING(ACRE, RadioNetworkA);
                shortName = ECSTRING(ACRE, RadioNetworkAShort);
                componentName = "ACRE_SEM90";
                allowedPositions[] = {"crew", {"cargo", "all"}, {"ffv", "all"}, "external"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_SEM70";
                isRadioRemovable = 0;
                intercom[] = {"none"};
            };

            class Rack_2
            {
                displayName = ECSTRING(ACRE, RadioNetworkB);
                shortName = ECSTRING(ACRE, RadioNetworkBShort);
                componentName = "ACRE_SEM90";
                allowedPositions[] = {"crew", {"cargo", "all"}, {"ffv", "all"}, "external"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_SEM70";
                isRadioRemovable = 0;
                intercom[] = {"none"};
            };
        };
    };
};
