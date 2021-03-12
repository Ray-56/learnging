#include <stdio.h>

#define MAX_STRING_LEN 65535 // 最大字符串长度

int main()
{
  char s[MAX_STRING_LEN];
  printf("请输入长度小于 %d 的任意字符串", MAX_STRING_LEN);
  scanf("%s", s);
  for (int i = 0; s[i]; i++) {
    printf("%c 的 ASCII = %d\t", s[i], s[i]);
  }
  return 0;
}