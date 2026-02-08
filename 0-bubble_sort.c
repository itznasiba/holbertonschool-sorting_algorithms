#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - sorts an array
 * @array: an array
 * @n: size of array
 *
 * Return: void
 */

void bubble_sort(int *array, size_t n)
{
	size_t i;
	size_t j;
	int temp;

	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, n);
			}
		}
	}
}
