#include <inttypes.h>
#include <stdio.h>
#include "exponent.h"
#include "wurzeln.h"
#include "fakultaet.h"
#include "plusminus.h"
#include "scherestpi.h"


int main(void) {
    printf(" ________  ________  ___       ________  ___  ___  ___       ________  _________  ________  ________     \n");
    printf("|\\   ____\\|\\   __  \\|\\  \\     |\\   ____\\|\\  \\|\\  \\|\\  \\     |\\   __  \\|\\___   ___\\\\   __  \\|\\   __  \\    \n");
    printf("\\ \\  \\___|\\ \\  \\|\\  \\ \\  \\    \\ \\  \\___|\\ \\  \\\\\\  \\ \\  \\    \\ \\  \\|\\  \\|___ \\  \\_\\ \\  \\|\\  \\ \\  \\|\\  \\   \n");
    printf(" \\ \\  \\    \\ \\   __  \\ \\  \\    \\ \\  \\    \\ \\  \\\\\\  \\ \\  \\    \\ \\   __  \\   \\ \\  \\ \\ \\  \\\\\\  \\ \\   _  _\\  \n");
    printf("  \\ \\  \\____\\ \\  \\ \\  \\ \\  \\____\\ \\  \\____\\ \\  \\\\\\  \\ \\  \\____\\ \\  \\ \\  \\   \\ \\  \\ \\ \\  \\\\\\  \\ \\  \\\\  \\| \n");
    printf("   \\ \\_______\\ \\__\\ \\__\\ \\_______\\ \\_______\\ \\_______\\ \\_______\\ \\__\\ \\__\\   \\ \\__\\ \\ \\_______\\ \\__\\\\ _\\ \n");
    printf("    \\|_______|\\|__|\\|__|\\|_______|\\|_______|\\|_______|\\|_______|\\|__|\\|__|    \\|__|  \\|_______|\\|__|\\|__|\n");

char y = 'y';


    do {



        printf("\nEnter operator 1 for +-*/ ,2 for ^ ,3 for root,4 for faculty,5 for Rock Paper Scissors\n");

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
            case 4:
                fakultaet1();
            break;
            case 5:
                stpi();
            break;
        }

        printf("New Operation? (Y/N)");
        scanf("%s", &y);
    } while (y == 'y' || y == 'Y');

    return 0;
}
