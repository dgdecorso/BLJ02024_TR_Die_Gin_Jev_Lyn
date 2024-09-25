#include <stdio.h>
#include "plusminus.h"

int plusminus()
{
        float erg, zahl1, zahl2 = 0.0;
        char op;

        printf("Number 1:\n");
        scanf("%f", &zahl1);
        printf("Number 2:\n");
        scanf("%f", &zahl2);

        printf("Operator (+ - x /):\n");
        scanf(" %c", &op);

        switch (op) {
                case '+':
                        erg = zahl1 + zahl2;
                break;
                case '-':
                        erg = zahl1 - zahl2;
                break;
                case 'x':
                        erg = zahl1 * zahl2;
                break;
                case '/':
                        if (zahl2 != 0)
                                erg = zahl1 / zahl2;
                        else {
                                printf("Error!\n");
                                return -1;
                        }
                break;
                default:
                        printf("Error: not a valid operator!\n");
                return -1;
        }

        printf("Result: %f\n", erg);

        return 0;
}
