#include "header.h"

/* Inserer un nouvel element */

/* 1 - faire pointer notre nouvel élément vers son futur successeur, qui est l'actuel premier élément de la liste.
   2 - faire pointer le pointeurpremiervers notre nouvel élément. */

void insertion(Liste *liste, int nvNombre)
{
    /* Création du nouvel élément */
    Element *nouveau = malloc(sizeof(*nouveau));
    if (liste == NULL || nouveau == NULL) // Verification allocation dynamique.
    {
        exit(EXIT_FAILURE);
    }
    nouveau->nombre = nvNombre;

    /* Insertion de l'élément au début de la liste */
    nouveau->suivant = liste->premier;
    liste->premier = nouveau;
}

/* Supprimer un elements */
/* Il faut bien adapter les pointeurs de la liste dans le bon ordre pour ne « perdre » aucune information. */
// 1 - faire pointer "premier" vers le second élément.
// 2 - supprimer le premier élément avec un "free".

void suppression(Liste *liste)
{
    if (liste == NULL)
    {
        exit(EXIT_FAILURE);
    }

    if (liste->premier != NULL)
    {
        Element *aSupprimer = liste->premier;
        liste->premier = liste->premier->suivant;
        free(aSupprimer);
    }
}

void afficherListe(Liste *liste) // Fct d'affichage contenue de nos listes
{
    if (liste == NULL)
    {
        exit(EXIT_FAILURE);
    }

    Element *actuel = liste->premier;

    while (actuel != NULL)
    {
        printf("%d -> ", actuel->nombre);
        actuel = actuel->suivant;
    }
    printf("NULL\n");
}

/*Initialisation de la liste
La fonction d'initialisation est la toute première que l'on doit appeler.
Elle crée la structure de contrôle et le premier élément de la liste.*/

Liste *initialisation() // Fonction d'initialisation
{
    Liste *liste = malloc(sizeof(*liste));
    Element *element = malloc(sizeof(*element));

    if (liste == NULL || element == NULL) // On vérifie si les allocations dynamiques ont fonctionné sinon exit.
    {
        exit(EXIT_FAILURE);
    }

    element->nombre = 0;
    element->suivant = NULL; // le *suivant pointe vers NULL car le premier élément est aussi le dernier pour le moment. Le dernier élément doit pointer vers NULL pour signaler qu'il est en fin de liste.
    liste->premier = element;

    return liste;
}