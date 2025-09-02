#include <stdio.h>
void main (){
    int nmbrTable [] = {1, 2, 3, 4};
    for (int i =  0 ; i < sizeof(nmbrTable)/sizeof(nmbrTable[0]) ; i++){
        printf("%d\n", nmbrTable[i]);
    }
}
// sizeof(nmbrTable)/sizeof(nmbrTable[0])  == lenght 