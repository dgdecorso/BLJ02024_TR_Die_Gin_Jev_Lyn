#include <stdio.h>
//
// Created by dgdec on 19.09.2024.
//




int num();

int fakultaet1() {
    int number;
    int result;
    printf("Whats your number?\n");
    scanf("%d", &number);
    result = num(number);

    return result;
}

int num(int number) {
    int result = 1;
    while (number != 0) {

        result = result * number;
        number--;
    }
    return result;
}
