#include <stdio.h>
#define LAG >
#define SMA <
#define EQ ==

int main()
{
  int i, j;
  printf("请输入两个数字: ");
  scanf("%d %d", &i, &j);
  if (i LAG j) {
    printf("%d 大于 %d\n", i, j);
  } else if (i EQ j) {
    printf("%d 等于 %d\n", i, j);
  } else if (i SMA j) {
    printf("%d 小于 %d\n", i, j);
  } else {
    printf("没有值");
  }

  return 0;
}