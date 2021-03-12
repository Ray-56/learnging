#include <stdio.h>

int main()
{
  int n1, n2, minMultiple;
  printf("请输入两个正整数: ");
  scanf("%d %d", &n1, &n2);
  minMultiple = n1 > n2 ? n1 : n2;

  while (1)
  {
    if (minMultiple % n1 == 0 && minMultiple % n2 == 0)
    {
      printf("%d 和 %d 的最下公倍数为: %d\n", n1, n2, minMultiple);
      break;
    }
    minMultiple++;
  }

  return 0;
}