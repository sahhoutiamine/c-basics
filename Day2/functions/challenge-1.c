#include <stdio.h>

int somme (int a, int b) {
    int res =  a + b; 
    return res;
}
void main (){
    int a ,b;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    int res = somme(a,b);
    printf("%d", res);

} 