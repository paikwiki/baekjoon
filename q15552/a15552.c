#include <stdio.h>

int main(void)
{
	int i;
	int a;
	int b;

	scanf("%d", &i);
	for (; i > 0; i--)
	{
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}
	return (0);
}
