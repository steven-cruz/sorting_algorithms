#include "sort.h"

/**
 * bubble_sort - classify an aaray of integers in ascending order.
 * @array: array of integers to start.
 * @size: the size of the array to be sorted.
 * Return: sorted array.
 */
void bubble_sort(int *array, size_t size)
{
	int _swap = 1, temp;
	size_t i;

	if (size < 2)
		return;

	while (_swap != 0)
	{
		_swap = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = temp;
				_swap++;
				print_array(array, size);
			}
		}
	}
}
