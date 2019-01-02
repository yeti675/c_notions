#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int addition(int op1, int op2);
int soustraction(int op1, int op2);
int multiplication(int op1, int op2);
int division(int op1, int op2);
/* /!\ mettre les chiffre suite de commande ex : gcc -Wall ptr_s_fct.c && ./a.out 12 + 3 /!\ */
int main(int argc, char *argv[])
{
    char *operand1 = argv[1], *operand2 = argv[3];
    int op1 = atoi(operand1), op2 = atoi(operand2); // conversion char en int pour pouvoir utiliser dans les focntions

    printf("Operand 1 = %d\n", op1);
    printf("Operand 2 = %d\n", op2);

    int (*ptrSurFonctionAddition)(int op1, int op2);       // declaration d'un pointeur sur fonction addition, on lui passe en parametres les parametres de la fonction sur lequel il pointe
    int (*ptrSurFonctionSoustraction)(int op1, int op2);   // declaration d'un pointeur sur fonction soustraction, on lui passe en parametres les parametres de la fonction sur lequel il pointe
    int (*ptrSurFonctionMultiplication)(int op1, int op2); // declaration d'un pointeur sur fonction multiplication, on lui passe en parametres les parametres de la fonction sur lequel il pointe
    int (*ptrSurFonctionDivision)(int op1, int op2);       // declaration d'un pointeur sur fonction division, on lui passe en parametres les parametres de la fonction sur lequel il pointe

    ptrSurFonctionAddition = addition;             // assignation du pointeur sur fonction sur lequel il pointe
    ptrSurFonctionSoustraction = soustraction;     // assignation du pointeur sur fonction sur lequel il pointe
    ptrSurFonctionMultiplication = multiplication; // assignation du pointeur sur fonction sur lequel il pointe
    ptrSurFonctionDivision = division;             // assignation du pointeur sur fonction sur lequel il pointe

    printf("Resultat addition == %d\n", (*ptrSurFonctionAddition)(op1, op2));
    printf("Resultat soustraction == %d\n", (*ptrSurFonctionSoustraction)(op1, op2));
    printf("Resultat multiplication == %d\n", (*ptrSurFonctionMultiplication)(op1, op2));
    printf("Resultat division == %d\n", (*ptrSurFonctionDivision)(op1, op2));

    return 0;
}

int addition(int op1, int op2)
{
    return op1 + op2;
}

int soustraction(int op1, int op2)
{
    return op1 - op2;
}

int multiplication(int op1, int op2)
{
    return op1 * op2;
}

int division(int op1, int op2)
{
    return op1 / op2;
}