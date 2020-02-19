#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int i;
	int end;

	scanf("%d", &end);
	for (i = 0; i < end; i++)
	{
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}
	return (0);
}
