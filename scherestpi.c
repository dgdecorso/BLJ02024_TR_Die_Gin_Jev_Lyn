

#include "scherestpi.h"
#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void stpi() {
    srand(time(NULL));

    int min = 1;
    int max = 3;
    int guess;

    printf("Please enter a number between\nROCK = 1\nPAPER = 2\nSCISSORS = 3: \n");


    int random = rand() % (max - min + 1) + min;
    scanf("%d", &guess);

    if (guess == random) {
        printf("Its a tie\n");
    }
    if ((guess == 1 && random == 3) || (guess == 3 && random == 2) || (guess == 2 && random == 1)) {
        printf("YOU WON YAAAYYY\n");
    }

    if ((guess == 1 && random == 2) || (guess == 2 && random == 3) || (guess == 3 && random == 1)) {
        printf("YOU LOST\n");
    }
    printf("%d\n", random);
}
