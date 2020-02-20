#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;
	int i;
	int max;
	int min;
	int *arr;

	max = -1000000;
	min = 1000000;

	scanf("%d", &n);
	arr = (int *)malloc(sizeof(int) * n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] > max)
			max = arr[i];
		if (arr[i] < min)
			min = arr[i];
	}
	printf("%d %d\n", min, max);
	return (0);
}
