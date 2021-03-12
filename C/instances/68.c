#include <stdio.h>

int main()
{
  int a[30] = { 0 }, // 存储人数 0 表示还在船上，1 表示已下船
    i = 0,
    offCount = 0, // 下船人数，到 15 就结束
    count = 0; // 记录报数，到 9 就清零

  while (1)
  {
    if (a[i] == 0) count++;
    if (count == 9)
    {
      a[i] = 1;
      offCount++;
      printf("第 %d 号下船了\n", i + 1);
      count = 0;
    }
    if (offCount == 15) break;
    i++;
    if (i == 30) i = 0;
  }
  return 0;
}