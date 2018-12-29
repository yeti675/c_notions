#include "header.h"

int main()
{
    Liste *maListe = initialisation(); // 1 - initialisation

    insertion(maListe, 4); // 2 - insertions des elements
    insertion(maListe, 8);
    insertion(maListe, 15);
    suppression(maListe); // supression element.

    afficherListe(maListe); // 3 - Affichage

    return 0;
}