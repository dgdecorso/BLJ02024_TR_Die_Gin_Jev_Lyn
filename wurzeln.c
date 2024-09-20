#include <stdio.h>

double printWurzel(double square);







double printWurzel(double square) {

    double root = square/3;
    int i;
    if (square <= 0) return 0;
    for (i = 0; i < 32 ; i++)
        root = (root + square / root) / 2;
    return root;

}
