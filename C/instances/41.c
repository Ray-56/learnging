#include <stdio.h>
void reverseSentence();

int main()
{
  printf("请输入一个字符串：");
  reverseSentence();
  printf("\n");
  return 0;
}

void reverseSentence() 
{
  char c;
  scanf("%c", &c);

  if (c != '\n')
  {
    reverseSentence();
    printf("%c", c);
  }
}