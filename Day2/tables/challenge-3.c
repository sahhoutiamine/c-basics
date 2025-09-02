#include <stdio.h>

void main () {
    int size ;
    int nmbr ;
    int nmbrRech ;
    int b ;
    printf("entrer le nombre d'elements de tableau : ");
    scanf("%d", &size);
    int nmbrTable [size];
    for (int i = 0 ; i < size  ; i++){
        printf("entrere le nomber %d :", i+1);
        scanf("%d", &nmbr);
        nmbrTable[i] = nmbr;
    }
    printf("entrer de recherche : ");
    scanf("%d", &nmbrRech);

    for (int i = 0; i<size ; i++) {
        if (nmbrRech == nmbrTable[i]) {
            printf("present");
            b=0;
            break;
            
        }
        
    }
    if (b != 0){
        printf("non");
    }
}