#include <stdio.h>
#include <string.h>



//char* livreCreate (char nomLivre[20], char auteur[20], char prix[10], char qteStock[10]) {

   



    
    // strcat(livre, nomLivre);
    // strcat(livre, "\n");
    // strcat(livre, auteur);
    // strcat(livre, "\n");
    // strcat(livre, prix);
    // strcat(livre, "\n");
    // strcat(livre, qteStock);
    // strcat(livre, "\n");
    
    // char* res = livre;

    // return res ; 
    // printf("%s", res);
// }


void main () {
    // char* livresTable [100];
    // int nmbrLivre;
    // char* livre;
    // char nomLivre[20];
    // char auteur[20];
    // char prix[10];
    // char qteStock [10];
    // printf("Titre de livre :");
    // scanf("%s", &nomLivre);
    // printf("Auteur de livre :");
    // scanf("%s", &auteur);
    // printf("Prix de livre :");
    // scanf("%s", &prix);
    // printf("Qte de livre :");
    // scanf("%s", &qteStock);
    // // livreCreate(nomLivre, auteur, prix, qteStock);
    // livre = livreCreate(nomLivre, auteur, prix, qteStock);
    // printf("%s", livre);

    // printf("entrer le nomre du livres :");
    // scanf("%d", &nmbrLivre);
    // for (int i = 0 ; i < nmbrLivre ; i++) {
    //     printf("Titre de livre :");
    //     scanf(" %20s", &nomLivre);
    //     printf("Auteur de livre :");
    //     scanf(" %20s", &auteur);
    //     printf("Prix de livre :");
    //     scanf("%d", &prix);
    //     printf("Qte de livre :");
    //     scanf("%d", &qteStock);
    //     livre = livreCreate(nomLivre, auteur, prix, qteStock);
    //     livresTable[i] = livre ;
    //     printf("%100s", livre)
    // }



    char nomlivres[100][20];
    char auteurslivres[100][20];
    int prixlivres[100];
    int qtelivres[100];
    int nmbrLivre;

    printf("entrer le nombre du livres :");
    scanf("%d", &nmbrLivre);

    char nomLivre[20];
    char auteur[20];
    int prix;
    int qteStock;

    for (int i = 0  ;  i < nmbrLivre; i++) 
    {
        printf("\nTitre de livre %d :", i+1);
        scanf("%s", &nomLivre);
        printf("Auteur de livre %d :", i+1);
        scanf("%s", &auteur);
        printf("Prix de livre %d :", i+1);
        scanf("%d", &prix);
        printf("Qte de livre %d :", i+1);
        scanf("%d", &qteStock);

        strcpy(nomlivres[i], nomLivre);
        strcpy(auteurslivres[i], auteur);
        prixlivres[i] = prix;
        qtelivres[i] = qteStock;
        

    }

    for  (int i = 0  ;  i < nmbrLivre; i++) {

            printf("\nLivre %d :\n%s\n", i+1, nomlivres[i]);
            printf("%s\n", auteurslivres[i]);
            printf("%d\n", prixlivres[i]);
            printf("%d\n", qtelivres[i]);
            
    }
    
    int nmbrLivreMod;
    int tableMod;
    char valeurChar[20];
    int valeurInt;
    printf("entrer le nombre de livre qui peut modifier :");
    scanf("%d", &nmbrLivreMod);
    for (int i = 0 ; i < nmbrLivre ; i++) {
        if (nmbrLivreMod == i+1) {
            printf("Modifier le : \n1-Nom \n2-Auteur \n3-Prix \n4-Qte\n ->");
            scanf("%d", &tableMod);
            if (tableMod == 1) {
                printf("entrer la valeur :");
                scanf("%s", &valeurChar);
                strcpy(nomlivres[i], valeurChar);
            }
            else if (tableMod == 2)
            {
                printf("entrer la valeur :");
                scanf("%s", &valeurChar);
                strcpy(auteurslivres[i], valeurChar);
            }
            else if (tableMod == 3)
            {
                printf("entrer la valeur :");
                scanf("%d", &valeurInt);
                prixlivres[i] = valeurInt;
            }
            else if (tableMod == 4)
            {
                printf("entrer la valeur :");
                scanf("%d", &valeurInt);
                qtelivres[i] = valeurInt;
            }
            
            
            
        }
    }
    for  (int i = 0  ;  i < nmbrLivre; i++) {

            printf("\nLivre %d :\n%s\n", i+1, nomlivres[i]);
            printf("%s\n", auteurslivres[i]);
            printf("%d\n", prixlivres[i]);
            printf("%d\n", qtelivres[i]);
            
    }




    // for (int i = 0  ;  i < nmbrLivre; i++) 
    // {
    //     printf("Titre de livre :");
    //     scanf("%s", &nomLivre);
    //     printf("Auteur de livre :");
    //     scanf("%s", &auteur);
    //     printf("Prix de livre :");
    //     scanf("%d", &prix);
    //     printf("Qte de livre :");
    //     scanf("%d", &qteStock);
    //     for (int j = 0 ; j < nmbrLivre ; j++) {
    //             nomlivres[j][k] = nomLivre; 
    //             auteurslivres[j][k] = auteur;  
    //     }    
        
        

    // }






}