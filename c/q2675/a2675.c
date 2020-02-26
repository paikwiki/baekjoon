/* https://www.acmicpc.net/problem/2675 */

#include <stdio.h>

int main(void)
{
    int i;
    int j;
    int t;
    int r;
    char str[21];
    char res[161];

    scanf("%d", &t);
    while (t > 0)
    {
        for(i = 0; i < 21; i++)
            str[i] = 0;
        for(i = 0; i < 161; i++)
            res[i] = 0;
        scanf("%d %s", &r, str);
        i = 0;
        j = 0;
        while (str[i] != 0)
        {
            res[j++] = str[i];
            for(; j % r != 0; j++)
                res[j] = str[i];
            i++;
        }
        i = 0;
        while (res[i] != 0)
            printf("%c", res[i++]);
        printf("\n");
        t--;
    }
    return (0);
}