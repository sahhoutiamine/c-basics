#include <stdio.h>

void main (){
    int c ;
    printf("entrer le temp c :");
    scanf("%d", &c);
    if (c < 0){
        printf("solide");
    }
    else if (c >= 0 && c < 100)
    {
        printf("liquide");
    }
    else{
        printf("gaz");
    }
}