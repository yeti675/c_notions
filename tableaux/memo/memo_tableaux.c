#include <stdio.h>

int main()
{
    // (char *) pointeur vers chaine de caractere (string)
    char *tab = "read only (const)"; // contenue de string qui est read only
    // tab = "write";  tab pointe vers une nouvelle string const en memoire

    char * const anonymArray[] = "read only (const)";
    tab = anonymArray;
    
    printf("char *tab == \"%s\"\n", tab);

    // tableau de caractere contenant une chaine de caractere (string)
    char tab1[] = "tab1"; // deprecated dépassé ne pas utiliser (bugs)

    tab = tab1;
    tab[0] = '9';

    printf("char tab1[] == \"%s\"\n", tab1);

    char tab2[5] = {'t', 'a', 'b', '2', 0}; // déclaration d'un tableau de 5 char avec initialisation
    int tab[5] = {0, 1, 2, 3, 4};           // c'est un tableau de int

    printf("char tab2[5] == \"%s\"\n", tab2);

    char tab3[5]; // autres déclaration d'un tableau de 5 char sans initialisation

    tab3[0] = 't';
    tab3[1] = 'a';
    tab3[2] = 'b';
    tab3[3] = '3';
    tab3[4] = '\0';

    printf("char tab3[5] == \"%s\"\n\n", tab3);

    char *newtab = tab2; // pointeur vers un tab2 dans lequel je peut ecrire
    newtab[0] = '9';
    printf("newtab : %s\n", newtab);

    printf("tab[0] = '9' = impossible read only \n");

    tab1[0] = '9';
    printf("tab1[0] = '9' = \"%s\" \n", tab1);

    tab2[0] = '9';
    printf("tab2[0] = '9' = \"%s\" \n", tab2);

    tab3[0] = '9';
    printf("tab3[0] = '9' = \"%s\" \n", tab3);

    // type = nimporte quelle type
    // var = nimporte quelle variable

    //!!!!!!!!!!!!!!!!! DECLARATION !!!!!!!!!!!!!!!!!!!!!!!
    // type var; = var es de type type
    // type *var; = *var est de type pointeur sur type (type*)
    // type var[] = var[] est de type tableau de type
    // type *var[] = *var[] est de type tableau de pointeur sur type
    // type **var[] = **var[] est de type tableau de pointeur sur pointeur sur type

    //!!!!!!!!!!!!!!!! (travail sur variable ) modification lecture ecriture assignation  !!!!!!!!!!!!!!!!!!!!!!
    
    // type *operator = "nato"; == DECLARATION POINTEUR SUR TYPE

    // *operator == es de type type c'est un déréférencement voir cours pointeur OCR
    // operator == es de (type *) donc c'est un pointeur sur type
    // operator[index] == es de type type

    return 0;
}
