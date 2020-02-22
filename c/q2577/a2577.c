/* https://www.acmicpc.net/problem/2577 */

#include <stdio.h>

int main(void)
{
    int arr[10];
    int a;
    int b;
    int c;
    int abc;

    for (a = 0; a < 10; a++)
        arr[a] = 0;
    scanf("%d %d %d", &a, &b, &c);
    abc = a * b * c;
    while (abc > 0)
    {
        arr[abc % 10] += 1;
        abc /= 10;
    }
    for (a = 0; a < 10; a++)
        printf("%d\n", arr[a]);
    return (0);
}
