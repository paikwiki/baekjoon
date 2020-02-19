#include <stdio.h>

int main(void)
{
	int n;
	int prev;
	int curr;
	int i;

	scanf("%d", &n);
	curr = n;
	i = 0;
	if (n < 10)
	{
		prev = curr;
		curr = (prev * 10) + n;
		i++;
	}
	else
	{
		prev = curr % 10;
		curr = (prev * 10) + ((((curr - (curr % 10)) / 10)
					+ (curr % 10)) % 10);
		i++;
	}
	while (n != curr)
	{
		prev = curr % 10;
		curr = (prev * 10) + ((((curr - (curr % 10)) / 10)
					+ (curr % 10)) % 10);
		i++;
	}
	printf("%d\n", i);
	return (0);
}
