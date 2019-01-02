#include <stdio.h>
#include <stdlib.h>

// inclure les paramètres dans la ligne de commande de l'executable
// exemple ./a.out tata toto tutu


int main(int argc, char *argv[]) 
{
    int i;

    for (i = 0; i < argc; i++)
    {
        printf("Argument %d : %s \n", i, argv[i]); // print les argument de la fonction main
    }

        printf("Argument %d : %c \n", i, argv[2][5]);
       // argv == ? tableau de pointeur sur char *[] || char**
       // argv[0] == pointeur sur char 
       // argv[0][0] == char

    return EXIT_SUCCESS;
}
