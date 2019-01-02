#include <stdio.h>

// compiler pour obtenir le nombre d'octets de chaque types.

int main(int argc, char const *argv[])
{
    printf("size of char = %lu octet\n", sizeof(char));
    printf("size of int = %lu octets\n", sizeof(int));
    printf("size of double = %lu octets\n", sizeof(float));
    printf("size of float = %lu octets\n", sizeof(double));
    printf("size of long = %lu octets\n", sizeof(long));
    printf("\n");
    printf("size of char* = %lu octet\n", sizeof(char *));
    printf("size of int* = %lu octets\n", sizeof(int *));
    printf("size of long* = %lu octets\n", sizeof(long *));
    printf("size of char[1] = %lu octet\n", sizeof(char[1]));

    return 0;
}
