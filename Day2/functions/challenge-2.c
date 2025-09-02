#include <stdio.h>
#include <string.h>

void reverseChaine (char str[]){
    int strLenght = strlen(str);
    char reverseTable [100];
    for (int i = strLenght; i >= 0; i--) {
        for (int j = 0; j <= strLenght; j++) {
            reverseTable[j] = str[i];
        }
    }
    for (int j = 0; j <= strLenght; j++) {
            printf("%s", reverseTable[j]);
        }
}

void main () {
    char str[100];
    printf("entrer une chaine :");
    scanf("%s", &str);
    reverseChaine(str);
}

