#include <stdio.h>

int main()
{
  char i, j;
  printf("请输入第一个字母: ");
  scanf("%c", &i);
  getchar();

  switch (i)
  {
  case 'm':
    printf("monday\n");
    break;
  case 'w':
    printf("wednesday\n");
    break;
  case 'f':
    printf("friday\n");
    break;
  case 't':
    printf("请输入下一个字母: ");
    scanf("%c", &j);
    if (j == 'u') printf("tuesday\n");
    if (j == 'h') printf("thursday\n");
    break;
  case 's':
    printf("请输入下一个字母\n");
    scanf("%c", &j);
    if (j == 'a') printf("saturday\n");
    if (j == 'u') printf("sunday\n");
    break;
  default:
    printf("Error \n");
    break;
  }

  return 0;
}