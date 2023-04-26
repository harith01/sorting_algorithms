#include "sort.h"
#include <stdlib.h>

/**
 * counting_sort - Implements counting sort algorithm
 * @array: Array to be sorted
 * @size: Size of the array
 * Return: Nothing
 */
void counting_sort(int *array, size_t size)
{
	int *count, *count_dup;
	size_t i, k;

	k = array[0];
	for (i = 1; i < size; i++)
	{
		if (array[i] > (int) k)
			k = array[i];
	}

	count = malloc(sizeof(int) * (k + 1));
	if (count == NULL)
		free(count);
	
	for (i = 0; i < k + 1; i++)
		count[i] = 0;

	for (i = 0; i < size; i++)
		count[array[i]]++;
	for (i = 1; i < k + 1; i++)
		count[i] = count[i - 1] + count[i];
	print_array(count, k + 1);
	
	count_dup = malloc(sizeof(int) * (k + 1));
	if (count_dup == NULL)
		free(count_dup);
	
	for (i = size - 1; (int) i >= 0; i--)
		count_dup[--count[array[i]]] = array[i];
	
	for (i = 0; i < size; i++)
		array[i] = count_dup[i];

}
