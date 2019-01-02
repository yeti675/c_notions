#include <stdio.h>
#include <string.h>

void my_evil_str(char *str);
void my_swap(char *a, char *b);

int main(int argc, char const *argv[])
{
    char str[] = "tho8mas";

    printf("Endroit : %s\n", str);

    my_evil_str(str);

    printf("Envers : %s\n", str);

    return 0;
}

void my_evil_str(char *str)
{
    int startindex = 0;
    int endIndex = strlen(str) - 1;

    while (startindex < endIndex)
    {
        my_swap(&str[startindex], &str[endIndex]);
        startindex++;
        endIndex--;
    }
}

void my_swap(char *a, char *b)
{
    char t;

    printf("%c avec %c\n", *a, *b);

    t = *a;
    *a = *b;
    *b = t;
}