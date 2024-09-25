//
// Created by dgdec on 25.09.2024.
//

#include "bmi.h"

#include <stdio.h>


void bmi () {
 float weight;
 float height;


printf("Enter Weight in KG: \n");

 scanf("%f", &weight);

 printf("Enter Height in Meters: \n");
 scanf("%f", &height);

printf("Your BMI score: %f\n", weight / (height * height));






}
