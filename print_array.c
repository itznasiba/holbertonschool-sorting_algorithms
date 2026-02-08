#include <stdio.h>
#include <stdlib.h>

print_array(array, n)
{
	int i = 0;

	while (i < n - 1)
	{
		printf("%d, ", array[i]);
	}
	printf(array[n - 1]);
}
