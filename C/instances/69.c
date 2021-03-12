#include <stdio.h>

int main()
{
  int total = 5, // 总鱼数，也就是第一个人醒来看到的
      j, k, l, m; // 分别为每个人醒来见到的剩余总数

  for (total = 5;; total++)
  {
    j = 4*(total - 1) / 5;
    k = 4*(j - 1) / 5;
    l = 4*(k - 1) / 5;
    m = 4*(l - 1) / 5;
    if (total % 5 == 1 && j % 5 == 1 && k % 5 == 1 && l % 5 == 1 && m % 5 == 1)
    {
      printf("第一个人醒来看到为合伙捕鱼的总数量: %d\n", total);
      printf("分别见到的与的条数: %d %d %d %d\n", j, k, l, m);
      break;
    }
  }

  return 0;
}