#include <stdio.h>

int main()
{
  int i, j;
  printf("请输入两个数: ");
  scanf("%d %d", &i, &j);
  if (i > j) {
    printf("%d > %d", i, j);
  } else {
    printf("%d <= %d", i, j);
  }
  printf("\n");
  return 0;
}