#include <stdio.h>
#include <stdlib.h>

int plusminus()
{
        float erg = 0.0, zahl1, zahl2;
        char op;

        printf("Zahl1: ");
        scanf("%f", &zahl1);
        printf("Zahl2: ");
        scanf("%f", &zahl2);

        printf("Operator (+ - x /): ");
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
                                printf("Fehler: Division durch 0!\n");
                                return -1;
                        }
                break;
                default:
                        printf("Fehler: Ungueltiger Operator!\n");
                return -1;
        }

        printf("Ergebnis: %f\n", erg);

        return 0;
}
