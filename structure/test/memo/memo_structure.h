#ifndef RECAPITULATIF_STRUCTUR_H_
#define RECAPITULATIF_STRUCTUR_H_

#include <stdio.h>
#include <string.h>


typedef struct Vehicule Vehicule;
struct Vehicule
{
    char marque[10]; // Déclaration d'une variable de tye char[]
    char *modele;
    int kilometrage; // Déclaration d'une variable de type int
};

#endif /*RECAPITULATIF_STRUCTUR_H_*/
