#include <stdio.h>

int main()
{
  int i, j, result;
  for (i = 1; i < 10; i++)
  {
    for (j = 1; j <= i; j++)
    {
      printf("%dx%d=%-3d", i, j, i * j);
    }
    printf("\n");
  }

  return 0;
}