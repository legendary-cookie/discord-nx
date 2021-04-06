#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <switch.h>

// /opt/devkitpro/libnx/include/


int main(int argc, char *argv[])
{
    //init
    consoleInit(NULL);
    padConfigureInput(1, HidNpadStyleSet_NpadStandard);
    PadState pad;
    padInitializeDefault(&pad);
    // applet main loop
    while (appletMainLoop())
    {
        padUpdate(&pad);
        u64 kDown = padGetButtonsDown(&pad);
        
        consoleUpdate(NULL);
    }
    // cleanup
    consoleExit(NULL);
    return 0;
}
