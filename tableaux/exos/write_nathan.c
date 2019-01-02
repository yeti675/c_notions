#include <unistd.h>

int my_putchar(char c)
{
    write(1, &c, 1);
}

int main()
{
    char arr[7];
    int i;

    arr[0] = 'n';
    arr[1] = 'a';
    arr[2] = 't';
    arr[3] = 'h';
    arr[4] = 'a';
    arr[5] = 'n';
    arr[6] = '\0';
    i = 0;

    while (i < 6)
    {
        my_putchar(arr[i]);
        i = i + 1;
    }
}