#include <stdio.h>

int main()
{
  int n, i;
  float num[100], sum = 0, average;

  printf("请输入元素的个数：");
  scanf("%d", &n);

  while (n > 100 || n <= 0)
  {
    printf("Error， 数字需要在 [1, 100] 的区间\n");
    printf("再次输入: ");
    scanf("%d", &n);
  }

  for (i = 0; i < n; i++)
  {
    printf("%d. 输入数字：", i + 1);
    scanf("%f", &num[i]);
    sum += num[i];
  }

  average = sum / n;
  printf("average = %.2f\n", average);

  return 0;
}