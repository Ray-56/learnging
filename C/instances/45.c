#include <stdio.h>

int main()
{
  int arr[4] = { 1, 2, 3, 4 };
  int max = arr[0], i;
  for (i = 1; i < 4; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
  }
  printf("max = %d\n", max);
  return 0;
}