#include <stdio.h>
#include <string.h>



char* livreCreate (char nomLivre[20], char auteur[20], char prix[6], char qteStock[10]) {

    char livre[100];
    
    strcat(livre, nomLivre);
    strcat(livre, "\n");
    strcat(livre, auteur);
    strcat(livre, "\n");
    strcat(livre, prix);
    strcat(livre, "\n");
    strcat(livre, qteStock);
    strcat(livre, "\n");

    return livre ; 
}


void main () {
    char* livresTable [100];
    int nmbrLivre;
    char* livre;
    char nomLivre[20];
    char auteur[20];
    int prix;
    int qteStock;
    printf("entrer le nomre du livres :");
    scanf("%d", &nmbrLivre);
    for (int i = 0 ; i < nmbrLivre ; i++) {
        printf("Titre de livre :");
        scanf(" %20s", &nomLivre);
        printf("Auteur de livre :");
        scanf(" %20s", &auteur);
        printf("Prix de livre :");
        scanf("%d", &prix);
        printf("Qte de livre :");
        scanf("%d", &qteStock);
        livre = livreCreate(nmbrLivre, auteur, prix, qteStock);
        livresTable[i] = livre ;
    }

}