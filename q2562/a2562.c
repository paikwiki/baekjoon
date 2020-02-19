#include <stdio.h>

int main(void)
{
  int i;
  int arr[9];
  int max;
  int i_max;

  max = 0;
  for (i = 0; i < 9; i++)
  {
    scanf("%d", &arr[i]);
    if (arr[i] > max)
    {
      max = arr[i];
      i_max = i;
    }
  }
  printf("%d\n%d\n", max, i_max + 1);
  return (0);
}