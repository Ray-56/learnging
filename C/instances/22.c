#include <stdio.h>

int main()
{
  int i, j;
  for (i = 1; i <= 9; i++)
  {
    for (j = 1; j <= i; j++)
    {
      printf("%d*%d=%d\t", j, i, j * i); // \t 空格， \r 横向跳到下一个制表符
    }
    printf("\n");
  }
  return 0;
}