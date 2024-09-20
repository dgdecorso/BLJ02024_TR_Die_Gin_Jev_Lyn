#include <stdio.h>

double printWurzel(double square);




int main(void) {
    double square;
    printf("Enter a number: ");
    scanf("%le",&square);
    //double result = printWurzel(square);

    printf("%.2f\n", printWurzel(square));
    return 0;
}


double printWurzel(double square) {

    double root = square/3;
    int i;
    if (square <= 0) return 0;
    for (i = 0; i < 32 ; i++)
        root = (root + square / root) / 2;
    return root;

}
