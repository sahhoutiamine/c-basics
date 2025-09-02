#include <stdio.h> 

void main () {
    int nmbr ;
    printf("entrer un nombre :");
    scanf("%d", &nmbr);
    for (int i = nmbr-1 ; i>1 ; i--) {
        nmbr = nmbr*i;
    }
    printf("le fact est : %d", nmbr);

}