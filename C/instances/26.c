#include <stdio.h>

long int multiplyNumbers(int n)
{
  if (n <= 0) return 1;
  return multiplyNumbers(n - 1) * n;
}

int main()
{
  int n, i;
  unsigned long long factorial = 1;
  printf("请输入一个正整数: ");
  scanf("%d", &n);
  if (n < 0)
  {
    printf("Error！负数没有阶乘");
    return 0;
  }
  
  // for (i = 1; i <= n; i++)
  // {
  //   factorial *= i;
  // }
  factorial = multiplyNumbers(n);
  printf("%d! = %llu\n", n, factorial);

  return 0;
}