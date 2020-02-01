#include "sort.h"

/**
 * bubble_sort - classify an aaray of integers in ascending order.
 * @aray:
 * @size: the
 * Return: sorted array
 */
void bubble_sort(int *array, size_t size)
{
	size_t check = size;
	size_t i, temp = 0;

	if (array == NULL || size == 0)
		return;

	while (check > 0)
	{
		for (i = 0; i < size -1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = temp;
				print_array(array, size);
			}
		}
		check--;
	}
}
