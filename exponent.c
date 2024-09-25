#include <stdio.h>
#include "exponent.h"

int hoch () {
int result = 1;
    printf("First Number and second number\n");
   int base;
   int exponent;
    scanf("%d\n", &base);
    scanf("%d", &exponent);


    for (int i = 0; i < exponent; i++) {
        result = result * base;


    }
    printf("%d\n", result);
    return result;
}