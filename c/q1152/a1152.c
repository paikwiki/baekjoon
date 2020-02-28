/* https://www.acmicpc.net/problem/1152 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char str[1000001];
    int i;
    int cnt;

    for (i = 0; i < 1000001; i++)
        str[i] = 0;
    scanf("%[^\n]", str);
    i = 0;
    while (isspace(str[i]))
        i++;
    cnt = 0;
    i++;
    while (str[i] != 0)
    {
        if (!isspace(str[i - 1]) && isspace(str[i]))
            cnt++;
        if (!isspace(str[i]) && str[i + 1] == 0)
            cnt++;
        i++;
    }
    if(!isspace(str[0]) && str[1] == 0)
        cnt++;
    printf("%d\n", cnt);
    return (0);
}