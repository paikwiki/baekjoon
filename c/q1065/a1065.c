/* https://www.acmicpc.net/problem/1065 */

#include <stdio.h>

int chk(int nb)
{
    int i;
    int buf[1000];

    if (nb > 0 && nb < 100)
        return (1);
    i = 0;
    while (nb > 0)
    {
        buf[i++] = (nb % 10);
        nb /= 10;
    }
    buf[i] = 42;
    i = 0;
    while (buf[i + 2] != 42)
    {
        if ((buf[i] - buf[i + 1]) == (buf[i + 1] - buf[i + 2]))
            i++;
        else {
            return (0);
        }
    }
    return (1);
}

int main(void)
{
    int i;
    int n;
    int cnt;

    scanf("%d", &n);
    cnt = 0;
    for (i = 1; i <= n; i++)
    {
        if (chk(i))
            cnt++;
    }
    printf("%d\n", cnt);
    return (0);
}
