#ifndef HEADER_H_
#define HEADER_H_

#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

/* Element de la liste, on peut en mettre plusieurs */
typedef struct Element Element;
struct Element
{
    int nombre;
    Element *suivant;
};

/* Structure de controle */
typedef struct Liste Liste;
struct Liste
{
    Element *premier;
};

/* fonction de controle de liste */
Liste *initialisation();
void insertion(Liste *liste, int nvNombre);
void suppression(Liste *liste);
void afficherListe(Liste *liste);

#endif /* HEADER_H_ */