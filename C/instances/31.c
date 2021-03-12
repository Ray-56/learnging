#include <stdio.h>

int checkPrimeNumber(int n);

int main()
{
  // int n, i, flag = 0;
  // printf("请输入一个正整数: ");
  // scanf("%d", &n);
  // for (i = 2; i <= n / 2; i++) {
  //   if (n % i == 0) {
  //     flag = 1;
  //     break;
  //   }
  // }
  // if (flag == 1) {
  //   printf("%d 不是素数\n", n);
  // } else {
  //   printf("%d 是素数\n", n);
  // }

  int n1, n2, i, flag;
  printf("请输入两个正整数：");
  scanf("%d %d", &n1, &n2);
  printf("%d 和 %d 之间的素数为：", n1, n2);

  for (i = n1 + 1; i < n2; i++)
  {
    flag = checkPrimeNumber(i);
    if (flag == 1)
      printf("%d ", i);
  }
  printf("\n");

  return 0;
}

int checkPrimeNumber(int n)
{
  int j, flag = 1;
  for (j = 2; j <= n / 2; j++)
  {
    if (n % j == 0) {
      flag = 0;
      break;
    }
  }
  return flag;
}