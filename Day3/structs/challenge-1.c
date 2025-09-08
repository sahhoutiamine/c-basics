#include <stdio.h>
#include <string.h>


struct Personne 
{
    char nom[16];
    char prenom[16];
    int age ;
};

void main ()
{
    struct Personne personne1;
    strcpy(personne1.nom, "SAHHOUTI");
    strcpy(personne1.prenom, "Amine");
    personne1.age = 19;

    printf("le nom : %s\nle prenom : %s\nl'age : %d\n", personne1.nom, personne1.prenom, personne1.age);
}


