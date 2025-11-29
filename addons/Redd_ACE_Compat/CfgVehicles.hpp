class CfgVehicles {
    class LandVehicle;
    class StaticWeapon: LandVehicle {
        class ACE_Actions {
            class ACE_MainActions;
        };
        class ACE_SelfActions;
    };
    class StaticMGWeapon: StaticWeapon {};
    class HMG_01_base_F: StaticMGWeapon {};
    class HMG_01_high_base_F: HMG_01_base_F {};

    class rnt_mg3_static: HMG_01_high_base_F {
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                condition = "alive _target";
                position = "(_target selectionPosition 'konec hlavne3') vectorAdd [0,-0.7,0]";

                class MG_hoehe_justieren {
                    condition = "true";

                    class MG3_up_ext {
                        condition = QUOTE([ARR_2(_target,'up')] call FUNC(canAdjustHeight));
                        statement = "[_target, 'up'] spawn redd_fnc_mg3_adjust_height";
                    };

                    class MG3_down_ext {
                        condition = QUOTE([ARR_2(_target,'down')] call FUNC(canAdjustHeight));
                        statement = "[_target, 'down'] spawn redd_fnc_mg3_adjust_height";
                    };
                };

                class MG_hoehe_drehen {
                    condition = "true";

                    class MG3_left_ext {
                        condition = "!(_target getVariable ['isInAnimation', false])";
                        statement = "[_target, 'left'] spawn redd_fnc_mg3_turn";
                    };

                    class MG3_right_ext {
                        condition = "!(_target getVariable ['isInAnimation', false])";
                        statement = "[_target, 'right'] spawn redd_fnc_mg3_turn";
                    };
                };
            };
        };

        class ACE_SelfActions: ACE_SelfActions {
            class MG_hoehe_justieren {
                condition = "alive _target";

                class MG3_up_int {
                    condition = QUOTE([ARR_2(_target,'up')] call FUNC(canAdjustHeight));
                    statement = "[_target, 'up'] spawn redd_fnc_mg3_adjust_height";
                };

                class MG3_down_int {
                    condition = QUOTE([ARR_2(_target,'down')] call FUNC(canAdjustHeight));
                    statement = "[_target, 'down'] spawn redd_fnc_mg3_adjust_height";
                };
            };

            class MG_hoehe_drehen {
                condition = "alive _target";

                class MG3_left_int {
                    condition = "!(_target getVariable ['isInAnimation', false])";
                    statement = "[_target, 'left'] spawn redd_fnc_mg3_turn";
                };

                class MG3_right_int {
                    condition = "!(_target getVariable ['isInAnimation', false])";
                    statement = "[_target, 'right'] spawn redd_fnc_mg3_turn";
                };
            };
        };
    };

    class StaticGrenadeLauncher: StaticWeapon {};
    class GMG_TriPod: StaticGrenadeLauncher {};
    class GMG_01_base_F: GMG_TriPod {};

    class rnt_gmw_static: GMG_01_base_F {
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                condition = "alive _target";
                position = "(_target selectionPosition 'konec hlavne3') vectorAdd [0,-0.5,0]";

                class MG_hoehe_justieren {
                    condition = "true";

                    class gmw_up_ext {
                        condition = QUOTE([ARR_2(_target,'up')] call FUNC(canAdjustHeight));
                        statement = "[_target, 'up'] spawn redd_fnc_gmw_adjust_height";
                    };

                    class gmw_down_ext {
                        condition = QUOTE([ARR_2(_target,'down')] call FUNC(canAdjustHeight));
                        statement = "[_target, 'down'] spawn redd_fnc_gmw_adjust_height";
                    };
                };

                class MG_hoehe_drehen {
                    condition = "true";

                    class gmw_left_ext {
                        condition = "!(_target getVariable ['isInAnimation', false])";
                        statement = "[_target, 'left'] spawn redd_fnc_gmw_turn";
                    };

                    class gmw_right_ext {
                        condition = "!(_target getVariable ['isInAnimation', false])";
                        statement = "[_target, 'right'] spawn redd_fnc_gmw_turn";
                    };
                };
            };
        };

        class ACE_SelfActions: ACE_SelfActions {
            class MG_hoehe_justieren {
                condition = "alive _target";

                class gmw_up_int {
                    condition = QUOTE([ARR_2(_target,'up')] call FUNC(canAdjustHeight));
                    statement = "[_target, 'up'] spawn redd_fnc_gmw_adjust_height";
                };

                class gmw_down_int {
                    condition = QUOTE([ARR_2(_target,'down')] call FUNC(canAdjustHeight));
                    statement = "[_target, 'down'] spawn redd_fnc_gmw_adjust_height";
                };
            };

            class MG_hoehe_drehen {
                condition = "alive _target";

                class gmw_left_int {
                    condition = "!(_target getVariable ['isInAnimation', false])";
                    statement = "[_target, 'left'] spawn redd_fnc_gmw_turn";
                };

                class gmw_right_int {
                    condition = "!(_target getVariable ['isInAnimation', false])";
                    statement = "[_target, 'right'] spawn redd_fnc_gmw_turn";
                };
            };
        };
    };

    class Tank: LandVehicle {
        class ACE_Actions {
            class ACE_MainActions;
        };
    };
    class Tank_F: Tank {};

    class Redd_Tank_Wiesel_1A4_MK20_base: Tank_F {
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                position = "[0, 0, -1]";
            };
        };
    };

    class Redd_Tank_Wiesel_1A2_TOW_base: Tank_F {
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                position = "[0, 0, -1]";
            };
        };
    };
};

