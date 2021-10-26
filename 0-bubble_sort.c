#include "sort.h"

/**
 * bubble_sort - function
 * @array: parameter
 * @size: parameter
 * Return: 0
 */
void bubble_sort(int *array, size_t size)
{
	size_t idx;
	int temp;
	int swapped;

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
