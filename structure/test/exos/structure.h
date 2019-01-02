#ifndef STRUCTURE_H_
#define STRUCTURE_H_

#include <stdio.h>

typedef struct Coordonnees Coordonnees; // raccourci pour eviter de repeter "struct" dans le programme
struct Coordonnees
{
    int y; // ordonnee
    int x; // abscisses
};

typedef struct Personne Personne;
struct Personne
{
    char nom[100];
    char prenom[100];
    char adresse[1000];

    int age;
    int sexe; // booleen : 1 = garcon ; 0 = fille.
};

#endif /*STRUCTURE_H_*/
