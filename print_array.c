#include <stdio.h>
#include <stdlib.h>

void print_array(const int *array, size_t n)
{
	size_t i = 0;

	while (i < n - 1)
	{
		printf("%d, ", array[i]);
	}
	printf(array[n - 1]);
}
