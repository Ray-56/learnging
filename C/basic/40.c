#include <stdio.h>
#define N 10

int main()
{
  int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int i, temp;
  printf("原始数组是: \n");
  for (i = 0; i < N; i++) {
    printf("%4d", a[i]);
  }
  for (i = 0; i < N / 2; i++) {
    temp = a[i];
    a[i] = a[N - 1 - i];
    a[N - 1 - i] = temp;
  }
  printf("\n排序后的数组: \n");
  for (i = 0; i < N; i++) {
    printf("%4d", a[i]);
  }
  printf("\n");

  return 0;
}