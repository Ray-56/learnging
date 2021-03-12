#include <stdio.h>
#include <math.h>

int main()
{
  // int base, exponent;
  // long long result = 1;

  // printf("基数: ");
  // scanf("%d", &base);

  // printf("指数: ");
  // scanf("%d", &exponent);

  // while (exponent != 0)
  // {
  //   result *= base;
  //   exponent--;
  // }
  // printf("结果: %lld\n", result);

  double base, exponent, result;
  printf("基数: ");
  scanf("%lf", &base);

  printf("指数: ");
  scanf("%lf", &exponent);

  result = pow(base, exponent);
  printf("%.1lf^%.1lf = %.2lf\n", base, exponent, result);
  
  return 0;
}