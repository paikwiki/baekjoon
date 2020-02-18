#include <stdio.h>

int main(void)
{
	int x;

	scanf("%d", &x);
	if (x > 89)
		printf("A\n");
	else if (x > 79 && x < 90)
		printf("B\n");
	else if (x > 69 && x < 80)
		printf("C\n");
	else if (x > 59 && x < 70)
		printf("D\n");
	else
		printf("F\n");
	return (0);
}
