#include <stdio.h>

/* OBJECTIF : comprendre pourquoi on met un & ou pas avec scanf*/

int main() {

  int age = 27;
  int *ptrAge = &age;

  char tab[] = "test";
  char *ptrTab = tab;

  printf("age == %d\n", (*ptrAge));
  printf("tab == %s\n", (ptrTab)); // si on met & devant ptrTab on donne un **char alors que on attend un *char
 
  printf("votre age ?\n");

  scanf("%d", &age); // on met le & car on recupere l'adresse de age, age devient un *int

  printf("votre mot ?\n");
  scanf("%s", tab); // on met pas de & car on as deja l'adresse de tab etant donné que tab es un *char

  printf("age == %d\n", (*ptrAge));
  printf("tab == %s\n", (ptrTab));

  return 0;
}
