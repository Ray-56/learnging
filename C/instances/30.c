#include <stdio.h>

int main()
{
  int n, reversedInteger = 0, remainder, originalInterger;

  printf("输入一个整数: ");
  scanf("%d", &n);
  originalInterger = n;

  while (n != 0)
  {
    remainder = n % 10;
    reversedInteger = reversedInteger * 10 + remainder;
    n /= 10;
  }
  if (originalInterger == reversedInteger) {
    printf("%d 是回文数.\n", originalInterger);
  } else {
    printf("%d 不是回文数.\n", originalInterger);
  }

  return 0;
}