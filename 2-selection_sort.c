#include "sort.h"

/**
 * selection_sort - Implements selection sort algorithm on an array
 * @array: The array to be sorted
 * @size: The size of the array
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;

	for (i = 0; i < size; i++)
	{
		min_idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
				min_idx = j;
		}
		if (i != min_idx)
		{
			swap(&array[i], &array[min_idx]);
			print_array(array, size);
		}
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
