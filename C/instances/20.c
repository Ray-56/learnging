#include <stdio.h>

int main()
{
  char c;
  printf("输入一个字符: ");
  scanf("%c", &c);
  if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
    printf("%c 是字母", c);
  else
    printf("%c 不是字母", c);
  printf("\n");
  return 0;
}