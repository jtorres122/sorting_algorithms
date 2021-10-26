#include "sort.h"

/**
 * bubble_sort - function bubble sorts an array
 * @array: array to be sorted
 * @size: the size of the array of the sorted
 */
void bubble_sort(int *array, size_t size)
{
	size_t idx;
	int temp;
	int swapped;

	if (size < 2)
		return;

	while (1)
	{
		swapped = 0;
		for (idx = 0 ; idx < size - 1 ; idx++)
		{
			if (array[idx] > array[idx + 1])
			{
				temp = array[idx];
				array[idx] = array[idx + 1];
				array[idx + 1] = temp;
				print_array(array, size);
				swapped = 1;
			}
		}

		if (swapped == 0)
			break;
	}
}
