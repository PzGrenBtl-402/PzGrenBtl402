/**
Fast Recompiling via function
**/
// #define DISABLE_COMPILE_CACHE
// To Use: [] call PZGRENBTL402_PREP_RECOMPILE;

#ifdef DISABLE_COMPILE_CACHE
    #define LINKFUNC(x) {_this call FUNC(x)}
    #define PREP_RECOMPILE_START    if (isNil "PZGRENBTL402_PREP_RECOMPILE") then {PZGRENBTL402_RECOMPILES = []; PZGRENBTL402_PREP_RECOMPILE = {{call _x} forEach PZGRENBTL402_RECOMPILES;}}; private _recomp = {
    #define PREP_RECOMPILE_END      }; call _recomp; PZGRENBTL402_RECOMPILES pushBack _recomp;\
        [[LELSTRING(Main,category), "Debug"], QGVAR(recompile), "Recompile Functions", {\
            private _start = diag_tickTime;\
            [] call PZGRENBTL402_PREP_RECOMPILE;\
            private _end = diag_tickTime;\
            systemChat format ["PzGrenBtl402: Recompile took [%1 ms]", (1000 * (_end - _start)) toFixed 1];\
            true\
        }, {false}, [0x2F, [false, false, false]], false] call CBA_fnc_addKeybind; // V Key
#else
    #define LINKFUNC(x) FUNC(x)
    #define PREP_RECOMPILE_START /* */
    #define PREP_RECOMPILE_END /* */
#endif
