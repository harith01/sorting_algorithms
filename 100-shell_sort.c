#include "sort.h"

/**
 * shell_sort - Implements shell sort algorithm
 * @array: The array to be sorted
 * @size: The size of the array
 * Return: Nothing
 */

void shell_sort(int *array, size_t size)
{
	size_t gap, j;
	int i;

	if (array == NULL || size < 2)
		return;

	gap = 1;
	while (gap <= size / 3)
	{
		gap = gap * 3 + 1;
	}

	for (; gap >= 1; gap = gap / 3)
	{
		for (j = gap; j < size; j++)
		{
			for (i = j - gap; i >= 0; i = i - gap)
			{
				if (array[i + gap] > array[i])
					break;
				swap(&array[i + gap], &array[i]);
			}
		}
		print_array(array, size);
	}
}


/**
 * swap - Swap two integers
 * @a: The first integer
 * @b: The second integer
 * Return: Nothing
 */
void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
