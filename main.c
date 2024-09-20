#include <stdio.h>
#include "exponent.h"
#include "wurzeln.h"
#include "fakultaet.h"
#include "plusminus.h"
#include <conio.h>


int main(void) {
    printf("********** CALCULATOR **********\n");
    printf("Enter operator 1 for +-*/ ,2 for ^ ,3 for root,4 for faculty\n");

    int operator;
    scanf("%d", &operator);



    switch (operator) {
        case 1:
            plusminus();
            break;
        case 2:
            hoch();
            break;
        case 3: printWurzel();
            break;
        case 4: fakultaet1();
            break;
    }


    return 0;
}
