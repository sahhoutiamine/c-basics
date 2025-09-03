// #include <stdio.h>
// #include <string.h>

// void reverseChaine (char str[]){
//     int strLenght = strlen(str);
//     char reverseTable [100];
//     for (int i = strLenght; i >= 0; i--) {
//         for (int j = 0; j <= strLenght; j++) {
//             reverseTable[j] = str[i];
//         }
//     }
//     for (int j = 0; j <= strLenght; j++) {
//             printf("%s", reverseTable[j]);
//         }
// }

// void main () {
//     char str[100];
//     printf("entrer une chaine :");
//     scanf("%s", &str);
//     reverseChaine(str);
// }
#include <stdio.h>
#include<stdlib.h>
#include <string.h>

char* reverseChaine(char *str,int strLength) {
    //int strLength = strlen(str);
    char* reverseTable;
    reverseTable = (char*)malloc((strLength+1) * sizeof(char));
    for (int i = 0; i<strLength; i++) {
        reverseTable[i] = str[strLength - i - 1];
        reverseTable[strLength] = '\0';
    }
    return reverseTable;
}
void main () {
    //char* str;
    char str[20];
    int len = strlen(str);
    char * revResult ;//= (char*)malloc(len * sizeof(char));;
    printf("entrer une chaine :");
    // strcpy(str,str2);
    //scanf("%20s", &str);
    fgets(str, sizeof(str), stdin);
    //gets(str);
    /*if (fgets(str, sizeof(str), stdin)) {
        // Remove newline character if present
        str[strcspn(str, "\n")] = '\0';
    }*/
    revResult = reverseChaine(str,len);
    printf("%20s", str);
    printf("%20s", revResult);

}
