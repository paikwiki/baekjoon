/* https://www.acmicpc.net/problem/2986 */

#include <stdio.h>

int main(void)
{
	int i;
	int j;
	int n;

	scanf("%d", &n);
	j = 1;
	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			j = n / i;
			break;
		}
	}
	printf("%d\n", n - j);
	return (0);
}
