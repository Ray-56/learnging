#include <stdio.h>

// 使用 for
void method1(int n, int *sum)
{
  int i;
  for (i = 1; i <= n; i++)
  {
    *sum += i;
  }
}

// 使用 while
void method2(int n, int *sum)
{
  int i = 1;
  while (i <= n)
  {
    *sum += i;
    i++;
  }
}

// 使用 递归
int method3(int n)
{
  if (n <= 0) return n;
  return method3(n - 1) + n;
}

int main()
{
  int n, sum = 0;
  printf("请输入一个正整数: ");
  scanf("%d", &n);

  // method1(n, &sum);
  // method2(n, &sum);
  sum = method3(n);
  printf("sum = %d\n", sum);

  return 0;
}