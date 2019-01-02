#include <stdio.h>

int main()
{
  int age;
  int *ptr_age;

  age = 10;
  ptr_age = &age;

  printf("age donne la valeur de la variable age = %d\n\n", age);

  printf("&age donne l'adresse de la variable age =  %p\n\n", &age);

  printf("ptr_age donne la valeur du pointeur ptr_age qui est = &age = %p\n\n", ptr_age);
  printf("&ptr_age donne l'adresse du pointeur ptr_age =  %p\n\n", &ptr_age);

  printf("*ptr_age donne la valeur de la variable qui se trouve a l'adresse contenue dansle pointeur  ptr_age  = %d\n\n", *ptr_age);

  return (0);
}
