#include <stdio.h>
#include <math.h>

int checkPrimeNumber(int n);
int checkArmstrongNumber(int n);

int main()
{
  int n, flag;
  printf("请输入正整数: ");
  scanf("%d", &n);
  flag = checkPrimeNumber(n);
  if (flag == 1)
    printf("%d 是素数\n", n);
  else
    printf("%d 不是素数\n", n);

  flag = checkArmstrongNumber(n);
  if (flag == 1)
    printf("%d 是 Armstrong 数\n", n);
  else
    printf("%d 不是 Armstrong 数\n", n);

  return 0;
}

int checkPrimeNumber(int n)
{
  int i, flag = 1;
  for (i = 2; i <= n / 2; i++)
  {
    if (n % i == 0)
    {
      flag = 0;
      break;
    }
  }
  return flag;
}

int checkArmstrongNumber(int number)
{
  int originalNumber, remainder, result = 0, n = 0, flag;
  originalNumber = number;

  while (originalNumber != 0)
  {
    originalNumber /= 10;
    n++;
  }

  originalNumber = number;
  while (originalNumber != 0)
  {
    remainder = originalNumber % 10;
    result += pow(remainder, n);
    originalNumber /= 10;
  }

  if (result == number)
  {
    flag = 1;
  }
  else
  {
    flag = 0;
  }
  return flag;
}