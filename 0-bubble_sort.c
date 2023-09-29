#include "sort.h"

/**
 * swap - swaps two values in an array
 * @first: first param
 * @second: param
 * Return - Nothing
 */
void swap(int *first, int *second)
{
	int tmp = *first;
	*first = *second;
	*second = tmp;
}

/**
 * bubble_sort - sorts using bubble sort algorithm
 * @array: an array to be sorted
 * @size: the length of the array
 * Return - Nothing
 */

void bubble_sort(int *array, size_t size)
{
	size_t outer_index, inner_index;

	for (outer_index = 0; outer_index < size - 1; outer_index++)
	{
		/*check if swapping occurs */
		int swapped = 0;

		for (inner_index = 0; inner_index < size - outer_index - 1; inner_index++)
		{
			if (array[inner_index] > array[inner_index + 1])
			{
				swap(&(array[inner_index]), &(array[inner_index + 1]));
				/* Print the array after each swap */
				print_array(array, size);
				swapped = 1;
			}
		}

		if (swapped == 0)
		{
			break;
		}
	}
}
