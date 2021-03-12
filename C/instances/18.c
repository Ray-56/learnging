#include <stdio.h>

int main()
{
  int year;
  printf("请输入年份：");
  scanf("%d", &year);

  // （四年一润，百年不润）|| 四百年再润
  if ((year % 4 == 0 && year % 100 == 0) || year % 400 == 0)
  {
    printf("%d 是闰年\n", year);
  }
  else
  {
    printf("%d 不是闰年\n", year);
  }
  return 0;
}