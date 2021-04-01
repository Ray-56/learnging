#include <stdio.h>

int main()
{
  int i, temp;
  float sum = 0, a = 2, b = 1;

  for (i = 0; i < 20; i++)
  {
    sum += a / b;
    temp = a;
    a += b;
    b = temp;
  }
  printf("%9.6f \n", sum);

  return 0;
}