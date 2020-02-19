#include <stdio.h>

int main(void)
{
	int n;
	int result;

	scanf("%d", &n);
	result = 0;
	for (;n > 0; n--)
		result += n;
	printf("%d\n", result);
	return (0);
}
