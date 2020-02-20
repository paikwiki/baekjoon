#include <stdio.h>

int main(void)
{
	int i;
	int end;
	int a;
	int b;

	scanf("%d", &end);
	for (i = 1; i <= end; i++)
	{
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d + %d = %d\n", i, a, b, a + b);
	}
	return (0);
}
