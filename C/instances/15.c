#include <stdio.h>

int include(char *arr, int len, char num)
{
  int had = 0, i;
  for (i = 0; i < len; i++)
  {
    if (arr[i] == num)
    {
      had = 1;
      break;
    }
  }

  return had;
}

int main()
{
  char arr1[] = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U'};
  int len = sizeof(arr1) / sizeof(*arr1);
  char target;

  printf("请输入一个字母：");
  scanf("%c", &target);
  int isVowel = include(arr1, len, target);
  if (isVowel == 1) {
    printf("%c 是元音 \n", target);
  } else {
    printf("%c 是辅音 \n", target);
  }
  return 0;
}