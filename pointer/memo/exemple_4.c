#include <stdio.h>
#include <stdlib.h>

void cut_times(int *ptr_h, int *ptr_min)
{
  *ptr_h = *ptr_min / 60;
  *ptr_min = *ptr_min % 60;
}

int main(int ac, char **av)
{
  int h;
  int min;

  h = 0;
  min = atoi(av[1]);
  cut_times(&h, &min);
  if (min > 1 && h > 1)
    printf("%d heures et %d minutes\n", h, min);
  else if (min > 1 && h < 2)
    printf("%d heure et %d minutes\n", h, min);
  else if (h > 1 && min < 2)
    printf("%d heures et %d minute\n", h, min);
  else
    printf("%d heure et %d minute\n", h, min);
  return (0);
}
