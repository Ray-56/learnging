#include <stdio.h>

int main()
{
  double n1, n2, n3;
  printf("请输入三个数：");
  scanf("%lf %lf %lf", &n1, &n2, &n3);
  if (n1 >= n2 && n1 >= n3) {
    printf("%.2f 是最大值\n", n1);
  }
  if (n2 >= n1 && n2 >= n3) {
    printf("%.2f 是最大值\n", n2);
  }
  if (n3 >= n1 && n3 >= n2) {
    printf("%.2f 是最大值\n", n3);
  }
  return 0;
}