#include <stdio.h>

long long converDecimalToBinary(int n);

int main()
{
  int n;
  printf("输入一个十进制数: ");
  scanf("%d", &n);
  printf("十进制数 %d 转换为二进制为 %lld\n", n, converDecimalToBinary(n));

  return 0;
}

long long converDecimalToBinary(int n)
{
  long long binaryNumber = 0;
  int remainder, i = 1, step = 1;

  while (n != 0)
  {
    remainder = n % 2;
    printf("Step %d: %d/2, 余数 = %d, 商 = %d\n", step++, n, remainder, n / 2);
    n /= 2;
    binaryNumber += remainder * i;
    i *= 10;
  }
  return binaryNumber;
}