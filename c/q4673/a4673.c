/* https://www.acmicpc.net/problem/4673 */

#include <stdio.h>

int d(int i)
{
    int result = i;
    while (i > 0)
    {
        result += (i % 10);
        i /= 10;
    }
    return (result);
}

int main(void)
{
    int sn[10001];
    int i;
    int head;
    int tail;
    int temp;

    sn[10000] = -1;
    for (i = 0; i < 10000; i++)
        sn[i] = 0;
    for (i = 0; i < 10000; i++)
        sn[i] = d(i);
    head = 0;
    tail = 9999;
    while (head < tail)
    {
        while (head < tail)
        {
            if (sn[head] > sn[head + 1])
            {
                temp = sn[head];
                sn[head] = sn[head + 1];
                sn[head + 1] = temp;
            }
            head++;
        }
        head = 0;
        tail--;
    }
    for (i = 0; i < 10000; i++)
    {
        if (sn[i] <= sn[i + 1] && tail != sn[i] && sn[i] < 100)
            tail = sn[i];
    }
    for (i = 0; i < 10001; i++)
    {
        head = 0;
        tail = 1;
        while (sn[head] != -1)
        {
            if (sn[head] == i)
            {
                tail = 0;
                break;
            }
            head++;
        }
        if (tail == 1)
            printf("%d\n", i);
    }
    return (0);
}