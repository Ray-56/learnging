#include <stdio.h>

int main()
{
  int n1, n2, i, gcd;
  printf("请输入两个正整数：");
  scanf("%d %d", &n1, &n2);

  for (i = 1; i <= n1 && i <= n2; i++)
  {
    if (n1 % i == 0 && n2 % i == 0)
    {
      gcd = i;
    }
  }
  printf("%d 与 %d 的最大公约数为: %d\n", n1, n2, gcd);
  return 0;
}