/* https://www.acmicpc.net/problem/1546 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    int n;
    int sbj;
    double m;
    double *grades;

    m = 0;
    scanf("%d", &n);
    grades = (double *)malloc(sizeof(double) * n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &sbj);
        grades[i] = sbj;
        if (sbj > m)
            m = sbj;
    }
    for (i = 0; i < n; i++)
        grades[i] = (grades[i] / m) * 100;
    m = 0;
    for (i = 0; i < n; i++)
        m += (grades[i]);
    printf("%f\n", m / n);
    return (0);
}