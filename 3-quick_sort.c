#include "sort.h"

/**
 * quick_sort - Implements the Quicksort Algorithm on an array
 * @array: The array to be sorted
 * @size: The size of the array
 * Return: Nothing
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	
	qs(array, 0, size - 1, size);
}


/**
 * partition - Partitions an array
 * @array - The array to be partitioned
 * @lo: lowest index of the array
 * @hi: highest index of the array
 * @size: size of the array
 * Return: The index of the pivot
 */

int partition(int *array, int lo, int hi, size_t size)
{
	int pivot = array[hi];
	int p_index = lo - 1;
	int i;

	for (i = lo; i <= hi - 1; i++)
	{
		if (array[i] <= pivot)
		{
			p_index++;
			swap(&array[i], &array[p_index]);
		}
	}
	p_index++;
	swap(&array[hi], &array[p_index]);
	print_array(array, size);
	return (p_index);
}


/**
 * qs - Implements quicksort algorithm
 * @array: The array to be sorted
 * @lo: The lowest index
 * @hi: The highest index
 * @size: The array's size
 * Return: Nothing
 */

void qs(int *array, int lo, int hi, size_t size)
{
	int p_index;

	if (lo > hi)
		return;
	
	p_index = partition(array, lo, hi, size);
	qs(array, lo, p_index - 1, size);
	qs(array, p_index + 1, hi, size);
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
