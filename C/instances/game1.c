#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int getNum()
{
  int n;
  srand((unsigned int)time(0));
  n = rand() % (100 - 1 + 1) + 1;
  sleep(1);

  return n;
}

int includes(int *arr, int target)
{
  int had = 0, i;
  for (i = 0; i < 6; i++)
  {
    if (arr[i] == target)
    {
      had = 1;
      break;
    }
  }
  return had;
}

int main()
{
  int arr[6], sum1 = 0, sum2 = 0, i;
  char c;
  printf("同学 1 抽取随机数(回车): ");
  while (getchar() != '\n')
  {
  };

  while (i < 3)
  {
    int n = getNum();
    if (includes(arr, n) != 1)
    {
      arr[i] = n;
      printf("arr[%d] = %d\n", i, arr[i]);
      i++;
    }
  }

  printf("同学 2 抽取随机数(回车): ");
  while (getchar() != '\n')
  {
  };

  while (i < 6)
  {
    int n = getNum();
    if (includes(arr, n) != 1)
    {
      arr[i] = n;
      printf("arr[%d] = %d\n", i, arr[i]);
      i++;
    }
  }

  for (i = 0; i < 6; i++)
  {
    if (i < 3)
    {
      sum1 += arr[i];
    }
    else
    {
      sum2 += arr[i];
    }
  }

  printf("同学 1 sum = %d, 同学 2 sum = %d\n", sum1, sum2);
  c = sum1 > sum2 ? '>' : '<';
  printf("结论: 同学 1 %c 同学 2 \n", c);

  return 0;
}