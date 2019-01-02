#include "structure.h" // inclusion du .h

int main(int argc, char const *argv[])
{
    Coordonnees point; // creation d une variable "point" de type "coordonnees"

    point.x = 10;
    point.y = 20;

    printf("Vous vous situez aux coordonnees suivant : X = %d ; Y = %d\n\n", point.x, point.y);

    Personne utilisateur;

    printf("Quel est votre nom ? ");
    fgets(utilisateur.nom, 100, stdin);
    printf("Votre prenom ? ");
    fgets(utilisateur.prenom, 100, stdin);
    printf("Quel est votre age ? ");
    fgets(utilisateur.age, 100, stdin);
    printf("Quelle est votre adresse ?");
    fgets(utilisateur.adresse, 1000, stdin);
    printf("Quelle est votre sexe : Tapez : 0 pour GARCON, Tapez : 1 pour FILLE");
    fgets(utilisateur.sexe, 1000, stdin);

    if (utilisateur.sexe == 0)
    {
        printf("un garcon");
    }
    else
    {
        printf("une fille");
    }

    printf("Vous vous appelez %s %s, avez %d ans ,habitez au %s et vous etes %d \n", utilisateur.nom, utilisateur.prenom, utilisateur.age, utilisateur.adresse, utilisateur.sexe);

    return 0;
}
