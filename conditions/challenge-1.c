#include <stdio.h>

void main () {
    int nmbr;
    printf("entrer un nomber :");
    scanf("%d", &nmbr);
    if (nmbr % 2 == 0){
        printf("pair");
    }
    else {
        printf("unpair");
    }

}