#include <stdio.h>

int main(void)
{
	int h;
	int m;

	scanf("%d %d", &h, &m);
	if (m > 44)
		m -= 45;
	else
	{
		m += 15;
		if (h != 0)
			h -= 1;
		else
			h = 23;
	}
	printf("%d %d\n", h, m);
	return (0);
}
