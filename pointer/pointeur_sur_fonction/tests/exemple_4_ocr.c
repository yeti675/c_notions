#include <stdio.h>
#include <stdlib.h>

// Exemple 4 : Fonction avec retour et avec arguments

int saisirNombre(char *nom)
{
    int n;

    printf("Bonjour %s saisie un nombre entier : ", nom);
    scanf("%d", &n);

    return n;
}

int main(void)
{
    int (*pointeurSurFonction)(char *); // déclaration du pointeur et les paramètre que la fonction pointé utilise (char *)
    int nombre;

    pointeurSurFonction = saisirNombre; /*Initialisation*/

    nombre = (*pointeurSurFonction)("zero"); /*Appel de la fonction*/

    printf("Nombre == %d\n", nombre);

    return 0;
}
