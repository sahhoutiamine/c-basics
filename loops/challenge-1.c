#include <stdio.h>

void main () {
    int nmbr ;
    int res ; 
    printf("entrer un nombre :");
    scanf("%d", &nmbr);
    for (int i = 1; i <= 10; i++){
        res = nmbr*i;
        printf("%d x %d = %d",nmbr,i,res);
    }
}