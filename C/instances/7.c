#include <stdio.h>

int main()
{
  double i, j, sum;
  printf("请输入两个浮点数：");
  scanf("%lf %lf", &i, &j);
  sum = i * j;
  printf("%lf * %lf = %.2lf\n", i, j, sum);

  return 0;
}