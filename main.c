#include <stdio.h>

#include "exponent.h"
#include "wurzeln.h"
#include "fakultaet.h"


int main(void) {
printf("********** CALCULATOR **********\n");
printf("Enter operator 1 for + ,2 for - ,3 for * ,4 for / ,5 for ^ ,6 for root,7 for faculty\n");

int operator;
    scanf("%d",&operator);


    hoch();
    double printWurzel(double square);


    switch (operator) {
        case 1:hoch(); break;
        case 2: double square(); break;
        case 3: fakultaet1();break;

    }


    return 0;
}