/* https://www.acmicpc.net/problem/4344 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    int c;
    int n;
    double avg;
    int *grades;

    scanf("%d", &c);
    while (c > 0)
    {
        scanf("%d", &n);
        grades = (int *)malloc(sizeof(int) * n + 2);
        grades[0] = n;
        grades[n + 1] = -1;
        for (i = 1; i < n + 1; i++)
            grades[i] = 0;
        i = 1;
        n = 0;
        while (grades[i] != -1)
        {
            scanf("%d", &grades[i]);
            n += grades[i++];
        }
        avg = (double)n / grades[0];
        i = 1;
        n = 0;
        while (grades[i] != -1)
            if ((double)(grades[i++]) > avg)
                n += 1;
        printf("%.3f%%\n", ((double)n / grades[0]) * 100);
        c--;
    }
    return (0);
}