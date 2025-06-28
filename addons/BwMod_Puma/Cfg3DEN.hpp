class Cfg3DEN {
    class Mission {
        class BWA3_Settings {
            class AttributeCategories {
                class BWA3_Puma {
                    class Attributes {
                        // Set default to HE instead of ABM
                        class BWA3_MK30AP;
                        class BWA3_MK30HE: BWA3_MK30AP {
                            defaultValue = 1;
                        };
                        class BWA3_MK30ABM: BWA3_MK30AP {
                            defaultValue = 0;
                        };
                    };
                };
            };
        };
    };
};
