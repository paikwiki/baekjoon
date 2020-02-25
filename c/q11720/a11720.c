/* https://www.acmicpc.net/problem/11720 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int     i;
    int     n;
    int     ans;
    char    *inp;

    scanf("%d", &n);
    inp = (char *)malloc(sizeof(char) * (n + 1));
    for (i = 0; i < (n + 1); i++)
        inp[i] = 0;
    scanf("%s", inp);
    i = 0;
    ans = 0;
    while (inp[i] != 0)
        ans += (int)(inp[i++] - '0');
    printf("%d\n", ans);
    return (0);
}