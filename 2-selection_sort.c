#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * @array: pointer to the array to be sorted
 * @size: size of the array
 */

void selection_sort(int *array, size_t size)
{
	int a = 0;
	size_t i = 0, j = 0, pos = 0;

	if (array == NULL || size == 0)
		return;

	for (; i < size - 1; i++)
	{
		pos = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[pos])
				pos = j;
		}
		if (pos != i)
		{
			a = array[i];
			array[i] = array[pos];
			array[pos] = a;
			print_array(array, size);
		}
	}
}
