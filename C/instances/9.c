#include <stdio.h>

int main()
{
  int dividend, divisor, quotient, remainder;

  printf("请输入被除数：");
  scanf("%d", &dividend);

  printf("请输入除数：");
  scanf("%d", &divisor);

  quotient = dividend / divisor;

  remainder = dividend % divisor;

  printf("商 = %d\n", quotient);
  printf("余数 = %d\n", remainder);
  
  return 0;
}