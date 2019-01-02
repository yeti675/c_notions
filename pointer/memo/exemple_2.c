#include <stdio.h>

int triplePtr(int *ptrSurNombre)
{
  *ptrSurNombre = *ptrSurNombre * 3;
}

int main()
{
  int nombre;

  nombre = 5;
  triplePtr(&nombre);
  printf("%d\n", nombre);
  return (0);
}
