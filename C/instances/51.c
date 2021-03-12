#include <stdio.h>

int main()
{
  int arr[10][10], transpose[10][10], rowCount, colCount, i, j;
  printf("请输入矩阵的行与列: ");
  scanf("%d %d", &rowCount, &colCount);

  printf("\n请输入矩阵元素: \n");
  for (i = 0; i < rowCount; i++)
  {
    for (j = 0; j < colCount; j++)
    {
      printf("输入元素 arr[%d][%d]: ", i, j);
      scanf("%d", &arr[i][j]);
    }
  }

  for (i = 0; i < rowCount; i++)
  {
    for (j = 0; j < colCount; j++)
    {
      printf("%d  ", arr[i][j]);
    }
    printf("\n");
  }

  for (i = 0; i < rowCount; i++)
  {
    for (j = 0; j < colCount; j++)
    {
      transpose[j][i] = arr[i][j];
    }
  }

  printf("\n转换后的矩阵: \n");
  for (i = 0; i < colCount; i++)
  {
    for (j = 0; j < rowCount; j++)
    {
      printf("%d  ", transpose[i][j]);
    }
    printf("\n");
  }

  return 0;
}