#include <stdio.h>
#include <stdlib.h>

// Exemple 1 : Fonction sans retour et sans arguments

void afficherBonjour(void)
{
    printf("Bonjour\n");
}

int main(void)
{
    void (*pointeurSurFonction)(void);     /*déclaration du pointeur*/
    pointeurSurFonction = afficherBonjour; /*Initialisation*/

    (*pointeurSurFonction)(); /*Appel de la fonction*/

    return 0;
}
