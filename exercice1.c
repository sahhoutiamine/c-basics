#include <stdio.h>

void remise (int nmbrProduit) {
    float produit [nmbrProduit] = {};
    produit[0]=125 ;
    for (int i = 1; i < nmbrProduit ; i++ ) { //i < nmbrProduit*2-1; i+2) {
        produit[i] = 125-125*i*0.02;
        if (125-125*i*0.02 == 125-125*0.50) {
            for (int j = i ; j < nmbrProduit ; j++){
                produit[j] = 125-125*0.50;  
                break;       
            }
        }

    }
    float prixTotal = 0 ;
    for (int i = 0 ; i < nmbrProduit ; i++) {
        prixTotal += produit[i];
    }
    printf("Montant Total a payer : %f DH", prixTotal);
    

}

void main () {
    int nmbrPro;
    printf("entrer le nombre du produits :");
    scanf("%d", &nmbrPro);
    remise(nmbrPro);
}