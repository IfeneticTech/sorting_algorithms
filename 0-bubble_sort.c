#include "sort.h"
#include <stdio.h>

/**
 * bubble_sort - a function that sorts an array of integers in ascending order.
 *
 * @array: the array of integer.
 * @size: the size of the array.
 *
 * Return: void.
 */

void bubble_sort(int *array, size_t size)
{
	size_t y;
	int tmp, sorted;

	if (!array || size == 0)
		return;

	do {
		sorted = 1;
		for (y = 0; y < size - 1; y++)
		{
			if (array[y] > array[y + 1])
			{
				sorted = 0;
				tmp = array[y];
				array[y] = array[y + 1];
				array[y + 1] = tmp;
				print_array(array, size);
			}
		}

	} while (sorted == 0);
}
