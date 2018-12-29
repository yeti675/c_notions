#include "header.h"

/*Fonction d'initialisation*/
ControllerList *initialisation()
{
    struct s_Element *element = malloc(sizeof(*element));             // initialisation du premier element
    ControllerList *controllerList = malloc(sizeof(*controllerList)); // initialisation de contollerlist

    element->nombre = 0;               // initialisation de nombre a la valeur 0
    element->suivant = NULL;           // *suivant contenue dans Element pointe vers NULL
    controllerList->premier = element; // creation de la chaine

    return controllerList;
}

/* Fonction d ajout element avant premier*/
void ajoutElementAvantPremierElement(ControllerList *controllerList, int nombre)
{
    Element *nvxElement = malloc(sizeof(*nvxElement)); // initialisation du nvx Element

    nvxElement->nombre = nombre;                   // definition du nombre a la valeur nombre
    nvxElement->suivant = controllerList->premier; // mise a jour de la liste
    controllerList->premier = nvxElement;          // on fait pointer le pointeur premier sur le nouvelle elements
}

//void afficherContenueElement(Element)