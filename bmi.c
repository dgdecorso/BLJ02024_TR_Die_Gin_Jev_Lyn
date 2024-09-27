
#include "bmi.h"
#include <stdio.h>


void bmi () {
    float weight;
    float height;

    printf("Enter Weight in KG: \n");

    scanf("%f", &weight);

    printf("Enter Height in Meters: \n");
    scanf("%f", &height);
    float bmi = weight / (height * height);
    printf("Your BMI score: %f\n", bmi);

    if (bmi < 18.5) {
        printf("You're Underweight\n");
    }
    else if (bmi >= 18.5 && bmi <= 24.9) {
        printf("You're Normal\n");
    }
    else if (bmi >= 25 && bmi <= 29.9) {
        printf("You're Overweight\n");
    }
    else if (bmi >= 30 && bmi <= 39.9) {
        printf("You're Obese\n");
    }
    else if (bmi >= 40) {
        printf("You're Morbidly Obese\n");
    }

    printf("\n\n<18.5 \t\tUnderweight\n18.5-24.9 \tNormal\n25.0-29.9 \tOverweight\n30.0-39.9 \tObese\n>40 \t  \tMorbidly\n\n");
}

