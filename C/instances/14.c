#include <stdio.h>
#include <string.h>

int main()
{
  for (int i = 0; i <= 10; i++) {
    char str[10];
    if (i % 2 == 0) {
      strcpy(str, "偶数");
    } else {
      strcpy(str, "奇数");
    }
    printf("%d 是 %s\n", i, str);
  }
  return 0;
}