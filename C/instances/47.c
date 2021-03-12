#include <stdio.h>

int main()
{
  int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
  int even[10], odd[10];
  int loop, e, d;

  for (loop = 0; loop < 10; loop++) {
    if (arr[loop] % 2 == 0)
    {
      even[e++] = arr[loop];
    } else 
    {
      odd[d++] = arr[loop];
    }
  }

  printf(" 原始数组: ");
  for (loop = 0; loop < 10; loop++)
  {
    printf(" %d", arr[loop]);
  }

  printf("\n 偶数: ");
  for (loop = 0; loop < e; loop++)
  {
    printf(" %d", even[loop]);
  }

  printf("\n 奇数: ");
  for (loop = 0; loop < d; loop++)
  {
    printf(" %d", odd[loop]);
  }

  printf("\n");

  return 0;
}