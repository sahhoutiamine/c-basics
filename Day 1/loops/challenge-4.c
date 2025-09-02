#include <stdio.h>

void main (){
    int n ;
    printf("entrer un nombre : ");
    scanf("%d",&n);
    for (int i = 0 ; i<=n*2 ; i++) {
        if (i != 2) {
            if (i % 2 != 0) {
                printf("%d",i) ;
            }
        }
    
    }
}