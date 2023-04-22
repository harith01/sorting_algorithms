#include "sort.h"
#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>

/**
 * bubble_sort - Implements the bubble sort algorithm
 * @array: The array to sort
 * @size: The sixe of the array
 * Return: Nothing
 */
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
