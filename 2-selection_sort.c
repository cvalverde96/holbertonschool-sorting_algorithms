#include "sort.h"

/**
 * selection_sort - function de selection sort
 * @array: pointer a array
 * @size: tamaño de array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j;

	for (i = 0; i < size; i++)
	{
		int min_pos = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_pos])
			{
				min_pos = j;
			}
		}
		if (min_pos != i)
		{
			int temp = array[i];

			array[i] = array[min_pos];
			array[min_pos] = temp;
			print_array(array, size);
		}
	}
}
