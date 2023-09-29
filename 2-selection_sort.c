#include "sort.h"

/**
 * swap - interchanges values in an array
 * @num1: parameter one
 * @num2: paramenter two
 * Return - void
 */

void swap(int *num1, int *num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

/**
 * selection_sort - sorts an array
 * @array: array to be sorted
 * @size: the length of the array
 * Return - Nothing (void)
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min_value;
	if (size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_value = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_value])
			{
				min_value = j;
			}
		}
		if (min_value != i)
		{
			swap(&array[i], &array[min_value]);
			print_array(array, size);
		}
	}
}
