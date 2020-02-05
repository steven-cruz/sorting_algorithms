#include "sort.h"
/**
 * swap - change the values of an array
 * @a: pointer
 * @b: pointer
 * Return: array exchanged values
 */
void swap(int *a, int *b)
{
	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * partition - create a partition in an array for quick sort
 * @array: pointer to array to be partitioned
 * @start: start of array to be partitioned
 * @end: end of the array to be partioned, used as pivot
 * @size: size of array to be partitioned
 * Return: return partitioned array
 */
size_t partition(int *array, size_t start, size_t end, size_t size)
{
	size_t count;

	for (count = start; count < end; count++)
	{
		if (array[count] < array[end])
		{
			if (count != start)
			{
				swap(&array[start], &array[count]);
				print_array(array, size);
			}
			start++;
		}
	}
	if (array[start] > array[end])
	{
		swap(&array[start], &array[end]);
		end = start;
		print_array(array, size);
	}
	return (end);
}

/**
 * sort - order the values of an array
 * @array: contains all values
 * @start: first array value
 * @end: last array value
 * @size: array size
 * Return: array in an orderly manner
 */
void sort(int *array, size_t start, size_t end, size_t size)
{
	size_t pIndex;

	if (end == 0 || end <= start)
		return;
	pIndex = partition(array, start, end, size);
	if (pIndex != 0 && pIndex > start)
		sort(array, start, pIndex - 1, size);
	if (pIndex < size - 1)
		sort(array, pIndex + 1, end, size);
}
/**
 * quick_sort - order array values quickly
 * @array: contains all the values to order
 * @size: contains array size
 * Return: returns the array with all the ordered values
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size == 0 || size == 1)
		return;
	sort(array, 0, size - 1, size);
}
