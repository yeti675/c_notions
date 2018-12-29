#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// type *var = malloc(sizeof(type)*nb) || type malloc -1* /!\. nb = taille que l'on veut
// si type = char* on met malloc(sizeof(char)*nb)
// si type = char** on met malloc(sizeof(type*)*nb)

int main(int argc, char const *argv[])
{
    //Pour un tableau d'int

    int nombreCase = 0, i = 0;
    int *tab = NULL;

    printf("Combien de case voulez vous reserver ?\n");
    scanf("%d", &nombreCase);

    tab = malloc(nombreCase * sizeof(int)); // on alloue dynamiquement meemoire pour tableau "tab"
    if (tab == NULL)
    {
        exit(0); // Quitte le programme si l'allocation echoue.
    }

    tab[0] = 7; // on remplie le tableau pour essais
    tab[1] = 66642;

    for (i = 0; i < nombreCase; i++) // on parcours le tableau
    {
        printf("%d\n", tab[i]); // on print le contenue de tableau
    }
    printf("Le tableau contien %d cases\n\n", i); //on print le nombre de cases allouees

    free(tab); // on libère la mémoire

    // Pour un tableau de char*

    char *caractere = NULL;
    int nombre = 0;

    printf("Combien de caractere voulez vous lister ?\n");
    scanf("%d", &nombre);

    caractere = malloc(nombre * sizeof(char));
    if (caractere == NULL)
    {
        exit(0);
    }

    caractere[0] = 't';
    caractere[1] = 'h';
    caractere[2] = 'o';

    for (i = 0; i < nombre; i++)
    {
        printf("%c\n", caractere[i]);
    }
    printf("Le tableau contien %d cases\n", i);

    free(caractere);

    // Pour une structure

    int nombreAmis = 1;

    typedef struct Ami Ami;
    struct Ami
    {
        char nom[10];
        char prenom[10];
    };

    Ami *friends; //

    friends = malloc(sizeof(Ami) * nombreAmis); // malloc transforme friends en tableau d'ami de taille nombreAmis

    strcpy(friends[0].nom, "dutru\n");    // friend 0 1er index tblx et .nom pour avoir acces a l'ami 0
    strcpy(friends[0].prenom, "thomas\n"); // friend 0 1er index tblx et .prenom pour avoir acces a l'ami 0

    printf("%s%s", friends[0].nom, friends[0].prenom);

    free(friends);

    // char **caractere = NULL;
    // int nombre = 0, i = 0;

    // printf("Combien d'caractere voulez vous lister ?\n");
    // scanf("%d", &nombre);

    // caractere = malloc(nombre * sizeof(char*));
    // if (caractere == NULL)
    // {
    //     exit(0);
    // }

    // caractere[0] = "thomas";
    // caractere[1] = "nathan";

    // for (i = 0; i < nombre; i++) // on parcours le tableau
    // {
    //     printf("%s\n", caractere[i]); // on print le contenue de tableau a l'index i
    // }
    // printf("Le tableau contien %d cases\n", i); //on print le nombre de cases allouees

    // free(caractere); // on libère la mémoire

    return 0;
}
