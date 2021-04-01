#include <stdio.h>

int main()
{
  float height, sum;
  height = sum = 100;
  height /= 2;
  for (int i = 2; i <= 10; i++)
  {
    sum += height * 2;
    height /= 2;
  }
  printf("第 10 次落地时，共经过 %.4f 米，第 10 次反弹高 %.4f 米\n", sum, height);

  return 0;
}