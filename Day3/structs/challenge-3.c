#include <stdio.h>

typedef struct Rectangle {
    float longeur ;
    float largeur ;
} Rectangle;
float airRectangle (float longe, float larg) 
{
    float air =  longe*larg;
    return air;
}
void main ()
{
    Rectangle rectangle1; 
    rectangle1.longeur = 19.373;
    rectangle1.largeur = 28.747;
    float air = airRectangle(rectangle1.longeur, rectangle1.largeur);
    printf("l'air :%f", air);
}