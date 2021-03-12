#include <stdio.h>

int main()
{
  int num;
  printf("Please input a number: ");
  scanf("%d", &num);
  if (num % 2 == 0) {
    printf("%d 是偶数。", num);
  } else {
    printf("%d 是奇数。", num);
  }
  printf("\n");
  return 0;
}