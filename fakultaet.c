#include <stdio.h>
//
// Created by dgdec on 19.09.2024.
//




int num();

int fakultaet1() {
    int number;
    int result;

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
