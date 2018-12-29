#include <stdio.h>
#include <stdlib.h>

// Exemples avec / sans malloc, mettre en commentaire l'un ou l'autre avant de compiler.

// Avec malloc (allocation manuel)

// void *malloc(size_t size) ptototype de malloc

int main(int argc, char *argv[])
{
    int *memoireAllouee = NULL;

    memoireAllouee = malloc(sizeof(int)); // Allocation de la mémoire
    if (memoireAllouee == NULL)           // Quitte le programme si l'allocation echoue.
    {
        exit(0); // Quitte le programme si l'allocation echoue.
    }

    // Utilisation de la mémoire
    printf("Quel age avez-vous ? ");
    scanf("%d", memoireAllouee);
    printf("Vous avez %d ans\n", *memoireAllouee);

    free(memoireAllouee); // Libération de mémoire manuel

    return 0;
}

// Sans malloc ( allocation automatique)

int main(int argc, char *argv[])
{
    int maVariable = 0; // Allocation de la mémoire (automatique)

    // Utilisation de la mémoire
    printf("Quel age avez-vous ? ");
    scanf("%d", &maVariable);
    printf("Vous avez %d ans\n", maVariable);

    return 0;
} // Libération de la mémoire (automatique à la fin de la fonction)
