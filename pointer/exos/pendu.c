#include <stdio.h>
#include <unistd.h>
#include <string.h>

char enterLetter(); // print la demmande de lettre et recupere la lettre entree par utilisateur.

int main()
{
    char word[] = "whisky";    // mot ou on cherche la lettre.
    char userLetter;           // Lettre entree par l'utilisateur.
    char inconnu[] = "------"; // mot inconnu en tirets.
    int error = 12;            // Nombre de coup restants

    while (strcmp(word, inconnu) != 0 && error != 0)
    {
        int i = 0;

        printf("\nLe mot a trouver : %s\n", inconnu);
        printf("Coup restant : %d\n", error);

        userLetter = enterLetter();

        while (word[i] != '\0')

        {

            if (word[i] == userLetter)
            {
                inconnu[i] = word[i];
            }
            i++;
        }

        if (userLetter != word[i])
        {
            error--;
        }
        else
        {
            printf("Bien ! \n");
        }
    }
    printf("YOU WIN\n");
    printf("Le mot etait %s\n", inconnu);
}

char enterLetter()
{
    char chaine[20];
    printf("Entrer une lettre : ");
    fgets(chaine, sizeof chaine, stdin);
    return chaine[0];
}
