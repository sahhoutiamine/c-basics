#include <stdio.h>
#include <string.h>

#define MAX_LENGHT 50


typedef struct Contact {
    char nom[16];
    char numTel[12];
    char email[64];
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
        printf("\nEntrer le nom : ->");
        getchar();
        fgets(contact[cmp].nom, sizeof(contact->nom), stdin);
        printf("\nEntrer le numero de tel : ->");
        getchar();
        fgets(contact[cmp].numTel, sizeof(contact->numTel), stdin);
        printf("\nEntrer l'email : ->");
        getchar();
        fgets(contact[cmp].email, sizeof(contact->email), stdin);
        cmp++;
        break;
    case 2:
        char nomContMod [16];
        printf("\nEntrer le nom de contact : ->");
        getchar();
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
                        printf("\nEntrer le noveau nom : ->");
                        getchar();
                        fgets(contact[i].nom, sizeof(contact->nom), stdin);
                        break;

                    case 2:
                        printf("\nEntrer le noveau numero de telephone : ->");
                        getchar();
                        fgets(contact[i].numTel, sizeof(contact->numTel), stdin);
                        break;
                    
                    case 3:
                        printf("\nEntrer le noveau email : ->");
                        getchar();
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
        for (int i = 0 ; i<cmp ; i++) 
        {
            printf("\nLe contact %d :\n%s%s%s", i+1, contact[i].nom, contact[i].numTel, contact[i].email);

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