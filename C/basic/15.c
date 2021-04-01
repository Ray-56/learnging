#include <stdio.h>

int main()
{
  int score;
  char grade;

  printf("请输入分数: ");
  scanf("%d", &score);
  if (score >= 90)
  {
    grade = 'A';
  }
  else if (score >= 60)
  {
    grade = 'B';
  }
  else
  {
    grade = 'C';
  }
  printf("%c\n", grade);
  

  return 0;
}