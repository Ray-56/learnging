#include <stdio.h>
#include <string.h>

int main()
{
  char s[1000];
  int len;

  printf("输入字符串: ");
  scanf("%s", s);
  len = strlen(s);
  // for (len = 0; s[len] != '\0'; len++);

  printf("字符串长度: %d\n", len);

  return 0;
}