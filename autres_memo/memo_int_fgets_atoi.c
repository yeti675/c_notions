#include <stdio.h>
#include <stdlib.h>

// récuperer un int avec fgets() via la fonction atoi qui converti un char en en int.

int main(int argc, char const *argv[])
{
    char tmpAge[4]; // creation tblx de char
    int age = 0;

    printf("Quelle age as tu ?\n");
    fgets(tmpAge, 5, stdin); // on recupere la string tmpAge

    age = atoi(tmpAge); // atoi converti string tmpAge en entier int et on reassigne dans age

    printf("Tu as %d ans\n\n\n", age);

    // ======================================================================================== //

    // peut aussi s'ecrire comme ci-dessous pour factoriser.
    
    printf("Quelle age as tu ?\n");
    age = atoi(fgets(tmpAge, 5, stdin));
    printf("Tu as %d ans\n", age);

    return 0;
}
