#include <stdio.h>
#include <stdlib.h>

// Exemple 3 : Fonction avec retour et sans arguments

int saisirNombre(void)
{
    int n;

    printf("Saisissez un nombre entier : ");
    scanf("%d", &n);

    return n;
}

int main(void)
{
    int (*pointeurSurFonction)(void); /*déclaration du pointeur*/
    int nombre;

    pointeurSurFonction = saisirNombre; /*Initialisation*/

    nombre = (*pointeurSurFonction)(); /*Appel de la fonction*/

    printf("Nombre == %d\n", nombre);

    return 0;
}
