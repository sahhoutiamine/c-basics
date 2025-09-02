#include <stdio.h>

void main () {
    int nmbr ; 
    printf("entrer un nombre :");
    scanf("%d", &nmbr);
    for (int i = nmbr-1 ; i>0 ; i--) {
        nmbr +=i ;
    }
    printf("le resultat est : %d", nmbr);
}