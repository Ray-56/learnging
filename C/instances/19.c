#include <stdio.h>

int main()
{
  double number;
  printf("Please input a number: ");
  scanf("%lf", &number);

  if (number > 0.0)
    printf("你输入的是正数\n");
  else if (number == 0.0)
    printf("你输入的是0️⃣\n");
  else
    printf("你输入的是负数\n");
  return 0;
}