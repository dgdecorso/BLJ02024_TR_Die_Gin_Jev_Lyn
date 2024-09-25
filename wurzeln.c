#include <stdio.h>



double printWurzel() {
double square = 0;
    printf("Enter a number\n");
    scanf("%lf", &square);
    double root = square/3;
if (square <= 0) return 0;
    for (int i = 0; i < 32 ; i++)
        root = (root + square / root) / 2;

    printf("%lf\n", root);
    return root;

}