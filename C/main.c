#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// 多个文件执行 gcc -o main main.o t.o

void bubble_sort(int arr[], int len)
{
  int i, j, temp;
  for (i = 0; i < len - 1; i++)
  {
    for (j = 0; j < len - 1 - i; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        temp = arr[j + 1];
        arr[j + 1] = arr[j];
        arr[j] = temp;
      }
    }
  }
}

void selection_sort(int a[], int len)
{
  int i, j, temp;
  for (i = 0; i < len; i++)
  {
    int min = i;
    for (j = i + 1; j < len; j++)
    {
      if (a[j] < a[min])
      {
        min = j;
      }
    }
    if (min != i)
    {
      temp = a[i];
      a[i] = a[min];
      a[min] = temp;
    }
  }
}

void insertion_sort(int arr[], int len)
{
  int i, j, temp;
  for (i = 1; i < len; i++)
  {
    temp = arr[i];
    for (j = i; j > 0 && arr[j - 1] > temp; j--)
    {
      arr[j] = arr[j - 1];
    }
    arr[j] = temp;
  }
}

const char *byte_to_binary(int x)
{
  static char b[9];
  b[0] = '\0';

  int z;
  for (z = 128; z > 0; z >>= 1)
  {
    strcat(b, ((x & z) == z) ? "1" : "0");
  }

  return b;
}

void shell_sort(int arr[], int len)
{
  int gap, i, j, temp;
  printf("%d\n", len >> 1);
  printf("%s \n", byte_to_binary(len));
  printf("%s \n", byte_to_binary(len >> 1));
  for (gap = len >> 1; gap > 0; gap = gap >> 1) {
    printf("gap = %d \n", gap);
    for (i = gap; i < len; i++) {
      temp = arr[i];
      for (j = i - gap; j >= gap && arr[j] > temp; j -= gap) {
        arr[j + gap] = arr[j];
      }
      arr[j + gap] = temp;
    }
  }
}

int main()
{
  int arr[] = {22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70};
  int len = (int)sizeof(arr) / sizeof(*arr);
  // bubble_sort(arr, len);
  // selection_sort(arr, len);
  // insertion_sort(arr, len);
  shell_sort(arr, len);

  // int i;
  // for (i = 0; i < len; i++)
  // {
  //   printf("%d ", arr[i]);
  // }
  // printf("\n");
  return 0;
}