#include <stdio.h>

int main()
{
  int arr[4] = { 1, 2, 3, 4 };
  int i, min = arr[0];

  for (i = 1; i < 4; i++)
  {
    if (arr[i] < min)
    {
      min = arr[i];
    }
  }

  printf("min = %d\n", min);

  return 0;
}