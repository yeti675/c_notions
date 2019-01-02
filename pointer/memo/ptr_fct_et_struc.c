#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "include/header.h"

void mafonction(int *ptr)
{
  int b;

  b = 4;
  *ptr = b * 2;
}

void stru(t_stru *ptr_stru)
{
  ptr_stru->x = 10;
  ptr_stru->tab = "10";
}

void stru2(t_stru *ptr_stru)
{
  ptr_stru->x = 200000;
  ptr_stru->tab = "ADEL & NATHAN";
}

int main(int ac, char **av)
{
  int c;
  int *ptr;

  t_stru elem;
  t_stru *pointeur;

  c = 0;
  ptr = &c;

  printf("c avant = %d\n", c);
  mafonction(ptr);
  printf("c apres = %d\n", c);

  elem.x = 0;
  elem.tab = "bonjour";
  pointeur = &elem;

  printf("elem.x avant = %d\n", elem.x);
  printf("elem.tab avant = %s\n", elem.tab);
  stru(pointeur);
  printf("elem.x apres = %d\n", elem.x);
  printf("elem.tab apres = %s\n", elem.tab);
  stru2(pointeur);
  printf("elem.x apres = %d\n", elem.x);
  printf("elem.tab apres = %s\n", elem.tab);
}
