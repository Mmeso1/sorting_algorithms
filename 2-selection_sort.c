#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * @array: an array of items
 * @size: the size of the array
 * Return: nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_index;
	int temp;
	i = 0;

	if (array == NULL || size < 2)
		return;

	while (i < size - 1)
	{
		min_index = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_index])
			
				min_index = j;
		}
		if (min_index != i)
		{
			temp = array[i];
			array[i] = array[min_index];
			array[min_index] = temp;

			print_array(array, size);
		}
		i++;
	}
}
