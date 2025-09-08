#include <stdio.h>
#include <string.h>


struct Etudiant
{
    char nom[16];
    char prenom[16];
    int noteTable[16];
};

//memcpy It’s a function in C and C++ used to copy a block of memory from one location to another.

void main () {
    struct Etudiant etudiant1;
    strcpy(etudiant1.nom, "SAHHOUTI");
    strcpy(etudiant1.prenom, "Amine");
    int noteTable[] = {19, 18, 16, 20, 17, 18, 18};
    memcpy(etudiant1.noteTable, noteTable, sizeof(noteTable));
    printf("le nom : %s\nle prenom : %s\nles notes : \n", etudiant1.nom, etudiant1.prenom);
    int lenght = sizeof(noteTable)/sizeof(noteTable[0]);
    for (int i = 0 ; i < lenght ; i++)
    {
        printf("%d\n", etudiant1.noteTable[i]);
    }
}