#include <stdio.h>

int main()
{
  long long n;
  long long source;
  int count = 0;
  printf("请输入一个整数: ");
  scanf("%lld", &n);
  source = n;
  while (n != 0)
  {
    n /= 10;
    count++;
  }
  printf("数字 %lld 是 %d 位数\n", source, count);
  
  return 0;
}