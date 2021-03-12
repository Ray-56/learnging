#include <stdio.h>

void cyclicSwap(int *a, int *b, int *c);

int main()
{
  int a = 1, b = 2, c = 3;

  printf("交换前: %d %d %d\n", a, b, c);

  cyclicSwap(&a, &b, &c);

  printf("交换后: %d %d %d\n", a, b, c);

  return 0;
}

void cyclicSwap(int *a, int *b, int *c)
{
  int temp;
  temp = *b;
  *b = *a;
  *a = *c;
  *c = temp;
}