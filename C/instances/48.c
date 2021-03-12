#include <stdio.h>

int main()
{
  int original[4] = { 1, 2, 3, 4 };
  int copied[4];
  int loop;

  for (loop = 0; loop < 4; loop++)
  {
    copied[loop] = original[loop];
  }
  printf("元素数组 -> 拷贝后数组 \n");
  for (loop = 0; loop < 4; loop++)
  {
    printf("%5d%12d\n", original[loop], copied[loop]);
  }

  // 址传递
  int *copiedAddr = original;
  copiedAddr[0] = 11;
  printf("元素数组 -> 址拷贝后数组 \n");
  for (loop = 0; loop < 4; loop++)
  {
    printf("%5d%12d\n", original[loop], copiedAddr[loop]);
  }

  return 0;
}