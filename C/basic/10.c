#include <stdio.h>

int main()
{
  int i, j;

  printf("😃😃\n");
  for (i = 0; i < 10; i++)
  {
    for (j = 0; j <= i; j++)
    {
      printf("■");
    }
    printf("\n");
  }

  return 0;
}