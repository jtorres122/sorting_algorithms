#include "sort.h"

/**
 * selection_sort - function will selection sort an array
 * @array: array to be sorted
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	int temp;
	size_t idx1, idx2, min;

	if (size < 2)
		return;

	for (idx1 = 0 ; idx1 < size - 1 ; idx1++)
	{
		min = idx1;
		for (idx2 = idx1 + 1 ; idx2 < size ; idx2++)
		{
			if (array[min] > array[idx2])
				min = idx2;
		}
		if (min != idx1)
		{
			temp = array[idx1];
			array[idx1] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}
}
