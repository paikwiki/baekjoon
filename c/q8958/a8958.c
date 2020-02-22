/* https://www.acmicpc.net/problem/8958 */

#include <stdio.h>

int main(void)
{
    char    result[80];
    int     n;
    int     i;
    int     j;
    int     k;
    int     pt;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 80; j++)
            result[j] = 0;
        scanf("%s", result);
        pt = 0;
        j = 0;
        while (result[j] != 0)
        {
            while (result[j] == 'X')
                j++;
            k = 0;
            while (result[j++] == 'O')
                k++;
            while (k > 0)
                pt += k--;
        }
        printf("%d\n", pt);
    }
    return (0);
}