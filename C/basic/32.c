#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *deleteCharacters(char *str, char *charSet)
{
  int hash[256], i, curIdx = 0;
  if (NULL == charSet) return str;

  for (i = 0; i < 256; i++)
  {
    hash[i] = 0;
  }
  for (i = 0; i < strlen(charSet); i++)
  {
    hash[charSet[i]] = 1;
  }
  for (i = 0; i < strlen(str); i++)
  {
    if (!hash[str[i]])
    {
      str[curIdx++] = str[i];
    }
  }
  str[curIdx] = '\0';

  return str;
}

int main()
{
  char s[2] = "ab";
  char s2[10] = "absscattb";
  printf("%s\n", deleteCharacters(s2, s));
  return 0;
}