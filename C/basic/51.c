#include <stdio.h>

int main()
{
  int a, b;
  a = 077;
  b = a & 3;
  printf("a & b(decimal) 为 %d\n", b);
  b &= 7;
  printf("a & b(decimal) 为 %d\n", b);

  return 0;
}