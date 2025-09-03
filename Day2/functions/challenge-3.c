#include <stdio.h>

int checkPair (int nmbr) {
    if (nmbr % 2 == 0) {
        return 1;
    }
    return 0;
}

void main () {
    int nmbr;
    printf("entrer un nombre :");
    scanf("%d", &nmbr);
    int checkRes = checkPair(nmbr);
    if (checkRes == 1) {
        printf("pair");
    }
    else {
        printf("inpair");
    }
}
