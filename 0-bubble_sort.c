#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: the array to be sorted
 * @size: the size of the array
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int temp, swapped;

	i = 0;

	while (array && i < size)
	{
		swapped = 0;

		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
				swapped = 1;
			}
		}
		if (swapped == 0)
			return;
	}
}

