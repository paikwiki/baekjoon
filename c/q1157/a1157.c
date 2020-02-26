/* https://www.acmicpc.net/problem/1157 */

#include <stdio.h>

int main(void)
{
    char    str[1000000];
    int     alp[26];
    int     i;
    int     j;
    int     max;

    for (i = 0; i < 1000000; i++)
        str[i] = 0;
    for (i = 0; i < 26; i++)
        alp[i] = 0;
    scanf("%s", str);
    i = 0;
    max = -1;
    while (str[i] != 0)
    {
        for (j = 0; j < 26; j++)
            if (((int)str[i] == (j + 65) || (int)str[i] == (j + 97)))
            {
                alp[j] += 1;
                if(alp[j] > max)
                {
                    max = alp[j];
                    break;
                }
            }
        i++;
    }
    i = 0;
    j = -1;
    while (i < 26)
    {
        if (alp[i] == max)
        {
            if (j == -1)
                j = i;
            else
            {
                printf("%c\n", '?');
                return (0);
            }
        }
        i++;
    }
    printf("%c\n", (char)(j + 65));
    return (0);
}