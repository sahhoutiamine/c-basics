#include <stdio.h>

void main () {
    int size ;
    int nmbr ;
    printf("entrer le nombre d'elements de tableau : ");
    scanf("%d", &size);
    int nmbrTable [size];
    for (int i = 0 ; i < size  ; i++){
        printf("entrer le nombere %d :", i+1);
        scanf("%d", &nmbr);
        nmbrTable[i] = nmbr;
    }
    for (int i = 0; i<size ; i++) {
        printf("%d",nmbrTable[i]);
    }
}