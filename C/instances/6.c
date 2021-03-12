#include <stdio.h>

int main()
{
  int i, j, sum;
  printf("请输入2个数字（空格分割）:  ");
  scanf("%d %d", &i, &j);
  sum = i + j;
  printf("%d + %d = %d\n", i, j, sum);

  return 0;
}