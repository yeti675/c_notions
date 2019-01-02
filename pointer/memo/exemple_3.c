#include <stdio.h>

int triplePtr(int *ptrSurNombre)
{
  *ptrSurNombre = *ptrSurNombre * 3;
}

int main()
{
  int nombre;
  int *ptr;

  nombre = 5;
  ptr = &nombre;
  triplePtr(ptr);
  printf("%d\n", *ptr /* ou nombre */);

  return (0);
}
