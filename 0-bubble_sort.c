#include "sort.h"


/**
 * bubble_sort - A function for bubble sorting
 * @array: array to sort
 * @size: length of the array
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 0;
	int a = 0;

	if (array == NULL || size == 0)
		return;
	for(; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				a = array[j + 1];
				array[j + 1] = array[j];
				array[j] = a;
				print_array(array, size);
			}
		}
	}
}
