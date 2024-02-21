#include "sort.h"
#include <stdio.h>

/**
 * selection_sort - a function that sorts an array of
 * integers in ascending order.
 *
 * @array: the array.
 * @size: the size of the array.
 *
 * Return: void.
 */

void selection_sort(int *array, size_t size)
{
	size_t y, step, min_idx;
	int tmp;

	for (step = 0; step < size - 1; step++)
	{
		min_idx = step;
		for (y = step + 1; y < size; y++)
		{
			if (array[y] < array[min_idx])
				min_idx = y;
		}

		if (min_idx != step)
		{
			tmp = array[step];
			array[step] = array[min_idx];
			array[min_idx] = tmp;
			print_array(array, size);
		}
	}
}
