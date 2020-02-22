/* https://www.acmicpc.net/problem/3052 */

#include <stdio.h>

int main(void)
{
    int arr[10];
    int a;
    int i;
    int j;

    for (i = 0; i < 10; i++)
        arr[i] = -1;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a);
        j = 0;
        while (j < 10 && arr[j] != -1 && arr[j] != (a % 42))
            j++;
        if (j < 10)
            arr[j] = a % 42;
    }
    i = 0;
    while (i < 10 && arr[i] != -1)
        i++;
    printf("%d\n", i);
    return (0);
}