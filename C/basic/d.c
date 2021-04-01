#include <stdio.h>
#include <string.h>

void print_arr(int *arr, int count)
{
  int i;
  // printf("*arr = %d\n", arr);
  for (i = 0; i < count; i++) {
    printf("%d \n", *(arr + i));
  }
}

struct Person {
  char *name;
  int age;
};

int main(int argc, char *argv[])
{
  int count = argc - 1;
  int i = 0;
  char **inputs = argv + 1;

  for (i = 0 ; i < count; i++) {
    printf("input[%d] = %s \n", i, inputs[i]);
    printf("argv[%d] = %s \n", i, argv[i]);
  }

  return 0;
}