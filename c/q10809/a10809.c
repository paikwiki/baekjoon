/* https://www.acmicpc.net/problem/10809 */

#include <stdio.h>

int main(void)
{
    int     i;
    int     j;
    int     alp[26];
    char    str[100];

    for (i = 0; i < 26; i++)
        alp[i] = -1;
    scanf("%s", str);
    for (i = 97; i < 123; i++)
    {
        j = 0;
        while (str[j] != 0)
        {
            if (i == str[j])
                if (alp[i - 97] == -1)
                    alp[i - 97] = j;
            j++;
        }
    }
    for (i = 0; i < 26; i++)
        if (i == 25)
            printf("%d\n", alp[i]);
        else
            printf("%d ", alp[i]);
    return (0);
}