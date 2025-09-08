#include <stdio.h>

void main (){
    int kmh;
    float ms;
    printf("entrer la vit kms : ");
    scanf("%d", &kmh);
    ms = kmh*0,27778;
    printf("vit ms est : %f", ms);
}