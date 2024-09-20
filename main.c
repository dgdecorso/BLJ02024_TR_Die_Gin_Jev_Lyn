#include <inttypes.h>
#include <stdio.h>
#include "exponent.h"
#include "wurzeln.h"
#include "fakultaet.h"
#include "plusminus.h"



int main(void) {

int y = 1;


    do {


        printf(" ________  ________  ___       ________  ___  ___  ___       ________  _________  ________  ________     \n");
        printf("|\\   ____\\|\\   __  \\|\\  \\     |\\   ____\\|\\  \\|\\  \\|\\  \\     |\\   __  \\|\\___   ___\\\\   __  \\|\\   __  \\    \n");
        printf("\\ \\  \\___|\\ \\  \\|\\  \\ \\  \\    \\ \\  \\___|\\ \\  \\\\\\  \\ \\  \\    \\ \\  \\|\\  \\|___ \\  \\_\\ \\  \\|\\  \\ \\  \\|\\  \\   \n");
        printf(" \\ \\  \\    \\ \\   __  \\ \\  \\    \\ \\  \\    \\ \\  \\\\\\  \\ \\  \\    \\ \\   __  \\   \\ \\  \\ \\ \\  \\\\\\  \\ \\   _  _\\  \n");
        printf("  \\ \\  \\____\\ \\  \\ \\  \\ \\  \\____\\ \\  \\____\\ \\  \\\\\\  \\ \\  \\____\\ \\  \\ \\  \\   \\ \\  \\ \\ \\  \\\\\\  \\ \\  \\\\  \\| \n");
        printf("   \\ \\_______\\ \\__\\ \\__\\ \\_______\\ \\_______\\ \\_______\\ \\_______\\ \\__\\ \\__\\   \\ \\__\\ \\ \\_______\\ \\__\\\\ _\\ \n");
        printf("    \\|_______|\\|__|\\|__|\\|_______|\\|_______|\\|_______|\\|_______|\\|__|\\|__|    \\|__|  \\|_______|\\|__|\\|__|\n");



        printf("\nEnter operator 1 for +-*/ ,2 for ^ ,3 for root,4 for faculty\n");

        int operator;
        scanf("%d", &operator);



        switch (operator) {
            case 1:
                plusminus();
            break;
            case 2:
                hoch();
            break;
            case 3:
                printWurzel();
            break;
            case 4: fakultaet1();
            break;
        }

        printf("New Operation? (1=Y/2=N)");
        scanf("%d", &y);
    } while (y == 1);

    return 0;
}
