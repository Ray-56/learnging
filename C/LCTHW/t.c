#include <stdio.h>

int main(int argc, char *argv [])
{
  printf("%c\n", NULL ? 'T' : 'F');
  printf("%c\n", NULL || 'T');
  // printf("%d\n", NULL == 1);

  return 0;
}