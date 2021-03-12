#include <stdio.h>

int main()
{
  int data[5], i;
  printf("输入元素：");

  for (i = 0; i < 5; i++)
  {
    scanf("%d", data + i);
  }

  printf("你输入的是： \n");
  for (i = 0; i < 5; i++)
  {
    printf("%d ", *(data + i));
  }
  printf("\n");

  return 0;
}