#include "tableau_de_joueurs.h"

int main(int argc, char const *argv[])
{
    User personnes[10];

    int i;

    for (i = 0; i < 2; i++)
    {

        printf("Joueur %d Quel est votre nom ? ", i + 1);
        fgets(personnes[i].nom, 20, stdin);
        printf("Joueur %d Votre prenom ? ", i + 1);
        fgets(personnes[i].prenom, 20, stdin);
        printf("Joueur %d Quel est votre age ? ", i + 1);
        personnes[i].age = atoi(fgets(personnes[i].tmpAge, 4, stdin));
        printf("\n");
    }

    for (i = 0; i < 2; i++)
    {
        printf("Joueur %d Nom    = %s", i + 1, personnes[i].nom);
        printf("Joueur %d Prenom = %s", i + 1, personnes[i].prenom);
        printf("Joueur %d Age    = %d", i + 1, personnes[i].age);
        printf("\n");
        printf("\n");
    }

    printf("FIN DE LA LISTE\n");

    return 0;
}
