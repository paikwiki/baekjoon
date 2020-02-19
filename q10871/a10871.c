#include <stdio.h>

int main(void)
{
	int n;
	int x;
	int input;
	int i;

	scanf("%d %d", &n, &x);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &input);
		if (input < x)
			printf("%d ", input);
	}
	return (0);
}
