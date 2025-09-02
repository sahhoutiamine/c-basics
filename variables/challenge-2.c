#include <stdio.h>


void main (){
    int cel;
    float k;
    printf("entrer la temp c :");
    scanf("%d" , &cel);
    k= cel + 273.15; 
    printf("le temp en kelvin est : %f", k);
}