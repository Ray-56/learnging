#include <stdio.h>

void hello_world(void)
{
  printf("Hello, World!\n");
}

void three_hellos(void)
{
  int i;
  for (i = 0; i < 3; i++)
  {
    hello_world();
  }
}

int main()
{
  three_hellos();

  return 0;
}