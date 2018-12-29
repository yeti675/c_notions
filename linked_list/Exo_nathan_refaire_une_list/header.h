#ifndef HEADER_H_
#define HEADER_H_

#include <stdio.h>
#include <stdlib.h>

// STRUCTUTRES
/*struct Element 1 de la chaine*/
typedef struct s_Element // s_element n'existe pas, struct _s element existe  !!!
{
    int nombre;                // data
    struct s_Element *suivant; // pointeur sur l element suivant
} Element;

/*Structure de controle*/
typedef struct s_ControllerList
{
    Element *premier; // pointeur sur le premier element de la chaine
} ControllerList;

// FONCTIONS
ControllerList *initialisation();
void ajoutElementAvantPremierElement(ControllerList *controllerList, int nombre);

#endif /* HEADER_H_ */