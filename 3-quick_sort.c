#include "sort.h"

/**
 * swap - swaps integers
 * @num1: param1
 * @num2: param2
 * Return - void
 */
void swap(int *num1, int *num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

/**
 * partition - split an array into two separate ones
 *				along a pivot
 * @array: unsorted array
 * @low: lower bound
 * @high: upper bound
 * Return: The final partition index
 */

int partition(int *array, int low, int high)
{
	int pivotIndex, pivot, i, j;

	if (array == NULL || low < 0 || high < 0 || low >= high)
	{
		return -1;
	}


	pivotIndex = low + (high - low) / 2;
	pivot = array[pivotIndex];
	i = low - 1;

	swap(&array[pivotIndex], &array[high]);

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap(&array[i], &array[j]);
		}
	}
	swap(&array[i + 1], &array[high]);
	return (i + 1);
}

/**
 * recursive_sort - recursively sorts elements in subarrays
 * @array: param1
 * @low: param2
 * @high: param3
 * @size: array length
 * Return - void
 */

void recursive_sort(int *array, int low, int high, size_t size)
{
	int pi;

	if (low < high)
	{
		pi = partition(array, low, high);
		/*print the array after each swap */
		print_array(array, size);

		recursive_sort(array, low, pi - 1, size);
		recursive_sort(array, pi + 1, high, size);
	}
}

/**
 * quick_sort - sorts an array of elements
 * @array: the array to be sorted
 * @size: length of the array
 * Return - void
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
	{
		return;
	}

	recursive_sort(array, 0, size - 1, size);
}
