#include <stdio.h>

int main()
{
  char str[1000], ch;
  int i, frequency = 0; // 频率

  printf("输入字符串: ");
  fgets(str, (sizeof str / sizeof str[0]), stdin);

  printf("输入要查找的字符: ");
  scanf("%c", &ch);

  for (i = 0; str[i] != '\0'; i++)
  {
    if (str[i] == ch)
    {
      frequency++;
    }
  }

  printf("字符 %c 在字符串出现的次数为: %d\n", ch, frequency);

  return 0;
}