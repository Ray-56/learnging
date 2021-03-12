#include <stdio.h>

int main()
{
  int rowCount, colCount, a[100][100], b[100][100], sum[100][100], i, j;

  printf("输入行数(1 ~ 100): ");
  scanf("%d", &rowCount);
  printf("输入列数(1 ~ 100): ");
  scanf("%d", &colCount);

  printf("\n输入第一维数组的元素：\n");
  for (i = 0; i < rowCount; i++)
  {
    for (j = 0; j < colCount; j++)
    {
      printf("a[%d][%d]: ", i, j);
      scanf("%d", &a[i][j]);
    }
  }

  printf("\n输入第二维数组的元素：\n");
  for (i = 0; i < rowCount; i++)
  {
    for (j = 0; j < colCount; j++)
    {
      printf("b[%d][%d]: ", i, j);
      scanf("%d", &b[i][j]);
    }
  }

  for (i = 0; i < rowCount; i++)
  {
    for (j = 0; j < colCount; j++)
    {
      sum[i][j] = a[i][j] + b[i][j];
    }
  }

  printf("\n相加后的结果：\n");
  for (i = 0; i < rowCount; i++)
  {
    for (j = 0; j < colCount; j++)
    {
      printf("%5d", sum[i][j]);
    }
    printf("\n");
  }

  return 0;
}