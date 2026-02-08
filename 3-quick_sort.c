#include "sort.h"

/**
 * swap_ints - swaps two integers in an array
 * @a: first integer
 * @b: second integer
 */
void swap_ints(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

/**
 * lomuto_partition - partitions array using Lomuto scheme
 * @array: array of integers
 * @size: size of array
 * @low: starting index
 * @high: ending index (pivot)
 *
 * Return: pivot index
 */
int lomuto_partition(int *array, size_t size, int low, int high)
{
    int pivot = array[high];
    int i = low - 1;
    int j;

    for (j = low; j < high; j++)
    {
        if (array[j] < pivot)
        {
            i++;
            if (i != j)
            {
                swap_ints(&array[i], &array[j]);
                print_array(array, size);
            }
        }
    }

    if (i + 1 != high && array[i + 1] != array[high])
    {
        swap_ints(&array[i + 1], &array[high]);
        print_array(array, size);
    }

    return (i + 1);
}

/**
 * quick_sort_recursive - recursively applies quick sort
 * @array: array of integers
 * @size: size of array
 * @low: starting index
 * @high: ending index
 */
void quick_sort_recursive(int *array, size_t size, int low, int high)
{
    int p;

    if (low < high)
    {
        p = lomuto_partition(array, size, low, high);
        quick_sort_recursive(array, size, low, p - 1);
        quick_sort_recursive(array, size, p + 1, high);
    }
}

/**
 * quick_sort - sorts an array using Quick sort
 * @array: array of integers
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
    if (!array || size < 2)
        return;

    quick_sort_recursive(array, size, 0, size - 1);
}

