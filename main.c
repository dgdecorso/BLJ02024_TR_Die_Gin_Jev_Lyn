#include <inttypes.h>
#include <stdio.h>
#include "exponent.h"
#include "wurzeln.h"
#include "fakultaet.h"
#include "plusminus.h"
#include "scherestpi.h"
#include "bmi.h"

void main(void) {
    printf(" ________  ________  ___       ________  ___  ___  ___       ________  _________  ________  ________     \n");
    printf("|\\   ____\\|\\   __  \\|\\  \\     |\\   ____\\|\\  \\|\\  \\|\\  \\     |\\   __  \\|\\___   ___\\\\   __  \\|\\   __  \\    \n");
    printf("\\ \\  \\___|\\ \\  \\|\\  \\ \\  \\    \\ \\  \\___|\\ \\  \\\\\\  \\ \\  \\    \\ \\  \\|\\  \\|___ \\  \\_\\ \\  \\|\\  \\ \\  \\|\\  \\   \n");
    printf(" \\ \\  \\    \\ \\   __  \\ \\  \\    \\ \\  \\    \\ \\  \\\\\\  \\ \\  \\    \\ \\   __  \\   \\ \\  \\ \\ \\  \\\\\\  \\ \\   _  _\\  \n");
    printf("  \\ \\  \\____\\ \\  \\ \\  \\ \\  \\____\\ \\  \\____\\ \\  \\\\\\  \\ \\  \\____\\ \\  \\ \\  \\   \\ \\  \\ \\ \\  \\\\\\  \\ \\  \\\\  \\| \n");
    printf("   \\ \\_______\\ \\__\\ \\__\\ \\_______\\ \\_______\\ \\_______\\ \\_______\\ \\__\\ \\__\\   \\ \\__\\ \\ \\_______\\ \\__\\\\ _\\ \n");
    printf("    \\|_______|\\|__|\\|__|\\|_______|\\|_______|\\|_______|\\|_______|\\|__|\\|__|    \\|__|  \\|_______|\\|__|\\|__|\n");

char y = 'y';


    do {



        printf("\nEnter operator \n1 for +-*/\n");
        printf("2 for ^ \n");
        printf("3 for root\n");
        printf("4 for faculty\n");
        printf("5 for Rock Paper Scissors\n");
        printf("6 for BMI\n");


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

            default:
                printf("Try again\n");
                break;

            case 6:
                bmi();
            break;



        }

        printf("New Operation? (Y/N)\n");
        scanf("%s", &y);
    } while (y == 'y' || y == 'Y');


}
