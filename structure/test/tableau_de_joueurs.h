#ifndef TABLEAU_DE_JOUEURS_H_
#define TABLEAU_DE_JOUEURS_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct User User;
struct User
{
    char nom[20];
    char prenom[20];
    char tmpAge[4];
    int age;
};

#endif /*TABLEAU_DE_JOUEURS_H_*/
