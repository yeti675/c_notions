#include <stdio.h>

int main()
{

    char *test = "test";

    printf("%s\n", test); // je print le char* test

    printf("%c\n", test[2]); // je print l'index 3 du char* test

    // test[3] = '9';   je remplace la lettre "d" de test par "9" impossible read only

    // printf("%c\n", test[3]); je print le 9 remplace

    int i = 0;

    while (test[i] != '\0')
    {
        printf("%c", test[i]);
        i = i + 1;
    }
}