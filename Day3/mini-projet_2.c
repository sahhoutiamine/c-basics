#include <stdio.h>
#include <string.h>

#define MAX_LENGHT 50


typedef struct Contact {
    char nom[MAX_LENGHT];
    char numTel[MAX_LENGHT];
    char email[MAX_LENGHT];
} Contact;


void main ()
{
    Contact contact [MAX_LENGHT];
    // printf("%s\n%s\n%s", contact.nom, contact.numTel, contact.email);
    int actNum;
    int cmp = 0;
    do
    {
        printf("-------------menu-------------\n");
        printf("\n1 - Ajouter un Contact");
        printf("\n2 - Modifier un Contact");
        printf("\n3 - Afficher Tous les Contacts");
        printf("\n4 - Rechercher un Contact");
        printf("\n5 - Supprimer un Contact");
        printf("\n0 - Exit\n ->");
        scanf("%d", &actNum);

    switch (actNum)
    {
    case 1:
        getchar();
        printf("\nEntrer le nom : \n");
        //getchar();
        fgets(contact[cmp].nom, sizeof(contact->nom), stdin);
        printf("Entrer le numero de tel : \n");
        //getchar();
        fgets(contact[cmp].numTel, sizeof(contact->numTel), stdin);
        printf("Entrer l'email : \n");
        //getchar();
        fgets(contact[cmp].email, sizeof(contact->email), stdin);
        cmp++;
        break;
    case 2:
        char nomContMod [MAX_LENGHT];
        getchar();
        printf("\nEntrer le nom de contact :\n ->");
        fgets(nomContMod, sizeof(nomContMod), stdin);
        for (int i = 0 ; i < cmp ; i++) 
        {
            if (strcmp(contact[i].nom, nomContMod) == 0) 
            {
                int infoMod; 
                do
                {
                    printf("\n-------------Modifier le-------------");
                    printf("\n1 - Nom");
                    printf("\n2 - Numero de telephone");
                    printf("\n3 - Email");
                    printf("\n0 - Exit Modification\n ->");
                    scanf("%d", &infoMod);
                    switch (infoMod)
                    {
                    case 1:
                        getchar();
                        printf("\nEntrer le noveau nom :\n ->");
                        fgets(contact[i].nom, sizeof(contact->nom), stdin);
                        break;

                    case 2:
                        getchar();
                        printf("\nEntrer le noveau numero de telephone :\n ->");
                        fgets(contact[i].numTel, sizeof(contact->numTel), stdin);
                        break;
                    
                    case 3:
                        getchar();
                        printf("\nEntrer le noveau email :\n ->");
                        fgets(contact[i].email, sizeof(contact->email), stdin);
                        break;
                    
                    case 0:
                        break;

                    default:
                        printf("\ninvalid!");
                        break;
                    }
                } while (infoMod != 0);
                
            }
        }
        break;



    case 3:


        //  printf("\nLe contact %d :\n%s%s%s", 1, contact[0].nom, contact[0].numTel, contact[0].email);
        printf("\n");
        for (int i = 0 ; i<cmp ; i++) 
        {
            printf("\nLe contact %d : \n\n%s\n%s\n%s\n", i+1, contact[i].nom, contact[i].numTel, contact[i].email);

        }

        break;
    
    case 4:
        char nomContRech [MAX_LENGHT];
        int isTrue = 1;
        // int index ;
        getchar();
        printf("\nEntrer le nom de contact :\n ->");
        fgets(nomContRech, sizeof(nomContRech), stdin);
        for (int i = 0 ; i < cmp ; i++) 
        {
            if (strcmp(contact[i].nom, nomContRech) == 0) 
            {
               printf("\nLe contact est exist!\n\n");
               isTrue = 1;
               break;
            
            }
            else
            {  
                isTrue = 0;
            }
            
            
        }
        if (isTrue == 0)
        {
            printf("n'exist pas!\n\n");
        }
        
        // if (isTrue == 1)
        // {
        //     printf("\nLe contact est exist!\n\n%s\n%s\n%s\n", contact[index].nom, contact[index].numTel, contact[index].email);
        // }    
        // else
        // {
        //     printf("n'exist pas!");
        // }
        
        
        break;

    case 5:
        char nomContSupp [MAX_LENGHT];
        int isDel = 1;
        getchar();
        printf("\nEntrer le nom de contact : ->");
        fgets(nomContSupp, sizeof(nomContSupp), stdin);
        for (int i = 0 ; i < cmp ; i++) 
        {
            if (strcmp(contact[i].nom, nomContSupp) == 0) 
            {
                for (int j = i ; j < cmp ; j++)
                {
                    strcpy(contact[j].nom, contact[j+1].nom);
                    strcpy(contact[j].numTel, contact[j+1].numTel);
                    strcpy(contact[j].email, contact[j+1].email);
                }
                printf("\nSupprimer avec secces!\n");
                isDel = 1;
                cmp--;
                break;


            }
            else
            {
                isDel = 0;
                
            }
               
        }
        if (isDel == 0)
        {
            printf("\nn'exsit pas!");
        }
        
        
        
        break;

    
    case 0:
        printf("adios!");
        break;


    default:
        printf("\ninvalid!\n");
        break;
    }
        
        
        
    } while (actNum != 0);
    
    

}