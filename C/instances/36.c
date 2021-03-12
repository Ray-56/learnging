#include <stdio.h>

int main()
{
  char operator;
  double num1, num2;

  printf("输入操作符（+，-，*，/）: ");
  scanf("%c", &operator);

  printf("输入两个数字: ");
  scanf("%lf %lf", &num1, &num2);

  switch (operator)
  {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", num1, num2, num1 + num2);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", num1, num2, num1 - num2);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", num1, num2, num1 * num2);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", num1, num2, num1 / num2);
      break;
    default:
      printf("Error! operator is not correct");
  }
  return 0;
}