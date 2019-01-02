#include "memo_structure.h"

// Mémo structure/tableau de structure/ tableau de pointeur sur structure

int main(int argc, char const *argv[])
{
    Vehicule nathan, thomas;
    strcpy(nathan.marque, "suzuki");
    nathan.kilometrage = 190000;
    nathan.modele = nathan.marque; // modele pointe sur marque voir structure vehicule
    nathan.modele[0] = '9';        // comme marque n'est pas const je peut modifier modele[0]
    strcpy(thomas.marque, "renault");
    thomas.modele = "charette";
    thomas.kilometrage = 160000;

    printf("Nathan == %s marque\n", nathan.marque);
    printf("Nathan == %s modele\n", nathan.modele);

    printf("Nathan == %d kilometres\n", nathan.kilometrage);
    printf("Thomas == %s marque\n", thomas.marque);
    printf("Nathan == %s modele\n", nathan.modele);

    printf("Thomas == %d kilometres\n", thomas.kilometrage);

    return 0;
}