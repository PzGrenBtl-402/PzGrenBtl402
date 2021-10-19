class CfgMainMenuSpotlight {
    class PzGrenBtl402_JoinServer {
        text = CSTRING(title);
        textIsQuote = 1;
        picture = QPATHTOF(data\MainMenuSpotlight.paa);
        video = QPATHTOF(data\MainMenuSpotlight.ogv);
        action = QUOTE(connectToServer [ARR_3(SERVER_IP, SERVER_PORT, SERVER_PASS)]);
        actionText = CSTRING(joinServer);
        condition = "true";
    };
};
