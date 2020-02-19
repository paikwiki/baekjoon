#include <stdio.h>

int main(void)
{
	int x;
	int i;

	scanf("%d", &x);
	for (i = 1; i < 10; i++)
	{
		printf("%d * %d = %d\n", x, i, x * i);
	}
	return (0);
}
