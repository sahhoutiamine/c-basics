#include <stdio.h>
#include <string.h>

struct Livre {
    char titre[16];
    char auteur[16];
    int annee;
};

struct Livre livreAffiche (char titre[16], char auteur[16], int annee) {
    struct Livre livre1;
    strcpy(livre1.titre, titre);
    strcpy(livre1.auteur, auteur);
    livre1.annee = annee;
    
    return livre1;
}

void main () {
    char titre[16];
    char auteur[16];
    int annee;
    strcpy(titre, "BOKU NO HERO");
    strcpy(auteur, "Kohei HORIKOSHI");
    annee = 2014;
    struct Livre livre1 = livreAffiche(titre, auteur, annee);
    printf("le titre : %s\nl'auteur : %s\nl'annee : %d\n", livre1.titre, livre1.auteur, livre1.annee);
}