#include <stdio.h>

int main()
{
  int arr[4] = { 1, 2, 3, 4 };
  int sum, i;
  printf("init sum = %d\n", sum);
  for (i = 0; i < 4; i++)
  {
    sum += arr[i];
  }
  printf("sum = %d\n", sum);
  return 0;
}