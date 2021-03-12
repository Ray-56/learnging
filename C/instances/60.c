#include <stdio.h>
#include <string.h>

int main()
{
  // char src[40];
  // char dest[100];

  // memset(dest, '\0', sizeof(dest));
  // strcpy(src, "This is runoob.com");
  // strcpy(dest, src);

  // printf("最终的目标字符串: %s\n", dest);

  char s1[100], s2[100], i;
  printf("字符串 s1: ");
  scanf("%s", s1);

  for (i = 0; s1[i] != '\0'; i++)
  {
    s2[i] = s1[i];
  }
  s2[i] = '\0';
  printf("字符串 s2: %s\n", s2);

  return 0;
}