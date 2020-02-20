#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int c;
	int result;

	scanf("%d %d %d", &a, &b, &c);
	if ( a == b || (a > b && a <= c)
			|| (a < b && a >= c))
		result = a;
	else if (a > b && a > c)
		result = (b >= c) ? b : c;
	else if (a < b && a < c)
		result = (b >= c) ? c : b; 
	printf("%d\n", result);
	return (0);
}
