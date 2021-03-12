#include <stdio.h>

int main()
{
  int first, second, temp;
  printf("请输入两个数字:");
  scanf("%d %d", &first, &second);
  temp = first;
  first = second;
  second = temp;
  printf("交换后 = %d,%d\n", first, second);
  return 0;
}