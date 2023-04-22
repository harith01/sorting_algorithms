#include "sort.h"
#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	bool swapped;

	for (i = 0; i < size - 1; i++)
	{
		swapped = false;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				swapped = true;
				print_array(array, size);
			}
		}
		if (swapped == false)
			break;
	}
}


void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
