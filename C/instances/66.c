#include <stdio.h>
#include <stdlib.h>

int main()
{
  char c[1000];
  FILE *fptr;

  if ((fptr = fopen("runoob.txt", "r")) == NULL)
  {
    printf("Error! opening file");
    exit(1);
  }

  fscanf(fptr, "%[^\n]", c);

  printf("读取内容: \n%s", c);
  fclose(fptr);

  return 0;
}