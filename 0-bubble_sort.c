#include "sort.h"

/**
 * bubble_sort - sorts using bubble sort algorithm
 * @array: an array to be sorted
 * @size: the length of the array
 * Return - 0 on success
 */

void bubble_sort(int *array, size_t size)
{
	size_t outer_index, temp, inner_index;

	for (outer_index = 0; outer_index < size - 1; outer_index++)
	{
		for (inner_index = 0; size - outer_index - 1; inner_index++)
		{
			if (array[inner_index] > array[inner_index + 1])
			{
				temp = array[inner_index];
				array[inner_index] = array[inner_index + 1];
				array[inner_index + 1] = temp;
			}
		}
	}
}