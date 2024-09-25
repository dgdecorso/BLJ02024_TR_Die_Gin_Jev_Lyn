#include <stdio.h>
//
// Created by dgdec on 19.09.2024.
//




int num();

void fakultaet1() {
    int number;

    printf("Whats your number?\n");
    scanf("%d", &number);
   int result = num(number);
printf("%d\n", result);

}

int num(int number) {
    int result = 1;
    while (number != 0) {

        result = result * number;
        number--;
    }
    return result;
}
